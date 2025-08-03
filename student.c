#include<stdio.h>
#include<string.h>

struct student

{
    char name[20];
    int roll;
};

int main(){
    for(int i=0; i<=3; i++){
        
    
    struct student s1[3];
    print("Enter student roll no.: ");
    scanf("%d", &s1[i].roll);
    printf("The roll no. is %d: s1.roll");
    strcpy(s1.name,"Arup");
    printf("\nName:%s", s1[i].name);
    return 0;
}