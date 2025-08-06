#include <iostream>
#include <climits>
#include <iomanip>
#include <cmath>
#include <map>
#include <vector>
#include<unordered_set>

using namespace std;


int main() {
    int total = 0;
    char currC = 'a';
    string str;

    cin >> str;

    for (int i = 0; i < str.size() - 1; i++)
    {
        int sum = (int(str[i]) - 96) + (int(currC) - 96);
        if(sum >= 26){
            // cout << "Test: " << sum << " " << str[i] << endl; 
            total += sum % 26;
            currC = str[i];
        } else {
            int per = abs((int(str[i]) - 96) - (currC - 96));
            cout << "Test: " << per << endl; 
            total += 26 - per;
            currC = str[i];
        }
        cout << total << endl;
    }
    cout << total << endl;
}


// C. Koko And The Transformation
// int main() {
//     int n, m, num, sum1 = 0, sum2 = 0;

//     cin >> n >> m;

//     // int arr1[n];
//     // int arr2[m];
    
//     for (int i = 0; i < n; i++)
//     {
//         cin >> num;
//         sum1 += num;
//     }
    
//     for (int i = 0; i < m; i++)
//     {
//         cin >> num;
//         sum2 += num;
//     }

//     if(sum1 == sum2){
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }


// Z. Decoding
// int main() {
//     int n;
//     string encoded, decoded = "";

//     cin >> n >> encoded;
    
//     if(encoded.size() <= 2){
//         cout << encoded << endl;
//         return 0;
//     }

//     while(n--){
//         // logva >> ""
//         // volga
//         if(encoded.size() % 2 == 0){
//             decoded.insert(0, 1, encoded[0]);
//             encoded.erase(0, 1);
//         } else {
//             decoded.push_back( encoded[0]);
//             encoded.erase(0, 1);
//         }
//     }
//     cout << decoded << endl;
// }


// Y. Team Olympiad
// int main() {
//     int n, num, counter;

//     cin >> n;

//     vector<int> num1;
//     vector<int> num2;
//     vector<int> num3;
//     map<int, vector<int>> myMap;

//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> num;

//         switch (num) {
//         case 1:
//             num1.push_back(i);
//             myMap[1] = num1;
//             break;
//         case 2:
//             num2.push_back(i);
//             myMap[2] = num2;
//             break;
//         case 3:
//             num3.push_back(i);
//             myMap[3] = num3;
//             break;
//         }
//     }

//     counter = min(myMap[1].size(), min(myMap[2].size(), myMap[3].size()));
//     cout << counter << endl;
//     for (size_t i = 0; i < counter; i++)
//     {
//         cout << myMap[1].back() + 1 << " " << myMap[2].back() + 1 << " " << myMap[3].back() + 1 << endl;
//         myMap[1].pop_back();
//         myMap[2].pop_back();
//         myMap[3].pop_back();
//     }
    
//     // for (int num : myMap[1]) {
//     //     cout << num + 1<< " ";
//     // }
// }


// X. Panoramix's Prediction
// int main() {
//     int n, m;

//     cin >> n >> m;

//     for (int i = n+1; i <= 53; i++)
//     {
//         bool founded = 1;
//         if(i % 2 == 0){
//             continue;
//         }

//         for (int j = 3; j <= sqrt(i); j+=2) {
//             if(i % j == 0){
//                 founded = 0;
//                 break;
//             }
//         }

//         if(founded){
//             if(i == m){
//                 cout << "YES" << endl;
//             } else {
//                 cout << "NO" << endl;
//             }
//             break;
//         }
//     }
// }


// L. Sereja and Dima
// int main() {
//     int n, num, sum1 = 0, sum2 = 0;

//     cin >> n;

//     vector<int> arr;

//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> num;
//         arr.push_back(num);
//     }

//     while(arr.size() != 0){
//         if(arr.size() >= 1){
//             if(arr.front() >= arr.back()){
//                 sum1 += arr.front();
//                 arr.erase(arr.begin());
//             } else {
//                 sum1 += arr.back();
//                 arr.erase(arr.end() - 1);
//             }
//         }

//         if(arr.size() >= 1){
//             if(arr.front() >= arr.back()){
//                 sum2 += arr.front();
//                 arr.erase(arr.begin());
//             } else {
//                 sum2 += arr.back();
//                 arr.erase(arr.end() - 1);
//             }
//         }
//     }
//     cout << sum1 << " " << sum2 << endl;
// }


// N. Cakeminator
// int main() {
//     int r, c, counter = 0;
//     char ch;
//     bool test;
//     vector<int> freeRow;
//     vector<int> freeCol;

//     cin >> r >> c;

//     char arr[r][c];
//     for (size_t i = 0; i < r; i++)
//     {
//         bool flag = 1;
//         for (size_t j = 0; j < c; j++)
//         {
//             cin >> arr[i][j];
//             if(arr[i][j] != '.'){
//                 flag = 0;
//             }
//         }
//         if(flag){
//             freeRow.push_back(i);
//         }
//     }
    
//     for (size_t i = 0; i < c; i++)
//     {
//         bool flag = 1;
//         for (size_t j = 0; j < r; j++)
//         {
//             if(arr[j][i] != '.'){
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag){
//             freeCol.push_back(i);
//         }
//     }

//     for(const auto &i : freeCol){
//         for (size_t j = 0; j < r; j++) 
//         {
//             if(arr[j][i] == '.'){
//                 arr[j][i] = '#';
//                 counter++;
//             }
//         }
//     }

//     for(const int& i : freeRow) 
//     {
//         for (size_t j = 0; j < c; j++) 
//         {
//             if(arr[i][j] == '.'){
//                 arr[i][j] = '#';
//                 counter++;
//             }
//         }
//     }

//     cout << counter << endl;
// }


// U. Ilya and Bank Account
// int main(){
//     string str;

//     cin >> str;

//     if(stoi(str) >= 0){
//         cout << str << endl;
//     } else {
//         if((str[str.size() - 1] - '0') >= (str[str.size() - 2] - '0')){
//             str.pop_back();
//             if(stoi(str) == 0){
//                 cout << 0 << endl;
//             } else {
//                 cout << str << endl;
//             }
//         } else {
//             str.erase((str.size() - 2), 1);
//             if(stoi(str) == 0){
//                 cout << 0 << endl;
//             } else {
//                 cout << str << endl;
//             }
//         }
//     }
// }


// T. Helpful Maths
// int main(){
//     string str, result = "";
//     map<int, int> strMap;

//     cin >> str;
//     for (size_t i = 0; i < str.size(); i++)
//     {
//         if(str[i] != '+'){
//             strMap[(str[i] - '0')]++;
//         }
//     }

//     for(auto& num : strMap){
//         // cout << num << endl;
//         for (size_t i = 0; i < num.second; i++)
//         {
//             result += to_string(num.first);
//             result += "+";
//         }
        
//     }
//     if(result[result.size() - 1] == '+'){
//         result.erase(result.size() - 1, 1);
//     }
//     cout << result << endl;
// }


// S. Good Number
// int main(){
//     int n, range, counter = 0;
//     string numStr;

//     cin >> n >> range;

//     string myRange;
//     for (size_t i = 0; i <= range; i++)
//     {
//         myRange += to_string(i);
//     }
//     // cout << myRange << endl;

//     while(n--){
//         string myRangeStr = myRange;
//         cin >> numStr;
//         for (size_t i = 0; i < numStr.size(); i++)
//         {
//             for (size_t j = 0; j < myRangeStr.size(); j++)
//             {
//                 if((myRangeStr[j] - '0') == (numStr[i] - '0')){
//                     myRangeStr.erase(j, 1);
//                 }
//             }
            
//             if(myRangeStr.size() == 0){
//                 counter++;
//                 break;
//             }
//         }
        
//     }

//     cout << counter << endl;
// }


// R. Arrival of the General
// int main(){
//     int n, num, steps = 0;

//     cin >> n;

//     int arr[n];

//     // first: value, second: index
//     pair<int, int> max = {-1, 0};
//     pair<int, int> min = {101, 0};

//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if(arr[i] > max.first){
//             max.first = arr[i];
//             max.second = i;
//         } 
//         if(arr[i] <= min.first){
//             min.first = arr[i];
//             min.second = i;
//         }
//     }

//     // cout << "max: " << max.first << " - " << max.second << endl;
//     // cout << "min: " << min.first << " - " << min.second << endl;
//     if((max.first == min.first) || (max.second == 0 && min.second == n-1)){
//         cout << 0 << endl;
//         return 0;
//     }
//     if(max.second > min.second){
//         min.second++;
//         max.second--;
//         steps += n - min.second;
//         steps += max.second;
//     } else {
//         steps += max.second;
//         steps += n - min.second - 1;
//     }
//     cout << steps << endl;
// }


// P - Police Recruits
// int main(){
//     int t, num, untreated=0, officers=0;

//     cin >> t;
//     while(t--){
//         cin >> num;

//         if(num == -1){
//             if(officers == 0){
//                 untreated++;
//             } else if(officers > 0){
//                 officers--;
//             }
//         } else {
//             if(num >= 10){
//                 officers += 10;
//             } else {
//                 officers += num;
//             }
//         }
//     }

//     cout << untreated << endl;
// }


// J - Lucky Division
// int main(){
//     int num;
//     bool isLucky = 1;
//     string numStr = "";

//     int arr[14] = {
//         4,
//         7,
//         44,
//         47,
//         74,
//         77,
//         444,
//         447,
//         474,
//         477,
//         774,
//         777,
//         747,
//         744,
//     };

//     cin >> num;

//     numStr = to_string(num);

//     for (size_t i = 0; i < numStr.size(); i++)
//     {
//         if((numStr[i] - '0') != 4 && (numStr[i] - '0') != 7){
//             isLucky = 0;
//             break;
//         }
//     }
//     if(isLucky == 1){
//         cout << "YES" << endl;
//         return 0;
//     }
    
//     for (size_t i = 0; i < 14; i++)
//     {
//         if(num % arr[i] == 0){
//             cout << "YES" << endl;
//             return 0;
//         }
//     }
    
//     cout << "NO" << endl;
//     return 0;
// }


// int main(){
//     int n, num, annoyed = 0;
//     long long stock;
//     char op;

//     cin >> n >> stock;

//     while(n--){
//         cin >> op >> num;

//         if(op == '-'){
//             if(stock - num >= 0){
//                 stock -= num;
//             } else {
//                 annoyed++;
//             }
//         } else {
//             stock += num;
//         }
//     }

//     cout << stock << " " << annoyed << endl;
// }


// M. The New Year: Meeting Friends
// int main(){
//     int num1, num2, num3, dis1, dis2, dis3;

//     cin >> num1 >> num2 >> num3;

//     dis1 = abs(num1 - num2) + abs(num1 - num3);
//     dis2 = abs(num2 - num1) + abs(num2 - num3);
//     dis3 = abs(num3 - num1) + abs(num3 - num2);

//     // cout << dis1 << " " << dis2 << " " << dis3 << endl;
    
//     if(dis1 <= dis2 && dis1 <= dis3){
//         cout << dis1 << endl;
//     } else if(dis2 <= dis1 && dis2 <= dis3){
//         cout << dis2 << endl;
//     } else {
//         cout << dis3 << endl;
//     }
// }


// K - Prime Fibonacci
// int main(){
//     int n, num;

//     bool prime[51] = { 0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0 };
    
//     cin >> n;

//     while(n--){
//         cin >> num;

//         if(prime[num] == 1){
//             cout << "prime" << endl;
//         } else {
//             cout << "not prime" << endl;
//         }
//     }
// }


// G. Magnets
// int main(){
//     int n, num, prev, counter = 0;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         cin >> num;

//         if(i == 0){
//             counter++;
//         } else {
//             if(num != prev){
//                 counter++;
//             }
//         }
//         prev = num;
//     }
//     cout << counter << endl;
// }


// F. Fox And Snake
// int main(){
//     int n, m;
//     bool right = 1;

//     cin >> n >> m;

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if((i+1) % 2 != 0){
//                 cout << '#';
//             } else{
//                 if(right){
//                     if(j == m-1){
//                         cout << '#';
//                     } else {
//                         cout << '.';
//                     }
//                 } else {
//                     if(j == 0){
//                         cout << '#';
//                     } else {
//                         cout << '.';
//                     }
//                 }
//             }
//         }
//         if((i+1) % 2 == 0){
//             right = !right;
//         }
//         cout << endl;
//     }
// }


// E. George and Accommodation
// int main(){
//     int n, p, q, counter = 0;

//     cin >> n;

//     while(n--){
//         cin >> p >> q;

//         if(q-p >= 2){
//             counter++;
//         }
//     }

//     cout << counter << endl;
// }


// D. Bear and Big Brother
// int main(){
//     int num, counter = 0;
//     long long a, b;

//     cin >> a >> b;

//     while(a<=b){
//         a *= 3;
//         b *= 2;
//         counter++;
//     }

//     cout << counter << endl;
// }


// int main(){
//     std::map<int, int> my_object;

//     for (int i = 0; i < 5; i++){
//         my_object[i] = i * 2;
//     }
//     cout << my_object[3] << endl;
// }


// int main(){
//     int num;
//     bool flag = 0;

//     cin >> num;

//     for (int i = 2; i < num; i++){
//         // cout << (num - i) << " " << i << " > " << ((num - i) % 2 == 0 && i % 2 == 0) << endl;
//         if((num - i) % 2 == 0 && i % 2 == 0){
//             flag = true;
//             break;
//         }
//     }
    
//     if(flag){
//         cout << "YES" << endl;
//     } else{
//         cout << "NO" << endl;
//     }
// }


// int main(){
//     string word;

//     cin >> word;
//     // a?kz?
//     // fabff
//     // 12345
//     // 0 - 3(n-1)-i
//     // 1 - 2(n-1)-i
//     // 2 - 1(n-1)-i
//     // 3 - 0(n-1)-i

//     for (int i = 0; i < ceil(word.size()/2.0); i++){
//         // cout << i << " " << ceil(word.size()/2.0-1) << endl;
//         int j = word.size() - 1 - i;
//         // to handle when the midle char is ?
//         if(word.size() % 2 != 0 && i == ceil(word.size()/2.0)-1){
//             if(word[i] == '?'){
//                 word[i] = 'a';
//             }
//         }

//         if (word[i] != word[j] && word[i] != '?' && word[j] != '?') {
//             cout << -1;
//             return 0;
//         }

//         if(word[i] != word[j]){
//             if(word[i] == '?'){
//                 word[i] = word[j];
//             } else {
//                 word[j] = word[i];
//             }
//         } else if(word[i] == word[j] && word[i] == '?'){
//             word[i] = word[j] = 'a';
//         } 

//     }
//     cout << word;
// }