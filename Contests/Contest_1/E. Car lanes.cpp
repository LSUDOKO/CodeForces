#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

long long calculate_sum(long long X, long long k, int n, const std::vector<long long>& a_sorted_vals, const std::vector<long long>& prefix_sum) {
    auto it1 = std::lower_bound(a_sorted_vals.begin(), a_sorted_vals.end(), X);
    auto it2 = std::upper_bound(a_sorted_vals.begin(), a_sorted_vals.end(), X + k);

    long long count1 = std::distance(a_sorted_vals.begin(), it1);
    long long count3 = std::distance(it2, a_sorted_vals.end());

    long long sum1 = count1 * X;
    long long sum3 = count3 * (X + k);

    long long sum2 = 0;
    if (it1 != it2) {
        long long start_idx = std::distance(a_sorted_vals.begin(), it1);
        long long end_idx = std::distance(a_sorted_vals.begin(), it2) - 1;
        sum2 = prefix_sum[end_idx + 1] - prefix_sum[start_idx];
    }

    return sum1 + sum2 + sum3;
}

void solve() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<long long> a(n);
    long long total_cars = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        total_cars += a[i];
    }

    if (n == 1) {
        long long anger = a[0] * (a[0] + 1LL) / 2;
        std::cout << anger << "\n";
        return;
    }

    std::vector<long long> a_sorted_vals = a;
    std::sort(a_sorted_vals.begin(), a_sorted_vals.end());

    std::vector<long long> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + a_sorted_vals[i];
    }

    long long low = 0, high = total_cars + k, best_X = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (calculate_sum(mid, k, n, a_sorted_vals, prefix_sum) <= total_cars) {
            best_X = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    long long X = best_X;
    std::vector<long long> b(n);
    long long current_sum = 0;
    for (int i = 0; i < n; ++i) {
        b[i] = std::max(X, std::min(a[i], X + k));
        current_sum += b[i];
    }

    long long delta = total_cars - current_sum;

    std::vector<std::pair<long long, int>> marginal_costs;
    for(int i = 0; i < n; ++i) {
        long long cost = (b[i] < a[i]) ? b[i] + 1 - k : b[i] + 1;
        marginal_costs.emplace_back(cost, i);
    }

    std::sort(marginal_costs.begin(), marginal_costs.end());

    for (int i = 0; i < delta; ++i) {
        int index_to_increment = marginal_costs[i].second;
        b[index_to_increment]++;
    }

    long long total_anger = 0;
    long long total_moves = 0;
    for (int i = 0; i < n; ++i) {
        total_anger += b[i] * (b[i] + 1LL) / 2;
        if (b[i] < a[i]) {
            total_moves += a[i] - b[i];
        }
    }
    total_anger += total_moves * k;

    std::cout << total_anger << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
