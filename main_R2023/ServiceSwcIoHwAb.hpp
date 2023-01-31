#pragma once
/******************************************************************************/
/* File   : ServiceSwcIoHwAb.hpp                                              */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceSwcIoHwAb_ServiceNvM_Types.hpp"
#include "CfgServiceSwcIoHwAb.hpp"
#include "ServiceSwcIoHwAb_core.hpp"
#include "infServiceSwcIoHwAb_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSwcIoHwAb:
/*      INTERFACES_EXPORTED_SERVICESWCIOHWAB
   ,*/public abstract_module
   ,  public class_ServiceSwcIoHwAb_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESWCIOHWAB_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESWCIOHWAB_CONST,       SERVICESWCIOHWAB_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESWCIOHWAB_CONFIG_DATA, SERVICESWCIOHWAB_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICESWCIOHWAB_CODE) DeInitFunction (void);
      FUNC(void, SERVICESWCIOHWAB_CODE) MainFunction   (void);
      SERVICESWCIOHWAB_CORE_FUNCTIONALITIES

/*
      FUNC(void, SERVICESWCIOHWAB_CODE) StartupTwo                       (void);
      FUNC(void, SERVICESWCIOHWAB_CODE) ServiceDeterminePbConfiguration  (void);
      FUNC(bool, SERVICESWCIOHWAB_CODE) GetPendingWakeupEvents           (void);
      FUNC(void, SERVICESWCIOHWAB_CODE) GetValidatedWakeupEvents         (void);
      FUNC(void, SERVICESWCIOHWAB_CODE) LoopServiceDetection             (void);
      FUNC(void, SERVICESWCIOHWAB_CODE) SelectShutdownTarget             (void);
*/
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceSwcIoHwAb, SERVICESWCIOHWAB_VAR) ServiceSwcIoHwAb;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

