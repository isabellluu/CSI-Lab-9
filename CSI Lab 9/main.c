//
//  main.c
//  CSI Lab 9
//
//  Created by Luu, Isabel on 10/3/18.
//  Copyright © 2018 Luu, Isabel. All rights reserved.
//
/* Pseudocode Lab 9
 
 Step 1: values a and b, remainder, division, up to 5 individual numbers
 
 Step 2:
 int a;
 int b;
 int remainder;
 int divided;
 int i1;
 int i2;
 int i3;
 int i4;
 int i5;
 int i6;
 int num = 100000;
 int num1 = 10000;
 int num2 = 1000;
 int num3 = 100;
 int num4 = 10; 
 int num5 = 1;
 int ii2;
 int ii3;
 int ii4;
 int ii5;
 int ii6;
 
 Step 3/4:
 I. Gain Input from users and name function prototypes
    a. Name function prototypes
    b. Prompt user for a number between 1 and 32767
    c. Save using scanf to int a
 
 II. Call new functions ********FUNCTIONS**********                                                                                                                                                  
    a. Call function divison
    b. Use integer divison to divide a by b and save to int divided
    c. Call function mod
    d. Use module to save the remainder of the answer
    e. Repeat steps a-d four more times and save to ints i1, i2, i3 ect.
 
 III. Display Data
    a. Use printf to display the ints i1-i6 with spaces in between each integer
 */
 
#include <stdio.h>

int findmod(int, int);
int findmod2(int, int);
int findmod3(int, int);
int findmod4(int, int);
int findmod5(int, int);
int division(int, int);
int division2(int, int);
int division3(int, int);
int division4(int, int);
int division5(int, int);
int division6(int,int);

int main() 
{
    //Step 2:
    int a;
   // int remainder;
    //int divided;
    int i1;
    int i2;
    int i3;
    int i4;
    int i5;
    int i6;
    int num = 100000;
    int num1 = 10000;
    int num2 = 1000;
    int num3 = 100;
    int num4 = 10;
    int num5 = 1;
    int ii2;
    int ii3;
    int ii4;
    int ii5;
    int ii6;
    

    //I. Gain Input from users and name function prototypes
    //a. Name function prototypes
   // b. Prompt user for a number between 1 and 32767
    printf("Input an integer between 1 and 372767: ");
    
    //c. Save using scanf to int a    
    scanf("%d", &a);
 
   /* II. Call new functions ********FUNCTIONS**********                                                                                                                                                  
    a. Call function divison*/
    i1 = division(a, num);
 
    ii2 = findmod(a, num);
   // printf("%i", ii2);
    //e. Repeat steps a-d four more times and save to ints i1, i2, i3 ect.
    
    i2 = division(ii2, num1);
    ii3 = findmod(ii2, num1);
    
    i3 = division(ii3, num2);
    ii4 = findmod(ii3, num2);
    
    i4 = division(ii4, num3);
    ii5 = findmod(ii4, num3);
    
    i5 = division(ii5, num4);
    ii6 = findmod(ii5, num4);
    
    i6 = division(ii6, num5);
    


    
    //III. Display Data
    //a. Use printf to confirm number inputed
    printf("is the number inputed.");
    //b. Use printf to display the ints i1-i6 with spaces in between each integer
    printf("\nYour number is: %i %i %i %i %i %i\n", i1, i2, i3, i4, i5, i6);
    
    return 0;
}

/*************************************** Function division ******************************************/
int division (int a, int num)
{   
  //b. Use integer divison to divide a by b and save to int divided
    
    
    // define variables
    int i1;
    
    //perform calculation
    i1 = a/num;   
    
    return (i1);
}


/********************************** Function findmod *************************************************/

int findmod(int a, int num)
{   
    /*b. Use integer divison to divide a by b and save to int divided
     c. Use module to save the remainder of the answer*/
    
    // define variables
    int i1;
    int ii2;
    
    //perform calculation
    i1 = a/num;
    ii2 = a % num;
    printf("%i ", ii2);
    //division2(ii2, num);
    return (ii2);
}

