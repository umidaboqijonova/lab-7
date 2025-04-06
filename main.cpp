#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//problem 1
// int main() {
//     int n,m;
//     int sum=0;
//     cout<<"Enter the number of rows and columns of matrix:";
//     cin>>n>>m;
//     int arr[n][m];
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             cin>>arr[i][j];
//             sum += arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<"The sum is: "<<sum;
// }

//problem 2
// int main() {
//     int n,m;
//     cout<<"Enter the number of rows and columns of matrix:"; cin>>n>>m;
//     int arr[n][m];
//     cout<<"Enter the elements of matrix"<<endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin>>arr [i][j];
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         int max = arr[i][0];
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] > max) {
//                 max = arr[i][j];
//             }
//         }
//         cout<<"Maximum number in a row: "<< max<<endl;
//     }
//     cout<< endl;
// }

//problem 3
// int main() {
//     int n,m;
//     cout<<"Enter the number of rows and columns of matrix:"; cin>>n>>m;
//     int arr[n][m];
//     cout<<"Enter the elements:"<<endl;
//     for (int i = 0; i < n; i++) { //rows
//         for (int j = 0; j < m; j++) { //columns
//             cin>>arr[i][j];
//         }
//     }
//     for (int j = 0; j < m; j++) {
//         int sum = 0;
//         for (int i = 0; i < n; i++) {
//             sum += arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }

//problem 4
// int main() {
//     int n,m;
//     cout<<"Enter the size of square matrix:";
//     cin>>n>>m;
//     int arr[n][m];
//     cout<<"Enter the elements: "<<endl;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     int sum=0;
//     for (int i=0;i<n;i++) {
//         sum += arr[i][i];
//     }
//     cout<<sum<<endl;
// }

//problem 5
// int main() {
//     int n,m;
//     cout<<"Enter the number of rows and columns of matrix: ";
//     cin>>n>>m;
//     int arr_org [n][m];
//     int arr_new [m][n];
//     cout<<"The elements: "<<endl;
//     for (int i = 0; i < n; i++) { //rows
//         for (int j = 0; j < m; j++) { //columns
//             cin>>arr_org [i][j];
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for ( int j = 0; j < m; j++) {
//             arr_new [j][i] = arr_org [i][j];
//         }
//     }
//     for (int i = 0; i < m; i++) { //m is rows
//         for (int j = 0; j < n; j++) { //n is columns
//             cout<<arr_new [i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// problem 6
// int main() {
//     int m1, n1, m2, n2;
//     cout << "Enter rows and columns of Matrix A: ";
//     cin >> m1 >> n1;
//     cout << "Enter rows and columns of Matrix B: ";
//     cin >> m2 >> n2;
//     if (n1 != m2) {
//         cout << "Matrix multiplication not possible. Columns of A must match rows of B." << endl;
//         return 0;
//     }
//     int A[m1][n1], B[m2][n2], C[m1][n2];
//     cout << "Enter elements of Matrix A: " << endl;
//     for (int i = 0; i < m1; i++) {
//         for (int j = 0; j < n1; j++) {
//             cin >> A[i][j];
//         }
//     }
//     cout << "Enter elements of Matrix B: " << endl;
//     for (int i = 0; i < m2; i++) {
//         for (int j = 0; j < n2; j++) {
//             cin >> B[i][j];
//         }
//     }
//     for (int i = 0; i < m1; i++) {
//         for (int j = 0; j < n2; j++) {
//             C[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < m1; i++) {
//         for (int j = 0; j < n2; j++) {
//             for (int k = 0; k < n1; k++) {  // or k < m2
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
//     cout << "Resultant Matrix C:" << endl;
//     for (int i = 0; i < m1; i++) {
//         for (int j = 0; j < n2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//problem 7
// int main() {
//     int a;
//     cout<<"Enter the size: ";
//     cin>>a;
//
//     int arr[a][a];
//     cout<<"Elements: "<<endl;
//     for (int i = 0; i < a; i++) {
//         for (int j = 0; j < a; j++) {
//             cin>>arr[i][j];
//         }
//     }
//     for (int i = 0; i < a; i++) {
//         for (int j = i+1; j < a; j++) {
//             swap(arr[j][i], arr[i][j]);
//         }
//     }
//     for (int i = 0; i < a; i++) {
//         reverse (arr[i],arr[i]+a);
//     }
//     for (int i = 0; i < a; i++) {
//         for (int j = 0; j < a; j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//   strings

//problem 1
// int main() {
//     string s;
//     int vowels=0, constants = 0;
//     getline(cin, s);
//     for (int i=0; s.length()>i; i++) {
//         char ch=s[i];
//         if (ch>='a' && ch<='z') {
//             if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//                 vowels++;
//             else
//                 constants++;
//         }
//     }
//     cout <<"vowels:"<< vowels<<endl;
//     cout <<"constants:"<< constants;
// }

//problem 2
// int main() {
//    string s;
//    getline(cin, s);
//    reverse(s.begin(), s.end());
//    cout<<s;
//}

//problem 3
// int main() {
//     string s, str1;
//     getline(cin, s);
//     str1=s;
//     reverse(s.begin(), s.end());
//     if (str1==s) {
//         cout<<"yes";
//     }else
//         cout<<"no";
//     }

//problem 4
// char mostFrequentchar(string s) {
//     int count[256]={0};
//     for(int i=0;i<s.length();i++)
//         count[s[i]]++;
//     int max=0;
//     char mostChar;
//     for(int i=0;i<256;i++)
//         if(count[i]>max)
//             mostChar=(char)i;
//     return mostChar;
//
// }
// int main() {
//     string s;
//     char result;
//     getline(cin, s);
//     result=mostFrequentchar(s);
//     if (result=='\0') {
//        cout<<"empty";
//     }else
//         cout<<result;
// }

//problem 5
// string removeDuplicates(string s) {
//     bool seen[256] = {false};
//     string result = "";
//     for (int i = 0; i < s.length(); i++) {
//         if (!seen[s[i]]) {
//             result += s[i];
//             seen[s[i]] = true;
//         }
//     }
//     return result;
// }
// int main() {
//     string s;
//     getline(cin, s);
//     cout << removeDuplicates(s);
// }

//problem 6
// int main() {
//     string sentence;
//     getline(cin, sentence);
//     string word = "", longest = "";
//     for (int i = 0; i < sentence.length(); i++){
//         if (sentence[i] != ' ') {
//             word +=sentence[i];
//         } else {
//             if (word.length() > longest.length()) {
//                 longest = word;
//             }
//             word = "";
//         }
//     }
//     if (word.length() > longest.length()) {
//         longest = word;
//     }
//     cout << longest << endl;
// }

// problem 7
// bool areAnagrams(string a, string b) {
//     if (a.length() != b.length()) return false;
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
//     return a == b;
// }
// int main() {
//     string str1, str2;
//     cin >> str1 >> str2;
//     if (areAnagrams(str1, str2))
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;
// }
