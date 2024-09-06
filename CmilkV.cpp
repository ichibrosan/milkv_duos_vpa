// /home/doug/CLionProjects/milkv_duos_vpa/CmilkV.cpp 2024/09/05 dwg -
// Copyright (c) 2024 Douglas Goodall. Usage per License Agreement.

#include "CmilkV.h"

CmilkV::CmilkV()
{
    m_std_str_prod_name     = "MilkV Duo S";
    m_std_str_model         = "MV003-W0E8P0";
    m_std_str_revision      = "v1.100";
    m_std_str_serial_no     = "24180083-YQNQSF";
    m_std_str_support       = "https://milkv.io/docs/duo";
    m_std_str_usb_ipv4_addr = "192.168.42.1";
    m_std_str_rs232_iface   = "/dev/ttyUSB0";
}

void CmilkV::identify()
{
    std::cout << " Product Name: " << m_std_str_prod_name     << std::endl;
    std::cout << "        Model: " << m_std_str_model         << std::endl;
    std::cout << "     Revision: " << m_std_str_revision      << std::endl;
    std::cout << "    Serial No: " << m_std_str_serial_no     << std::endl;
    std::cout << "      Support: " << m_std_str_support       << std::endl << std::endl;
    std::cout << "USB IPv4 Addr: " << m_std_str_usb_ipv4_addr << std::endl;
    std::cout << "RS-232 I'face: " << m_std_str_rs232_iface   << std::endl;

}

CmilkV::~CmilkV()
{

}