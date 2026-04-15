#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;

double entropy(string s) {
    map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    double h = 0.0;
    int n = s.size();

    for (auto &p : freq) {
        double p_i = (double)p.second / n;
        h -= p_i * log2(p_i);
    }

    return h;
}

double redundancy(string s) {
    double h = entropy(s);
    double h_max = log2(s.size());
    return h_max - h;
}

int main() {
    string s = "aaaa";

    cout << entropy(s) << endl;
    cout << redundancy(s) << endl;

    return 0;
}
