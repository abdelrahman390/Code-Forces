#include <iostream>
#include <climits>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;


int main(){
    long long n, rem, stepn;
    string result;

    cin >> n;

    // n = 4
    // result = "1378";
    // 1378 * 1378 = 1898884 
    // 1378 * 1378 * 1378 = 2616662152 

    if(n == 0){
        cout << 1;
        return 0;
    }

    rem = n % 4;

    stepn = pow(8, rem);
    // cout << stepn << endl;
    result = to_string(stepn);
    cout << result[result.size() - 1];

}


// incomplete
// int main(){
//     int n, m, q, r1, c1, r2, c2;
//     char c;

//     cin >> n >> m >> q;

//     char arr[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)
//         {
//             arr[i][j] = '.';
//         }
//     }

//     while(q--){
//         cin >> r1 >> c1 >> r2 >> c2 >> c;

//         for (int i = r1 - 1; i <= r2 - 1; i++) {
//             for (int j = c1 - 1; j <= c2 - 1; j++) {
//                 arr[i][j] = c;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
// }

