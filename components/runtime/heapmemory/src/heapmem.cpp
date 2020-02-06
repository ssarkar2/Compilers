#include "heapmem.hpp"

Heap::Heap(size_t size) : m_size(size) {}

size_t Heap::GetSize() { return m_size; }
