#include <stdio.h>
int LrgValue(int *x);

int main(){
    int arrayData[3][3];
    int row, col;
    int max = 0;
    FILE *input;
    input = fopen("input.txt", "r");
    
    //scans input file for integers and stores then in a 3x3 array
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            
        fscanf(input,"%d", &arrayData[row][col]);
        
        }
    }
    
    //prints array
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            
        printf("%d ", arrayData[row][col]);
        }
        printf("\n");
    }
    
    //finds and records max value in array
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
          
            if(arrayData[row][col] > max){
                max = arrayData[row][col];
            } 
        } 
    }
    printf("\nmax value in 3x3 array is %d\n", max);
    
    return 0;
}


