#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void) {
    char reminders[MAX_REMIND][MSG_LEN+3];
    char date_time_str[15], month_str[3],day_str[3], time_str[6], msg_str[MSG_LEN+1];
    int month, day, hour, min, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }
        printf("Enter date, time and reminder: ");
        scanf("%02d/%02d", &month, &day);
        if (day == 0)
            break;
        sprintf(month_str, "%02d", month);
        sprintf(day_str, "%02d", day);
        scanf("%2d:%2d", &hour, &min);
        sprintf(time_str, "%02d:%02d", hour, min);
        read_line(msg_str, MSG_LEN);
        if (day < 0 || day > 31 || month < 1 || month > 12) {
            printf("Invalid date. Discarding reminder...\n");
            continue;
        } else if (hour < 0 || hour > 23 || min < 0 || min > 59 ){
            printf("Invalid time. Discarding reminder...\n");
            continue;
        }
        strcpy(date_time_str, month_str);
        strcat(date_time_str, "/");
        strcat(date_time_str, day_str);
        strcat(date_time_str, " ");
        strcat(date_time_str, time_str);

        for (i = 0; i < num_remind; i++)
            if (strcmp(date_time_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j] , reminders[j-1]);
        
        strcpy(reminders[i], date_time_str);
        strcat(reminders[i], msg_str);
        num_remind++;
    }

    printf("\n  Date  Time Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
