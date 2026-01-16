// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     map<char, int> mp;
//     for(char ch : s) {
//         mp[ch]++;
//     }

//     for(auto it : mp) {
//         if(it.second > 1) {
//             cout << it.first << " ";
//         }
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < n; i++) {
        int freq[256] = {0};

        for(char ch : s[i]) {
            freq[ch]++;
        }

        cout << "Duplicate characters in \"" << s[i] << "\": ";
        for(int j = 0; j < 256; j++) {
            if(freq[j] > 1) {
                cout << (char)j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
