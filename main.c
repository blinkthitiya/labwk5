#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter,num;

    printf("input your number:");
    scanf("%d",&num);

    for(counter=1; counter<=num;counter++) {
        if(counter%2) printf("%d\n",counter);
    }

    puts("second loop");
    for(counter=1; counter<=num;counter++) {
        if(counter%5==0) printf("%d\n",counter);
    }

    printf("this is the last value %d", counter);

    return 0;
}
