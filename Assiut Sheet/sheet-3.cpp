#include <iostream>
#include <list>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;


// int main() {
//     int n, m, num, target;

//     cin >> n >> m;
//     int nums[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//     }
//     sort(nums, nums + n);

//     int start, end, mid;
//     while(m--){
//         bool founded = 0;
//         cin >> target;

//         // 1 2 3 4 5 6 7 8 9 10
//         // s         m       e
//         mid = n / 2;
//         start = 0;
//         end = n - 1;
//         while(start <= end){
//             // cout << start << " - " << mid << " - " << end << endl;
//             // cout << nums[start] << " - " << nums[mid] << " - " << nums[end] << endl;
//             // cout << "................." << endl;
//             if(nums[mid] == target){
//                 cout << "found" << endl;
//                 founded = 1;
//                 break;
//             } else if(nums[mid] > target){
//                 end = mid - 1;
//                 mid = (start + mid) / 2;
//             } else if(nums[mid] < target){
//                 start = mid + 1;
//                 mid = (start + end) / 2;
//             }
//         } 
//         if(!founded){
//             cout << "not found" << endl;
//         }
//     }
// }


// int main(){
//     int n, testsCount, num;

//     cin >> testsCount;
    
//     while(testsCount--){
//         int max;
//         cin >> n;
//         int array[n];

//         for (int i = 0; i < n; i++){
//             cin >> num;
//             array[i] = num;
//         }

//         for (int i = 0; i < n; i++){
//             cout << array[i] << " ";
//             max = array[i];
//             for (int j = i + 1; j < n; j++){
//                 // cout << array[i] << " " << array[j] << endl;
//                 if(array[j] > max){
//                     max = array[j];
//                 }
//                 cout <<  max << " ";
//             }
//         }
//         cout << endl;
//     }
// }


// int main(){
//     int n, testsCount, num;

//     cin >> testsCount;
    
//     while(testsCount--){
//         int counter = 0, start, prev;
//         cin >> n;
//         int array[n];

//         for (int i = 0; i < n; i++){
//             cin >> num;
//             array[i] = num;
//         }

//         for (int i = 0; i < n; i++){
//             start = array[i];
//             for (int j = i; j < n - 1; j++){
//                 // cout << start << " - " << prev << " - " << array[j + 1] << " counter: " << counter << endl;
//                 if(i == j){
//                     if(start > array[j + 1]){
//                         // cout << "+++++ break +++++" << endl;
//                         prev = array[j + 1];
//                         break;
//                     } else{
//                         counter++;
//                     }
//                 } else {
//                     if(prev > array[j + 1]){
//                         // cout << "+++++ break +++++" << endl;
//                         prev = array[j + 1];
//                         break;
//                     } else{
//                         counter++;
//                     }
//                 }
//                 prev = array[j + 1];
//             }
//         }
//         cout << counter + n << endl;
//     }
// }


// int main(){
//     int n, m, x, y;
//     // int test = 1;
//     char num;

//     cin >> n >> m;
//     char arr[n+1][m+1];
//     memset(arr, '.', sizeof(arr));

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             cin >> num;
//             arr[i][j] = num;
//         }
//     }
//     cin >> x >> y;
//     arr[x - 1][y - 1] = 'm';
 
//     // Just for testing
//     // for (int i = 0; i < n+1; i++){
//     //     for (int j = 0; j < m+1; j++){
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // cout << "~~~~~~~~~~~~" << endl;

//     for (int i = max(x-2, 0); i <= x; i++){
//         for (int j = max(y-2, 0); j <= y; j++){
//             // cout << arr[i][j] << " ";
//             if(arr[i][j] != 'm' && arr[i][j] == '.'){
//                 cout << "no" << endl;
//                 return 0;
//             }
//         }
//         // cout << endl;
//     } 
//     cout << "yes" << endl;
// }


// Range sum query
// int main(){
//     int n, m, l, r, num;
//     long long sum = 0;

//     cin >> n >> m;

//     // 1000000000
//     int nums[n];
//     long long prefixArr[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//         sum += num;
//         prefixArr[i] = sum;
//     }

//     // 6 4  2  7  2  7
//     // 6 10 12 19 21 28
//     // 3 6 = 18
//     // prefix[l:r] = prefix[r] - prefix[l-1]
//     while(m--){
//         cin >> l >> r;
//         // cout << r - 1 << " - " << l - 2 << endl;
//         if(l-1 == 0){
//             cout << prefixArr[r-1] << endl;
//         } else if (l-1 > 0){
//             cout << prefixArr[r - 1] - prefixArr[l - 2] << endl;
//         }
//     }
// }


// Fibonacci
// int main(){
//     int num;
//     long long sum = 0;

//     cin >> num;

//     long long array[num + 1];

//     if(num == 1 || num == 0){
//         cout << 0 << endl;
//         return 0;
//     } else if(num == 2){
//         cout << 1 << endl;
//         return 0;
//     }

//     array[1] = 0;
//     array[2] = 1;

//     // 0 1 1 2 3
//     for (int i = 3; i <= num; i++){
//         array[i] = array[i - 1] + array[i - 2];
//     }

//     cout << array[num] << endl;
// }


// // lucky
// int main(){
//     int n, num, freq = 0, least = 100000;

//     cin >> n;

//     int nums[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;

//         if(num < least){
//             least = num;
//         }

//         nums[i] = num;
//     }

//     for (int i = 0; i < n; i++){
//         if(nums[i] == least){
//             freq++;
//         }
//     }

//     if(freq % 2 == 0){
//         cout << "Unlucky" << endl;
//     } else{
//         cout << "Lucky" << endl;
//     }
// }


// int main(){
//     int n, m, num;

//     cin >> n >> m;
//     int inverted[n][m];

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> num;
//             inverted[i][m-1-j] = num;
//         }
//     }

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cout << inverted[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


// int main(){
//     int n, m, num, max = 0;

//     cin >> n >> m;
//     int nums[n];
//     int freq[m + 1] = {0};

//     for(int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;

//         freq[num]++;
//     }

//     for(int i = 1; i <= m; i++){
//         cout << freq[i] << endl;
//     }
// }


// U. Is B a subsequence of A ?
// int main(){
//     int n, m, num, currentInd = 0, max = 0;

//     cin >> n >> m;

//     int array1[n];
//     int array2[m];

//     for(int i = 0; i < n; i++){
//         cin >> num;
//         array1[i] = num;
//         if(num > max){
//             max = num;
//         }
//     }
//     int freq[max + 1] = {0};
//     for(int i = 0; i < n; i++){
//         freq[array1[i]] = i;
//     }

//     for(int i = 0; i < m; i++){
//         cin >> num;
//         array2[i] = num;
//         if (num > max){
//             cout << "NO" << endl;
//             return 0;
//         }
//         // cout << num << " " << freq[num] << " " << currentInd << "  -  " << endl;

//         if(freq[num] < currentInd){
//             cout << "NO" << endl;
//             return 0;
//         } else {
//             currentInd = freq[num];
//         }
//     }
//     cout << "YES" << endl;
// }


// int main(){
//     int n, num, primarySum = 0, secondarySum = 0;

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> num;
//             if(i == j){
//                 primarySum += num;
//             }
//             if(i + j == n-1){
//                 secondarySum += num;
//             }
//         }
//     }
//     cout << abs(primarySum - secondarySum) << endl;
// }


// int main(){
//     int n, m, num, target;

//     cin >> n >> m;

//     int nums[n][m];

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> num;
//             nums[i][j] = num;
//         }
//     }

//     cin >> target;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(nums[i][j] == target){
//                 cout << "will not take number" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "will take number" << endl;
// }


// int main(){
//     int n, num, max = 0;

//     cin >> n;

//     int array1[n];
//     int array2[n];


//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < n; j++){
//             cin >> num;
//             if(i == 0){
//                 array1[j] = num;
//             } else{
//                 array2[j] = num;
//             }

//             if(num > max){
//                 max = num;
//             }
//         }
//     }
//     int freqArray1[max + 1] = {0};
//     int freqArray2[max + 1] = {0};

//     for(int i = 0; i < n; i++){
//         freqArray1[array1[i]]++;
//         freqArray2[array2[i]]++;
//     }

//     for(int i = 0; i < n; i++){
//         if(freqArray2[array1[i]] > 0){
//             freqArray2[array1[i]]--;
//         } else {
//             cout << "no" << endl;
//             return 0;
//         }
//     }
//     cout << "yes" << endl;
// }


// int main(){
//     int n, num, counter = 0;
//     bool first = 1, stop = 0;

//     cin >> n;

//     int nums[n];

//     for(int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//         if(num % 2 != 0){
//             cout << 0 << endl;
//             return 0;
//         }
//     }

//     while(!stop){
//         for(int i = 0; i < n; i++){

//             if(nums[i] % 2 == 0){
//                 nums[i] /= 2;
//             } else {
//                 cout << counter << endl;
//                 return 0;
//             }

//         }
//         counter++;
//     }
// }


// int main(){
//     int A, B;
//     string string;

//     cin >> A >> B >> string;

//     if(((A + B + 1) != string.size()) || string[A] != '-'){
//         cout << "No" << endl;
//     } else {
//         for(int i = 0; i < A; i++){
//             if(!isdigit(string[i])){
//                 cout << "No" << endl;
//                 return 0;
//             }
//         }
//         for(int i = A + 1; i <= A + B; i++){
//             if(!isdigit(string[i])){
//                 cout << "No" << endl;
//                 return 0;
//             }
//         }
//         cout << "Yes" << endl;
//     }
// }


// int main(){
//     int n, num, min, minInd, max, maxInd;

//     cin >> n;

//     int nums[n];

//     for(int i = 0; i < n; i++){
//         cin >> num;

//         nums[i] = num;

//         if(i == 0){
//             min = num;
//             minInd = i;
//             max = num;
//             maxInd = i;
//         }

//         if(num < min){
//             min = num;
//             minInd = i;
//         }

//         if(num > max){
//             max = num;
//             maxInd = i;
//         }
//     }

//     nums[minInd] = max;
//     nums[maxInd] = min;

//     for(int i = 0; i < n; i++){
//         cout << nums[i] << " ";
//     }
// }


// int main(){
//     int n, total = 0;
//     string numsStr;

//     cin >> n;

//     cin >> numsStr;

//     int nums[n];

//     for (int i = 0; i < n; i++){
//         total += numsStr[i] - '0';
//         // cout << numsStr[i] << " " << total << "   -    ";
//     }
//     cout << total;
// }



// int main(){
//     int testCases, n, num, smallestSum, test;

//     cin >> testCases;

//     for (int i = 0; i < testCases; i++){
//         cin >> n;

//         int nums[n];

//         for (int i = 0; i < n; i++){
//             cin >> num;
//             nums[i] = num;
//         }

//         smallestSum = nums[n-1] + nums[n-2] + n - (n-1);

//         for (int i = 0; i < n - 1; i++){
//             for (int j = 0; j < n - 1 - i; j++){
//                 test = nums[i] + nums[i + 1 + j] + (i + 2 + j) - (i + 1);
//                 if(test < smallestSum){
//                     smallestSum = test;
//                 }
//             }
//         }
//         cout << smallestSum << endl;
//     }
// }

// int main(){
//     int n, num, swapNum;

//     cin >> n;

//     int nums[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//     }

//     // Selection sorting - Time: 61 ms
//     // int smallest, smallestInd;
//     // for (int i = 0; i < n; i++){
//     //     smallest = nums[i];
//     //     smallestInd = i;
//     //     for (int j = i + 1; j < (n); j++){
//     //         // cout << j << " - " << nums[j] << " ";
//     //         if(nums[j] < smallest){
//     //             smallest = nums[j];
//     //             smallestInd = j;
//     //         }
//     //     }
//     //     if(smallestInd != i){
//     //         swapNum = nums[i];
//     //         nums[i] = nums[smallestInd];
//     //         nums[smallestInd] = swapNum;
//     //     }
//     //     // cout << smallest << endl;
//     // }

//     // bubble sorting - Time: 78 ms
//     // for (int i = 0; i < n; i++){
//     //     for (int j = 0; j < (n - 1 - i); j++){
//     //         // cout << j << " ";
//     //         // cout << nums[j] << " - " << nums[j + 1] << "   ";
//     //         if(nums[j] > nums[j + 1]){
//     //             swapNum = nums[j];
//     //             nums[j] = nums[j + 1];
//     //             nums[j + 1] = swapNum;
//     //         }
//     //     }
//     // }

//     for (int i = 0; i < n; i++){
//         cout << nums[i] << " ";
//     }
// }


// int main(){
//     int n, num;

//     cin >> n;

//     int nums[n];
//     int reversedNums[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//     }

//     for (int i = (n - 1); i >= 0; i--){
//         if(nums[i] != nums[n - i - 1]){
//             cout << "NO";
//             return 0;
//         }
//     }
//     cout << "YES";
// }


// int main(){
//     int n, num;

//     cin >> n;

//     int nums[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//     }

//     for (int i = (n - 1); i >= 0; i--){
//         cout << nums[i] << " ";
//     }
// }


// int main(){
//     int n, num, index = 0, lowest = 10000000;

//     cin >> n;

//     int nums[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//         if(num < lowest){
//             lowest = num;
//             index = i;
//         }
        
//     }
//     cout << lowest << " " << index + 1;
// }


// int main(){
//     int n, num;

//     cin >> n;

//     int nums[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//         // if(num <= 10){
//         //     cout << "A[" << i << "] = " << num << endl;
//         // }
//     }

//     for (int i = 0; i < n; i++){
//         if(nums[i] <= 10){
//             cout << "A[" << i << "] = " << nums[i] << endl;
//         }
//     }
// }


// int main(){
//     int n, num;
    
//     cin >> n;
//     int nums[n];

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         if(num > 0){
//             nums[i] = 1;
//             // cout << 1 << ' ';
//         } else if(num < 0){
//             nums[i] = 2;
//             // cout << 2 << ' ';
//         } else{
//             nums[i] = 0;
//             // cout << 0 << ' ';
//         }
//     }

//     for (int i = 0; i < n; i++){
//         cout << nums[i] << " ";
//     }
// }


// int main(){
//     int n, num, target;
//     bool founded = false;

//     cin >> n;

//     int nums[n] = {0};

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         nums[i] = num;
//     }

//     cin >> target;

//     for (int i = 0; i < n; i++){
//         if(nums[i] == target){
//             cout << i;
//             return 0;
//         }
//     }

//     cout << -1;

// }


// int main() {
//     int n, num;
//     long long sum = 0;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         cin >> num;
//         sum += num;
//     }
    
//     if(sum < 0){
//         sum *= -1;
//     }

//     cout << sum;
// }