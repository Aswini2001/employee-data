#include<stdio.h>
typedef struct 
{
	int empno;
	char empname[10];
    char deptname[10]; 
    int salary;
}empd;
void main()
{
	int i;
	empd a[3];
	for(i=0;i<3;i++){
	  printf("employee %d details ",i+1);
		printf("\nemployee number:");	
		scanf("%d",&a[i].empno);
		printf("\nemployee name:");
		scanf("%s",&a[i].empname);
		printf("\ndept name :");
		scanf("%s",&a[i].deptname);
		printf("\nsalary:");
		scanf("%d",&a[i].salary);
		}
			printf("empl no\templ name\tdepartment name \tsalary\n");
		for(i=0;i<3;i++)	{
			 printf("%d\t",a[i].empno);
				printf("%s\t\t",a[i].empname);
				printf("%s\t\t\t",a[i].deptname);
				printf("%d\n",a[i].salary);	
			}
			}

	 
