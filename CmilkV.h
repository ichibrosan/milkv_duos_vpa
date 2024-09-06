// /home/doug/CLionProjects/milkv_duos_vpa/CmilkV.h 2024/09/05 dwg -
// Copyright (c) 2024 Douglas Goodall. Usage per License Agreement.

#ifndef MILKV_DUOS_VPA_CMILKV_H
#define MILKV_DUOS_VPA_CMILKV_H
#include <iostream>
#include <string>

class CmilkV {
    std::string m_std_str_prod_name;
    std::string m_std_str_model;
    std::string m_std_str_revision;
    std::string m_std_str_serial_no;
    std::string m_std_str_support;
public:
    CmilkV();
    void identify();
    ~CmilkV();
};


#endif //MILKV_DUOS_VPA_CMILKV_H
