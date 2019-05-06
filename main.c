#include <stdio.h>


int main(){
    int arrX = 3, arrY = 3; //arrayData row and col size 
    int arrayData[arrX][arrY]; //array used for data storage
    int row, col; 
    int max = 0;
    FILE *input; //File input pointer
    input = fopen("input.txt", "r"); //input is read from file
    
    //scans input file for integers and stores then in a 3x3 array
    for(row = 0; row < arrX; row++){
        for(col = 0; col < arrY; col++){
            
        fscanf(input,"%d", &arrayData[row][col]);
        
        }
    }
    
    //prints array
    for(row = 0; row < arrX; row++){
        for(col = 0; col < arrY; col++){
            
        printf("%d ", arrayData[row][col]);
        }
        printf("\n");
    }
    
    //finds and records max value in array
    for(row = 0; row < arrX; row++){
        for(col = 0; col < arrY; col++){
          
            if(arrayData[row][col] > max){
                max = arrayData[row][col];
            } 
        } 
    }
    printf("\nmax value in 3x3 array is %d\n", max);
    
    fclose(input);
    
    return 0;
}


