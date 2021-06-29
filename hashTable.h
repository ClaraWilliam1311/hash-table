#include<stdlib.h>
#define MAX 10

typedef struct table
{
    int array[MAX];
    int size;
}HashTable;


int hash_function(int value);
void createTable(HashTable *table);
int emptyTable(HashTable table);
int fullTable(HashTable table);
void destroyTable(HashTable *table);
int tableSize(HashTable *table);
void searchItem(int value,HashTable table);
void insertItem(int value,HashTable *table);
void deleteItem(int value,HashTable *table);
void displayTable(HashTable *table);
