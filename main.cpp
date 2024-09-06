// /home/doug/CLionProjects/milkv_duos_vpa/main.cpp 2024/09/05 dwg -
// Copyright (c) 2024 Douglas Goodall. Usage per License Agreement.

#include <stdlib.h>
#include <iostream>
#include "CmilkV.h"

/*****************************************************************************
 * Application Main Entry Point
 * @param argc Count of program command line arguments
 * @param argv Array of pointers to argument strings
 * @return
 */
int main(int argc,char **argv) {

    CmilkV * pDUO = new CmilkV();
    delete pDUO;

    return EXIT_SUCCESS;
}

////////////////////
// eof - main.cpp //
////////////////////