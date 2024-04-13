#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    unsigned long long L, R;
    cin >> L >> R;

    unsigned long long l = L, r;
    int count = 0;

    // Array to hold the ranges
    pair<unsigned long long, unsigned long long> ranges[100]; // Sufficient for this problem's constraints

    while (l < R) {
        unsigned long long maxSize = 1;
        // Align the start to the nearest power of two boundary, maximizing the size of each segment
        while ((l + maxSize * 2 <= R) && ((l % (maxSize * 2)) == 0)) {
            maxSize *= 2;
        }
        r = l + maxSize;
        if(r>R)break ;
        ranges[count++] = make_pair(l, r);
        l = r; // Update l to start of the next potential range
    }

    cout << count << endl;
    for (int i = 0; i < count; ++i) {
        cout << ranges[i].first << " " << ranges[i].second << endl;
    }

    return 0;
}
