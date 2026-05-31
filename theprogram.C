#include <stdio.h>
#include <stdlib.h>

//My custom librarys
#include "MyMath0.h"
#include "MyMath1.C"



int main() {

    int choose,x,y;

    Menu();

    printf("\nPlease choose [1-5]\n");

    scanf("%d",&choose);
    printf("\n\n");
    

    switch (choose) {

    case 1 :

    printf("Please enter two number\n");
    scanf("%d%d",&x,&y);



    if (x == y) {

        printf("[%d = %d]",x,y);

    } else {
        
        printf("%d is min value",min(x,y));

    }


    break;



    case 2 :
    
    printf("Please enter two number\n");
    scanf("%d%d",&x,&y);

    

    if (x == y) {

        printf("[%d = %d]",x,y);

    } else {
        
        printf("%d is min value",max(x,y));

    }


    break;



    case 3 :
    
    printf("Please enter a number\n");
    scanf("%d",&x);


    printf("It's --> %d",square(x));


    break;



    case 4 :
    
    printf("Please enter a number\n");
    scanf("%d",&x);


    printf("It's --> %d",cube(x));


    break;



    case 5 :

    printf("Please enter a number\n");
    scanf("%d",&x);
    

    printf("|%d|",absolute(x));


    break;



    default:

    printf("\nYOU MUST CHOOSE A VALUE [1-5]!\n");


    break;


    }
    
    return 0 ; 

}
