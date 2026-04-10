#include <iostream>
#include <map>
#include <cmath>
using namespace std;

double calculate_entropy(string text) {
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
    double entropy = calculate_entropy(text);
    double max_entropy = log2(256); // ASCII = 8
    return max_entropy - entropy;
}

int main() {
    string text;

    cout << "Nhap chuoi: ";
    cin >> text;

    double entropy = calculate_entropy(text);
    double redundancy = calculate_redundancy(text);

    cout << "Entropy: " << entropy << endl;
    cout << "Redundancy: " << redundancy << endl;

    return 0;
}
