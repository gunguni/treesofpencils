#include <stdio.h>

int main() {
    int days = 1329, years, weeks, remaining_days;
    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = (days % 365) % 7;
    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, remaining_days);
    return 0;
}