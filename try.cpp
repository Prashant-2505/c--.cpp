#include<bits/stdc++.h>
using namespace  std;
int main() {
    vector<int> price = {13, 5, 1, 8, 21, 2};
    int k = 3;
    int ans = max (price, k);
    cout << "Maximum tastiness: " << ans << endl;
    return 0;
}
