#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int rownumber,actualnumberofraws,actualnumberofcolumns;
    int yellowcounter,greencounter,bluecounter,graycounter,purplecounter,orangecounter;
    actualnumberofraws=(n*2)-1;
    actualnumberofcolumns=((n-1)*2)+1;
    for(rownumber=0;rownumber<n;rownumber++) //row controller for upper part
    {
        //green part
        for(greencounter=0;greencounter<rownumber;greencounter++)
        {
            printf("%d ",n-greencounter);
            
        }
        //yellow part
        for(yellowcounter=0;yellowcounter<actualnumberofcolumns-2*rownumber;yellowcounter++)
        {
            printf("%d ",n-rownumber);
            
        }
        //sky blue part
        for(bluecounter=0;bluecounter<rownumber;bluecounter++)
        {
            printf("%d ",n-rownumber+1+bluecounter);
            
        }
        printf("\n");
        
    }
    for(rownumber=0;rownumber<actualnumberofraws-n;rownumber++) //row controller for lower part
    {
        //gray part
        for(graycounter=0;graycounter<actualnumberofraws-n-rownumber;graycounter++)
        {
            printf("%d ",n-graycounter);
            
        }
        //purple part
        for(purplecounter=0;purplecounter<actualnumberofraws-n-graycounter+rownumber+1;purplecounter++)
        {
            printf("%d ",actualnumberofraws-n-graycounter+2);
            
        }
        //orange part
        for(orangecounter=0;orangecounter<actualnumberofcolumns-purplecounter-graycounter;orangecounter++)
        {
            printf("%d ",actualnumberofraws-n-graycounter+2+orangecounter);
            
        }

        if(rownumber!=actualnumberofraws-n-1) //to prevent new line after last row
        {
        printf("\n");
        
        }
    }
    return 0;
}