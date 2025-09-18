#include<stdio.h>
int main(){
	int dept, specialization;
	printf("Choose a department(1. Engineering 2. Medicine 3.Business)\n");
	scanf("%d",&dept);
	switch(dept){
		case 1: 
		printf("You have choosen Engineering Department.\n");
		    printf("Choose the specialization(1.COMPUTER SCIENCE 2.MECHANICAL ENGINEERING 3.ELECTRICAL ENGINEERING)\n");
            scanf("%d",&specialization);
			switch(specialization){
			case 1:
				printf("You have choosen COMPUTER SCIENCE  Specialization.\n");
				printf("Courses:\n");
				printf("1.Programming \n2.OOPS\n");
				break;
			case 2: 
				printf("You have choosen MECHANICAL ENGINEERING  specialization.\n");
				printf("Course:\n");
				printf("1.Kinetics 2. Dynamics\n");
				break;
			case 3: 
				printf("You have choosen ELECTRICAL ENGINEERING specialization.\n");
               	printf("Course:\n");
				printf("1.Thermodynamics 2.Electronics \n");			
				break;
			default:
				printf("INVALID INPUT");
		}
			break;
		case 2:
		printf("You have choosen Medical department\n");
		printf("Choose the specialization(1.MBBS 2.BDS 3.NURSING)\n");
		switch(specialization){
			case 1:
				printf("You have choosen MBBS Specialization.\n");
				printf("Courses:\n");
				printf("1.Physiology 2.Anatomy");
				break;
			case 2: 
				printf("You have choosen BDS specialization.\n");
				printf("Courses:\n");
				printf("1.Dental Anatomy 2.Instrumental science");
				break;
			default:
				printf("INVALID INPUT");		
		}
		break;
	}
	return 0;
}

