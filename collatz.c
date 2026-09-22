#include <stdint.h>
#include <stdio.h>
int main(void) {
    uint64_t count = 0;
    for (uint64_t start = 1; ; start++) {
        uint64_t n = start;
        count++;
        while (n != 1) {
            printf("%llu\n", (unsigned long long)count);
            if (n&1){
                n=3*n+1;
            }
            else {
                n>>=1;
                }
        }
    }
    return 0;
}
