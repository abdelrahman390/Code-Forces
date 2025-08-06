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


int main() {
    int n;
    bool first = 1;
    string str;
    string prev = "";
    bool possible = 1;

    cin >> n;

    while(n--){
        cin >> str;
        map<char, int> testMap;
        string result = "";
        string subStr = "";
        int ind = 0;
        cout << "possible: " <<possible<< endl;
        if(possible){

            for (int i = 0; i < str.size(); i++)
            {
                testMap[str[i]]++;
            }
    
            for (auto& p : testMap)
            {
                for (int i = 0; i < p.second; i++)
                {
                    if(first){
                        result.push_back(p.first);
                    } else {
                        cout << "result: " << result << " " << (result < prev)  << endl;
                        if(result < prev){
                            cout << "p.first: " << p.first << " prev[ind]: " << prev[ind]  << endl;
                            if(p.first < prev[ind]){
                                subStr.push_back(p.first);
                            } else {
                                result.push_back(p.first);
                                ind++;
                                if(result + subStr >= prev){
                                    // result.push_back(subStr);
                                    result += subStr;
                                    subStr = "";
                                }
                            }
                        } else {
                            subStr.push_back(p.first);
                        }
                    }
                }
            }
        }

        cout << result << " prev " << prev << endl;
        if(first || result < prev){
            cout << result << endl;
        } else {
            cout << -1 << endl;
            possible = 0;
        }
        prev = result;
        first = 0;
        cout << "prev: " << prev << endl;
        cout << "---------------" << endl;
    }
}