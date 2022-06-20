#include <stdio.h>
#include <string.h>

int main()
{

    char name[100],date_ch,blood_group[5],ch1,ch2,ch3,ch4,id[20];

    int DD,MM,YEAR;
    int id_first,id_middle, id_end;

    printf("PLease input your Name : \n");
    gets(name);


    printf("PLease input your date of birth DD/MM/YEAR : \n");
    scanf("%d %c %d %c %d",&DD,&ch1, &MM, &ch2, &YEAR);

    
    getchar();

    printf("Your ID : \n");
    gets(id);



    printf("Please input your Blood group : \n");
    scanf("%s",&blood_group);


    printf("Name : %s\n",name);
    printf("Birth of Date : %d %c %d %c %d\n",DD,ch1,MM,ch2,YEAR);
    

    printf("Id : %s\n",id);

    printf("Blood Group : %s\n",blood_group);


    return 0;
    
}