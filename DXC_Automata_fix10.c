//The function/method allExponent returns a real number representing the result of 
//exponentiation of base raised to power exponent for all input values.
//The incomplete code in the function/method allExponent works only for negative values of the exponent. 
//You must complete the code and make it work for positive values of exponent as well.

//Another function negativeExponent uses an efficient way for exponentiation but accepts only negative exponent values. 
//You are supposed to use this function/method to complete the code in allExponent function/method.


float allExponent (int baseValue, int exponentValue) 
{
    float res = 1;
    if (exponentValue < 0)
    {
        res = (float) negativeExponent (baseValue, exponentValue);
        // is to find exponents of negative numbers
    }
    else
    {
        res = (float) 1 / (negativeExponent (baseValue, exponentValue));
    	// find negative exponents and then find reciprocals of it to get positive exponent
    } 
    return res;
}




