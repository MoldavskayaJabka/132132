#include <vector>

std::vector<int> increase_elements(std::vector<int>& vec, int n) {
    for (int& element : vec) {
        element += n;
    }
    return vec;
}
