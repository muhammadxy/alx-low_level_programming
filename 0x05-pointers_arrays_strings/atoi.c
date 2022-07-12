#include <stdio.h>



// Iterative function to implement `atoi()` function in C

long atoi(const char S[])
  
{
  
  long num = 0;
  
  int i = 0, sign = 1;
  

  
  // skip white space characters
  
  while (S[i] == ' ' || S[i] == '\n' || S[i] == '\t') {
    
    i++;
    
  }
  

  
  // note sign of the number
  
  if (S[i] == '+' || S[i] == '-')
    
    {
      
      if (S[i] == '-') {
	
	sign = -1;
	
      }
      
      i++;
      
    }
  

  
  // run till the end of the string is reached, or the
  
  // current character is non-numeric
  
  while (S[i] && (S[i] >= '0' && S[i] <= '9'))
    
    {
      
      num = num * 10 + (S[i] - '0');
      
      i++;
      
    }
  

  
  return sign * num;
  
}



// Implement `atoi()` function in C

int main(void)
  
{
  
  char S[] = " -1234567890";
  
  char x[] = "98";
  char y[] = "          ------++++++-----+++++--98";
  char r[] = "         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA ";

  
  printf("%ld ", atoi(S));
  printf("%ld", atoi(x));
  printf("%ld", atoi(y));
  printf("%ld", atoi(r));
  
  return 0;
  
}
