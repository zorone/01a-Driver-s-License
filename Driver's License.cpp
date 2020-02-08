#include <stdio.h>

int main() {
    char people[2][5][10];
    int AvaibleCustomer;
    int temp;
    scanf("%s", people[0][0]);
    scanf("%d", &AvaibleCustomer);
    scanf("%s %s %s %s", people[0][1], people[0][2], people[0][3], people[0][4]);
    for (int i=0; i<4; i++){
        for (int j=0; people[0][i][j]!='\0';j++){
            for (int k=0; k<10-j; k++){
                people[1][i][0]+= people[0][i][j];
            }
        }
    }
    people[1][0][1]= people[1][0][0];
    for (int i=0; i<5; i++){
        for (int j=0; j<i; j++){
            if(people[1][i][0]<=people[1][j][0]){
                temp=people[1][i][0];
                people[1][i][0]=people[1][j][0];
                people[1][j][0]=temp;
            }
        }
    }
    for (int i=0; i<5; i++){
        if (people[1][i][0]==people[1][0][1]){
            printf("%d", i/AvaibleCustomer*20);
        }
    }
    return 0;
}