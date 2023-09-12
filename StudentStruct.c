// Create a structure Student. Create array of 10 students using MACRO and display data in tabular form.
#include<stdio.h>
#define size 10
struct stud {
    int id;
    char name[20];
    float per;
};
void main(){
        struct stud s1={1,"Ganesh",86.00}, s2={2,"Amay",70.44},s3={3,"Neha",60.70}, s4={4,"Vaishu",80.40}, s5={5,"Tejas",96.30}, s6={6,"Rohini",79.50}, s7={7,"Atharva",78.90}, s8={8,"Pranav",69.46}, s9={9,"Amay",47.89}, s10={10,"Rahul",57.87} ;
    
    printf("Student Information List:\n");
    
    printf(" %-5d %-10s %-10.2f \n",s1.id,s1.name,s1.per);
    printf(" %-5d %-10s %-10.2f \n",s2.id,s2.name,s2.per);
    printf(" %-5d %-10s %-10.2f \n",s3.id,s3.name,s3.per);
    printf(" %-5d %-10s %-10.2f \n",s4.id,s4.name,s4.per);
    printf(" %-5d %-10s %-10.2f \n",s5.id,s5.name,s5.per);
    printf(" %-5d %-10s %-10.2f \n",s6.id,s6.name,s6.per);
    printf(" %-5d %-10s %-10.2f \n",s7.id,s7.name,s7.per);
    printf(" %-5d %-10s %-10.2f \n",s8.id,s8.name,s8.per);
    printf(" %-5d %-10s %-10.2f \n",s9.id,s9.name,s9.per);
    printf(" %-5d %-10s %-10.2f \n",s10.id,s10.name,s10.per);
}