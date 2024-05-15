#include "function.h"

std::vector<int> myVector(std::vector<int> vect, int n)
{
    for (int i = 0; i < vect.size(); i++) {
        vect[i] = vect[i] + n;
    }
    return vect;
}
