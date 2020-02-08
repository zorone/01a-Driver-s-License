#include <stdio.h>
#include<ctype.h>

int main() {
    char people[2][5][10];
    int AvaibleCustomer;
    int temp;
    scanf("%s", people[0][0]);
    scanf("%d", &AvaibleCustomer);
    scanf("%s %s %s %s", people[0][1], people[0][2], people[0][3], people[0][4]);
    for(int i=0; i<5; i++){
        for(int j=0; people[i][j]!='\0'; j++){
            people[0][i][j]=tolower(people[0][i][j]);
        }
    }
    people[1][0][0]=people[0][0][0];
    for (int i=0; i<5; i++){
        for(int j=0; j<i; j++){
            for(int k=0; people[0][i][k]!='\0'||people[0][j][k]!='\0'; k++){
                if(people[0][i][k]<people[0][j][k]){
                    for(int l=0; people[0][i][l]!='\0'&&people[0][j][l]!='\0'; l++){
                        temp=people[0][i][l];
                        people[0][i][l]=people[0][j][l];
                        people[0][j][l]= temp;
                    }
                }
                else if(people[0][i][k]>people[0][j][k]){
                    break;
                }
                else{
                    continue;
                }
            }
        }
    }
    
    for (int i=0; i<5; i++){
        if (people1[0][0][i]==people1[1][0]){
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