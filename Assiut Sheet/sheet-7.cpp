#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;





// incomplete - T. Combination
// long long factorial (int num){
//     if (num <= 1){
//         return 1;
//     }
//     return num * factorial (num-1);
// }
// long long combinations(int num1, int num2){

//     return factorial(num1) / (factorial(num2) * factorial(num1 - num2));
// }
// int main(){
//     int n, r;

//     cin >> n >> r;

//     if(r > n){
//         cout << 0;
//         return 0;
//     }

//     cout << combinations(n-1, r-1) + combinations(n-1, r) << endl;
// }


// S. Array Average
// double recurtion(int nums[], double total, int n, int i){
//     if (i > n - 1){
//         return total/n; 
//     }

//     total += nums[i];
//     return recurtion(nums, total, n, i+1);
// }
// int main(){
//     int n;
//     long long total;

//     cin >> n;

//     int nums[n];

//     for (int i = 0; i < n; i++){
//         cin >> nums[i];
//     }

//     cout << setprecision(6) << fixed << recurtion(nums, 0, n, 0) << endl;
// }


// Q. 3n + 1 sequence
// int recurtion(long long num, int counter){
//     if (num == 1){
//         return counter; 
//     }

//     if(num % 2 == 0){
//         num /= 2;
//     } else {
//         num = num * 3 + 1;
//     }

//     return recurtion(num, counter + 1);
// }
// int main(){
//     long long num;

//     cin >> num;

//     cout << recurtion(num, 1) << endl;
// }


// log2
// int recurtion(long long num, int counter){
//     if (num == 1){
//         return counter; 
//     }

//     return recurtion(num / 2, counter + 1);
// }
// int main(){
//     long long num;

//     cin >> num;

//     cout << recurtion(num, 0) << endl;
// }


// O. Fibonacci
// int recurtion(int num){
//     if (num == 1){
//         return 0;
//     } else if(num == 2){
//         return 1;
//     }

//     return recurtion(num - 1) + recurtion(num - 2);
// }
// int main(){
//     int num;

//     cin >> num;

//     cout << recurtion(num) << endl;
// }


// Not-completed -  M. Suffix Sum
// void recurtion(int nums[], long long prefSum[], int i, int n, int target){
//     if(n-1 < i){
//         if (target == 1) {
//             cout << nums[n - 1] << endl;
//         } else {
//             cout << prefSum[n - 1] - prefSum[target - 2] << endl;
//         }

//         return;
//     }

//     if(i == 0){
//         prefSum[i] = nums[i];
//     } else {
//         prefSum[i] = prefSum[i-1] + nums[i];
//     }

//     recurtion(nums, prefSum, i+1, n, target);
// }
// int main(){
//     int n, target;

//     cin >> n >> target;

//     int nums[n];
//     long long prefSum[n] = {0};
//     for (int i = 0; i < n; i++){
//         cin >> nums[i];
//     }

//     recurtion(nums, prefSum, 0, n, target);
// }


// K. Max Number
// void recurtion(int nums[], int max, int n, int i){
//     if(n-1 < i){
//         cout << max << endl;
//         return;
//     }
//     if(nums[i] > max){
//         max = nums[i];
//     }

//     recurtion(nums, max, n, i+1);
// }
// int main(){
//     int n;

//     cin >> n;

//     int nums[n];
//     for (int i = 0; i < n; i++){
//         cin >> nums[i];
//     }

//     recurtion(nums, nums[0], n, 0);
// }


// Factorial
// void recurtion(int num, int i, long long total){
//     if(i > num){
//         cout << total << endl;
//         return;
//     }

//     total *= i;

//     recurtion(num, i+1, total);
// }
// int main(){
//     int num;

//     cin >> num;

//     recurtion(num, 2, 1);
// }


// I. Count Vowels
// void recurtion(string word, int i, int counter){
//     if(word.size() == i){
//         cout << counter << endl;
//         return;
//     }

//     char c = word[i];
//     if(c >= 'A' && c <= 'Z'){
//         c = (int)c + 32;
//     }
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//         counter++;
//     }

//     // cout << word << " " <<  i+1 << " " << counter << " " << word.size() << endl;
//     recurtion(word, i+1, counter);
// }
// int main(){
//     string word;

//     getline(cin, word);

//     recurtion(word, 0, 0);
// }


// H. Inverted Pyramid
// void recurtion(int n, int i, int stars){
//     if((n-1-i) < 0){
//         return;
//     }
//     // 1 5 8 2 3 9 11

//     // cout << (n - 1 - i) << " " << stars << endl;
//     recurtion(n, i + 1, stars + 2);
//     for (int j = 0; j < (n-1-i); j++){
//         cout << " ";
//     }
//     for (int j = 0; j < stars; j++){
//         cout << '*';
//     }
//     cout << endl;


// }
// int main(){
//     int n;

//     cin >> n;

//     recurtion(n, 0, 1);
// }


// void recurtion(int nums[], int index, int n){
//     if(n-1 < index){
//         return;
//     }
//     // 1 5 8 2 3 9 11

//     recurtion(nums, index + 2, n);

//     cout << nums[index] << " ";
// }
// int main(){
//     int n;

//     cin >> n;

//     int nums[n];
//     for (int i = 0; i < n; i++){
//         cin >> nums[i];
//     }

//     recurtion(nums, 0, n);
// }


// void recurtion(int num){
//     if(num == 0){
//         return;
//     }

//     recurtion(num/2);

//     cout << num % 2 << "";
// }
// int main(){
//     int n, num;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         cin >> num;

//         recurtion(num);
//         cout << endl;
//     }
// }


// void recurtion(int num){
//     if(num == 0){
//         return;
//     }
//     if(num == 1){
//         cout << num;
//     } else {
//         cout << num << " ";
//     }

//     recurtion(num - 1);
// }
// int main(){
//     int n;
//     string num;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         cin >> num;

//         recurtion(num);
//     }
// }


// C. Print from N to 1
// void recurtion(int num){
//     if(num == 0){
//         return;
//     }
//     if(num == 1){
//         cout << num;
//     } else {
//         cout << num << " ";
//     }

//     recurtion(num - 1);
// }
// int main(){
//     int n;

//     cin >> n;

//     recurtion(n);
// }



// B. Print from 1 to N
// void recurtion(int num){
//     if(num == 0){
//         return;
//     }

//     recurtion(num - 1);

//     cout << num << endl;
// }
// int main(){
//     int n;

//     cin >> n;

//     recurtion(n);
// }


// void recurtion(int num){
//     if(num == 0){
//         return;
//     }

//     cout << "I love Recursion" << endl;

//     recurtion(num - 1);
// }
// int main(){
//     int num;

//     cin >> num;

//     recurtion(num);
// }