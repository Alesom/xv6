#define NPROC        110  // maximum number of processes
#define NID 		11234 //maximum number of id's to 
#define KSTACKSIZE 4096  // size of per-process kernel stack
#define NCPU          8  // maximum number of CPUs
#define NOFILE       16  // open files per process
#define NFILE       100  // open files per system
#define NBUF         10  // size of disk block cache
#define NINODE       50  // maximum number of active i-nodes
#define NDEV         10  // maximum major device number
#define ROOTDEV       1  // device number of file system root disk
#define MAXARG       32  // max exec arguments
#define LOGSIZE      10  // max data sectors in on-disk log

//NumMaxTickts number, is maximum of tickets that a process can have in the Stride Scheduling. In this case, this number is the upper bound of int with 32 bits - 1.
#define NumMaxTickts 2147483646

//INFINITO number is the upper bound of int with 32 bits.
#define INFINITO 9223372036854775806

//standart value to number of tickts
#define StdValueTicks 210

