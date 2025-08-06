#include <iostream>
#include <climits>
#include <iomanip>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <limits>
#include <vector>

using namespace std;


// unsigned long long nCr(int n, int r) {
//     if (r > n)
//         return 0;
//     r = max(r, n - r); //nCr(n,r) = nCr(n,n-r)
//     unsigned long long ans = 1, div = 1, i = r + 1;
//     while (i <= n) {
//         ans *= i;
//         i++;
//         ans /= div;
//         div++;
//     }
//     return ans;
// }
int main(){
    int x, y;
    // long long test;
    // unsigned long long test2;
    // cout << sizeof(test) << endl;
    // cout << sizeof(test2) << endl;
    // int test3;
    // unsigned int test4;
    // cout << sizeof(test3) << endl;
    // cout << sizeof(test4) << endl;
    vector<int> v4(5, 5);
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << endl;
    }
    

    // cin >> x >> y;

    // cout << nCr(x, y) << endl;
}


// B. SpongeBob SquarePants
// int main(){
//     int n;
//     long long w, h;

//     cin >> n;

//     while(n--){
//         cin >> w >> h; 

//         if(w == h){
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
// }