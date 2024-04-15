add_library(${CLIBRARY} STATIC 
        "bitio.c"
        "errhand.c")

target_include_directories(${CLIBRARY} PUBLIC "../include")