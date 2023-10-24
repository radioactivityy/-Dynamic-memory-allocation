


int main () { 
    char movement, command;
    int direction = 0;
    int row, col, i, j, count;
    scanf("%d %d", &row, &col);
 
    int (*display)[row][col] = malloc(sizeof *display);
for (int i = 0; i < row; i++ ) {
    for (int j = 0; j < col; j++)
    {
    (*display) [i][j] = '.';
    }

    
}

int column = 0;
int rows = 0;

while(1){
    scanf("%c", &command);
    if (command == 'x') {
        break;
    }
    if(command == 'r'){
        if(direction == 3){
            direction = 0;
        }else{
            direction ++;
        }
        
        
    }
    if(command == 'l'){
        if(direction == 0){
            direction = 3;
        }else{
            direction --;
        }
        
        
    }
    
    else if(command == 'm'){
        movement = command;
    }

if (movement == 'm') {
    if (direction== 0){
        if(rows == row - 1){
            rows = 0;
        }else{
            rows ++;
        }
    } else if (direction== 1){
        if(column == col - 1){
            column = 0;
        }else{
            column ++;
        }
    } else if (direction== 2){
        if(rows == 0){
            rows = row - 1;
        }else{
            rows --;
        }
    } else if (direction == 3){
        if(column == 0){
            column = col - 1;
        }else{
            column --;
        }
    }
} 

movement = ' ';

if(command == 'o'){
    (*display) [column][rows] = 'o';
}

}







for (int i = 0; i < row; i++ ) {
    for (int j = 0; j < col; j++)
    {
        printf("%c", (*display) [i][j]);

    }
    printf("\n");
    
}

free(display);
return 0;
}


