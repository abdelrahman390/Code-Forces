
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;


// M. Divisible
int main() {
    int n;
    long long res = 0;
    string num;

    cin >> num >> n;
    int i = 0;
    while(i <= num.size() - 1){
        res *= 10;
        res += (num[i] - '0');
        res %= n;
        i++;
    }

    // cout << res << endl;
    if(res == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}


// int main() {
// 	string num1; 
// 	 // 01
// 	// "15"
// 	int num2;  // 3
// 	cin>>num1>>num2;
// 	long long res = 0;
// 	for(int i=0;i<num1.size();i++){ // 0 1 
// 		res *= 10;
// 		res += num1[i] - '0';
// 		res %= num2;
//         cout << num1[i] - '0' << " % " << num2 << " = " << res << endl;
//     }
// 	if(res == 0){
// 		cout<<"YES"<<endl;
// 	} else {
// 		cout<<"NO"<<endl;
// 	}
// }


// W. Circles
// int main(){
// 	double x1, y1, x2, y2, x3, y3, x4, y4;
// 	double red1, red2, xMid1, yMid1, xMid2, yMid2, dectance;
// 	// Dectance = √((x2 - x1)² + (y2 - y1)²)
// 	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

// 	red1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))/2.0;
// 	red2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2))/2.0;
//     xMid1 = (x1 + x2) / 2.0; yMid1 = (y1 + y2) / 2.0;
//     xMid2 = (x3 + x4) / 2.0; yMid2 = (y3 + y4) / 2.0;
//     dectance = sqrt(pow(xMid2 - xMid1, 2) + pow(yMid2 - yMid1, 2));
// 	// cout << red1 << " " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
//     if(dectance <= red1 + red2){
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }


// V. Two Lines
// int main(){
//     // if the slope between every two points are eqaul
//     // M = (y2 - y1) / (x2 - x1)
//     long long x1, y1, x2, y2, x3, y3, x4, y4;
//     bool res;

//     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

//     res =  (x4 - x3) * (y2 - y1) == (y4 - y3) * (x2 - x1);
//     // cout << (y2 - y1) / (x2 - x1) << " " << (y4 - y3) / (x4 - x3) << endl;

//     if(res){
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }


// U. Straight Line
// int main(){
//     // if the slope between every two points are eqaul
//     // M = (y2 - y1) / (x2 - x1)
//     long long x1, y1, x2, y2, x3, y3;
//     bool res;

//     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

//     res =  (y2 - y1) * (x3 - x2) == (x2 - x1) * (y3 - y2);

//     if(res){
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }


// T. Circle Task
// int main(){
// 	int x1, y1, x, y, r, n;
// 	double destance;
// 	// √((x2 - x1)² + (y2 - y1)²)
// 	cin >> x1 >> y1 >> r >> n;

//     for (int i = 0; i < n; i++){
//         cin >> x >> y;
//         destance = sqrt(pow(x - x1, 2) + pow(y - y1, 2));
//         if(destance <= r){
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
// }


// N. Convert to Base
// int main(){
//     int t,  x, i = 0, lastNum, num;
//     long long sum = 0;
//     string nums = "", n;

//     cin >> t >> n >> x;

//     if(t == 1){
//         // 1A3
//         while(n != ""){
//             lastNum = (int)n[n.size() - 1];
//             if(lastNum >= 48 && lastNum <= 57){
//                 lastNum = (int)n[n.size() - 1] - '0';
//             } else {
//                 lastNum = (int)n[n.size() - 1] - 55;
//             }
//             // cout << lastNum << endl;
//             sum += lastNum * pow(x, i);
//             n.pop_back();
//             i++;
//         }
//     } else if (t == 2){
//         num = stoi(n);
//         while(num){
//             lastNum = num % x;
//             if(lastNum > 9){
//                 nums = (char)(lastNum + 55) + nums;
//             } else {
//                 nums = to_string(lastNum) + nums;
//             }
//             num /= x;
//             // cout << nums << endl;
//         }
//     }

//     if(t == 1){
//         cout << sum << endl;
//     } else {
//         cout << nums << endl;
//     }
// }


// K. Combination and Permutation
// long long factorial(int num){
// 	long long result = 1;
// 	for (int i = 1; i <= num; i++){
// 		// cout << i << endl;
// 		result *= i;
// 	}
// 	return result;
// }
// int main(){
// 	int n, r;
// 	cin >> n >> r;
// 	/*
// 	nCr = n!/(r!*(n-r)!)
// 	npr = n!/(n-1)!
// 	*/

// 	cout << factorial(n)/(factorial(r) * factorial(n - r)) << " ";
// 	cout << factorial(n)/factorial(n - r);
// }


// R. Distance points
// int main(){
// 	int x1, x2, y1, y2;
// 	double result;
// 	// √((x2 - x1)² + (y2 - y1)²)
// 	cin >> x1 >> y1 >> x2 >> y2;

// 	result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

// 	cout << setprecision(9) << fixed << result << endl;
// }


// S. Is Triangle
// int main(){
// 	int a, b, c;
// 	float s, result;

// 	cin >> a >> b >> c;

// 	if (a + b > c && a + c > b && b + c > a){
// 		cout << "Valid" << endl;
// 		s = (a + b + c) / 2;
// 		result = sqrt(s * (s - a) * (s - b) * (s - c));
// 		cout << setprecision(6) << fixed << result << endl;
// 	} else {
// 		cout << "Invalid" << endl;
// 	}
// }


// incomplete - 
// int main(){
// 	long long sum, x;
// 	string num;

// 	cin >> num >> x;

// 	while(num != ""){
// 		if(num.size() > 1000){
// 			sum = stoi(num.substr(num.size() - 1000, num.size() - 1)) / 1000;
// 		} else {
// 			sum = stoi(num.substr(0, num.size() - 1)) / 1000;
// 		}
// 	}
// }


// L. Pascal Triangle
// int main(){
// 	/*
// 	1          i = 0, j = 0
// 	1 1        i = 1, j = 1 > 1 1
// 	1 2 1      i = 2, j = 2 > 1 2 1
// 	1 3 3 1    i = 3, j = 3 > 1 3 3 1
// 	1 4 6 4 1  i = 3, j = 3 > 1 4 6 4 1
// 	calc:
// 	if(j != 0 && j != i)
// 		i - 1, j -1 + j
// 	else 
// 		1
// 	*/
// 	int n, sum, prev = 1;

// 	cin >> n;

// 	int nums[n][n];

// 	for (int i = 0; i < n; i++){
// 		for (int j = 0; j <= i; j++){
// 			if(j == 0 || j == i){
// 				nums[i][j] = 1;
// 				prev = 1;
// 				cout << '1' << " ";
// 			} else {
// 				sum = nums[i-1][j-1] + nums[i-1][j];
// 				cout << sum << " ";
// 				nums[i][j] = sum;
// 			}
// 		}
// 		cout << "\n";
// 	}
// }


// int main(){
// 	long long num; // 18
// 	cin>>num;
// 	bool first = true;
// 	int i, counter;

// 	// 2,3,4, ...... 50 ,......,100
// 	for (i = 2; i <= num/2; i++){
// 		counter = 0;
// 		while(num % i == 0){
// 			counter++;
// 			// cout << i << " " << num / i << endl;
// 			num /= i;
// 		}
// 		if(counter > 0){
// 			if(!first) cout << '*';
// 			cout << '(' << i << '^' << counter << ')';
// 			first = false;
// 		}
// 	}
//     if (num > 1) {
//         if (!first) cout << '*';
//         cout << '(' << num << "^1)";
//     }
// }



// int main(){
//     int a, b, c;
//     long long sum;

//     cin >> a >> b >> c;

//     if (a > b) swap(a, b);

//     // if(b % c != 0){
//     //     b = b - b%c;
//     // }

//     if(a % c != 0){
//         int num =  c - (a % c);
//         a += num;
//     }
//     b = b / c * c;

//     // cout << a << " " << b << endl;
//     // int numOfNums = b / c - (a / c - 1);
//     long long numOfNums = ((b - a) / c) + 1;
//     long long total = ((a + b) / 2.0) * numOfNums;
//     cout << total;
// }


// GCD & LCD
// int main(){
//     long long num1, num2, a, b, gcd = 1, lcd, test;

//     cin >> num1 >> num2;

//     a = max(num1, num2);
//     b = min(num1, num2);
//     while(b){
//         test = a;
//         a = b;
//         b = test % b;
//         // cout << a << " - " << b << endl;
//         if(b == 0){
//             gcd = a;
//         }
//     }
    
//     lcd = (num1 * num2) / gcd;
//     cout << gcd << " " << lcd << endl;
// }


// int main(){
//     long long num, sum = 0;

//     cin >> num;

//     for (int i = 1; i <= sqrt(num); i++){
//         if(num % i == 0){
//             // cout << i << endl;
//             sum += i;
//             if(i != sqrt(num)){
//                 // cout << num/i << endl;
//                 sum += num/i;
//             }
//         }
//     }
//     cout << sum << endl;
// }


// int main(){
//     long long num, counter = 0, l, res;

//     cin >> num;

//     l = (-1 * -sqrt(1 + 8 * num)) / 2;

//     while(true){
//         counter++;
//         cout << counter << endl;
//         res = (l + pow(l, 2)) / 2;
        
//         if(res > num){
//             l--;
//         } else {
//             cout << l;
//             return 0;
//         }
//     }
// }


// int main(){
//     long long A, B, Q;

//     cin >> A >> B >> Q;

//     int res = Q % 3;
//     if(res == 1){
//         cout << A << endl;
//     } else if(res == 2){
//         cout << B << endl;
//     } else {
//         cout << (A ^ B) << endl;
//     }
// }


// long long oddRange(long long num){
//     long long res = (num + 1) / 2;
//     long long finalRes = res * res;
//     return finalRes;
// }
// long long evenRange(long long num){
//     long long finalRes = num * (num + 1);
//     return finalRes;
// }

// int main(){
//     long long n, m;
//     long long total;

//     cin >> n >> m;

//     total = ((n + m) / 2.0) * (abs(m - n) + 1);
//     cout << total << endl;
    
//     cout << evenRange(max(n , m)/2) - evenRange((min(n , m)-1)/2) << endl;

//     cout << oddRange(max(n , m)) - oddRange(min(n , m)-1) << endl;


//     cout << (long long)pow(2, 31)-1 << endl;
//     cout << (long long)pow(10, 9) * 2<< endl;
// }


// int main(){
//     long long num;
//     bool isPrime = 1;

//     cin >> num;

//     if(num == 1 || num == 0){
//         isPrime = 0;
//     }

//     for (int i = 2; i <= sqrt(num); i++){
//         if(num % i == 0){
//             isPrime = 0;
//             break;
//         }
//     }

//     if(isPrime){
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }


// int main(){
//     long long num;

//     cin >> num;

//     double res = log2(num) / log2(2);

//     if(res - (int)res == 0){
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }
// }
