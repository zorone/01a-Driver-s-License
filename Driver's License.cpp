#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char people[2][5][10];
    int AvailableCustomer;
    char temp;
    scanf("%s", people[0][0]);
    scanf("%d", &AvailableCustomer);
    scanf("%s %s %s %s", people[0][1], people[0][2], people[0][3], people[0][4]);
    
	printf("%s %s %s %s %s %s %d %d\n", people[0][0], people[0][1], people[0][2],
	         people[0][3], people[0][4], people[1][0], AvailableCustomer, temp);
	         
    for(int i=0; i<5; i++){
        for(int j=0; people[0][i][j]!='\0'; j++){
            people[0][i][j]=tolower(people[0][i][j]);
        }
    }
    
	printf("%s %s %s %s %s %s %d %d\n", people[0][0], people[0][1], people[0][2],
	         people[0][3], people[0][4], people[1][0], AvailableCustomer, temp);
	         
    strcpy(people[1][0], people[0][0]);
    
    printf("%s %s %s %s %s %s %d %d\n", people[0][0], people[0][1], people[0][2],
	         people[0][3], people[0][4], people[1][0], AvailableCustomer, temp);
    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<10; k++){
                if(people[0][i][k]<people[0][j][k]){
                    for(int l=0; l<10; l++){
                        temp=people[0][i][l];
                        people[0][i][l]=people[0][j][l];
                        people[0][j][l]= temp;
                        
                        printf("s %s %s %s %s %s %s %d %d\n", people[0][0], people[0][1], people[0][2],
	         people[0][3], people[0][4], people[1][0], AvailableCustomer, temp);
	         
                    }
                }
                else if(people[0][i][k]>people[0][j][k]){
                	
                	printf("b %s %s %s %s %s %s %d %d\n", people[0][0], people[0][1], people[0][2],
	         people[0][3], people[0][4], people[1][0], AvailableCustomer, temp);
	         
                    break;
                }
                else if (people[0][i][k]=='\0'){
                	
                	printf("c %s %s %s %s %s %s %d %d\n", people[0][0], people[0][1], people[0][2],
	         people[0][3], people[0][4], people[1][0], AvailableCustomer, temp);
	         
                    break;
                }
                else if (people[0][j][k]=='\0'){
                	
                	for(int l=0; l<10; l++){
                        temp=people[0][i][l];
                        people[0][i][l]=people[0][j][l];
                        people[0][j][l]= temp;
                        
                        printf("s %s %s %s %s %s %s %d %d\n", people[0][0], people[0][1], people[0][2],
	         people[0][3], people[0][4], people[1][0], AvailableCustomer, temp);
	         
                    }
                }
                else{
                	
                	printf("c %s %s %s %s %s %s %d %d\n", people[0][0], people[0][1], people[0][2],
	         people[0][3], people[0][4], people[1][0], AvailableCustomer, temp);
	         
                    continue;
                }
            }
        }
    }
    
    /*for (int i=0; i<5; i++){
        if (people[1][i][0]==people[1][0][0]){
            if(i%AvailableCustomer==0){
            temp=(i)/AvailableCustomer*20;
            }
            else{
                temp=(i+1)/AvailableCustomer*20;
            }
        }
    }
    printf("%d", temp);*/
    return 0;
}
