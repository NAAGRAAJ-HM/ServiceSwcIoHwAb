#pragma once
/******************************************************************************/
/* File   : ServiceSwcIoHwAb.hpp                                              */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceSwcIoHwAb.hpp"
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
      const ConstServiceSwcIoHwAb_Type* lptrConst = (ConstServiceSwcIoHwAb_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESWCIOHWAB_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESWCIOHWAB_CONST,       SERVICESWCIOHWAB_APPL_CONST) lptrConstModule
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

