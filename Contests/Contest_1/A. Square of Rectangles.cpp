#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Rect {
    int l, b;
};

bool can_form_square(Rect a, Rect b, Rect c) {
    int total_area = a.l * a.b + b.l * b.b + c.l * c.b;
    int side = sqrt(total_area);
    if (side * side != total_area) return false;

   
    if (a.b == b.b && b.b == c.b && a.b == side && a.l + b.l + c.l == side) return true;

    if (a.l == b.l && b.l == c.l && a.l == side && a.b + b.b + c.b == side) return true;


    vector<Rect> r = {a, b, c};
    for (int i = 0; i < 3; ++i) {
        Rect r1 = r[i];
        Rect r2 = r[(i + 1) % 3];
        Rect r3 = r[(i + 2) % 3];

        if (r1.b == side) {
            
            if (r2.l == r3.l && r1.l + r2.l == side && r2.b + r3.b == side)
                return true;
        }

       
        if (r1.l == side) {
            if (r2.b == r3.b && r1.b + r2.b == side && r2.l + r3.l == side)
                return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Rect a, b, c;
        cin >> a.l >> a.b >> b.l >> b.b >> c.l >> c.b;
        if (can_form_square(a, b, c)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
