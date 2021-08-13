#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lcs(const char A[],const char B[],const int n, const int m) {
    int table[n+1][m+1];
    memset(table, 0, sizeof(table));
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < m+1; j++) {
            if (A[i-1] == B[j-1]) table[i][j] = table[i-1][j-1] + 1;
            else table[i][j] = max(table[i-1][j], table[i][j-1]);
        }
    }
    return table[n][m];
}

int main() {
    char a[] = "didactical";
    char b[] = "advantage";
    int result = lcs(a, b, strlen(a), strlen(b));
    printf("%d\n", result);
    
    return 0;
}
