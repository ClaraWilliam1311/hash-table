# hash-table
Hash Table data structure is an array of elements (associated with a search key  unique for each element), together with a hash function and access procedures  (insert, delete, search...). 
The hash function determines the location in the table of a new element, using its  search key. 
In a similar way, permits to locate the position of an existing element. 
The hash function takes a search key and maps it into an integer array index. 
An example of hash functions is modulo arithmetic: given a search key number, the  function defines the index to be the modulo arithmetic of the search value with  some fix number. 
i.e: h(key) = Key% TableSize. Hash table require Collision Resolution method to solve conflicts in insertion,  deletion, and search. 
Implement hash table with modulo arithmetic hash function and open addressing  collision resolution method
