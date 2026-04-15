#include <iostream>
#include <map>
#include <cmath>
#include <string>

using namespace std;

double calculate_entropy(string text) {
    if (text.empty()) return 0;

    map<char, int> freq;

    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    int len = text.length();

    for (auto pair : freq) {
        double p = (double)pair.second / len;
        entropy -= p * log2(p);
    }

    return entropy;
}

double calculate_redundancy(string text) {
    if (text.empty()) return 0;

    map<char, int> freq;

    for (char c : text) {
        freq[c]++;
    }

    int unique = freq.size();

    if (unique <= 1) return 0;

    double entropy = calculate_entropy(text);
    double max_entropy = log2(unique);

    return 1 - (entropy / max_entropy);
}

int main() {
    string text;

    cout << "Nhap chuoi: ";
    getline(cin, text);

    double entropy = calculate_entropy(text);
    double redundancy = calculate_redundancy(text);

    cout << "Entropy: " << entropy << endl;
    cout << "Redundancy: " << redundancy << endl;

    return 0;
}
