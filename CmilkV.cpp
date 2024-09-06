// /home/doug/CLionProjects/milkv_duos_vpa/CmilkV.cpp 2024/09/05 dwg -
// Copyright (c) 2024 Douglas Goodall. Usage per License Agreement.

#include "CmilkV.h"

/**
 * CmilkV Class Contructor (CTOR)
 */
CmilkV::CmilkV()
{
    m_std_str_prod_name     = "MilkV Duo S";
    m_std_str_model         = "MV003-W0E8P0";
    m_std_str_revision      = "v1.100";
    m_std_str_serial_no     = "24180083-YQNQSF";
    m_std_str_support       = "https://milkv.io/docs/duo";
    m_std_str_usb_ipv4_addr = "192.168.42.1";
    m_std_str_rs232_iface   = "/dev/ttyUSB0";
    identify();
    m_bool_rs232_open       = probe_usb();

}

/***************************************************************************************
 * Display device nomenclature
 */
void CmilkV::identify()
{
    std::cout << " Product Name: " << m_std_str_prod_name     << std::endl;
    std::cout << "        Model: " << m_std_str_model         << std::endl;
    std::cout << "     Revision: " << m_std_str_revision      << std::endl;
    std::cout << "    Serial No: " << m_std_str_serial_no     << std::endl;
    std::cout << "      Support: " << m_std_str_support       << std::endl << std::endl;
    std::cout << "USB IPv4 Addr: " << m_std_str_usb_ipv4_addr << std::endl;
    std::cout << "RS-232 I'face: " << m_std_str_rs232_iface   << std::endl << std::endl;
}

/************************************************************************
 * Open USB device channel to device and post status
 * @return boolean indicating open file descriptor to access device..
 */
bool CmilkV::probe_usb()
{
    m_fd_rs232 = fopen(m_std_str_rs232_iface.c_str(),"w");
    if(nullptr == m_fd_rs232) {
        return false;
    } else {
        std::cout << "USB channel opened" << std::endl;
        return true;
    }
}

/********************************
 * CmilkV class Destructor (DTOR)
 */
CmilkV::~CmilkV()
{
    if(m_bool_rs232_open) {
        fclose(m_fd_rs232);
        std::cout << "USB channel closed" << std::endl;
    }

}