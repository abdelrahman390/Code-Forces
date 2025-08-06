#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;


int main(){
    
}


// int main(){
//     int num, terget;
//     string word, key, original, NewStr = "";
//     key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
//     original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

//     cin >> num >> word;

//     if(num == 1){
//         for (int i = 0; i < word.size(); i++){
//             terget = original.find(word[i]);
//             NewStr += key[terget];
//         }
//     } else{
//         for (int i = 0; i < word.size(); i++){
//             terget = key.find(word[i]);
//             NewStr += original[terget];
//         }
//     }

//     cout << NewStr << endl;
// }


// int main(){
//     int target;
//     string word;

//     cin >> word;

//     // BRITISHEGYPTGHANA
//     while(word.find("EGYPT") <= 1000){
//         target = word.find("EGYPT");
//         // cout << target << endl;
//         word.replace(target, 5, " ");
//     }
//     cout << word << endl;
// }


// int main(){
//     string word;
//     int e, g, y, p, t;
//     e = g = y = p = t = 0;
//     int counter = 0;

//     cin >> word;

//     for (int i = 0; i < word.size(); i++){
//         if((int)word[i] == 69 || (int)word[i] == 101){
//             e++;
//         } else if((int)word[i] == 71 || (int)word[i] == 103){
//             g++;
//         } else if((int)word[i] == 89 || (int)word[i] == 121){
//             y++;
//         } else if((int)word[i] == 80 || (int)word[i] == 112){
//             p++;
//         } else if((int)word[i] == 84 || (int)word[i] == 116){
//             t++;
//         }
//     }
//     cout << min({e, g, y, p, t}) << endl;
// }


// int main(){
//     int target, end, lastEnd = 0;
//     string word;

//     cin >> word;

//     // http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager

//     target = word.find("username");
//     end = word.find("&");
//     cout << "username: " << word.substr(target + 9, end - (target + 9)) << endl;
//     lastEnd = end;
    
//     target = word.find("pwd");
//     end = word.find("&", lastEnd + 1);
//     cout << "pwd: " << word.substr(target + 4, end - (target + 4)) << endl;
//     lastEnd = end;
    
//     target = word.find("profile");
//     end = word.find("&", lastEnd + 1);
//     cout << "profile: " << word.substr(target + 8, end - (target + 8)) << endl;
//     lastEnd = end;

//     target = word.find("role");
//     end = word.find("&", lastEnd + 1);
//     cout << "role: " << word.substr(target + 5, end - (target + 5)) << endl;
//     lastEnd = end;

//     target = word.find("key");
//     end = word.find("&", lastEnd + 1);
//     cout << "key: " << word.substr(target + 4, end - (target + 4)) << endl;
//     lastEnd = end;
// }


// int main(){
//     int counter = 0, l = 0, r = 0, lastEnd = 0;
//     char c;
//     string word;

//     cin >> word;

//     string words[word.size() / 2];

//     for (int i = 0; i < word.size(); i++){
//         c = word[i];
//         if(c == 'L'){
//             l++;
//         } else {
//             r++;
//         }

//         // LRLRLRLRRL
//         if(r == l){
//             // cout << lastEnd<<  " " << i+1 << " " << word.substr(lastEnd, i + 1 - lastEnd) << endl;
//             words[counter] = word.substr(lastEnd, i + 1 - lastEnd);
//             counter++;
//             lastEnd = i+1;
//             l = 0;
//             r = 0;
//         }
//     }

//     cout << counter << endl;
//     for (int i = 0; i < counter; i++){
//         cout << words[i] << endl;
//     }
// }


// int main(){
//     int n, i = 0;
//     long long score = 0;
//     string word;

//     cin >> n >> word;

//     // for (int i = 0; i < word.size(); i++){
//     while (i < word.size()) {
//         char c = word[i];
//         // cout << word[i] << " " << score << " " << word << endl;
//         if(c == 'V'){
//             score += 5;
//         } else if(c == 'W'){
//             score += 2;
//         } else if(c == 'X'){
//             if(i != word.size()-1)
//                 word[i + 1] = 'q';
//         } else if(c == 'Y'){
//             if(i != word.size()-1){
//                 word.push_back(word[i + 1]);
//                 word[i + 1] = 'q';
//             }
//         } else if(c == 'Z'){
//             if(i != word.size()-1){
//                 if(word[i+1] == 'V'){
//                     score /= 5;
//                     word[i + 1] = 'q';
//                 } else if(word[i+1] == 'W'){
//                     score /= 2;
//                     word[i + 1] = 'q';
//                 }
//             }
//         }
//         i++;
//     }
//     cout << score << endl;
// }


// int main(){
//     string word;
//     bool first = 0;

//     while (cin >> word){
//         if(first){
//             cout << " ";
//         }
//         first = 1;
//         for (int i = word.size()-1; i >= 0; i--){
//             cout << word[i];
//         }
//     }
// }

// int main(){
//     int counter = 0;
//     bool word = 0;
//     string line;

//     getline(cin, line);

//     // Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...
//     for (int i = 0; i < line.size(); i++){
//         // cout << line[i] << " " << ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')) << endl;
//         if ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')){
//             word = 1;
//         } else {
//             if(word){
//                 counter++;
//                 word = 0;
//             }
//         }

//         if(i == line.size()-1 && word){
//             counter++;
//         }
//     }
//     cout << counter << endl;
// }


// String Functions
// int main(){
//     int n, m, l, r;
//     string word, operation;

//     cin >> n >> m;
//     cin >> word;

//     while(m--){
//         cin >> operation;

//         if("substr" == operation){
//             cin >> l >> r;
//             cout << word.substr(l - 1, word.size()) << endl;
//         } else if("sort" == operation){
//             cin >> l >> r;
//             sort(word.begin() + l-1, word.begin() + r);
//         } else if("pop_back" == operation){
//             word.pop_back();
//         } else if("back" == operation){
//             cout << word.back() << endl;
//         } else if("reverse" == operation){
//             cin >> l >> r;
//             reverse(word.begin() + l - 1, word.begin() + r);
//         } else if("front" == operation){
//             cout << word.front() << endl;
//         } else if("push_back" == operation){
//             cin >> l;
//             word.push_back(l);
//         } else if("print" == operation){
//             cin >> l;
//             cout << word[l-1] << endl;
//         }
//     }
// }


// int main(){
//     int n;
//     string word1, word2, newWord;

//     cin >> n;

//     while(n--){
//         cin >> word1 >> word2;
//         newWord = "";

//         // ey gpt
//         // cout << word1 << " " << word2 << endl;
//         for (int i = 0; i < max(word1.size(), word2.size()); i++){
//             if (i < word1.size() && i < word2.size()){
//                 // cout << newWord << " " << word1[i] << " " << word2[i] << endl;
//                 newWord += word1[i];
//                 newWord += word2[i];
//             } else if (i < word1.size()){
//                 newWord += word1[i];
//             } else if (i < word2.size()){
//                 newWord += word2[i];
//             }
//         }
//         cout << newWord << endl;
//     }
// }


// int main(){
//     int counter = 0;
//     char currChar = '#';
//     string word;

//     cin >> word;

//     char characters[word.size() + 1];
//     strcpy(characters, word.c_str());

//     sort(characters, characters + word.size());
//     // cout << characters << endl;
//     for (int i = 0; i < word.size(); i++){
//         if(currChar == '#'){
//             currChar = characters[i];
//             counter = 1;
//             continue;
//         } 

//         if(currChar == characters[i]){
//             counter++;
//         } else {
//             cout << characters[i-1] << " : " << counter << endl;
//             currChar = characters[i];
//             counter = 1;
//         }
//         if(i == word.size() - 1){
//             cout << characters[i] << " : " << counter << endl;
//         }
//         // cout << currChar << " " << counter << endl;
//     }
// }


// int main(){
//     string word;

//     cin >> word;

//     for (int i = word.size() - 1; i >= 0; i--){
//         // cout << word[i] << " " << word[word.size()-i-1] << endl;
//         if(word[i] != word[word.size()-i-1]){
//             cout << "NO" << endl;
//             return 0;
//         }
//     }
//     cout << "YES" << endl;
// }


// good
// int main(){
//     int n;
//     string word;
//     bool good;

//     cin >> n;

//     while(n--){
//         good = 0;
//         cin >> word;

//         // 11111110
//         // 10101010101010
//         for (int i = 0; i < word.size(); i++){
            
//         }

//     }
// }


// int main(){
//     string word;

//     getline(cin, word);

//     for (int i = 0; i < word.size(); i++){
//         if (word[i] == ',') {
//             word[i] = ' ';
//         } else if (isupper(word[i])) {
//             word[i] = tolower(word[i]);
//         } else if (islower(word[i])) {
//             word[i] = toupper(word[i]);
//         }
//     }
//     cout << word << endl;
// }


// int main() {
//     int n;
//     string word;

//     cin >> n;

//     for (int i = 0; i < n; i++){
//         cin >> word;

//         if(word.size() <= 10){
//             cout << word << endl;
//         } else {
//             cout << word[0] << (word.size() - 2) << word[word.size() - 1] << endl;
//         }
//     }
// }


// int main(){
//     int sum = 0;
//     string nums;

//     cin >> nums;

//     for (int i = 0; i < nums.size(); i++){
//         sum += nums[i] - '0';
//     }
//     cout << sum << endl;
// }


// int main(){
//     string word1, word2;
//     char swap;

//     getline(cin, word1);
//     getline(cin, word2);

//     cout << word1.size() << " " << word2.size() << endl;
//     cout << word1 + word2<< endl;
//     swap = word1[0];
//     word1[0] = word2[0];
//     word2[0] = swap;
//     cout << word1<< " " << word2 << endl;
// }


// int main() {
//     string word1, word2;

//     getline(cin, word1);
//     getline(cin, word2);

//     if(word1 == word2){
//         cout << word1 << endl;
//         return 0;
//     }

//     if(word1 < word2){
//         cout << word1 << endl;
//     } else {
//         cout << word2 << endl;
//     }
// }


// int main() {
//     string word1;

//     getline(cin, word1, '\\');

//     cout << word1 << endl;
// }


// int main() {
//     string word1, word2;

//     getline(cin, word1);
//     getline(cin, word2);

//     cout << word1.size() << " " << word2.size() << endl;
//     cout << word1 << " " << word2 << endl;
// }