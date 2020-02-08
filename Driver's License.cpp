#include <stdio.h>
#include<ctype.h>

int main() {
    char people[5][10];
    int people1[2][5];
    int AvaibleCustomer;
    int temp;
    scanf("%s", people[0]);
    scanf("%d", &AvaibleCustomer);
    scanf("%s %s %s %s", people[1], people[2], people[3], people[4]);
    for(int i=0; i<5; i++){
        for(int j=0; people[i][j]!='\0'; j++){
            people[i][j]=tolower(people[i][j]);
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; people[i][j]!='\0';j++){
            for (int k=0; k<10-j; k++){
                people1[0][i]+= people[i][j];
            }
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
            if(i%AvaibleCustomer==0){
            temp=(i)/AvaibleCustomer*20;
            }
            else{
                temp=(i+1)/AvaibleCustomer*20;
            }
        }
    }
    printf("%d", temp);
    return 0;
}