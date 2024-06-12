#pragma once
/******************************************************************************/
/* File   : infServiceSwcIoHwAb_ServiceNvM_Types.hpp                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
/*
#include "infMcalMcu_ServiceSwcIoHwAb.hpp"
#include "infServiceOs_ServiceSwcIoHwAb.hpp"
#include "infServiceSwcEcuM_ServiceSwcIoHwAb.hpp"
*/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class NvM_BlocksRom_ServiceSwcIoHwAb_Type:
      public ConstModule_TypeAbstract
{
/*
   public:
      infMcalMcu_ServiceSwcIoHwAb*        ptrinfMcalMcu_ServiceSwcIoHwAb;
      infServiceOs_ServiceSwcIoHwAb*      ptrinfServiceOs_ServiceSwcIoHwAb;
      infServiceSwcEcuM_ServiceSwcIoHwAb* ptrinfServiceSwcEcuM_ServiceSwcIoHwAb;
*/
};

class NvM_BlocksNv_ServiceSwcIoHwAb_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

