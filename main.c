#include <stdio.h>
#include <stdlib.h>
#include "hashTable.h"

int main()
{
    int opt,value,i;
    HashTable table;
    createTable(&table);
    do {
		printf("Implementation of Hash Table in C with Linear probing.\n\n");
		printf("MENU-: \n1.Inserting item in the Hash Table"
               "\n2.Deleting item from the Hash Table"
               "\n3.Display the Hash Table"
               "\n4.Search for an item in hash table"
               "\n5.Destroy the Hash Table"
               "\n6.Get the size of Hash Table"
               "\n\n Please enter your choice-:");

		scanf("%d", &opt);

		switch(opt)
        {
            case 1:
                printf("Insert the value:");
                scanf("%d",&value);

                if(!fullTable(table))
                {
                    insertItem(value,&table);
                }

                break;

            case 2:
                printf("Enter the value to be deleted:");
		        scanf("%d",&value);

		        if(!emptyTable(table))
                {
                    deleteItem(value,&table);
                }

		        break;

            case 3:
                displayTable(&table);

		        break;

            case 4:
                printf("Enter the value to be searched:");
		        scanf("%d",&value);

		        if(!emptyTable(table))
                    searchItem(value,table);

                break;

            case 5:
                destroyTable(&table);
                printf("The Hash Table is destroyed");

                break;

            case 6:

                i=tableSize(&table);
                printf("\nThe size is: %d",i);

                break;

            default:
		        printf("Wrong choice\n");

		}

		printf("\n Do you want to continue-:(press 1 for YES)\t");
		scanf("%d", &i);

	}while(i == 1);

    return 0;
}


