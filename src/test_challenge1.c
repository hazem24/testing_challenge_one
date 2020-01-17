#include <stdio.h>
#include <stdlib.h>

#define FALSE 0U
#define TRUE  1U

//Software Engineer Name: Hazem Khaled.

/*
- Define your global variables if needed here:
actual_result
expected_result
- Please concider the memoery optimization.
*/
signed int actual_result;
signed int expected_result;



/*
- Define your functional prototypes used here:
sum
unittest
- Please concider optimum Misra C when writing your functions.
*/
signed int sum(signed int number1, signed int number2);

unsigned char unittest();


int main()
{
//Please declare your initializations here.
	unsigned char test_success = TRUE;
    /* Operand1 and operand2 for sum operation. */
    signed int operand1 = 0;
    signed int operand2 = 0;

    actual_result   = 0;
    expected_result = 0;
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

//Please define your infinite loop here.
    while(TRUE)
    {
        //Please insert your screen visualization here.
            printf("Please Enter two number for sum operation ? \n");
        //Please write an expression that takes 2 numbers from the user here (consider screen readability).
            scanf("%d%d",&operand1, &operand2);
        //Please write an expression that calls the two function, the activation logic function and the unit test function in sequence.
            actual_result   = sum(operand1, operand2);
            expected_result = operand1 + operand2;
            test_success    = unittest(actual_result, expected_result);
            if(FALSE == test_success)
            {
                printf("\n Test Case of (%d) & (%d) was failed expected (%d) and actual (%d)",operand1, operand2,  expected_result, actual_result);
            }
            else
            {
                printf("\n Test Case Passed! \n");
            }
    }
    return 0;
}


//Please write the functional description of the sum function here:
signed int sum(signed int s32_number1, signed int s32_number2)
{
    return s32_number1 + s32_number2;
}

//Please write the functional description of the unittest function here:
unsigned char unittest(signed int s32_actual_result, signed int s32_expected_result)
{
    unsigned char au8_response = TRUE;
    if(s32_actual_result != s32_expected_result)
    {
        au8_response = FALSE;
    }
    else
    {
        /* NOP. */
    }
    return au8_response;
}
