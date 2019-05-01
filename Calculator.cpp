# include "FinalProject.h"

int main () { 
	short choice = 0,NumberValues=0;
	float Val = 0, Division=0, Divider=0, Value1=0, Value2=0;
	char answer='a';
	float values = 0;
	short ReadNumber=0;

	
	do {
		system("cls");
		DisplayTitle("Calculator");
		DisplayMenu();
		choice = ReadChoice();
		
		switch (choice)
		{
			
		case 1:
		do {
			system("cls");
			DisplayTitle("Calculator");
			DisplayTitle("Addition");
			ReadNumber = ReadNumberOperator("add");
			TotalAddition(ReadNumber);
			answer = MoreCalculs("Addition");
		} while ((answer == 'Y') || (answer == 'y'));
		break;

		case 2:

			do {
				system("cls");
				DisplayTitle("Calculator");
				DisplayTitle("Division");
				Division = ReadValuesDivision();
				Divider = ReadDivider();
				DisplayTotal(Divider, Division);
				answer = MoreCalculs("Division");

			} while ((answer == 'Y') || (answer == 'y'));
			break;

		case 3:
			do{
			system("cls");
			DisplayTitle("Calculator");
			DisplayTitle("Subtraction");
			Value1 = ReadFirstVSubstraction();
			Value2 = ReadSecondVSubtraction();
			DisplayTotalSubtraction(Value1, Value2);
			answer = MoreCalculs("Substraction");
			} while ((answer == 'Y') || (answer == 'y'));
			break;

		case 4:
			do {
				system("cls");
				DisplayTitle("Calculator");
				DisplayTitle("Multiplication");
				ReadNumber = ReadNumberOperator("Multiply");
				DisplayTotalMultiplication(ReadNumber);
				answer = MoreCalculs("Multiplication");

			} while ((answer == 'Y') || (answer == 'y'));
			break;

		case 5:
			exit(0);
			break;

		}//end  switch

	} while ((answer == 'N') || (answer == 'n'));


system("pause");
return 0;
}//end main