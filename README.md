# malloc and tcache Demo

This is a simple C program to demonstrate **dynamic memory allocation** and **tcache behavior** in glibc.

## Features
- Allocates and frees memory using `malloc` and `free`.
- Shows how freed chunks are reused by tcache for faster allocation.
- Demonstrates multiple allocations and reuses of memory blocks of different sizes.

## How to Run
```bash
gcc -g heap.c -o h
./h

gdb ./h
break main
run
heap arenas
heap chunks
heap bins
```

## References
- https://sploitfun.wordpress.com/2015/02/10/understanding-glibc-malloc/
- https://heap-exploitation.dhavalkapil.com/heap_memory
- https://infosecwriteups.com/the-toddlers-introduction-to-heap-exploitation-part-1-515b3621e0e8
