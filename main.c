#include <stdio.h>

int main(){
    int arrayData[3][3];
    int row, col, max = 0, xloc, yloc;
    FILE *input;
    input = fopen("input.txt", "r");
    
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            fscanf(input, "%d", &arrayData[row][col]);
        }
    }
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            if(arrayData[row][col] > max){
                max = arrayData[row][col];
                xloc = col+1;
                yloc = row+1;
            }
        }
    }
    printf("\nmax value in array is %d, and it located at (%d)(%d)\n", max, xloc, yloc);
        
    fclose(input);
    
    return 0;
}


