#include <stdio.h>

int oppsiteFaceOfDice(int n){
    return 7-n;
}

int main(){
    int n;
    input: printf("N = ");
    scanf("%d",&n);
    if(n < 1 || n > 6){
        printf("Invalid input\n");
        goto input;
    }
    int res = oppsiteFaceOfDice(n);
    printf("Oppsite face of dice is %d\n",res);
    return 0;
}