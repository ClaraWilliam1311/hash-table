#include "hashTable.h"
#include <stdlib.h>
#include <stdio.h>

int hash_function(int value)
{
    return value%MAX;
}

void createTable(HashTable *table)
{
    for(int i=0;i<MAX;i++)
    {
        table->array[i]=NULL;
    }
    table->size=0;
}

int emptyTable(HashTable table)
{
    return(table.size==0);
}

int fullTable(HashTable table)
{
    return(table.size==MAX-1);
}

void destroyTable(HashTable *table)
{
    for(int i=0;i<MAX;i++)
    {
        table->array[i]=NULL;
    }
    table->size=0;
}

int tableSize(HashTable *table)
{
    return table->size;
}

void searchItem(int value,HashTable table)
{
    int index,i;
    int hkey=hash_function(value);
    for(i=0;i<MAX; i++)
    {
        index=(hkey+i)% MAX;
        if(table.array[index]==value)
        {
            printf("value is found at index %d",index);
            break;
        }
    }
    if(i == MAX)
        printf("\n value is not found\n");
}

void insertItem(int value,HashTable *table)
{
    int index,i,hkey;
    hkey=hash_function(value);
    for(i=0;i<MAX;i++)
    {
        index=(hkey+i)%MAX;
        if(table->array[index] == NULL)
        {
            table->array[index]=value;
            printf("\nThe value is inserted\n");
            table->size++;
            break;
        }
    }
    if(i == MAX)
        printf("\nElement cannot be inserted\n");

}

void deleteItem(int value,HashTable *table)
{
    int index,i,hkey;
    hkey=hash_function(value);
    for(i=0;i<MAX;i++)
    {
        index=(hkey+i)%MAX;
        if(value == table->array[index])
        {
            table->array[index]=NULL;
            printf("\nThe value is deleted\n");
            table->size--;
            break;
        }
    }
    if(i == MAX)
        printf("\nElement was not found\n");

}


void displayTable(HashTable *table)
{
    int i;
    printf("\nElements in the hash table are \n");
    for(i=0;i< MAX; i++)
        printf("\nat index %d \t value =  %d",i,table->array[i]);
}

