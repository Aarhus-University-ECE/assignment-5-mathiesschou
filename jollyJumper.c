#include "jollyjumper.h"
#include <stdbool.h>
#include <stdlib.h>

int isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/

    // laver en boolean række 
    int exist[size - 1];

    // laver en for-løkke, der der igennem alle være, og sætter
    // alle værdier som falsk
    for(int i = 0; i < size - 1; i++)
    {
        exist[i] = 0;
    }

    // laver et for-løkke, der går igennem alle elementer i rækken
    for(int i = 0; i < size - 1; i++)
    {
        // laver en variabel t, der kan give forskellen
        int t; 

        // hvis vores værdi 'i' er større end værdien 'i+1'
        // så udregner vi forskellen
        if(seq[i] > seq[i + 1])
        {
            t = seq[i] - seq[i + 1];
        }
        // ellers udregner vi forskellen den anden vej
        // i+1 - i
        else
        {
            t = seq[i + 1] - seq[i];
        }
        
        // hvis vores t er større end 0, og t er mindre en størrelsen
        // så eksisterer der en jolly jumper
        if(t > 0 && t < size)
            exist[t - 1] =  1;
    }    
    
        // tilsidst tjekker alle hele rækken igen
        // hvis vi har en værdi, der ikke opfylder vores jolly jumper
        // så siger vi der ikke eksisterer en jullyjumper
        for(int i = 0; i < size; i++)
        {
            if(exist[i] == 0)
            return 0;
        }

// post: svar til 7a
    return 1;
}