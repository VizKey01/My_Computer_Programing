/**
 * CacheSim.h
 * This program is designed for class exercise only.
 * It is provided as is. There is no warranty or support of any kind.
 *
 * Krerk Piromsopa, Ph.D.
 * Department of Computer Engineering
 * Chulalongkorn University
 * Bangkok, Thailand.
**/
#ifndef CACHESIM_H_INCLUDED
#define CACHESIM_H_INCLUDED

/* Please adjust parameters here */
#define CACHE_SIZE 32768 // table 1024*block_size
#define INDEX_SIZE 1024 //   cache / block index
#define BLOCK_SIZE 32 // table size
#define INDEXLEN 10 // 2 ** indexsize 
#define OFFSETLEN 5 // 2 ** block_size
#define TAGLEN 32 - (INDEXLEN + OFFSETLEN)
typedef unsigned char Byte;
typedef unsigned char bool;
typedef struct Cache{
    bool valid;
    bool dirty;
    unsigned long tag;
	Byte data[BLOCK_SIZE];
};

#endif // CACHESIM_H_INCLUDED