#include <stdio.h>

int main(void)
{
    int Minutes;
    int Starttime;
    printf("Enter the run time of the movie in minutes:");
    scanf("%d", &Minutes);
    printf("Enter the time you start the movie:");
    scanf("%d", &Starttime);
    printf("\n");
    int Runtime= Minutes/60;
    int Runtime2= Minutes%60;
    int Endtime= Starttime+Runtime;
    int Endtime2= Starttime+Runtime2;
    printf("The run time of the movie is %d hours and %d minutes\n", Runtime, Runtime2);
    printf("You will finish the movie at %d:%d \n", Endtime, Endtime2);
}
