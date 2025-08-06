#include <iostream>
#include <cmath>

using namespace std;


int main(){
    /*
    9 >> 4
    9 - 8 - 7 - 6 - 5 - 4 - 3 - 2 - 1
    --  --  --
    n1  n2  n3
    
    */
}


// int main() {
//     int n, prev1, prev2, h;

//     cin >> n;

//     if (n == 1) {
//         cout << "0";
//         return 0;
//     }

//     prev1 = 1; 
//     prev2 = 0; 
//     cout << prev2 << " " << prev1;
//     for (int i = 3; i <= n; i++){
//         // cout << prev1 << " " << prev2 << endl;
//         cout << " " << prev1 + prev2;
//         h = prev1;
//         prev1 += prev2;
//         prev2 = h;
//     }
// }


// int main(){
//     int n;
//     // 8 4 2 1
//     // 1 0 1 0 
//     // 2**0

//     cin >> n;
//     for (int i = 0; i < n; i++){
//         int num, pointer, newNum = 0, counter = 0;
//         cin >> num;
//         pointer = num;
//         while(pointer > 0){
//             if(pointer % 2 == 1){
//                 counter += 1;
//             }
//             pointer /= 2;
//         }
//         for (int i = 0; i < counter; i++){
//             newNum += pow(2, i);
//         } 
//         cout << newNum << endl;
//     }
// }


// int main(){
//     int n, maxStart;

//     cin >> n;

//     maxStart = 1 + 2 * (n - 1);

//     for (int i = 0; i < n; i++){
//         cout << string((maxStart - 2 * i)/2, ' ') << string(1 + 2 * i, '*') << endl;
//     }
//     for (int i = 0; i < n; i++){
//         cout << string(i, ' ') << string(maxStart - 2 * i, '*') << endl;
//     }
// }



// int main(){
//     int n, counter = 1;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         cout << counter << " " << counter + 1 << " " << counter + 2 << " " << "PUM" << endl;
//         counter += 4;
//     }
// }


// int main(){
//     int n, maxStart,m = 1;

//     cin >> n;

//     maxStart = 1 + 2 * (n - 1);

//     for (int i = 0; i < n; i++){
//         cout << string((maxStart - 2 * i)/2, ' ') << string(1 + 2 * i, '*') << endl;
//         m += 2;
//     }
// }


// int main() {
//     int n;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         int n, m, start, end, sum = 0;
//         cin >> n >> m;

//         if (n <= m){
//             start = n;
//             end = m;
//         } else {
//             start = m;
//             end = n;
//         }

//         for (int j = start + 1; j < end; j++){
//             if(j % 2 != 0){
//                 sum += j;
//             }
//         }
//         cout << sum << endl;
//     }
// }


// int main(){
//     int n, m;

//     cin >> n >> m;

//     while(n > 0 && m > 0){
//         int start, end, sum = 0;
//         if (n <= m){
//             start = n;
//             end = m;
//         } else {
//             start = m;
//             end = n;
//         }
//         for (int i = start; i <= end; i++){
//             cout << i << " ";
//             sum += i;
//         }
//         cout << "sum =" << sum << endl;
//         cin >> n >> m;
//     }
// }


// int main(){
//     int n;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         string number;
//         cin >> number;
//         for (int i = number.size() - 1; i >= 0; i--){
//             cout << number[i] << " ";
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int n;

//     cin >> n;

//     for (int i = n ; i > 0; i--){
//         for (int j = i; j > 0; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int n;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// int main(){
//     int n, num;
//     char operation;

//     cin >> operation >> n;

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         for (int j = 0; j < num; j++){
//             cout << operation;
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int num;

//     cin >> num;

//     for (int i = 1; i <= num; i++){
//         if(num % i == 0){
//             cout << i << endl;
//         }
//     }
// }


// int main(){
//     int n, result;
    
//     cin >> n;
    
//     for (int i = 2; i <= n; i++){
//         bool founded = false;

//         for (int j = 1; j < i; j++){
//             if(i % (j + 1) == 0){
//                 if (founded == false){
//                     founded = true;
//                     result = (i);
//                 } else {
//                     founded = false;
//                     break;
//                 }
//             }
//         }
//         if(founded == true){
//             cout << result << " ";
//         }
//     }
// }


// int main(){

//     int num;
//     string numsStr, newNumStr;
//     bool begin = true;

//     cin >> num;

//     numsStr = to_string(num);

//     for (int i = 0; i < numsStr.length(); i++){
//         int index = (numsStr.length() - 1) - i;
//         if (numsStr[index] == '0'){
//             if(begin == false){
//                 newNumStr += numsStr[index];
//             }
//         } else {
//             if(begin == true){
//                 begin = false;
//             }
//             newNumStr += numsStr[index];
//         }
//     }
//     if(numsStr == newNumStr){
//         cout << newNumStr << endl << "YES" << endl;
//     } else {
//         cout << newNumStr << endl << "NO" << endl;
//     }
// }

// int main(){
//     int num;
//     bool founded = false;

//     cin >> num;

//     if (!num > 1){
//         cout << "NO" << endl;
//     } else {
//         for (int i = 1; i < num; i++){
//             if(num % (i + 1) == 0){
//                 if (founded == false){
//                     founded = true;
//                 } else {
//                     cout << "NO" << endl;
//                     return 0;
//                 }
//             }
//         }
//         if(founded == true){
//             cout << "YES" << endl;
//         }
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     while(n--){
//         long long result = 1;
//         int num;
//         cin >> num;
//         for (int i = 0; i < num; i++){
//             result *= (i + 1);
//         }
//         cout << result << endl;
//     }
// }


// int main(){
//     int n, result;
//     cin >> n;
//     for (int i = 0; i < 12; i++){
//         result = n * (i + 1);
//         cout << n << " * " << i + 1 << " = " << result << endl;
//     }
// }


// int main(){
//     int n;
//     string num;
//     string reversed;
//     string numbersString;

//     cin >> n;
//     int nums[n];   
//     for (int i = 0; i < n; i++){
//         cin >> num;
//         for (int i = num.size(); i >= 0; i--){
//             // cout << num[i] << " ";
//             string test = num[i] + " "
//             // reversed += test;
//         }
//     }
//     cout << reversed;
// }


// M. Lucky Numbers
// int main(){
//     int k;
//     int n;
//     list<int> lucky;

//     cin >> k >> n;

//     for (int i = k; i <= n; i++){
//         // cout << i << endl;
//         if(i < 10){
//             if(i == 4 || i == 7){
//                 lucky.push_back(i);
//             }
//         } else {
//             string nums = to_string(i);
//             bool fullLucky = 1;
//             for(char c: nums){
//                 if(c != '7' && c != '4'){
//                     fullLucky = 0;
//                     break;
//                 }
//             }
//             if(fullLucky){
//                 lucky.push_back(i);
//             }
//         }
//     }
    
//     if(lucky.empty() == 1){
//         cout << -1 << endl;
//     } else {
//         for (int i : lucky) {
//             cout << i << " "; // Dereference the iterator to get the element
//         }
//     }
// }


// int main(){
//     int num1;
//     int num2;
//     int max1 = 1;
//     int max2 = 1;

//     cin >> num1 >> num2;

//     for (int i = 1; i <= num1; i++){
//         if (num1 % i == 0 && i > max1){
//             max1 = i;
//         }
//     }

//     for (int i = 1; i <= num2; i++){
//         if (num2 % i == 0 && i > max2){
//             max2 = i;
//         }
//     }

// }


// E. Max
// int main() {
//     int n;
//     int num;
//     int max = 0;

//     cin >> n;

//     for (int i = 1; i <= n;i++){
//         cin >> num;
//         if(num > max){
//             max = num;
//         } 
//     }

//     cout << max << endl;
// }


// D. Fixed Password
// int main() {
//     int num;
//     bool run = 1;
    
//     while (run){
//         cin >> num;

//         if (num == 1999){
//             cout << "Correct" << endl;
//             run = 0;
//         } else {
//             cout << "Wrong" << endl;
//         }
//     }
// }


// C. Even, Odd, Positive and Negative
// int main() {
//     int n;
//     int num;
//     int even = 0;
//     int odd = 0;
//     int positive = 0;
//     int negative = 0;

//     cin >> n;
    
//     for (int i = 1; i <= n;i++){
//         cin >> num;
//         if (num % 2 == 0){
//             even++;
//         } else {
//             odd++;
//         }

//         if(num < 0){
//             negative++;
//         } else if(num > 0){
//             positive++;
//         }
//     }

//     cout << "Even: " << even << endl;
//     cout << "Odd: " << odd << endl;
//     cout << "Positive: " << positive << endl;
//     cout << "Negative: " << negative << endl;
// }


// B. Even Numbers
// int main() {
//     int n;
//     bool evenFounded = 0;

//     cin >> n;

//     for (int i = 1; i <= n;i++){
//         if (i % 2 == 0){
//             cout << i << endl;
//             evenFounded = 1;
//         }
//     }
    
//     if(evenFounded == 0){
//         cout << -1 << endl;
//     }
// }


// A. 1 to N
// int main() {
//     int n;

//     cin >> n;

//     for (int i = 0; i < n;i++){
//         cout << i + 1 << endl;
//     }
// }