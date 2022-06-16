#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void)

{

        int a =1;
        int b =2;
        


    printf("Da wir alles geklärt haben können wir das Abenteuer beginnen lassen.");
        sleep(1);
    printf ("\nWir betreten den Keller.\n");
        sleep(1);
    printf ("Vor uns steht ein Kobold.\n");
        sleep(1);
    printf("Der Kobold sagt:\n");
        sleep(1);
    printf("Wohin desweges ?\n");
        sleep(1);
    printf("\tGeht dir gar nichts an!(1)\n");
        sleep(1);
    printf ("\tIch suche den Ausgang.(2)\n");
        sleep(1);
    printf("Entscheide dich: \n");
    scanf("%d",&a,&b);

    int c =1;
    int d =2;

    if (a<=1)
    {
        printf("!Der Kobold greift dich an!\n");
        sleep (1);
        printf("Du schaust nach rechts und siehst eine Brechstange(1)\n");
        printf("\nDu schaust nach links und siehst ein Tamagotchi(2)\n");
        printf("Wähle Weise: ");
        scanf("%d",&c,&d);
    }
    else if (c<1)
    {
        printf("Du greifst zur Brechstange und schlägst zu!");
        
        srand(time(NULL));   //Muss kontrolliert werden 
        rand();
        int zufall;
        zufall = rand()%100;

        printf("Du fügst den Kobold %i Schaden zu.",zufall);
    }
    else if (a>=1) 
    {
        printf("Der Kobold lässt dich passieren und folgt dir.");
    }
    
    


    return 0;
}