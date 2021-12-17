/*
* Author(s): Axel Vanherle & Tim Coenraerds
* Date: 19/12/2021
* Description: Code Blackjack-game.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define AANTAL_DEMO_KAARTEN 3
#define BEGIN_KAARTEN 2

int geefKaart();
int kaart1();
int kaart2();
int kaart3();
int kaart4();
int kaart5();
int kaart6();
int kaart7();
int kaart8();
int kaart9();
int kaart10();
int kaart11();
int kaart12();
int kaart13();
int randomKaart();
void printIntro(void);
void credits(void);

typedef enum
{
    spel,
    uitleg,
    credit,
    userInput,
    end
}fsmState;

int main(void)
{
    srand(time(NULL)); //Random seed

    char naam[26];
    int spelerNum [10];
    int bankNum[10];
    int inzet;

    fsmState volgendeStap = uitleg;

    while(1)
    {
        switch(volgendeStap)
        {
        //Deze stap print de intro.
        case uitleg:
            system("cls");
            system("color 0A");
            printIntro();
            getchar();

            volgendeStap = userInput;
            break;


        //Deze stap verzamelt de naam & inzet.
        case userInput:
            system("cls");
            system("color 0A");
            printf("Geef uw naam in: ");
            scanf("%25s", &naam);
            printf("Geef uw inzet in: ");
            scanf("%d", &inzet);

            volgendeStap = spel;
            break;

        //Hier begint het spel.
        case spel:
            {
                typedef enum
                {
                    start,
                    keuzeSpeler,
                    keuzeBank,
                    controleSpeler,
                    controleBank
                }fsmState2;

                fsmState2 volgStap = start;

                    while (1)
                    {
                        char yesNoSpeler;
                        switch(volgStap)
                        {
                        case start:
                            system("cls");
                            system("mode con: lines=70");
                            system("color 0E");

                            //begin kaarten van de speler
                            for(int i = 0; i < BEGIN_KAARTEN; i++)
                            {
                            spelerNum[i] = geefKaart();
                            }

                            int spelerHvl, bankHvl;
                            spelerHvl = spelerNum[0] + spelerNum[1];
                            printf("U heeft op dit moment %d.\n", spelerHvl);
                            printf("----------------------------------------------\n");

                            //begin kaarten bank
                            for(int i = 0; i < BEGIN_KAARTEN; i++)
                            {
                                bankNum[i] = geefKaart();
                            }

                            bankHvl = bankNum[0] + bankNum[1];
                            printf("De bank heeft %d.\n", bankHvl);
                            printf("----------------------------------------------\n");

                            volgStap = keuzeSpeler;
                            break;

                        case (keuzeSpeler):

                            do
                            {
                            printf("Wilt u nog een kaart krijgen? (y/n): \n");

                            yesNoSpeler = getchar();

                            printf("test\n");
                            printf("test\n");
                            printf("test\n");
                            printf("test\n");

                            putchar(yesNoSpeler);
                            }
                            while (yesNoSpeler != 'n');

                            volgStap = keuzeBank;
                        break;
                        case (keuzeBank):
                            printf("test");
                            return 0;
                        }
                    }
                }
            }
        }
    }

int geefKaart()
{
	int kaart = randomKaart();
	int score = 0;
	switch (kaart)
	{
	  case 1:
	    score = kaart1();
	    break;
	  case 2:
	    score = kaart2();
	    break;
	  case 3:
	    score = kaart3();
	    break;
	  case 4:
	    score = kaart4();
	    break;
	  case 5:
	    score = kaart5();
	    break;
	  case 6:
	    score = kaart6();
	    break;
	  case 7:
	    score = kaart7();
	    break;
	  case 8:
	    score = kaart8();
	    break;
	  case 9:
	    score = kaart9();
	    break;
	  case 10:
	    score = kaart10();
	    break;
	  case 11:
	    score = kaart11();
	    break;
	  case 12:
	    score = kaart12();
	    break;
	  case 13:
	    score = kaart13();
	    break;
	  default:
	    score = 0;
	    printf("Woops something went horribly wrong ... ");
	    break;
	}
	return score;
}

int randomKaart()
{
	int getal = (rand() % 13) +1;
	return getal;
}

int kaart1()
{
  int a=0;
	char invoerGebruiker[10] = "";
  printf(" _________ \n");
  printf("|A        |\n");
  printf("|+   *    |\n");
  printf("|    !    |\n");
  printf("|  *-+-*  |\n");
  printf("|    |    |\n");
  printf("|   ~~~  +|\n");
  printf("|        V|\n");
  printf(" ~~~~~~~~~ \n");

	// a moet 11 of 1 worden a.d.h.v. user input
  return a;
}

int kaart2()
{
	int a=2;
	printf(" _________ \n");
	printf("|2        |\n");
	printf("|+        |\n");
	printf("|    +    |\n");
	printf("|         |\n");
	printf("|    +    |\n");
	printf("|        +|\n");
	printf("|        Z|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart3()
{
	int a=3;
	printf(" _________ \n");
	printf("|3        |\n");
	printf("|+   +    |\n");
	printf("|         |\n");
	printf("|    +    |\n");
	printf("|         |\n");
	printf("|    +   +|\n");
	printf("|        E|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart4()
{
	int a=4;
	printf(" _________ \n");
	printf("|4        |\n");
	printf("|+        |\n");
	printf("|  +   +  |\n");
	printf("|         |\n");
	printf("|  +   +  |\n");
	printf("|        +|\n");
	printf("|        b|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart5()
{
	int a=5;
	printf(" _________ \n");
	printf("|5        |\n");
	printf("|+        |\n");
	printf("|  +   +  |\n");
	printf("|    +    |\n");
	printf("|  +   +  |\n");
	printf("|        +|\n");
	printf("|        S|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart6()
{
	int a=6;
	printf(" _________ \n");
	printf("|6        |\n");
	printf("|+ +   +  |\n");
	printf("|         |\n");
	printf("|  +   +  |\n");
	printf("|         |\n");
	printf("|  +   + +|\n");
	printf("|        9|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart7()
{
	int a=7;
	printf(" _________ \n");
	printf("|7        |\n");
	printf("|+ +   +  |\n");
	printf("|    +    |\n");
	printf("|  +   +  |\n");
	printf("|         |\n");
	printf("|  +   + +|\n");
	printf("|        L|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart8()
{
	int a=8;
	printf(" _________ \n");
	printf("|8 +   +  |\n");
	printf("|+        |\n");
	printf("|  +   +  |\n");
	printf("|         |\n");
	printf("|  +   +  |\n");
	printf("|        +|\n");
	printf("|  +   + 8|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart9()
{
	int a=9;
	printf(" _________ \n");
	printf("|9 +   +  |\n");
	printf("|+        |\n");
	printf("|  +   +  |\n");
	printf("|    +    |\n");
	printf("|  +   +  |\n");
	printf("|        +|\n");
	printf("|  +   + 6|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart10()
{
	int a=10;
	printf(" _________ \n");
	printf("|10+   +  |\n");
	printf("|+   +    |\n");
	printf("|  +   +  |\n");
	printf("|         |\n");
	printf("|  +   +  |\n");
	printf("|    +   +|\n");
	printf("|  +   +0l|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}
int kaart11()
{
	int a=10;
	printf(" _________ \n");
	printf("|J /~~|_  |\n");
	printf("|+ | o`,  |\n");
	printf("|  | -|   |\n");
	printf("| =~)+(_= |\n");
	printf("|   |- |  |\n");
	printf("|  `.o | +|\n");
	printf("|  ~|__/ P|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart12()
{
	int a=10;
	printf(" _________ \n");
	printf("|Q |~~~|  |\n");
	printf("|+ /o,o\\  |\n");
	printf("|  \\_-_/  |\n");
	printf("| _-~+_-~ |\n");
	printf("|  /~-~\\  |\n");
	printf("|  \\o`o/ +|\n");
	printf("|  |___| Q|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

int kaart13()
{
	int a=10;
	printf(" _________ \n");
	printf("|K |/|\\|  |\n");
	printf("|+ /o,o\\  |\n");
	printf("|  \\_-_/  |\n");
	printf("| ~-_-~-_ |\n");
	printf("|  /~-~\\  |\n");
	printf("|  \\o`o/ +|\n");
	printf("|  |\\|/| X|\n");
	printf(" ~~~~~~~~~ \n");
	return a;
}

void printIntro(void)
{
	printf(" _    _ _____ _     _____ ________  __ _____\n");
	printf("| |  | |  ___| |   /  __ \\  _  |  \\/  |  ___|\n");
	printf("| |  | | |__ | |   | /  \\/ | | | .  . |  |__\n");
	printf("| |/\\| |  __|| |   | |   | | | | |\\/| |   __|\n");
	printf("\\  /\\  / |___| |___| \\__/\\ \\_/ / |  | |  |___\n");
	printf(" \\/  \\/\\____/\\_____/\\____/\\___/\\_|  |_/\\____/\n\n\n");

	printf(" _____\n");
	printf("|_   _|\n");
	printf("  | | ___\n");
	printf("  | |/ _ \\\n");
	printf("  | | (_) |\n");
	printf("  \\_/\\___/\n\n\n");

	printf("______ _       ___  _____  _   __   ___  ___  _____  _   __\n");
	printf("| ___ \\ |     / _ \\/  __ \\| | / /  |_  |/ _ \\/  __ \\| | / /\n");
	printf("| |_/ / |    / /_\\ \\ /  \\/| |/ /     | / /_\\ \\ /  \\/| |/ / \n");
	printf("| ___ \\ |    |  _  | |    |    \\     | |  _  | |    |    \\ \n");
	printf("| |_/ / |____| | | | \\__/\\| |\\  \\/\\__/ / | | | \\__/\\| |\\  \\\n");
	printf("\\____/\\_____/\\_| |_/\\____/\\_| \\_/\\____/\\_| |_/\\____/\\_| \\_/\n");

	printf("\n\nHet doel van Black Jack is winnen van de bank. Je wint als je meer punten hebt dan de bank, maar niet meer dan 21.\nJe wilt dus zo dicht mogenlijk bij 21 te komen, zonder erover te gaan.\n");
	printf("\nDuw op enter als U klaar bent ...");
}

void credits(void)
{
    printf("Game gemaakt door: \n\n");

    printf(".------..------..------..------.\n");
    printf("|A.--. ||X.--. ||E.--. ||L.--. |\n");
    printf("| (\/)  || :/\:  || (\/)  || :/\:  |\n");
    printf("| :\/:  || (__) || :\/:  || (__) |\n");
    printf("| '--'A|| '--'X|| '--'E|| '--'L|\n");
    printf("`------'`------'`------'`------'\n");
    printf(".------..------.\n");
    printf("|E.--. ||N.--. |\n");
    printf("| (\/)  || :(): |\n");
    printf("| :\/:  || ()() |\n");
    printf("| '--'E|| '--'N|\n");
    printf("`------'`------'\n");
    printf(".------..------..------.\n");
    printf("|T.--. ||I.--. ||M.--. |\n");
    printf("| :/\:  || (\/)  || (\/)  |\n");
    printf("| (__) || :\/:  || :\/:  |\n");
    printf("| '--'T|| '--'I|| '--'M|\n");
    printf("`------'`------'`------'\n");
}
