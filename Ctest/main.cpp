#include <iostream>
#include <stdio.h>



int main()
{

    printf("hello linux\n");
    
    std::cout<<"hello world!"<<std::endl;

    int **tmp = new int*[10];
    for(int i=0; i<10; i++)	
        {
            tmp[i] = new int[10];
        }

    int num = 1;
    for(int i=0; i<10; i++)
    {
      for(int j=0; j<10; j++)
      { 
        tmp[i][j] = num;
        num++;
          
        std::cout<<tmp[i][j]<<" ";   
      }
      std::cout<<std::endl;
     }

    delete [] tmp;

    return 0;
} 
