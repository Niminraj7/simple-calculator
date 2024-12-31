#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void operations(){
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Division");
    printf("\n5. modulo");
    printf("\n6. power");
    printf("\n7. exit");
    return;
}

double divi(double a, double b){
    if(b==0){
        fprintf(stderr,"\nNot Defined");
        return NAN; // NOT A NUMBER --> from math.h
    }
    else{
        double res = a/b;
        return res;
    }
}

double modulo(int a, int b){
    if(b==0){
        fprintf(stderr,"\nNot Defined");
        return NAN; // NOT A NUMBER --> from math.h
    }
    else{
        int res = a % b;
        return res;
    }
}

int main(){
    printf("SIMPLE CALCULATOR\n");
    while(1){ //odd loop, not an infinite loop
        printf("\n***********************************************************\n");
        int n;
        double a, b;
        printf("welcome to the simple calculator for two numbers\n");
        printf("choose the operation: \n");

        operations();
        
        printf("\nEnter the operation you want to perform: ");
        scanf("%d",&n);

        if(n==7){
        break;
        }

        switch(n){
            case 1:
            printf("\nEnter the first number: ");
            scanf("%lf",&a);
            printf("Enter the second number: ");
            scanf("%lf",&b);
            printf("\nThe addition of %lf and %lf is: %lf",a,b,a+b);
            break;

            case 2:
            printf("\nEnter the first number: ");
            scanf("%lf",&a);
            printf("Enter the second number: ");
            scanf("%lf",&b);
            printf("\nsubtracting %lf from %lf, we get: %lf",b,a,a-b);
            break;

            case 3:
            printf("\nEnter the first number: ");
            scanf("%lf",&a);
            printf("Enter the second number: ");
            scanf("%lf",&b);
            printf("\nThe product of %lf and %lf is: %lf",a,b,a*b);
            break;

            case 4:
            printf("\nEnter the dividend: ");
            scanf("%lf",&a);
            printf("Enter the divisor: ");
            scanf("%lf",&b);
            printf("\nDividing %lf by %lf, we get: %lf",a,b,divi(a,b));
            break;

            case 5:
            printf("\nEnter the dividend: ");
            scanf("%lf",&a);
            printf("Enter the divisor: ");
            scanf("%lf",&b);
            printf("\nThe reminder after we divide %lf by %lf is: %lf",a,b,modulo(a,b));
            break;

            case 6:
            printf("\nEnter the base: ");
            scanf("%lf",&a);
            printf("Enter the power: ");
            scanf("%lf",&b);
            printf("\nThe base %lf to the power %lf is: %lf",a,b,pow(a,b));
            break;

            default:
            printf("\ninvalid operation");
        }
        printf("\n");
    }
    return 0;
}
