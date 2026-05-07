#include <stdio.h>

int main(void)
{
    int Minutes;
    int Starttimeh;
    int Starttimem;
    printf("Enter the run time of the movie in minutes:");
    scanf("%d", &Minutes);
    printf("Enter the time you start the movie:");
    scanf("%d:%d", &Starttimeh, &Starttimem);
    printf("\n");

    int Runtime= Minutes/60;
    int Runtime2= Minutes%60;

    int Endtime= Starttimeh+Runtime; //endtime = 8
    int Endtime2= Starttimem+Runtime2; //endtime = 61

    if (Endtime2 >= 60){
        Endtime = Endtime + (Endtime2 / 60); //update variable value
        Endtime2 = Endtime2 % 60;
    }

    printf("The run time of the movie is %d hours and %d minutes\n", Runtime, Runtime2);
    printf("You will finish the movie at %d:%02d \n", Endtime, Endtime2);
}
