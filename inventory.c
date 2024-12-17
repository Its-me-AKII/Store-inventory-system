/*
Task 4: Store Inventory System
Create a simple inventory system where the program calculates the total price of items purchased.
•	Input: Number of items, price of each item, and quantity purchased.
•	Output: Total cost for each item and the grand total.
Example:
Input:
3 items:  
Price: 100, Quantity: 2  
Price: 200, Quantity: 1  
Price: 50, Quantity: 5  
Output:
Item 1 Total: 200  
Item 2 Total: 200  
Item 3 Total: 250  
Grand Total: 650  

*/
#include <stdio.h>
int main(){
    
    int item,qty;
    float price;
    float grand_total = 0;
    
    printf("Input Number of items : ");
    scanf("%d",&item);
    for(int i=1; i<= item; i++)  
    {
        printf("Input Price of items : ",i);
        scanf("%f", &price);
        
        printf("Input quantity purchased : ",i);
        scanf("%d", &qty);

        float total = price * qty;
        grand_total += total;
        
        printf("Item %d Total %.2lf",i,total);
        printf("\n");
        
        
    }
    
    printf("Grand Total %.2lf",grand_total);
    
    
    return 0;
}
