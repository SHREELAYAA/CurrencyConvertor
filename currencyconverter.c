#include <stdio.h>
int main() {
    float rupee;
    float yen;
    float dollar;
    float amn;
    int choice;
    printf("                                Currency converter\n\n");
    printf("1.Rupee to Yen\n2.Yen to Rupee\n3.Yen to Dollar\n4.Dollar to Yen\n5.Rupee to Dollar\n6.Dollar to Rupee");
    printf("\n\nChoose one option: ");
    scanf("%d",&choice);
    
    if(choice==1){
        printf("\nEnter rupee: ");
        scanf("%f",&rupee);
        if(rupee>0){
            amn=rupee*1.87;
            printf("Yen: %f",amn);
        }
    }
    else if(choice==2){
        printf("Enter yen: ");
        scanf("%f",&yen);
        if(yen>0){
            amn=yen*0.53;
            printf("Rupee: %f",amn);
        }
    }
    else if(choice==3){
        printf("Enter yen: ");
        scanf("%f",&yen);
        if(yen>0){
            amn=yen*0.0064;
            printf("Dollar: %f",amn);
        }
    }
    else if(choice==4){
        printf("Enter dollar: ");
        scanf("%f",&dollar);
        if(dollar>0){
            amn=dollar*156.71;
            printf("Yen: %f",amn);
        }
    }
    else if(choice==5){
        printf("Enter rupee: ");
        scanf("%f",&rupee);
        if(rupee>0){
            amn=rupee*0.012;
            printf("Dollar: %f",amn);
        }
    }
    else if(choice==6){
        printf("Enter dollar: ");
        scanf("%f",&dollar);
        if(dollar>0){
            amn=dollar*0.012;
            printf("Rupee: %f",amn);
        }
    }
    else{
        printf("Invalid choice");
    }
    return 0;
}