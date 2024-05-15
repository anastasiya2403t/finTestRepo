#include <iostream>
#include <vector>
#include "function.h"

using namespace std;

int main()
{
    int x = 0;
    vector<int> vec1, vec2;
    while (cin >> x) {
        vec1.push_back(x);
        if (getchar() == '\n') break;
    }
    cout << "Input the Number" << endl;
    int N = 0;
    cin >> N;
    vec2 = myVector(vec1, N);

    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }
}