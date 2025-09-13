#include <iostream>
#include <vector>
#include <numeric>
#include <map> // Using map for counts, can be vector if a_i range is suitable

void solve() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    
    // Using vector for frequencies since a_i <= n
    std::vector<long long> count_total(n + 1, 0); 
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        count_total[a[i]]++;
    }

    // Pre-check condition: all total counts must be divisible by k
    std::vector<long long> max_allowed(n + 1, 0);
    bool possible_overall = true;
    for (int v = 1; v <= n; ++v) {
        if (count_total[v] == 0) {
            max_allowed[v] = 0; // No occurrences, so 0 allowed in subarray
        } else if (count_total[v] % k != 0) {
            possible_overall = false;
            break;
        } else {
            max_allowed[v] = count_total[v] / k;
        }
    }

    if (!possible_overall) {
        std::cout << 0 << std::endl;
        return;
    }

    long long awesome_subarrays_count = 0;
    int left = 0;
    std::vector<long long> current_window_counts(n + 1, 0); // Frequencies in current window a[left...right]

    for (int right = 0; right < n; ++right) {
        current_window_counts[a[right]]++;

        // If the current element makes the window invalid, shrink from the left
        while (current_window_counts[a[right]] > max_allowed[a[right]]) {
            current_window_counts[a[left]]--;
            left++;
        }

        // All subarrays ending at 'right' and starting from 'left' or to its right
        // are valid. The number of such subarrays is (right - left + 1).
        awesome_subarrays_count += (right - left + 1);
    }

    std::cout << awesome_subarrays_count << std::endl;
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