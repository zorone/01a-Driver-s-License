#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
    char people[5][10];
    double people1[2][5];
    int AvailableCustomer;
    double temp;
    scanf("%s", people[0]);
    scanf("%d", &AvailableCustomer);
    scanf("%s %s %s %s", people[1], people[2], people[3], people[4]);
    for(int i=0; i<5; i++){
        for(int j=0; people[i][j]!='\0'; j++){
            people[i][j]=tolower(people[i][j]);
        }
    }

    for (int i=0; i<4; i++){
        for (int j=0; people[i][j]!='\0';j++){
            people1[0][i] += (people[i][j] - 96)* pow (26, 10-j);
        }
    }
    people1[1][0]= people1[0][0];
    for (int i=0; i<5; i++){
        for (int j=0; j<i; j++){
            if(people1[0][i]<=people1[0][j]){
                temp=people1[0][i];
                people1[0][i]=people1[0][j];
                people1[0][j]=temp;
            }
        }
    }

    for (int i=0; i<5; i++){
        if (people1[0][i]==people1[1][0]){
            temp = (i+1)*20;
            printf("%.0lf", temp);
        }
    }
    return 0;
}
