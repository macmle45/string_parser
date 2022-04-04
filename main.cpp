#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char commas;
    int n;

    //vector array for parsed integers from string
    vector<int> parsed_integers;

    // retrieve data from string stream in while loop
    while (ss >> n) {
        parsed_integers.push_back(n);
        ss >> commas;
    }

    return parsed_integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}