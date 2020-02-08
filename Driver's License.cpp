#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
    char people[5][10];
    long long int people1[2][5];
    int AvailableCustomer;
    long long int temp;
    scanf("%s", people[0]);
    scanf("%d", &AvailableCustomer);
    scanf("%s %s %s %s", people[1], people[2], people[3], people[4]);
    for(int i=0; i<5; i++){
        for(int j=0; people[i][j]!='\0'; j++){
            people[i][j]=tolower(people[i][j]);
        }
    }

    printf("   people[i][j]-96                           people1[0][i]\n");
    printf(" people[i][j]          (people[i][j]-96)*pow(26, 10-j)\n");
    printf(" j            pow(26, 10-j)\n");

    for (int i=0; i<4; i++){
        for (int j=0; people[i][j]!='\0';j++){
            people1[0][i] += (people[i][j] - 96)* pow (26, 10-j);
            printf("%2d %3Ld %2Ld %15Ld %15Ld %15Ld\n", j, people[i][j], people[i][j]-96, pow(26, 10-j), (people[i][j]-96)*pow(26, 10-j), people1[0][i]);
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
    printf ("%Ld %Ld %Ld %Ld %Ld\n", people[0][0], people[0][1], people[0][2], people[0][3], people[0][4]);

    for (int i=0; i<5; i++){
        if (people1[0][i]==people1[1][0]){
            temp = i*20;
            printf("%d %Ld", i, temp);
        }
    }
    return 0;
}