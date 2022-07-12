#include <stdlib.h>
#include <stdio.h>
int _atoi(char* S)  
{
  /**

   * iatoi nt - function convert string to  int variable values around

   *

   *@a: int pointer

   *@b: int pointer

   *

   * Return: 0

   */ 
  long num = 0;
  
  int i = 0, sign = 1;
  

  
    
  while (S[i] == ' ' || S[i] == '\n' || S[i] == '\t') {
    
    i++;
    
  }
  

   
  if (S[i] == '+' || S[i] == '-')
    
    {
      
      if (S[i] == '-') {
	
	sign = -1;
	
      }
      
      i++;
      
    }



  
   
  while (S[i] && (S[i] >= '0' && S[i] <= '9'))
    
    {
      
      num = num * 10 + (S[i] - '0');
      
      i++;
      
    }
  

  
  return sign * num;
}
