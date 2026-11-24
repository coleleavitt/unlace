/* Calendar arithmetic with a month switch. */
#include "corpus.h"

int is_leap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int days_in_month(int y, int m) {
    switch (m) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return is_leap(y) ? 29 : 28;
    default:
        return 0;
    }
}

int day_of_week(int y, int m, int d) {
    static const int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (m < 3)
        y -= 1;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

long days_from_civil(int y, int m, int d) {
    y -= m <= 2;
    long era = (y >= 0 ? y : y - 399) / 400;
    long yoe = y - era * 400;
    long doy = (153 * (m + (m > 2 ? -3 : 9)) + 2) / 5 + d - 1;
    long doe = yoe * 365 + yoe / 4 - yoe / 100 + doy;
    return era * 146097 + doe - 719468;
}

int valid_date(int y, int m, int d) {
    if (m < 1 || m > 12)
        return 0;
    return d >= 1 && d <= days_in_month(y, m);
}

const char *weekday_name(int w) {
    switch (w) {
    case 0: return "Sun";
    case 1: return "Mon";
    case 2: return "Tue";
    case 3: return "Wed";
    case 4: return "Thu";
    case 5: return "Fri";
    case 6: return "Sat";
    default: return "???";
    }
}

int main(void) {
    printf("leap=%d%d%d%d\n", is_leap(1900), is_leap(2000), is_leap(2024), is_leap(2023));
    printf("feb=%d %d\n", days_in_month(2024, 2), days_in_month(2023, 2));
    printf("dow=%s %s\n", weekday_name(day_of_week(2026, 10, 28)), weekday_name(day_of_week(1970, 1, 1)));
    printf("span=%ld\n", days_from_civil(2026, 10, 28) - days_from_civil(2000, 1, 1));
    printf("valid=%d%d%d\n", valid_date(2023, 2, 29), valid_date(2024, 2, 29), valid_date(2024, 13, 1));
    return day_of_week(2026, 10, 28);
}
