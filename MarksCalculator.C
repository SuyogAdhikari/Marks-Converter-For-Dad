

#include <stdio.h>

int main()
{
    float number;
    float  InitialPercent, Obtained;
    int InitialMarks, FinalMarks;
	int FinalFullMarks, FinalFullMarks;
    
    printf("Enter Initial Full Marks : ");
    scanf("%d",&InitialFullMarks);

    printf("\nEnter Initial Obtained Marks : ");
    scanf("%d",&InitialMarks);
    
    printf("Enter Final Full Marks : ");
    scanf("%d",&FinalFullMarks);

    printf("Enter Final Obtained Marks : ");
    scanf("%d",&FinalMarks);

    
    while(1)
    {   
        printf("\n-------------------------------------------");
        printf("\nEnter marks in %d :",InitialMarks);
        scanf("%f",&number);
        InitialPercent = number/InitialFullMarks;
        InitialPercent = InitialPercent*100;
        
        printf("\nPercent in %d is : %f",InitialMarks, InitialPercent);
        
        Obtained=(InitialPercent/100);
        Obtained = Obtained * FinalFullMarks;
        printf("\nMarks in %d is : %f",FinalMarks, Obtained);
	}
}
