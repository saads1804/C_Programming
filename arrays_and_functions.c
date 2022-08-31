//ARRAY simple operations
#include<stdio.h>
#include<stdlib.h>

int arr[100],i,j,position,n,element,choice;

void menu();

void input(){
    printf("Enter Position of Variable:");
    scanf("%d",&position);
    position=position-1;
    if(position>n-1){
        printf("\n INVALID POSITION\n");
        menu();
    }
    printf("Enter Variable: ");
    scanf("%d",&element);
    for(i=n;i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    n=n+1;
    menu();
}

void output(){
    printf("\n THE ARRAY ENTERED IS:--\n");
    for(i=0;i<n;i++){
       printf("%d\t",*(arr+i));
    }
    menu();
}


void menu(){
       while(1){
            printf("select 1 for Input and 2 for Output");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    input();
                    break;
                case 2:
                    output();
                    break;
                default:
                    menu();
                    break;
            }
        }

}

int main(){

    printf("ENTER THE ELEMENTS OF ARRAY");
    i=0;
    while(1){
    printf("\nENTER THE ELEMENT:-\n");
    scanf("%d",arr+i);
    printf("\nDO YOU WANT TO ENTER ANOTHER ELEMENT PRESS ANY KEY ELSE PRESS 1\n");
    scanf("%d",&choice);
    if(choice == 1){
        n=i+1;
        menu();
    }
    i++;
   }

   return 0;
}
