#ifndef HEAPMEM_H_
#define HEAPMEM_H_

#include <stddef.h>
#include <cstring>

#include "heapmem.hpp"

class HeapMemoryManager {
 public:
  HeapMemoryManager(size_t size);

  // Copy constructor
  HeapMemoryManager(const HeapMemoryManager &p);

  // Move constructor
  HeapMemoryManager(HeapMemoryManager &&arr);

  // Copy assignment
  HeapMemoryManager &operator=(const HeapMemoryManager &other);

  // Move assignment
  HeapMemoryManager &operator=(HeapMemoryManager &&arr);

  ~HeapMemoryManager();

  size_t GetSize();

 private:
  size_t m_size;
  char *m_memory_buffer;
};

#endif
