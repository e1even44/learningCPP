#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>

	int einzahlung;
	int auszahlung;

	int kontostand = 0;


int main()
{
	// Umlaute aktivieren
	system("chcp 1252");
	printf("\n\r");

	//Einzahlen - E
	//Auszahlen - A
	//Zurück - Z


	printf("\n\r . . . . . . . . . . . . . . .  Bankkonto . . . . . . . . . . . . . . .  \n\r");

	int kontonummer[10];

	for (unsigned char i = 0; i <= 9; i++)
	{
		printf("Konto[%u]: ", i);
	}

	printf("\n\r\n\rKontonummer: ");
	scanf("%i", &kontonummer);

	printf("\n\rEinzahlen: E"
		"\n\rAuszahlen: A"
		"\n\rZurück: Z\n\r");

	unsigned char eingabe = 0;

	printf("\nEingabe: ");
	while (getchar() != '\n');
	scanf("%c", &eingabe);

	int positiv = kontostand + einzahlung;
	int negativ = kontostand - auszahlung;


	if (eingabe == 'E')
	{
		printf("\n\rWie viel Geld möchten Sie einzahlen?: ", &einzahlung);
		scanf("%i", &einzahlung);

		printf("\n\rNeuer Saldo nach Einzahlung: %i", (kontostand + einzahlung));

	}
	//auto int acc_no;
	//float add_money;

	//printf("Enter account number you want to deposit money:");
	//scanf("%d", &acc_no);
	//printf("\nThe current balance for account %d is %f \n",
	//	acc_no, account[acc_no - 1].available_balance);
	//printf("\nEnter money you want to deposit :  ");
	//scanf("%f", &add_money);

	//while (acc_no = account[acc_no - 1].acc_number)
	//{
	//	account[acc_no - 1].available_balance =
	//		account[acc_no - 1].available_balance + add_money;
	//	printf("\nThe New balance for account %d is %f \n",
	//		acc_no, account[acc_no - 1].available_balance);
	//	break;
	//}acc_no++;


	if (eingabe == 'A')
	{
		printf("\n\rWie viel Geld möchten Sie abbuchen?: ", &auszahlung);
		scanf("%i", &negativ);

		printf("\n\rNeuer Saldo nach Abbuchung: %i", &negativ);

	}
	
	else if (eingabe == 'Z')
	{
		printf("Zurück zum Hauptmenü...");
		return-1;
	}




}