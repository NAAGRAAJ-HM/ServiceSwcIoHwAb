/******************************************************************************/
/* File   : ServiceSwcIoHwAb.cpp                                              */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceSwcIoHwAb.hpp"
#include "infServiceSwcIoHwAb_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICESWCIOHWAB_AR_RELEASE_VERSION_MAJOR                              4
#define SERVICESWCIOHWAB_AR_RELEASE_VERSION_MINOR                              3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICESWCIOHWAB_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICESWCIOHWAB_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICESWCIOHWAB_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICESWCIOHWAB_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceSwcIoHwAb, SERVICESWCIOHWAB_VAR) ServiceSwcIoHwAb;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
//#include "infMcalMcu_ServiceSwcIoHwAb.hpp"
//#include "infServiceOs_ServiceSwcIoHwAb.hpp"
//#include "infServiceSwcEcuM_ServiceSwcIoHwAb.hpp"

FUNC(void, SERVICESWCIOHWAB_CODE) module_ServiceSwcIoHwAb::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICESWCIOHWAB_CONST,       SERVICESWCIOHWAB_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESWCIOHWAB_CONFIG_DATA, SERVICESWCIOHWAB_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceDem_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceSwcIoHwAb_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceDem_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceDem_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceDem_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESWCIOHWAB_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESWCIOHWAB_CODE) module_ServiceSwcIoHwAb::DeInitFunction(
   void
){
#if(STD_ON == ServiceDem_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceDem_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceDem_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESWCIOHWAB_E_UNINIT
      );
#endif
   }
#endif
}

extern void Emo_HandleIoHwAb(void);
FUNC(void, SERVICESWCIOHWAB_CODE) module_ServiceSwcIoHwAb::MainFunction(
   void
){
#if(STD_ON == ServiceDem_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
      Emo_HandleIoHwAb();
#if(STD_ON == ServiceDem_InitCheck)
   }
   else{
#if(STD_ON == ServiceDem_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESWCIOHWAB_E_UNINIT
      );
#endif
   }
#endif
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

