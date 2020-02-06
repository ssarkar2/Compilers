add_library(heapmemory "")

target_sources(
    heapmemory
    PRIVATE
        heapmem.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/heapmem.hpp
    )

target_include_directories(
    heapmemory
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )