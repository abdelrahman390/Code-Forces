#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include<iomanip>
#include <list>

using namespace std;


// int main(){
//     long long a, b, c, d;

//     cin >> a >> b >> c >> d;

//     if(b == d){
//         if(a > c){
//             cout << "YES" << endl ;
//         } else{
//             cout << "NO" << endl ;
//         }
//     } else {
//         if(b * log(a) > d * log(c)){
//             cout << "YES" << endl ;
//         } else {
//             cout << "NO" << endl ;
//         }
//     }

// }



// int main(){
// /*
// 291882089 l1
// 585325539 r1
// 358502890 l2
// 365329221 r2

// l1                        r1
// <-------------------------->
//     l2           r2
//     <------------>
// */ 

// /*
// 514300407  l1
// 539624191  r1
// 2691939  l2
// 539624191 r2

//             l1                        r1
//             <-------------------------->
//     l2                                r2
//     <---------------------------------->
// */ 

//     int l1, l2, r1, r2;

//     cin >> l1 >> r1 >> l2 >> r2;

//     if((l2 <= l1 || l2 <= r1)){
//         if(r2 <= r1){
//             cout << l2 << " " << r2 << endl;
//         } else{
//             cout << l2 << " " << r1 << endl;
//         }
//     } else {
//         cout << "-1" ;
//     }
// }


// int main(){
//     int l1, l2, r1, r2;
//     cout << 358502890 - 585325539 << endl;

//     cin >> l1 >> r1 >> l2 >> r2;

//     // cout << r1 << " " << l2 << endl;

//     if((l2 - r1) <= 0){
//         cout << l2 << " " << r1 << endl;
//     } else {
//         cout << "-1" ;
//     }
// }



// sort not solved
// int main(){
//     long long num1, num2, num3, smaller, bigger, middel;

//     cin >> num1 >> num2 >> num3;

//     smaller = num1;
//     if(num2 < smaller){
//         smaller = num2;
//     } 
//     if(num3 < smaller){
//         smaller = num3;
//     }

//     bigger = num1;
//     if(num2 > bigger){
//         bigger = num2;
//     } 
//     if(num3 > bigger){
//         bigger = num3;
//     }

//     if(num1 > smaller && num1 < bigger){
//         middel = num1;
//     } else if(num2 > smaller && num2 < bigger){
//         middel = num2;
//     } else if(num3 > smaller && num3 < bigger){
//         middel = num3;
//     }

//     cout << smaller << endl;
//     cout << middel << endl;
//     cout << bigger << endl << endl;

//     cout << num1 << endl;
//     cout << num2 << endl;
//     cout << num3 << endl;
// }


// int main(){
//     long long num1, num2, num3, num4;
//     int new1, new2, new3, new4;
//     long long result;

//     cin >> num1 >> num2 >> num3 >> num4;
//     new1 = num1 % 100;
//     new2 = num2 % 100;
//     new3 = num3 % 100;
//     new4 = num4 % 100;

//     result = (new1 * new2 * new3 * new4) % 100;
//     if(result < 10){
//         cout << '0' << result;
//     } else {
//         cout << result;
//     }
// }


// W. Mathematical Expression
// int main(){
//     int num1;
//     char operation;
//     int num2;
//     char equal;
//     int num3;
//     int finalResult;

//     cin >> num1 >> operation >> num2 >> equal >> num3;

//     if(operation == '+'){
//         finalResult = num1 + num2;
//     } else if(operation == '-'){
//         finalResult = num1 - num2;
//     } else if(operation == '*'){
//         finalResult = num1 * num2;
//     }

//     if(finalResult == num3){
//         cout << "Yes" << endl;
//     } else {
//         cout << finalResult << endl;
//     }
// }

// V. Comparison
// int main(){
//     int str1;
//     string str2;
//     int str3;

//     cin >> str1 >> str2 >> str3;

//     if(str2 == "="){
//         if(str1 == str3){
//             cout << "Right" << endl;
//         } else {
//             cout << "Wrong" << endl;
//         }
//     } else if(str2 == "<"){
//         if(str1 < str3){
//             cout << "Right" << endl;
//         } else {
//             cout << "Wrong" << endl;
//         }
//     } else if(str2 == ">"){
//         if(str1 > str3){
//             cout << "Right" << endl;
//         } else {
//             cout << "Wrong" << endl;
//         }
//     }
// }


// U. Float or int
// int main() {
//     string num;
//     string beforDotNums = "";
//     string afterDotNums = "";
//     bool afterDot = false;

//     cin >> num;

//     for(char c: num){
//         if (afterDot){
//             afterDotNums = afterDotNums + c;
//         } else {
//             if(c == '.'){
//                 afterDot = true;
//             } else{
//                 beforDotNums = beforDotNums + c;
//             }
//         }
//     };
//     if(stoi(afterDotNums) == 0){
//         cout << "int " << beforDotNums << endl;
//     } else{
//         cout << "float " << beforDotNums << " 0." << afterDotNums << endl;
//     }
// }


// S. Interval
// int main() {
//     float num;

//     cin >> num;
//     if (num < 0 || num > 100){
//         cout << "Out of Intervals" << endl;
//     }

//     if(num <= 25 && num > 0){
//         cout << "Interval [0,25]" << endl;
//     } else if(num > 25 && num <= 50){
//         cout << "Interval (25,50]" << endl;
//     } else if(num > 50 && num <= 75){
//         cout << "Interval (50,75]" << endl;
//     } else if(num > 75 && num <= 100){
//         cout << "Interval (75,100]" << endl;
//     }

// }


// R. Age in Days
// int main() {
//     int days;
//     int years;
//     int months;
//     int remDays;

//     cin >> days;

//     years = days / 365;
//     remDays = days % 365;

//     months = remDays / 30;
//     remDays = remDays % 30;

//     remDays = remDays % 30;

//     cout << years << " years" << endl;
//     cout << months << " months" << endl;
//     cout << remDays << " days" << endl;
// }


// Q. Coordinates of a Point
// int main() {
//     float x;
//     float y;

//     cin >> x >> y;

//     if (x > 0 && y > 0){
//         cout << "Q1" << endl;
//         return 0;
//     } else if (x < 0 && y > 0){
//         cout << "Q2" << endl;
//         return 0;
//     } else if (x < 0 && y < 0){
//         cout << "Q3" << endl;
//         return 0;
//     } else if (x > 0 && y < 0){
//         cout << "Q4" << endl;
//         return 0;
//     } 
    
//     if (x == 0 && y == 0){
//         cout << "Origem" << endl;
//         return 0;
//     } else if(x == 0){
//         cout << "Eixo Y" << endl;
//         return 0;
//     } else if(y == 0){
//         cout << "Eixo X" << endl;
//         return 0;
//     }

// }


// P. First digit !
// int main() {
//     string num;

//     cin >> num;

//     if (int(num[0]) % 2 == 0){
//         cout << "EVEN" << endl;
//     } else{
//         cout << "ODD" << endl;
//     }
// }


// O. Calculator
// int main() {
//     string Calculation;
//     int num1 = 0;
//     string num1Str = "";
//     int num2 = 0;
//     string num2Str = "";
//     char operation = ' ';
//     bool num1_found = false;
//     int sum = 0;

//     cin >> Calculation;

//     for(char c : Calculation){
//         if(isdigit(c)){
//             if(!num1_found){
//                 num1Str = num1Str + c;
//             } else {
//                 num2Str = num2Str + c;
//             }
//         } else if (c == '+' || c == '-' || c == '*' || c == '/'){
//             operation = c;
//             num1_found = true;
//         }
//     };
//     num1 = stoi(num1Str);
//     num2 = stoi(num2Str);

//     if(operation == '+'){
//         sum = num1 + num2;
//     } else if (operation == '-'){
//         sum = num1 - num2;
//     } else if (operation == '*'){
//         sum = num1 * num2;
//     } else if (operation == '/'){
//         sum = num1 / num2;
//     }

//     cout << sum << endl;
//     return 0;
// }


// N. Char
// int main() {
//     char letter;
//     int ASCII;

//     // Digit From 48 >> 57
//     // ALPHA Capital From 65 >> 90
//     // ALPHA Small From 97 >> 122

//     cin >> letter;

//     ASCII = int(letter);

//     // in case small Capital
//     if (ASCII >= 65 && ASCII <= 90){
//         ASCII = ASCII + 32;
//     } else{
//         ASCII = ASCII - 32;
//     }

//     cout << char(ASCII) <<  endl;

//     return 0;
// }


// M. Capital or Small or Digit
// int main() {
//     char wordOrDigit;

//     cin >> wordOrDigit;

//     // Digit From 48 >> 57
//     // ALPHA Capital From 65 >> 90
//     // ALPHA Small From 97 >> 122

//     int ASCII = wordOrDigit;

//     if ((ASCII >= 65 && ASCII <= 90) || (ASCII >= 97 && ASCII <= 122)){
//         cout << "ALPHA" << endl;
//     } else{
//         cout << "IS DIGIT" << endl;
//         return 0;
//     }
    
//     if ((ASCII >= 65 && ASCII <= 90)){
//         cout << "IS CAPITAL" << endl;
//     } else{
//         cout << "IS SMALL" << endl;
//     }

//     return 0;
// }


// L. The Brothers
// int main() {
//     string name1;
//     string father1;
//     string name2;
//     string father2;

//     cin >> name1 >> father1;
//     cin >> name2 >> father2;

//     if (father1 == father2){
//         cout << "ARE Brothers" << endl;
//     } else {
//         cout << "NOT" << endl;
//     }
// }


// K. Max and Min
// int main(){
//     int num1;
//     int num2;
//     int num3;
    
//     cin >> num1 >> num2 >> num3;
//     int minimum = num1;
//     int maximum = num1;
    
//     if(minimum > num2){
//         minimum = num2;
//     }
//     if (minimum > num3){
//         minimum = num3;
//     }

//     if(maximum < num2){
//         maximum = num2;
//     } 
//     if (maximum < num3){
//         maximum = num3;
//     }

//     cout << minimum << " " << maximum << endl;

//     return 0;
// }


// J. Multiples
// int main() {
//     int num1;
//     int num2;

//     cin >> num1 >> num2;

//     if (num1 % num2 == 0 || num2 % num1 == 0){
//         cout << "Multiples" << endl;
//     } else{
//         cout << "No Multiples" << endl;
//     }

//     return 0;
// }


// I. Welcome for you with Conditions
// int main (){
//     double num1;
//     double num2;

//     cin >> num1 >> num2;

//     if (num1 >= num2){
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }

//     return 0;
// }


// H. Two numbers
// int main() {
//     double num1;
//     double num2;
//     double division;

//     cin >> num1 >> num2;

//     division = num1 / num2;

//     cout << "floor " << num1 << " / " << num2 << " = " << floor(division) << endl;
//     cout << "ceil " << num1 << " / " << num2 << " = "  << ceil(division) << endl;
//     cout << "round " << num1 << " / " << num2 << " = "  << round(division) << endl;
// }


// G. Summation from 1 to N
// int main() {
//     long long n;
//     long long sum = 0;

//     cin >> n;

//     sum = (n * (n + 1)) / 2;

//     cout << sum << endl;

//     return 0;
// }


// F. Digits Summation
// int main() {
//     string num1;
//     string num2;
//     string last1;
//     string last2;

//     cin >> num1 >> num2;

//     last1 = num1[num1.length() - 1];
//     last2 = num2[num2.length() - 1];

//     int sum = stoi(last1) + stoi(last2);

//     cout << sum << endl;

//     return 0;
// }


// E. Area of a Circle
// int main() {
//     double Area;
//     double by = 3.141592653;
//     float radius;

//     cin >> radius;

//     cout << fixed << setprecision(9);

//     Area = by * pow(radius, 2);

//     cout << Area << endl;

//     return 0;
// }


// B. Basic Data Types
// int main(){
//     int a;
//     int b;
//     int c;
//     int d;
//     long long Difference;

//     cin >> a >> b >> c >> d;

//     Difference = (long long)a * b - (long long)c * d;

//     cout << "Difference = " << Difference << endl;

//     return 0;
// }


//  C. Simple Calculator
// int main() {
//     float Num1;
//     float Num2;

//     cin >> Num1 >> Num2;

//     cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
//     long long product = Num1 * Num2;
//     cout << Num1 << " * " << Num2 << " = " << product << endl;
//     cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;

//     return 0;
// }


// A. Say Hello With C++
// int main() {
//     string wordInput;
//     cin >> wordInput;
//     cout << "Hello, " << wordInput << endl;

//     return 0;
// }

// int main() {
//     int integer;
//     long long longNum;
//     char character;
//     float floatNum;
//     double doubleNum;

//     cin >> integer >> longNum >> character >> floatNum >> doubleNum;

//     cout << integer << endl;
//     cout << longNum << endl;
//     cout << character << endl;
//     cout << floatNum << endl;
//     cout << doubleNum << endl;

//     return 0;
// }