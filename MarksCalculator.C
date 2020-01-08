

#include <stdio.h>

int main()
{
    float number;
    float  InitialPercent, Obtained;
    int InitialMarks, FinalMarks;
    
    printf("\nEnter Initial Marks : ");
    scanf("%d",&InitialMarks);
    
    printf("Enter Final Marks : ");
    scanf("%d",&FinalMarks);
    
    while(1)
    {   
        printf("\n-------------------------------------------");
        printf("\nEnter marks in %d :",InitialMarks);
        scanf("%f",&number);
        InitialPercent = number/75;
        InitialPercent = InitialPercent*100;
        
        printf("\nPercent in %d is : %f",InitialMarks, InitialPercent);
        
        Obtained=(InitialPercent/100);
        Obtained = Obtained * 60;
        printf("\nMarks in %d is : %f",FinalMarks, Obtained);
	}
}
