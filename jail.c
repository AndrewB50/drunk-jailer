#include <stdio.h>

int main()
{
	int cellNum;
	int count;
	int jailCells[100];
	
	while(1)
	{
	    count = 0;
		printf("How many cells? ");
		scanf("%d", &cellNum);		
		if (cellNum == 0)
		{
			break;
		}
		
	    //int jailCells[cellNum];
		int i, j;
		int b;
		//First Pass: Unlock each cell;
		for (b = 0; b < cellNum; b++)
		{
			jailCells[b] = 1;
		}
		//cellNum Passes;
		for (i = 2; i <= cellNum; i++)
		{
			for (j = 1; j <= cellNum; j++)
			{
				if (j%i == 0)
				{
					if (jailCells[j - 1] == 0)
					{
						jailCells[j - 1] = 1;
					}
					
					else if (jailCells[j - 1] == 1)
					{
						jailCells[j - 1] = 0;
					}
				}
				
			}
		}
		
		int h;
		for (h = 0; h < cellNum; h++)
		{
		    if (jailCells[h] == 1)
		    {
		        count++;
		    }
		}
		
		printf("Number of prisoners to escape:  %d\n", count);
	}
}
