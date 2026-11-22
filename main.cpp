#include <string>
#include <vector>

void min_of_two() {
    int a = 33, b = 57;
    int m = (a < b) ? a : b;
    (void)m;
}

void sum_squares() {
    int acc = 0;
    for (int i = -5; i <= 5; ++i) acc += i * i;
    (void)acc;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void count_zeros() {
    int n = 102030;
    int zeros = 0;
    while (n > 0) { if (n % 10 == 0) zeros += 1; n /= 10; }
    (void)zeros;
}

extern "C" int silver_ripple();
extern "C" void lunar_compass();
extern "C" void sable_quartz();
extern "C" void hidden_thorn();
extern "C" void gentle_harbor();

int main() {
    min_of_two();
    sum_squares();
    square_value();
    count_zeros();
    lunar_compass();
    sable_quartz();
    hidden_thorn();
    gentle_harbor();
    return silver_ripple();
}
