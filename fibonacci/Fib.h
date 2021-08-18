#pragma once

class Fib {
private:
    int f, g;
public:
    Fib(int n) { f = 0; g = 1; while (g < n) next(); }
    int get() { return g; }
    int next() { g += f; f = g - f; return g; }
    int prev() { f = g - f; g -= f; return g; }
}