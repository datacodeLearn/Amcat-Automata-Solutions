    /*

     * C Program to Find the Sum of Contiguous Subarray within a 

     * 1 - D Array of Numbers which has the Largest Sum

     */

     

    #include<stdio.h>

     

    int main()

    {

        int size,m=0,l=0;

     

        printf("Type the length of the array\n");

        scanf("%d",&size);

        int array[size];

        printf("type the elements of the array\n");

     

        for(int i=0;i<size;i++)

        {

            scanf("%d",&array[i]);

     

        }

     

        int largest=array[0];

        for(int i=0;i<size;i++)

        {

            int sum=0;

            for(int j=i;j<size;j++)

            {

                sum=sum+array[j];

                if(sum>largest)

                {

                    m=i;l=j;

                    largest=sum;

                }

            }

        }

     

        printf("\n The largest contigous subarray is");

        for(int z=m;z<=l;z++)

        {

            printf(" %d ",array[z]);

        }

        printf("\n The sum of the largest contigous subarray is");

        printf(" %d",largest);

        return 0;

    }
