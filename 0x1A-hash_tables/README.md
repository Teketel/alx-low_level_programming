# Hash Tables

Project done during **Full Stack Software Engineering studies** at **Holberton School**. It aims to learn how to implement Hash Tables with **C language**.

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* Tested on Ubuntu 14.04 LTS

## Files
All of the following files are scripts and programs written in C:

| Filename | Description | Remark |
| -------- | ----------- | ----------- |
| `0-hash_table_create.c` | Function that creates a hash table | Compile using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a`
| `1-djb2.c` | Function that executes the djb2 algorithm | Compile using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b`
| `2-key_index.c` | Function that returns the index of a key | Compile using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c`
| `3-hash_table.c` | Function that adds an element to the hash table | Compile using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d`
| `4-hash_table_get.c` | Function that retrieves a value associated with a key | Compile using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e`
| `5-hash_table_print.c` | Function that prints a hash table | Compile using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f`
| `6-hash_table_delete.c` | Function that deletes a hash table | Compile using `gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g`
| `100-sorted_hash_table.c` | C file with some functions that implements a hash table with a sorted linked list | Compile using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht`