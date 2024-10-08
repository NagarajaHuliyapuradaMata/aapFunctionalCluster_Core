/******************************************************************************/
/* File   : aapFunctionalCluster_Core.cpp                                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_Core.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_Core:
   public interface_Core
{
   public:
      void Deinitialize    (void);
      void Initialize      (void);
      void Abort           (void);
      void SetAbortHandler (void);
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void aapFunctionalCluster_Core::Deinitialize(void){
}

void aapFunctionalCluster_Core::Initialize(void){
}

void aapFunctionalCluster_Core::Abort(void){
}

void aapFunctionalCluster_Core::SetAbortHandler(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
