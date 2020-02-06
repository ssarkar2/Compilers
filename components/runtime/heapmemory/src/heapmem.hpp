#ifndef HEAPMEM_H_
#define HEAPMEM_H_


#include <stddef.h>
#include "heapmem.hpp"

class Heap {
    public:
    Heap(size_t size);

    // TODO remove me later
    size_t GetSize();

    private:
    size_t m_size;
};

#endif
