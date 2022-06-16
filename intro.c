#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void)

{   
    //Einleitung
    printf("Hallo Reisender.\n\n\n");
    printf("Wilkommen in den dunklen Kerker der Terminals.\n");
    printf("Du willst sicher zurück in deine Welt...\n");
    printf("Dann lass uns keine weitere Zeit vergehen!\n\n\n");

    //Auswählen des Charakter
    int g;
    int zaehler =0;

    srand(time(NULL));
    rand();
    g=rand()%2 +1;

    printf("Bevor du auf die Reise gehen kannst, möchte ich wissen welches Geschlecht du bist?\n");
    printf("Lass uns doch dein Geschlecht Würfeln..\n");
    printf("5...");
        sleep(1);
    printf("\n\t4...\n");
        sleep(1);
    printf("\n\t\t3...\n");
        sleep(1);
    printf("\n\t\t\t2...\n");
        sleep(1);
    printf("\t\t\t\t1...\n");
        sleep(1);
    //printf("%i\n",g);   <-- Würfel darstellen
    //    sleep(1);

    char c;
    if (g<2)
    {
        printf("Ohh! Süß! Es ist ein Mann.\a\n");
        printf("Hier ein Bier.\n");
        // printf("Wie darf ich dich nennen?: \n");
        // getchar("%c",&Name);
    }
    else 
    {   printf("Ohh! Süß! Es ist eine Frau.\a\n");
        // printf("Wie darf ich dich nennen?: \n");
        // getchar("%c",&Name);
    }
    //while (c = getchar) <-- Muss noch ausgefüllt werden
    // {                     
    //     if (c== ' ')   <-- dort soll der Name übernommen werden  
    //          zaehler++;
    // }

    printf("Da wir nun wissen wie du heißt und welches Geschlecht du hast, können wir das Abenteuer beginnen");
    

return 0;
}

