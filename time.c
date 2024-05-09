#include <stdio.h>

int main() {
    int total_seconds;
    printf("Enter the total number of seconds: ");
    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600; // 1 hour = 3600 seconds
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("Converted time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
