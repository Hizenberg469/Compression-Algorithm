cmake_minimum_required(VERSION 3.28)

project(CompressionAlgorithms VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD          17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS       OFF)


set(CLIBRARY Clibrary)
set(HUFFMAN_LIBRARY Huffman_library)
set(COMPRESSOR Compressor)
set(EXTRACTOR Extractor)

option(COMPILE_COMPRESSOR "Whether to compile the compressor" OFF)
option(COMPILE_EXTRACTOR "Whether to compile the extractor"   OFF)

add_subdirectory(clib)
add_subdirectory("Huffman CODING")
add_subdirectory(app)
