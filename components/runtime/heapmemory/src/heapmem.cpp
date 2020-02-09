#include "heapmem.hpp"

HeapMemoryManager::HeapMemoryManager(size_t size) : m_size(size)
{
    m_memory_buffer = new char[m_size];
}

HeapMemoryManager::HeapMemoryManager(HeapMemoryManager &&other) : m_size(other.m_size), m_memory_buffer(other.m_memory_buffer)
{
    other.m_memory_buffer = nullptr;
    other.m_size = 0;
}

HeapMemoryManager::HeapMemoryManager(const HeapMemoryManager &other) : m_size(other.m_size) {
    m_memory_buffer = new char[m_size];
    std::memcpy(m_memory_buffer, other.m_memory_buffer, m_size);
}

HeapMemoryManager::~HeapMemoryManager() { delete[] m_memory_buffer; }

size_t HeapMemoryManager::GetSize() { return m_size; }
