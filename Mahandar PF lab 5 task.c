#include<stdio.h>
int main(){
	int dept, specialization;
	printf("Choose a department\n1.Engineering \n2.Medicine \n3.Business\n");
	scanf("%d",&dept);
	switch(dept){
		case 1: 
		printf("You have choosen Engineering Department.\n");
		    printf("Choose the specialization\n1.COMPUTER SCIENCE \n2.MECHANICAL ENGINEERING \n3.ELECTRICAL ENGINEERING\n");
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
				printf("1.Kinetics \n2.Dynamics\n");
				break;
			case 3: 
				printf("You have choosen ELECTRICAL ENGINEERING specialization.\n");
               	printf("Course:\n");
				printf("1.Thermodynamics \n2.Electronics \n");			
				break;
			default:
				printf("INVALID INPUT");
		}
			break;
		case 2:
		printf("You have choosen Medical department\n");
		printf("Choose the specialization\n1.MBBS \n2.BDS \n3.NURSING)\n");
		switch(specialization){
			case 1:
				printf("You have choosen MBBS Specialization.\n");
				printf("Courses:\n");
				printf("1.Physiology \n2.Anatomy");
				break;
			case 2: 
				printf("You have choosen BDS specialization.\n");
				printf("Courses:\n");
				printf("1.Dental Anatomy \n2.Instrumental science");
				break;
			default:
				printf("INVALID INPUT");		
		}
		break;
	}
	return 0;
}

