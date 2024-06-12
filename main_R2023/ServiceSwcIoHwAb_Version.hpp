#pragma once
/******************************************************************************/
/* File   : ServiceSwcIoHwAb_Version.hpp                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

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
/* EOF                                                                        */
/******************************************************************************/

