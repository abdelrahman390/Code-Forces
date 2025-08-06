#include <iostream>
#include <climits>
#include <iomanip>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;


int main(){
    
}

// F - The Best Strategy
// int main(){
//     int n, m, num, k , time , penalty;

//     cin >> n;

//     while(n--){
//         cin >> m;
//         k = time = penalty = 0;
//         int arr[m];

//         for (int i = 0; i < m; i++)
//         {
//             cin >> num;
//             arr[i] = num;
//         }
        
//         sort(arr, arr + m);

//         for (int i = 0; i < m; i++)
//         {
//             // cout << arr[i] << endl;
//             if(arr[i] + time > 300){
//                 break;
//             } else {
//                 time += arr[i];
//                 penalty += time;
//                 k++;
//             }
//         }
//         cout << k << " " << penalty << endl;
//     }
// }


// J. Good Coins
// int main(){
//     int n;
//     long long a, b, l, r, gcd, test;

//     cin >> n;

//     while(n--){
//         cin >> l >> r;
//         gcd = 1;

//         a = max(l, r);
//         b = min(l, r);
//         while(b){
//             test = a;
//             a = b;
//             b = test % b;
//             // cout << a << " - " << b << endl;
//             if(b == 0){
//                 gcd = a;
//             }
//         }

//         if(gcd == 1){
//             cout << "GOOD" << endl;
//         } else {
//             cout << "NOT GOOD" << endl;
//         }
//     }
// }


// Paper Game
// int main(){
//     int n, ind;
//     string str;

//     cin >> n;

//     while(n--){
//         map<char, int> charicters;
//         ind = 0;
//         char mid = '!'; 
//         cin >> str;

//         for (int i = 0; i < str.size(); i++)
//         {
//             charicters[str[i]]++;
//             if(charicters[str[i]] % 2 != 0){
//                 ind++;
//             } else if (charicters[str[i]] % 2 == 0){
//                 ind--;
//             }
//         }

//         if(ind >= 2){
//             cout << "impossible" << endl;
//         } else {
//             str = "";
//             for (auto c : charicters) {

//                 if(c.second % 2 != 0){
//                     mid = c.first;
//                 }

//                 for (int i = 0; i < c.second / 2; i++)
//                 {
//                     str.push_back(c.first);
//                 }
//             }

//             if(mid != '!'){
//                 str.push_back(mid);
//             }

//             int m;

//             if(mid != '!'){
//                 m = str.size() - 2;
//             } else {
//                 m = str.size() - 1;
//             }

//             for (int i = m; i >= 0; i--)
//             {
//                 str.push_back(str[i]);
//             }
//             cout << str << "\n";
            
//         }
//     }
// }

// G - Cutie Pie
// int main(){
//     int tests, n, m;
//     bool p, i, e, found;
//     char c;

//     cin >> tests;

//     while(tests--){
//         p = i = e = found = 0;
//         cin >> n >> m;

//         char arr[n][m];

//         for (int k = 0; k < n; k++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cin >> c;
//                 arr[k][j] = c;
//             }
//         }

//         for (int k = 0; k < n; k++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if(arr[k][j] == 'p'){
//                     if(j + 2 < m && arr[k][j+1] == 'i' && arr[k][j+2] == 'e'){
//                         // Horezontal right
//                         found = 1;
//                         break;
//                     } if(j - 2 >= 0 && arr[k][j-1] == 'i' && arr[k][j-2] == 'e'){
//                         // Horezontal left
//                         found = 1;
//                         break;
//                     } else if(k + 2 < n && arr[k+1][j] == 'i' && arr[k+2][j] == 'e'){
//                         // Virtecal down
//                         found = 1;
//                         break;
//                     } else if(k - 2 >= 0 && arr[k-1][j] == 'i' && arr[k-2][j] == 'e'){
//                         // Virtecal up
//                         found = 1;
//                         break;
//                     } else if(k + 2 < n && j + 2 < m && arr[k+1][j+1] == 'i' && arr[k+2][j+2] == 'e'){
//                         // Diagonal Down-Right
//                         found = 1;
//                         break;
//                     } else if(k + 2 < n && j - 2 >= 0 && arr[k+1][j-1] == 'i' && arr[k+2][j-2] == 'e'){
//                         // Diagonal Down-left
//                         found = 1;
//                         break;
//                     } else if(k - 2 >= 0 && j + 2 < m && arr[k-1][j+1] == 'i' && arr[k-2][j+2] == 'e'){
//                         // Diagonal up-right
//                         found = 1;
//                         break;
//                     } else if(k - 2 >= 0 && j - 2 >= 0 && arr[k-1][j-1] == 'i' && arr[k-2][j-2] == 'e'){
//                         // Diagonal up-left
//                         found = 1;
//                         break;
//                     }
                    
//                 }  
//             }
//         }
        

//         if(found){
//             cout << "Cutie Pie!" << endl;
//         } else {
//             cout << "Sorry Man" << endl;
//         }

//     }
// }


// B - Paper Game
// int main(){
//     long long x, y;
//     int n, rem, stepn;

//     // 0 = Hasan 
//     // 1 = Hussain

//     // 1*1 = 1 = Hussain
//     // 2*1 = 2 = Hasan
//     // 3*1 = 3 = Hussain
//     // 2*2 = 4 = Hasan
//     // 3*2 = 6 = Hasan
//     // 4*2 = 8 = Hasan
//     // 3*3 = 9 = Hussain
//     // 3*4 = 12 = Hasan
//     // 3*5 = 15 = Hussain

//     cin >> n;

//     while(n--){
//         cin >> x >> y;

//         stepn = ((x % 2) * (y % 2));
//         rem =  stepn % 2;
//         if (rem == 0)
//         {
//             cout << "Hasan" << endl;
//         }
//         else
//         {
//             cout << "Hussain" << endl;
//         }

//     }
// }


// A - Jerry's Window
// int main(){
//     freopen("window.in", "r", stdin);

//     long long n, x, y;
//     long long area;


//     cin >> n;

//     while(n--){
//         cin >> x >> y;

//         if(x == 0 || y == 0){
//             area = 0;
//         } else {
//             area = x * y;
//         }

//         cout << area << endl;
//     }
// }