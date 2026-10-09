#include <stdio.h>

void function(int n) {
    int count = 0;   // operation counter
    int i = 1;
    count++;
    int s = 1;
    count++;

    // loop runs while s <= n
    while ( s <= n)
    {
        count++;   // for i++
        i++;
        count++;   // for s += i
        s += i;
        count++;
    }

    count++;   // final failed condition check
    printf("%d\n", count);
}

int main() {
    int n;
    scanf("%d", &n);
    function(n);
    return 0;
}
