#include <stdio.h>
#include <time.h>

int main() {
    time_t start_time, end_time;
    double elapsed;

    int n = 0;

    time(&start_time);
    while (n < 100000000*100000000) {
        n++;
    }
    time(&end_time);

    elapsed = difftime(end_time, start_time);
    printf("Elapsed time: %f seconds\n", elapsed);
    printf("start_time: %ld, end_time: %ld\n", start_time, end_time);
    
    return 0; 
}