

#include <stdio.h>

int main()
{
    float number;
    float  InitialPercent, Obtained;
    int InitialFullMarks, FinalFullMarks;
    
    printf("Enter Initial Full Marks : ");
    scanf("%d",&InitialFullMarks);

   
    printf("Enter Final Full Marks : ");
    scanf("%d",&FinalFullMarks);

    
    while(1)
    {   
        printf("\n-------------------------------------------");
        printf("\nEnter marks in %d :",InitialFullMarks);
        scanf("%f",&number);
        InitialPercent = number/InitialFullMarks;
        InitialPercent = InitialPercent*100;
        
        printf("\nPercent in %d is : %f",InitialFullMarks, InitialPercent);
        
        Obtained=(InitialPercent/100);
        Obtained = Obtained * FinalFullMarks;
        printf("\nMarks in %d is : %f",FinalFullMarks, Obtained);
	}
}
