#include<iostream>
#include<cmath>
#include<ctime>
#include<vector>

// int max(int x, int y) {
//     return (x>y)?x:y;
// }
// double max(double x, double y) {
//     return (x>y)?x:y;
// }
// char max(char x, char y) {
//     return (x>y)?x:y;
// }

template <typename T, typename U>

auto max(T x , U y) {
    return (x>y)?x:y;
}

int main() {
    std::cout << max(5.12,'8'-'0')<< '\n';
    return 0;
}