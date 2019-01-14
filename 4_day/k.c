int 	iterateFactorial(int nbr)
{
	int i;
	int c;

	if (nbr<0 || nbr>12)
    	return (0);
  	else
	{
	    i=1;
	    c=0;
	    while (c++ < nbr)
	      i = i * c;	    
		return (i);
	}
}

int main() 

	iterateFactorial(5);
	iterateFactorial(7);
	iterateFactorial(14);
 	return (0);	
}
