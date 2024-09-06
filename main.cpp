#include <iostream>
#include "CmilkV.h"



int main(int argc,char **argv) {

    CmilkV * pDUO = new CmilkV();

    pDUO->identify();

    delete pDUO;

    return 0;
}
