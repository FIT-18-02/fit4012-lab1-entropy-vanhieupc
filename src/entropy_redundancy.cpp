#include <iostream>
#include <map>
#include <cmath>
using namespace std;

double calculate_entropy(string s) {
    map<char, int> freq;
    for (char c : s) freq[c]++;

    double H = 0.0;
    int n = s.size();

    for (auto p : freq) {
        double prob = (double)p.second / n;
        H -= prob * log2(prob);
    }

    return H;
}

double calculate_redundancy(string s) {
    double H = calculate_entropy(s);

    int unique = map<char,int>(s.begin(), s.end()).size();
    double Hmax = log2(unique);

    if (Hmax == 0) return 0;

    return 1 - (H / Hmax);
}
