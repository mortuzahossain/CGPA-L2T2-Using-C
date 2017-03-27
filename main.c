#include <stdio.h>
int main()
{

    float eee2205,eee2207,eee2215,math2213,hum2279;
    float eee2206,eee2208,mamlab,project;
    float total = 22;
    float cal = 0;
    float achievement;
    // Theory input
    printf("+++++++++++++++ Theory Subject +++++++++++++++\n\n\n");
    printf("Enter Electronics Grade Point: \n");
    scanf("%f",&eee2205);
    printf("Enter Machine Grade Point: \n");
    scanf("%f",&eee2207);
    printf("Enter Electromagnetic Grade Point: \n");
    scanf("%f",&eee2215);
    printf("Enter Math Grade Point: \n");
    scanf("%f",&math2213);
    printf("Enter Accounting Grade Point: \n");
    scanf("%f",&hum2279);

    // Lab input
    printf("\n\n+++++++++++++++ Theory Subject +++++++++++++++\n\n\n");
    printf("Enter Electronics Grade Point: \n");
    scanf("%f",&eee2206);
    printf("Enter Machine Grade Point: \n");
    scanf("%f",&eee2208);
    printf("Enter MatLab Grade Point: \n");
    scanf("%f",&mamlab);
    printf("Enter Protious Project Grade Point: \n");
    scanf("%f",&project);

    // calculation Algorithm


    achievement = (eee2205*3)+(eee2207*4)+(eee2215*3)+(math2213*3)+(hum2279*3)+(eee2206*1.5)+(eee2208*1.5)+(mamlab*1.5)+(project*1.5);
    cal = achievement/total;

    printf("\n\nYour CGPA is : \t %.2f\n\n\n",cal);

    return 0;
}
