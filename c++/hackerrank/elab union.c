#include<stdio.h>
    union Time{
        int hours;
        int minutes;
        int seconds;
    };

int main(){

union Time startTime,stopTime,diff;

scanf("%d %d",&startTime.hours,&stopTime.minutes);
diff.seconds = startTime.hours-stopTime.minutes;
printf("%d\n",diff.seconds);

scanf("%d %d",&startTime.hours,&stopTime.minutes);
diff.seconds = startTime.hours-stopTime.minutes;
printf("%d\n",diff.seconds);

scanf("%d %d",&startTime.hours,&stopTime.minutes);
diff.seconds = startTime.hours-stopTime.minutes;
printf("%d\n",diff.seconds);


return 0;}