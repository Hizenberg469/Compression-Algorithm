add_library(${HUFFMAN_LIBRARY} STATIC "huff.c")

target_include_directories(${HUFFMAN_LIBRARY} PUBLIC "../include")