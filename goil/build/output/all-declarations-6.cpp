#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension Getter '@gtlVarPath stringRepresentation'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlVarPath & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_gtlVarPath temp_0 = inObject ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlVarItem *) temp_0.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 450)).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 450)) ;
  const GALGAS_gtlVarPath temp_1 = inObject ;
  cEnumerator_gtlVarPath enumerator_13922 (temp_1.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 451)), kEnumeration_up) ;
  while (enumerator_13922.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_stringRepresentation ((const cPtr_gtlVarItem *) enumerator_13922.current_item (HERE).ptr (), GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 452)) ;
    enumerator_13922.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract extension getter '@gtlVarItem stringRepresentation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlVarItem_stringRepresentation> gExtensionGetterTable_gtlVarItem_stringRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlVarItem_stringRepresentation inGetter) {
  gExtensionGetterTable_gtlVarItem_stringRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlVarItem_stringRepresentation (void) {
  gExtensionGetterTable_gtlVarItem_stringRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItem_stringRepresentation (NULL,
                                                            freeExtensionGetter_gtlVarItem_stringRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                        const GALGAS_string & in_concatString,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlVarItem) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlVarItem_stringRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlVarItem_stringRepresentation.count ()) {
      f = gExtensionGetterTable_gtlVarItem_stringRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlVarItem_stringRepresentation.count ()) {
           f = gExtensionGetterTable_gtlVarItem_stringRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlVarItem_stringRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_concatString, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension Getter '@gtlExpressionList stringRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlExpressionList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionList temp_0 = inObject ;
  cEnumerator_gtlExpressionList enumerator_26461 (temp_0, kEnumeration_up) ;
  while (enumerator_26461.hasCurrentObject ()) {
    result_result = result_result.add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_26461.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 854)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 854)) ;
    if (enumerator_26461.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 856)) ;
    }
    enumerator_26461.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@gtlExpressionMap mapRepresentation'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mapRepresentation (const GALGAS_gtlExpressionMap & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionMap temp_0 = inObject ;
  cEnumerator_gtlExpressionMap enumerator_26755 (temp_0, kEnumeration_up) ;
  while (enumerator_26755.hasCurrentObject ()) {
    result_result = result_result.add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 866)).add_operation (enumerator_26755.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 866)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 866)).add_operation (GALGAS_string ("\": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 866)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_26755.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 866)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 866)) ;
    if (enumerator_26755.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 868)) ;
    }
    enumerator_26755.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension Getter '@gtlExpressionMap structRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_structRepresentation (const GALGAS_gtlExpressionMap & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionMap temp_0 = inObject ;
  cEnumerator_gtlExpressionMap enumerator_27074 (temp_0, kEnumeration_up) ;
  while (enumerator_27074.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_27074.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 878)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 878)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 878)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_27074.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 878)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 878)) ;
    if (enumerator_27074.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 880)) ;
    }
    enumerator_27074.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension Getter '@gtlArgumentList stringRepresentation'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlArgumentList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlArgumentList temp_0 = inObject ;
  cEnumerator_gtlArgumentList enumerator_27384 (temp_0, kEnumeration_up) ;
  while (enumerator_27384.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_27384.current_name (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 890)) ;
    const enumGalgasBool test_1 = enumerator_27384.current_typed (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = result_result.add_operation (GALGAS_string (" : @"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 892)).add_operation (extensionGetter_typeName (enumerator_27384.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 892)) ;
    }
    if (enumerator_27384.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 895)) ;
    }
    enumerator_27384.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@sortingKeyList stringRepresentation'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_sortingKeyList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_sortingKeyList temp_0 = inObject ;
  cEnumerator_sortingKeyList enumerator_27907 (temp_0, kEnumeration_up) ;
  while (enumerator_27907.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_27907.current_key (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 912)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 912)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 912)).add_operation (extensionGetter_stringRepresentation (enumerator_27907.current_order (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 912)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 912)) ;
    if (enumerator_27907.hasNextObject ()) {
      result_result = GALGAS_string (", ") ;
    }
    enumerator_27907.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension getter '@gtlInstruction shortLocation'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlInstruction_shortLocation> gExtensionGetterTable_gtlInstruction_shortLocation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_shortLocation (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlInstruction_shortLocation inGetter) {
  gExtensionGetterTable_gtlInstruction_shortLocation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_shortLocation (const cPtr_gtlInstruction * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlInstruction_shortLocation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlInstruction_shortLocation.count ()) {
      f = gExtensionGetterTable_gtlInstruction_shortLocation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlInstruction_shortLocation.count ()) {
           f = gExtensionGetterTable_gtlInstruction_shortLocation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlInstruction_shortLocation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlInstruction_shortLocation (const cPtr_gtlInstruction * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlInstruction) ;
  result_result = object->mAttribute_where.getter_file (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 922)).getter_lastPathComponent (SOURCE_FILE ("gtl_debugger.galgas", 922)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 922)).add_operation (object->mAttribute_where.getter_line (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 922)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 922)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 922)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInstruction_shortLocation (void) {
  enterExtensionGetter_shortLocation (kTypeDescriptor_GALGAS_gtlInstruction.mSlotID,
                                      extensionGetter_gtlInstruction_shortLocation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlInstruction_shortLocation (void) {
  gExtensionGetterTable_gtlInstruction_shortLocation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInstruction_shortLocation (defineExtensionGetter_gtlInstruction_shortLocation,
                                                         freeExtensionGetter_gtlInstruction_shortLocation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@gtlInstruction displayWithLocation'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlInstruction_displayWithLocation> gExtensionMethodTable_gtlInstruction_displayWithLocation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_displayWithLocation (const int32_t inClassIndex,
                                               extensionMethodSignature_gtlInstruction_displayWithLocation inMethod) {
  gExtensionMethodTable_gtlInstruction_displayWithLocation.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_displayWithLocation (const cPtr_gtlInstruction * inObject,
                                              const GALGAS_debuggerContext constin_context,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlInstruction_displayWithLocation f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlInstruction_displayWithLocation.count ()) {
      f = gExtensionMethodTable_gtlInstruction_displayWithLocation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlInstruction_displayWithLocation.count ()) {
           f = gExtensionMethodTable_gtlInstruction_displayWithLocation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlInstruction_displayWithLocation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_context, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlInstruction_displayWithLocation (const cPtr_gtlInstruction * inObject,
                                                                const GALGAS_debuggerContext constinArgument_context,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlInstruction) ;
  const GALGAS_gtlInstruction temp_0 = object ;
  inCompiler->printMessage (callExtensionGetter_shortLocation ((const cPtr_gtlInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 929)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 929))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 929)) ;
  inCompiler->printMessage (constinArgument_context.getter_instructionColor (SOURCE_FILE ("gtl_debugger.galgas", 930)).add_operation (constinArgument_context.getter_instructionFace (SOURCE_FILE ("gtl_debugger.galgas", 930)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 930))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 930)) ;
  const GALGAS_gtlInstruction temp_1 = object ;
  callExtensionMethod_display ((const cPtr_gtlInstruction *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 931)) ;
  inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 932)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 932))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 932)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlInstruction_displayWithLocation (void) {
  enterExtensionMethod_displayWithLocation (kTypeDescriptor_GALGAS_gtlInstruction.mSlotID,
                                            extensionMethod_gtlInstruction_displayWithLocation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlInstruction_displayWithLocation (void) {
  gExtensionMethodTable_gtlInstruction_displayWithLocation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInstruction_displayWithLocation (defineExtensionMethod_gtlInstruction_displayWithLocation,
                                                               freeExtensionMethod_gtlInstruction_displayWithLocation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@gtlInstruction display'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlInstruction_display> gExtensionMethodTable_gtlInstruction_display ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_display (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlInstruction_display inMethod) {
  gExtensionMethodTable_gtlInstruction_display.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_display (const cPtr_gtlInstruction * inObject,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlInstruction_display f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlInstruction_display.count ()) {
      f = gExtensionMethodTable_gtlInstruction_display (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlInstruction_display.count ()) {
           f = gExtensionMethodTable_gtlInstruction_display (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlInstruction_display.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlInstruction_display (const cPtr_gtlInstruction * /* inObject */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  inCompiler->printMessage (GALGAS_string ("[Display not available]")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 938)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlInstruction.mSlotID,
                                extensionMethod_gtlInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlInstruction_display (void) {
  gExtensionMethodTable_gtlInstruction_display.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInstruction_display (defineExtensionMethod_gtlInstruction_display,
                                                   freeExtensionMethod_gtlInstruction_display) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension getter '@gtlInstruction mayExecuteWithoutError'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlInstruction_mayExecuteWithoutError> gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mayExecuteWithoutError (const int32_t inClassIndex,
                                                  enterExtensionGetter_gtlInstruction_mayExecuteWithoutError inGetter) {
  gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_mayExecuteWithoutError (const cPtr_gtlInstruction * inObject,
                                                        const GALGAS_gtlData & in_context,
                                                        const GALGAS_library & in_lib,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlInstruction_mayExecuteWithoutError f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.count ()) {
      f = gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.count ()) {
           f = gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_context, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlInstruction_mayExecuteWithoutError (const cPtr_gtlInstruction * /* inObject */,
                                                                          const GALGAS_gtlData & /* constinArgument_context */,
                                                                          const GALGAS_library & /* constinArgument_lib */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_may ; // Returned variable
  result_may = GALGAS_bool (true) ;
//---
  return result_may ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInstruction_mayExecuteWithoutError (void) {
  enterExtensionGetter_mayExecuteWithoutError (kTypeDescriptor_GALGAS_gtlInstruction.mSlotID,
                                               extensionGetter_gtlInstruction_mayExecuteWithoutError) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlInstruction_mayExecuteWithoutError (void) {
  gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInstruction_mayExecuteWithoutError (defineExtensionGetter_gtlInstruction_mayExecuteWithoutError,
                                                                  freeExtensionGetter_gtlInstruction_mayExecuteWithoutError) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@dataType oilType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_oilType (const GALGAS_dataType & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dataType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_dataType::kNotBuilt:
    break ;
  case GALGAS_dataType::kEnum_void:
    {
      result_result = GALGAS_string ("VOID") ;
    }
    break ;
  case GALGAS_dataType::kEnum_uint_33__32_Number:
    {
      result_result = GALGAS_string ("UINT32") ;
    }
    break ;
  case GALGAS_dataType::kEnum_sint_33__32_Number:
    {
      result_result = GALGAS_string ("INT32") ;
    }
    break ;
  case GALGAS_dataType::kEnum_uint_36__34_Number:
    {
      result_result = GALGAS_string ("UINT64") ;
    }
    break ;
  case GALGAS_dataType::kEnum_sint_36__34_Number:
    {
      result_result = GALGAS_string ("INT64") ;
    }
    break ;
  case GALGAS_dataType::kEnum_floatNumber:
    {
      result_result = GALGAS_string ("FLOAT") ;
    }
    break ;
  case GALGAS_dataType::kEnum_string:
    {
      result_result = GALGAS_string ("STRING") ;
    }
    break ;
  case GALGAS_dataType::kEnum_enumeration:
    {
      result_result = GALGAS_string ("ENUM") ;
    }
    break ;
  case GALGAS_dataType::kEnum_boolean:
    {
      result_result = GALGAS_string ("BOOLEAN") ;
    }
    break ;
  case GALGAS_dataType::kEnum_identifier:
    {
      result_result = GALGAS_string ("IDENTIFIER") ;
    }
    break ;
  case GALGAS_dataType::kEnum_objectType:
    {
      result_result = GALGAS_string ("OBJECT_TYPE") ;
    }
    break ;
  case GALGAS_dataType::kEnum_structType:
    {
      result_result = GALGAS_string ("STRUCT") ;
    }
    break ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension method '@attributeRange enclose'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_attributeRange_enclose> gExtensionMethodTable_attributeRange_enclose ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enclose (const int32_t inClassIndex,
                                   extensionMethodSignature_attributeRange_enclose inMethod) {
  gExtensionMethodTable_attributeRange_enclose.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_attributeRange_enclose (void) {
  gExtensionMethodTable_attributeRange_enclose.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_attributeRange_enclose (NULL,
                                                   freeExtensionMethod_attributeRange_enclose) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enclose (const cPtr_attributeRange * inObject,
                                  GALGAS_bool & out_isWithin,
                                  const GALGAS_attributeRange constin_value,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_isWithin.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_attributeRange) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_attributeRange_enclose f = NULL ;
    if (classIndex < gExtensionMethodTable_attributeRange_enclose.count ()) {
      f = gExtensionMethodTable_attributeRange_enclose (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_attributeRange_enclose.count ()) {
          f = gExtensionMethodTable_attributeRange_enclose (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_attributeRange_enclose.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_isWithin, constin_value, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension Getter '@enumValues mergeWithEnum'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues extensionGetter_mergeWithEnum (const GALGAS_enumValues & inObject,
                                                 const GALGAS_enumValues & constinArgument_enumToMerge,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumValues result_mergedEnum ; // Returned variable
  result_mergedEnum = GALGAS_enumValues::constructor_emptyMap (SOURCE_FILE ("implementation_types.galgas", 696)) ;
  const GALGAS_enumValues temp_0 = inObject ;
  cEnumerator_enumValues enumerator_19313 (temp_0, kEnumeration_up) ;
  while (enumerator_19313.hasCurrentObject ()) {
    GALGAS_implementationObjectMap var_attributes_19356 = enumerator_19313.current_subAttributes (HERE) ;
    const enumGalgasBool test_1 = constinArgument_enumToMerge.getter_hasKey (enumerator_19313.current_lkey (HERE).getter_string (SOURCE_FILE ("implementation_types.galgas", 699)) COMMA_SOURCE_FILE ("implementation_types.galgas", 699)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_implementationObjectMap var_attributesToMerge_19493 ;
      constinArgument_enumToMerge.method_get (enumerator_19313.current_lkey (HERE), var_attributesToMerge_19493, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 700)) ;
      var_attributes_19356 = extensionGetter_mergeImplementationObjectAttributesWith (enumerator_19313.current_subAttributes (HERE), var_attributesToMerge_19493, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 701)) ;
    }
    {
    result_mergedEnum.setter_put (enumerator_19313.current_lkey (HERE), var_attributes_19356, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 703)) ;
    }
    enumerator_19313.gotoNextObject () ;
  }
  cEnumerator_enumValues enumerator_19667 (constinArgument_enumToMerge, kEnumeration_up) ;
  while (enumerator_19667.hasCurrentObject ()) {
    const GALGAS_enumValues temp_2 = inObject ;
    const enumGalgasBool test_3 = temp_2.getter_hasKey (enumerator_19667.current_lkey (HERE).getter_string (SOURCE_FILE ("implementation_types.galgas", 706)) COMMA_SOURCE_FILE ("implementation_types.galgas", 706)).operator_not (SOURCE_FILE ("implementation_types.galgas", 706)).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      result_mergedEnum.setter_put (enumerator_19667.current_lkey (HERE), enumerator_19667.current_subAttributes (HERE), inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 707)) ;
      }
    }
    enumerator_19667.gotoNextObject () ;
  }
//---
  return result_mergedEnum ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@implementation hasKey'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_implementation_hasKey> gExtensionGetterTable_implementation_hasKey ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasKey (const int32_t inClassIndex,
                                  enterExtensionGetter_implementation_hasKey inGetter) {
  gExtensionGetterTable_implementation_hasKey.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasKey (const cPtr_implementation * inObject,
                                        const GALGAS_string & in_key,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_implementation_hasKey f = NULL ;
    if (classIndex < gExtensionGetterTable_implementation_hasKey.count ()) {
      f = gExtensionGetterTable_implementation_hasKey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_implementation_hasKey.count ()) {
           f = gExtensionGetterTable_implementation_hasKey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_implementation_hasKey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_key, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_implementation_hasKey (const cPtr_implementation * inObject,
                                                          const GALGAS_string & constinArgument_key,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  result_result = object->mAttribute_imp.getter_hasKey (constinArgument_key COMMA_SOURCE_FILE ("implementation_types.galgas", 765)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_implementation_hasKey (void) {
  enterExtensionGetter_hasKey (kTypeDescriptor_GALGAS_implementation.mSlotID,
                               extensionGetter_implementation_hasKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_implementation_hasKey (void) {
  gExtensionGetterTable_implementation_hasKey.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_implementation_hasKey (defineExtensionGetter_implementation_hasKey,
                                                  freeExtensionGetter_implementation_hasKey) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@implementation hasLKey'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_implementation_hasLKey> gExtensionGetterTable_implementation_hasLKey ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasLKey (const int32_t inClassIndex,
                                   enterExtensionGetter_implementation_hasLKey inGetter) {
  gExtensionGetterTable_implementation_hasLKey.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasLKey (const cPtr_implementation * inObject,
                                         const GALGAS_lstring & in_key,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_implementation_hasLKey f = NULL ;
    if (classIndex < gExtensionGetterTable_implementation_hasLKey.count ()) {
      f = gExtensionGetterTable_implementation_hasLKey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_implementation_hasLKey.count ()) {
           f = gExtensionGetterTable_implementation_hasLKey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_implementation_hasLKey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_key, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_implementation_hasLKey (const cPtr_implementation * inObject,
                                                           const GALGAS_lstring & constinArgument_key,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  result_result = object->mAttribute_imp.getter_hasKey (constinArgument_key.getter_string (SOURCE_FILE ("implementation_types.galgas", 771)) COMMA_SOURCE_FILE ("implementation_types.galgas", 771)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_implementation_hasLKey (void) {
  enterExtensionGetter_hasLKey (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                extensionGetter_implementation_hasLKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_implementation_hasLKey (void) {
  gExtensionGetterTable_implementation_hasLKey.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_implementation_hasLKey (defineExtensionGetter_implementation_hasLKey,
                                                   freeExtensionGetter_implementation_hasLKey) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension getter '@implementation impObject'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_implementation_impObject> gExtensionGetterTable_implementation_impObject ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_impObject (const int32_t inClassIndex,
                                     enterExtensionGetter_implementation_impObject inGetter) {
  gExtensionGetterTable_implementation_impObject.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject callExtensionGetter_impObject (const cPtr_implementation * inObject,
                                                           const GALGAS_string & in_objKind,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_implementationObject result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_implementation_impObject f = NULL ;
    if (classIndex < gExtensionGetterTable_implementation_impObject.count ()) {
      f = gExtensionGetterTable_implementation_impObject (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_implementation_impObject.count ()) {
           f = gExtensionGetterTable_implementation_impObject (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_implementation_impObject.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_objKind, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_implementationObject extensionGetter_implementation_impObject (const cPtr_implementation * inObject,
                                                                             const GALGAS_string & constinArgument_objKind,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationObject result_obj ; // Returned variable
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  result_obj = GALGAS_implementationObject::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("implementation_types.galgas", 777))  COMMA_SOURCE_FILE ("implementation_types.galgas", 777)), GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_types.galgas", 777))  COMMA_SOURCE_FILE ("implementation_types.galgas", 777)) ;
  const enumGalgasBool test_0 = object->mAttribute_imp.getter_hasKey (constinArgument_objKind COMMA_SOURCE_FILE ("implementation_types.galgas", 778)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mAttribute_imp.method_get (function_lstringWith (constinArgument_objKind, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 779)), result_obj, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 779)) ;
  }
//---
  return result_obj ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_implementation_impObject (void) {
  enterExtensionGetter_impObject (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                  extensionGetter_implementation_impObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_implementation_impObject (void) {
  gExtensionGetterTable_implementation_impObject.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_implementation_impObject (defineExtensionGetter_implementation_impObject,
                                                     freeExtensionGetter_implementation_impObject) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@implementation checkTypeForKind'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_implementation_checkTypeForKind> gExtensionMethodTable_implementation_checkTypeForKind ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkTypeForKind (const int32_t inClassIndex,
                                            extensionMethodSignature_implementation_checkTypeForKind inMethod) {
  gExtensionMethodTable_implementation_checkTypeForKind.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkTypeForKind (const cPtr_implementation * inObject,
                                           const GALGAS_string constin_objKind,
                                           const GALGAS_string constin_attributeName,
                                           const GALGAS_dataType constin_expectedType,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_implementation_checkTypeForKind f = NULL ;
    if (classIndex < gExtensionMethodTable_implementation_checkTypeForKind.count ()) {
      f = gExtensionMethodTable_implementation_checkTypeForKind (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_implementation_checkTypeForKind.count ()) {
           f = gExtensionMethodTable_implementation_checkTypeForKind (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_implementation_checkTypeForKind.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_objKind, constin_attributeName, constin_expectedType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementation_checkTypeForKind (const cPtr_implementation * inObject,
                                                             const GALGAS_string constinArgument_objKind,
                                                             const GALGAS_string constinArgument_attributeName,
                                                             const GALGAS_dataType constinArgument_expectedType,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  const GALGAS_implementation temp_0 = object ;
  GALGAS_implementationObject var_obj_21635 = callExtensionGetter_impObject ((const cPtr_implementation *) temp_0.ptr (), constinArgument_objKind, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 787)) ;
  {
  routine_checkTypeForAttribute (var_obj_21635.getter_attributes (SOURCE_FILE ("implementation_types.galgas", 788)), constinArgument_attributeName, constinArgument_expectedType, inCompiler  COMMA_SOURCE_FILE ("implementation_types.galgas", 788)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementation_checkTypeForKind (void) {
  enterExtensionMethod_checkTypeForKind (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                         extensionMethod_implementation_checkTypeForKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_implementation_checkTypeForKind (void) {
  gExtensionMethodTable_implementation_checkTypeForKind.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementation_checkTypeForKind (defineExtensionMethod_implementation_checkTypeForKind,
                                                            freeExtensionMethod_implementation_checkTypeForKind) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@implementation checkObjectReferences'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_implementation_checkObjectReferences> gExtensionMethodTable_implementation_checkObjectReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkObjectReferences (const int32_t inClassIndex,
                                                 extensionMethodSignature_implementation_checkObjectReferences inMethod) {
  gExtensionMethodTable_implementation_checkObjectReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkObjectReferences (const cPtr_implementation * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_implementation_checkObjectReferences f = NULL ;
    if (classIndex < gExtensionMethodTable_implementation_checkObjectReferences.count ()) {
      f = gExtensionMethodTable_implementation_checkObjectReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_implementation_checkObjectReferences.count ()) {
           f = gExtensionMethodTable_implementation_checkObjectReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_implementation_checkObjectReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementation_checkObjectReferences (const cPtr_implementation * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  cEnumerator_implementationMap enumerator_21804 (object->mAttribute_imp, kEnumeration_up) ;
  while (enumerator_21804.hasCurrentObject ()) {
    cEnumerator_implementationObjectMap enumerator_21839 (enumerator_21804.current_obj (HERE).getter_attributes (SOURCE_FILE ("implementation_types.galgas", 793)), kEnumeration_up) ;
    while (enumerator_21839.hasCurrentObject ()) {
      const GALGAS_implementation temp_0 = object ;
      callExtensionMethod_checkAttributeReferences ((const cPtr_impType *) enumerator_21839.current_type (HERE).ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 794)) ;
      enumerator_21839.gotoNextObject () ;
    }
    enumerator_21804.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementation_checkObjectReferences (void) {
  enterExtensionMethod_checkObjectReferences (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                              extensionMethod_implementation_checkObjectReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_implementation_checkObjectReferences (void) {
  gExtensionMethodTable_implementation_checkObjectReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementation_checkObjectReferences (defineExtensionMethod_implementation_checkObjectReferences,
                                                                 freeExtensionMethod_implementation_checkObjectReferences) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension Getter '@implementationObjectMap mergeImplementationObjectAttributesWith'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap extensionGetter_mergeImplementationObjectAttributesWith (const GALGAS_implementationObjectMap & inObject,
                                                                                        const GALGAS_implementationObjectMap & constinArgument_attributesToMerge,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationObjectMap result_mergedAttributes ; // Returned variable
  result_mergedAttributes = GALGAS_implementationObjectMap::constructor_emptyMap (SOURCE_FILE ("implementation_types.galgas", 1015)) ;
  const GALGAS_implementationObjectMap temp_0 = inObject ;
  cEnumerator_implementationObjectMap enumerator_29413 (temp_0, kEnumeration_up) ;
  while (enumerator_29413.hasCurrentObject ()) {
    GALGAS_impType var_merged_29436 = enumerator_29413.current_type (HERE) ;
    const enumGalgasBool test_1 = constinArgument_attributesToMerge.getter_hasKey (enumerator_29413.current_lkey (HERE).getter_string (SOURCE_FILE ("implementation_types.galgas", 1018)) COMMA_SOURCE_FILE ("implementation_types.galgas", 1018)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_impType var_typeToMerge_29554 ;
      constinArgument_attributesToMerge.method_get (enumerator_29413.current_lkey (HERE), var_typeToMerge_29554, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 1019)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_29413.current_type (HERE).getter_dynamicType (SOURCE_FILE ("implementation_types.galgas", 1020)).objectCompare (var_typeToMerge_29554.getter_dynamicType (SOURCE_FILE ("implementation_types.galgas", 1020)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_merged_29436 = callExtensionGetter_mergeWithType ((const cPtr_impType *) enumerator_29413.current_type (HERE).ptr (), var_typeToMerge_29554, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 1021)) ;
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_29413.current_lkey (HERE).getter_location (SOURCE_FILE ("implementation_types.galgas", 1024)), GALGAS_string ("Redefined type"), fixItArray3  COMMA_SOURCE_FILE ("implementation_types.galgas", 1024)) ;
      }
    }
    {
    result_mergedAttributes.setter_put (enumerator_29413.current_lkey (HERE), var_merged_29436, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 1027)) ;
    }
    enumerator_29413.gotoNextObject () ;
  }
  cEnumerator_implementationObjectMap enumerator_29843 (constinArgument_attributesToMerge, kEnumeration_up) ;
  while (enumerator_29843.hasCurrentObject ()) {
    const GALGAS_implementationObjectMap temp_4 = inObject ;
    const enumGalgasBool test_5 = temp_4.getter_hasKey (enumerator_29843.current_lkey (HERE).getter_string (SOURCE_FILE ("implementation_types.galgas", 1030)) COMMA_SOURCE_FILE ("implementation_types.galgas", 1030)).operator_not (SOURCE_FILE ("implementation_types.galgas", 1030)).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      result_mergedAttributes.setter_put (enumerator_29843.current_lkey (HERE), enumerator_29843.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 1031)) ;
      }
    }
    enumerator_29843.gotoNextObject () ;
  }
//---
  return result_mergedAttributes ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension getter '@objectAttributes fieldMap'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_objectAttributes_fieldMap> gExtensionGetterTable_objectAttributes_fieldMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_fieldMap (const int32_t inClassIndex,
                                    enterExtensionGetter_objectAttributes_fieldMap inGetter) {
  gExtensionGetterTable_objectAttributes_fieldMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_fieldMap (const cPtr_objectAttributes * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_objectAttributes) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_objectAttributes_fieldMap f = NULL ;
    if (classIndex < gExtensionGetterTable_objectAttributes_fieldMap.count ()) {
      f = gExtensionGetterTable_objectAttributes_fieldMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_objectAttributes_fieldMap.count ()) {
           f = gExtensionGetterTable_objectAttributes_fieldMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_objectAttributes_fieldMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_objectAttributes_fieldMap (const cPtr_objectAttributes * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_objectAttributes * object = inObject ;
  macroValidSharedObject (object, cPtr_objectAttributes) ;
  result_result = GALGAS_gtlStruct::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 160)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 160)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("systemConfig.galgas", 160))  COMMA_SOURCE_FILE ("systemConfig.galgas", 160)) ;
  cEnumerator_identifierMap enumerator_5178 (object->mAttribute_objectParams, kEnumeration_up) ;
  while (enumerator_5178.hasCurrentObject ()) {
    callExtensionMethod_set ((const cPtr_object_5F_t *) enumerator_5178.current_value (HERE).ptr (), enumerator_5178.current_lkey (HERE), result_result, inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 162)) ;
    enumerator_5178.gotoNextObject () ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_objectAttributes_fieldMap (void) {
  enterExtensionGetter_fieldMap (kTypeDescriptor_GALGAS_objectAttributes.mSlotID,
                                 extensionGetter_objectAttributes_fieldMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_objectAttributes_fieldMap (void) {
  gExtensionGetterTable_objectAttributes_fieldMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_objectAttributes_fieldMap (defineExtensionGetter_objectAttributes_fieldMap,
                                                      freeExtensionGetter_objectAttributes_fieldMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension Getter '@string trimLeft'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_trimLeft (const GALGAS_string & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_string temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, temp_0.getter_leftSubString (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("systemConfig.galgas", 169)).objectCompare (GALGAS_string (" "))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_string temp_2 = inObject ;
    const GALGAS_string temp_3 = inObject ;
    result_result = extensionGetter_trimLeft (temp_2.getter_rightSubString (temp_3.getter_length (SOURCE_FILE ("systemConfig.galgas", 170)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 170)) COMMA_SOURCE_FILE ("systemConfig.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 170)) ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_string temp_4 = inObject ;
    result_result = temp_4 ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@string trimRight'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_trimRight (const GALGAS_string & inObject,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_string temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, temp_0.getter_rightSubString (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("systemConfig.galgas", 179)).objectCompare (GALGAS_string (" "))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_string temp_2 = inObject ;
    const GALGAS_string temp_3 = inObject ;
    result_result = extensionGetter_trimRight (temp_2.getter_leftSubString (temp_3.getter_length (SOURCE_FILE ("systemConfig.galgas", 180)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 180)) COMMA_SOURCE_FILE ("systemConfig.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 180)) ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_string temp_4 = inObject ;
    result_result = temp_4 ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@implementation verifyApplication'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_implementation_verifyApplication> gExtensionMethodTable_implementation_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyApplication (const int32_t inClassIndex,
                                             extensionMethodSignature_implementation_verifyApplication inMethod) {
  gExtensionMethodTable_implementation_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyApplication (const cPtr_implementation * inObject,
                                            const GALGAS_applicationDefinition constin_appDef,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_implementation_verifyApplication f = NULL ;
    if (classIndex < gExtensionMethodTable_implementation_verifyApplication.count ()) {
      f = gExtensionMethodTable_implementation_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_implementation_verifyApplication.count ()) {
           f = gExtensionMethodTable_implementation_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_implementation_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_appDef, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementation_verifyApplication (const cPtr_implementation * inObject,
                                                              const GALGAS_applicationDefinition constinArgument_appDef,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementation * object = inObject ;
  macroValidSharedObject (object, cPtr_implementation) ;
  cEnumerator_implementationMap enumerator_921 (object->mAttribute_imp, kEnumeration_up) ;
  while (enumerator_921.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_appDef.getter_objects (SOURCE_FILE ("semantic_verification.galgas", 35)).getter_hasKey (enumerator_921.current_lkey (HERE).getter_string (SOURCE_FILE ("semantic_verification.galgas", 35)) COMMA_SOURCE_FILE ("semantic_verification.galgas", 35)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_objectKind var_obj_1003 ;
      constinArgument_appDef.getter_objects (SOURCE_FILE ("semantic_verification.galgas", 37)).method_get (enumerator_921.current_lkey (HERE), var_obj_1003, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 37)) ;
      callExtensionMethod_verifyApplication ((const cPtr_implementationObject *) enumerator_921.current_obj (HERE).ptr (), var_obj_1003, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 38)) ;
    }
    enumerator_921.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementation_verifyApplication (void) {
  enterExtensionMethod_verifyApplication (kTypeDescriptor_GALGAS_implementation.mSlotID,
                                          extensionMethod_implementation_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_implementation_verifyApplication (void) {
  gExtensionMethodTable_implementation_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementation_verifyApplication (defineExtensionMethod_implementation_verifyApplication,
                                                             freeExtensionMethod_implementation_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@objectAttributes verifyCrossReferences'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_objectAttributes_verifyCrossReferences> gExtensionMethodTable_objectAttributes_verifyCrossReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyCrossReferences (const int32_t inClassIndex,
                                                 extensionMethodSignature_objectAttributes_verifyCrossReferences inMethod) {
  gExtensionMethodTable_objectAttributes_verifyCrossReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyCrossReferences (const cPtr_objectAttributes * inObject,
                                                const GALGAS_objectsMap constin_allObjects,
                                                const GALGAS_implementationObjectMap constin_attributes,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_objectAttributes) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_objectAttributes_verifyCrossReferences f = NULL ;
    if (classIndex < gExtensionMethodTable_objectAttributes_verifyCrossReferences.count ()) {
      f = gExtensionMethodTable_objectAttributes_verifyCrossReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_objectAttributes_verifyCrossReferences.count ()) {
           f = gExtensionMethodTable_objectAttributes_verifyCrossReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_objectAttributes_verifyCrossReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_allObjects, constin_attributes, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_objectAttributes_verifyCrossReferences (const cPtr_objectAttributes * inObject,
                                                                    const GALGAS_objectsMap constinArgument_allObjects,
                                                                    const GALGAS_implementationObjectMap constinArgument_attributes,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_objectAttributes * object = inObject ;
  macroValidSharedObject (object, cPtr_objectAttributes) ;
  cEnumerator_identifierMap enumerator_18622 (object->mAttribute_objectParams, kEnumeration_up) ;
  while (enumerator_18622.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_attributes.getter_hasKey (enumerator_18622.current_lkey (HERE).getter_string (SOURCE_FILE ("semantic_verification.galgas", 599)) COMMA_SOURCE_FILE ("semantic_verification.galgas", 599)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_impType var_type_18715 ;
      constinArgument_attributes.method_get (enumerator_18622.current_lkey (HERE), var_type_18715, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 600)) ;
      callExtensionMethod_verifyCrossReferences ((const cPtr_object_5F_t *) enumerator_18622.current_value (HERE).ptr (), constinArgument_allObjects, var_type_18715, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 601)) ;
    }
    enumerator_18622.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_objectAttributes_verifyCrossReferences (void) {
  enterExtensionMethod_verifyCrossReferences (kTypeDescriptor_GALGAS_objectAttributes.mSlotID,
                                              extensionMethod_objectAttributes_verifyCrossReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_objectAttributes_verifyCrossReferences (void) {
  gExtensionMethodTable_objectAttributes_verifyCrossReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_objectAttributes_verifyCrossReferences (defineExtensionMethod_objectAttributes_verifyCrossReferences,
                                                                   freeExtensionMethod_objectAttributes_verifyCrossReferences) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element::GALGAS_gtlVarPath_2D_element (void) :
mAttribute_item () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element::~ GALGAS_gtlVarPath_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element::GALGAS_gtlVarPath_2D_element (const GALGAS_gtlVarItem & inOperand0) :
mAttribute_item (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element GALGAS_gtlVarPath_2D_element::constructor_new (const GALGAS_gtlVarItem & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlVarPath_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlVarPath_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlVarPath_2D_element::objectCompare (const GALGAS_gtlVarPath_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_item.objectCompare (inOperand.mAttribute_item) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlVarPath_2D_element::isValid (void) const {
  return mAttribute_item.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarPath_2D_element::drop (void) {
  mAttribute_item.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarPath_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @gtlVarPath-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_item.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarItem GALGAS_gtlVarPath_2D_element::getter_item (UNUSED_LOCATION_ARGS) const {
  return mAttribute_item ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlVarPath-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlVarPath_2D_element ("gtlVarPath-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlVarPath_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlVarPath_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlVarPath_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlVarPath_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element GALGAS_gtlVarPath_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlVarPath_2D_element result ;
  const GALGAS_gtlVarPath_2D_element * p = (const GALGAS_gtlVarPath_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlVarPath_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlVarPath-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element::GALGAS_gtlTypedArgumentList_2D_element (void) :
mAttribute_type () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element::~ GALGAS_gtlTypedArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element::GALGAS_gtlTypedArgumentList_2D_element (const GALGAS_type & inOperand0) :
mAttribute_type (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element GALGAS_gtlTypedArgumentList_2D_element::constructor_new (const GALGAS_type & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlTypedArgumentList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlTypedArgumentList_2D_element::objectCompare (const GALGAS_gtlTypedArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_type.objectCompare (inOperand.mAttribute_type) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlTypedArgumentList_2D_element::isValid (void) const {
  return mAttribute_type.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlTypedArgumentList_2D_element::drop (void) {
  mAttribute_type.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlTypedArgumentList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @gtlTypedArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_type.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_gtlTypedArgumentList_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlTypedArgumentList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTypedArgumentList_2D_element ("gtlTypedArgumentList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlTypedArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTypedArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlTypedArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTypedArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element GALGAS_gtlTypedArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList_2D_element result ;
  const GALGAS_gtlTypedArgumentList_2D_element * p = (const GALGAS_gtlTypedArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlTypedArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTypedArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element::GALGAS_gtlInstructionList_2D_element (void) :
mAttribute_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element::~ GALGAS_gtlInstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element::GALGAS_gtlInstructionList_2D_element (const GALGAS_gtlInstruction & inOperand0) :
mAttribute_instruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element GALGAS_gtlInstructionList_2D_element::constructor_new (const GALGAS_gtlInstruction & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlInstructionList_2D_element::objectCompare (const GALGAS_gtlInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_instruction.objectCompare (inOperand.mAttribute_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlInstructionList_2D_element::isValid (void) const {
  return mAttribute_instruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionList_2D_element::drop (void) {
  mAttribute_instruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @gtlInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_instruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstruction GALGAS_gtlInstructionList_2D_element::getter_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_instruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlInstructionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInstructionList_2D_element ("gtlInstructionList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element GALGAS_gtlInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionList_2D_element result ;
  const GALGAS_gtlInstructionList_2D_element * p = (const GALGAS_gtlInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element::GALGAS_gtlInstructionListContextStack_2D_element (void) :
mAttribute_nextInstructionIndex (),
mAttribute_instructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element::~ GALGAS_gtlInstructionListContextStack_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element::GALGAS_gtlInstructionListContextStack_2D_element (const GALGAS_uint & inOperand0,
                                                                                                    const GALGAS_gtlInstructionList & inOperand1) :
mAttribute_nextInstructionIndex (inOperand0),
mAttribute_instructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlInstructionListContextStack_2D_element (GALGAS_uint::constructor_default (HERE),
                                                           GALGAS_gtlInstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                                    const GALGAS_gtlInstructionList & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlInstructionListContextStack_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlInstructionListContextStack_2D_element::objectCompare (const GALGAS_gtlInstructionListContextStack_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_nextInstructionIndex.objectCompare (inOperand.mAttribute_nextInstructionIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_instructionList.objectCompare (inOperand.mAttribute_instructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlInstructionListContextStack_2D_element::isValid (void) const {
  return mAttribute_nextInstructionIndex.isValid () && mAttribute_instructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack_2D_element::drop (void) {
  mAttribute_nextInstructionIndex.drop () ;
  mAttribute_instructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @gtlInstructionListContextStack-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_nextInstructionIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_instructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_gtlInstructionListContextStack_2D_element::getter_nextInstructionIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_nextInstructionIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlInstructionListContextStack_2D_element::getter_instructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_instructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @gtlInstructionListContextStack-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInstructionListContextStack_2D_element ("gtlInstructionListContextStack-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlInstructionListContextStack_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInstructionListContextStack_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlInstructionListContextStack_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInstructionListContextStack_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack_2D_element result ;
  const GALGAS_gtlInstructionListContextStack_2D_element * p = (const GALGAS_gtlInstructionListContextStack_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlInstructionListContextStack_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInstructionListContextStack-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element::GALGAS_gtlBreakpointList_2D_element (void) :
mAttribute_breakpoint () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element::~ GALGAS_gtlBreakpointList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element::GALGAS_gtlBreakpointList_2D_element (const GALGAS_gtlBreakpoint & inOperand0) :
mAttribute_breakpoint (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlBreakpointList_2D_element (GALGAS_gtlBreakpoint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::constructor_new (const GALGAS_gtlBreakpoint & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlBreakpointList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlBreakpointList_2D_element::objectCompare (const GALGAS_gtlBreakpointList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_breakpoint.objectCompare (inOperand.mAttribute_breakpoint) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlBreakpointList_2D_element::isValid (void) const {
  return mAttribute_breakpoint.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList_2D_element::drop (void) {
  mAttribute_breakpoint.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @gtlBreakpointList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_breakpoint.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint GALGAS_gtlBreakpointList_2D_element::getter_breakpoint (UNUSED_LOCATION_ARGS) const {
  return mAttribute_breakpoint ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlBreakpointList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointList_2D_element ("gtlBreakpointList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBreakpointList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBreakpointList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList_2D_element result ;
  const GALGAS_gtlBreakpointList_2D_element * p = (const GALGAS_gtlBreakpointList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBreakpointList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element::GALGAS_uint_33__32_List_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element::~ GALGAS_uint_33__32_List_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element::GALGAS_uint_33__32_List_2D_element (const GALGAS_location & inOperand0,
                                                                        const GALGAS_uint & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element GALGAS_uint_33__32_List_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uint_33__32_List_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                             GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element GALGAS_uint_33__32_List_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                        const GALGAS_uint & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint_33__32_List_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_uint_33__32_List_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uint_33__32_List_2D_element::objectCompare (const GALGAS_uint_33__32_List_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_uint_33__32_List_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_33__32_List_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_33__32_List_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @uint32List-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_uint_33__32_List_2D_element::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint_33__32_List_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @uint32List-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_33__32_List_2D_element ("uint32List-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_33__32_List_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32_List_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_33__32_List_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_33__32_List_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_33__32_List_2D_element GALGAS_uint_33__32_List_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32_List_2D_element result ;
  const GALGAS_uint_33__32_List_2D_element * p = (const GALGAS_uint_33__32_List_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_33__32_List_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint32List-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element::GALGAS_uint_36__34_List_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element::~ GALGAS_uint_36__34_List_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element::GALGAS_uint_36__34_List_2D_element (const GALGAS_location & inOperand0,
                                                                        const GALGAS_uint_36__34_ & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element GALGAS_uint_36__34_List_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uint_36__34_List_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                             GALGAS_uint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element GALGAS_uint_36__34_List_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                        const GALGAS_uint_36__34_ & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint_36__34_List_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_uint_36__34_List_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uint_36__34_List_2D_element::objectCompare (const GALGAS_uint_36__34_List_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_uint_36__34_List_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_List_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_List_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @uint64List-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_uint_36__34_List_2D_element::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_List_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @uint64List-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_List_2D_element ("uint64List-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_List_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_List_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_List_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_List_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_List_2D_element GALGAS_uint_36__34_List_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_List_2D_element result ;
  const GALGAS_uint_36__34_List_2D_element * p = (const GALGAS_uint_36__34_List_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_List_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64List-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element::GALGAS_sint_33__32_List_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element::~ GALGAS_sint_33__32_List_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element::GALGAS_sint_33__32_List_2D_element (const GALGAS_location & inOperand0,
                                                                        const GALGAS_sint & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element GALGAS_sint_33__32_List_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sint_33__32_List_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                             GALGAS_sint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element GALGAS_sint_33__32_List_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                        const GALGAS_sint & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_33__32_List_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sint_33__32_List_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sint_33__32_List_2D_element::objectCompare (const GALGAS_sint_33__32_List_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sint_33__32_List_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sint_33__32_List_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sint_33__32_List_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @sint32List-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_sint_33__32_List_2D_element::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint GALGAS_sint_33__32_List_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sint32List-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_33__32_List_2D_element ("sint32List-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_33__32_List_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32_List_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_33__32_List_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_33__32_List_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_33__32_List_2D_element GALGAS_sint_33__32_List_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32_List_2D_element result ;
  const GALGAS_sint_33__32_List_2D_element * p = (const GALGAS_sint_33__32_List_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_33__32_List_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint32List-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element::GALGAS_sint_36__34_List_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element::~ GALGAS_sint_36__34_List_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element::GALGAS_sint_36__34_List_2D_element (const GALGAS_location & inOperand0,
                                                                        const GALGAS_sint_36__34_ & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element GALGAS_sint_36__34_List_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sint_36__34_List_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                             GALGAS_sint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element GALGAS_sint_36__34_List_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                        const GALGAS_sint_36__34_ & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_List_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sint_36__34_List_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sint_36__34_List_2D_element::objectCompare (const GALGAS_sint_36__34_List_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sint_36__34_List_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sint_36__34_List_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sint_36__34_List_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @sint64List-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_sint_36__34_List_2D_element::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_sint_36__34_List_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sint64List-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_List_2D_element ("sint64List-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34_List_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_List_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34_List_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_List_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_List_2D_element GALGAS_sint_36__34_List_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_List_2D_element result ;
  const GALGAS_sint_36__34_List_2D_element * p = (const GALGAS_sint_36__34_List_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_List_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64List-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element::GALGAS_floatList_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element::~ GALGAS_floatList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element::GALGAS_floatList_2D_element (const GALGAS_location & inOperand0,
                                                          const GALGAS_double & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element GALGAS_floatList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_floatList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                      GALGAS_double::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element GALGAS_floatList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                          const GALGAS_double & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_floatList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_floatList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_floatList_2D_element::objectCompare (const GALGAS_floatList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_floatList_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_floatList_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_floatList_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @floatList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_floatList_2D_element::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_floatList_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @floatList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_floatList_2D_element ("floatList-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_floatList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_floatList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_floatList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_floatList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_floatList_2D_element GALGAS_floatList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_floatList_2D_element result ;
  const GALGAS_floatList_2D_element * p = (const GALGAS_floatList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_floatList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("floatList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationList_2D_element::GALGAS_locationList_2D_element (void) :
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationList_2D_element::~ GALGAS_locationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationList_2D_element::GALGAS_locationList_2D_element (const GALGAS_location & inOperand0) :
mAttribute_location (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationList_2D_element GALGAS_locationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_locationList_2D_element (GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationList_2D_element GALGAS_locationList_2D_element::constructor_new (const GALGAS_location & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_locationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_locationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_locationList_2D_element::objectCompare (const GALGAS_locationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_locationList_2D_element::isValid (void) const {
  return mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_locationList_2D_element::drop (void) {
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_locationList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @locationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_locationList_2D_element::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @locationList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_locationList_2D_element ("locationList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_locationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_locationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_locationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationList_2D_element GALGAS_locationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_locationList_2D_element result ;
  const GALGAS_locationList_2D_element * p = (const GALGAS_locationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_locationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("locationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@gtlTemplate execute'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlTemplate_execute> gExtensionMethodTable_gtlTemplate_execute ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_execute (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlTemplate_execute inMethod) {
  gExtensionMethodTable_gtlTemplate_execute.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_execute (const cPtr_gtlTemplate * inObject,
                                  GALGAS_gtlContext & io_context,
                                  GALGAS_gtlData & io_vars,
                                  GALGAS_library & io_lib,
                                  GALGAS_string & io_outputString,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlTemplate) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlTemplate_execute f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlTemplate_execute.count ()) {
      f = gExtensionMethodTable_gtlTemplate_execute (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlTemplate_execute.count ()) {
           f = gExtensionMethodTable_gtlTemplate_execute (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlTemplate_execute.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTemplate_execute (const cPtr_gtlTemplate * inObject,
                                                 GALGAS_gtlContext & ioArgument_context,
                                                 GALGAS_gtlData & ioArgument_vars,
                                                 GALGAS_library & ioArgument_lib,
                                                 GALGAS_string & ioArgument_outputString,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplate * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplate) ;
  extensionMethod_execute (object->mAttribute_program, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 225)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTemplate_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTemplate.mSlotID,
                                extensionMethod_gtlTemplate_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlTemplate_execute (void) {
  gExtensionMethodTable_gtlTemplate_execute.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTemplate_execute (defineExtensionMethod_gtlTemplate_execute,
                                                freeExtensionMethod_gtlTemplate_execute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@library functionExists'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_functionExists> gExtensionGetterTable_library_functionExists ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_functionExists (const int32_t inClassIndex,
                                          enterExtensionGetter_library_functionExists inGetter) {
  gExtensionGetterTable_library_functionExists.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_functionExists (const cPtr_library * inObject,
                                                const GALGAS_lstring & in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_functionExists f = NULL ;
    if (classIndex < gExtensionGetterTable_library_functionExists.count ()) {
      f = gExtensionGetterTable_library_functionExists (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_functionExists.count ()) {
           f = gExtensionGetterTable_library_functionExists (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_functionExists.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_library_functionExists (const cPtr_library * inObject,
                                                           const GALGAS_lstring & constinArgument_name,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_exists ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  result_exists = object->mAttribute_funcMap.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 286)) COMMA_SOURCE_FILE ("gtl_types.galgas", 286)) ;
//---
  return result_exists ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_functionExists (void) {
  enterExtensionGetter_functionExists (kTypeDescriptor_GALGAS_library.mSlotID,
                                       extensionGetter_library_functionExists) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_functionExists (void) {
  gExtensionGetterTable_library_functionExists.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_functionExists (defineExtensionGetter_library_functionExists,
                                                   freeExtensionGetter_library_functionExists) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@library getFunction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_getFunction> gExtensionGetterTable_library_getFunction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getFunction (const int32_t inClassIndex,
                                       enterExtensionGetter_library_getFunction inGetter) {
  gExtensionGetterTable_library_getFunction.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction callExtensionGetter_getFunction (const cPtr_library * inObject,
                                                    const GALGAS_lstring & in_name,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlFunction result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_getFunction f = NULL ;
    if (classIndex < gExtensionGetterTable_library_getFunction.count ()) {
      f = gExtensionGetterTable_library_getFunction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_getFunction.count ()) {
           f = gExtensionGetterTable_library_getFunction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_getFunction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlFunction extensionGetter_library_getFunction (const cPtr_library * inObject,
                                                               const GALGAS_lstring & constinArgument_name,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlFunction result_aFunction ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mAttribute_funcMap.method_get (constinArgument_name, result_aFunction, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 293)) ;
//---
  return result_aFunction ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_getFunction (void) {
  enterExtensionGetter_getFunction (kTypeDescriptor_GALGAS_library.mSlotID,
                                    extensionGetter_library_getFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_getFunction (void) {
  gExtensionGetterTable_library_getFunction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_getFunction (defineExtensionGetter_library_getFunction,
                                                freeExtensionGetter_library_getFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@library putFunction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_putFunction> gExtensionModifierTable_library_putFunction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putFunction (const int32_t inClassIndex,
                                       extensionSetterSignature_library_putFunction inModifier) {
  gExtensionModifierTable_library_putFunction.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putFunction (cPtr_library * inObject,
                                      const GALGAS_lstring constin_name,
                                      const GALGAS_gtlFunction constin_aFunction,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putFunction f = NULL ;
    if (classIndex < gExtensionModifierTable_library_putFunction.count ()) {
      f = gExtensionModifierTable_library_putFunction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putFunction.count ()) {
           f = gExtensionModifierTable_library_putFunction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putFunction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aFunction, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_putFunction (cPtr_library * inObject,
                                                 const GALGAS_lstring constinArgument_name,
                                                 const GALGAS_gtlFunction constinArgument_aFunction,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mAttribute_funcMap.setter_put (constinArgument_name, constinArgument_aFunction, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 300)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_putFunction (void) {
  enterExtensionSetter_putFunction (kTypeDescriptor_GALGAS_library.mSlotID,
                                    extensionSetter_library_putFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_putFunction (void) {
  gExtensionModifierTable_library_putFunction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_putFunction (defineExtensionSetter_library_putFunction,
                                                freeExtensionModifier_library_putFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@library getterExists'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_getterExists> gExtensionGetterTable_library_getterExists ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getterExists (const int32_t inClassIndex,
                                        enterExtensionGetter_library_getterExists inGetter) {
  gExtensionGetterTable_library_getterExists.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_getterExists (const cPtr_library * inObject,
                                              const GALGAS_string & in_type,
                                              const GALGAS_lstring & in_name,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_getterExists f = NULL ;
    if (classIndex < gExtensionGetterTable_library_getterExists.count ()) {
      f = gExtensionGetterTable_library_getterExists (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_getterExists.count ()) {
           f = gExtensionGetterTable_library_getterExists (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_getterExists.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_type, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_library_getterExists (const cPtr_library * inObject,
                                                         const GALGAS_string & constinArgument_type,
                                                         const GALGAS_lstring & constinArgument_name,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_exists ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  result_exists = object->mAttribute_getterMap.getter_hasKey (constinArgument_type.add_operation (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 308)) COMMA_SOURCE_FILE ("gtl_types.galgas", 308)) ;
//---
  return result_exists ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_getterExists (void) {
  enterExtensionGetter_getterExists (kTypeDescriptor_GALGAS_library.mSlotID,
                                     extensionGetter_library_getterExists) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_getterExists (void) {
  gExtensionGetterTable_library_getterExists.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_getterExists (defineExtensionGetter_library_getterExists,
                                                 freeExtensionGetter_library_getterExists) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library getGetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_getGetter> gExtensionGetterTable_library_getGetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getGetter (const int32_t inClassIndex,
                                     enterExtensionGetter_library_getGetter inGetter) {
  gExtensionGetterTable_library_getGetter.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetter callExtensionGetter_getGetter (const cPtr_library * inObject,
                                                const GALGAS_string & in_type,
                                                const GALGAS_lstring & in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetter result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_getGetter f = NULL ;
    if (classIndex < gExtensionGetterTable_library_getGetter.count ()) {
      f = gExtensionGetterTable_library_getGetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_getGetter.count ()) {
           f = gExtensionGetterTable_library_getGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_getGetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_type, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlGetter extensionGetter_library_getGetter (const cPtr_library * inObject,
                                                           const GALGAS_string & constinArgument_type,
                                                           const GALGAS_lstring & constinArgument_name,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlGetter result_aGetter ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mAttribute_getterMap.method_get (GALGAS_lstring::constructor_new (constinArgument_type.add_operation (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 316)), constinArgument_name.getter_location (SOURCE_FILE ("gtl_types.galgas", 316))  COMMA_SOURCE_FILE ("gtl_types.galgas", 316)), result_aGetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 316)) ;
//---
  return result_aGetter ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_getGetter (void) {
  enterExtensionGetter_getGetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionGetter_library_getGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_getGetter (void) {
  gExtensionGetterTable_library_getGetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_getGetter (defineExtensionGetter_library_getGetter,
                                              freeExtensionGetter_library_getGetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library putGetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_putGetter> gExtensionModifierTable_library_putGetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putGetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putGetter inModifier) {
  gExtensionModifierTable_library_putGetter.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putGetter (cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlGetter constin_aGetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putGetter f = NULL ;
    if (classIndex < gExtensionModifierTable_library_putGetter.count ()) {
      f = gExtensionModifierTable_library_putGetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putGetter.count ()) {
           f = gExtensionModifierTable_library_putGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putGetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aGetter, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_putGetter (cPtr_library * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               const GALGAS_gtlGetter constinArgument_aGetter,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mAttribute_getterMap.setter_put (constinArgument_name, constinArgument_aGetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 323)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_putGetter (void) {
  enterExtensionSetter_putGetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionSetter_library_putGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_putGetter (void) {
  gExtensionModifierTable_library_putGetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_putGetter (defineExtensionSetter_library_putGetter,
                                              freeExtensionModifier_library_putGetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@library setterExists'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_setterExists> gExtensionGetterTable_library_setterExists ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_setterExists (const int32_t inClassIndex,
                                        enterExtensionGetter_library_setterExists inGetter) {
  gExtensionGetterTable_library_setterExists.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_setterExists (const cPtr_library * inObject,
                                              const GALGAS_string & in_type,
                                              const GALGAS_lstring & in_name,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_setterExists f = NULL ;
    if (classIndex < gExtensionGetterTable_library_setterExists.count ()) {
      f = gExtensionGetterTable_library_setterExists (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_setterExists.count ()) {
           f = gExtensionGetterTable_library_setterExists (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_setterExists.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_type, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_library_setterExists (const cPtr_library * inObject,
                                                         const GALGAS_string & constinArgument_type,
                                                         const GALGAS_lstring & constinArgument_name,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_exists ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  result_exists = object->mAttribute_setterMap.getter_hasKey (constinArgument_type.add_operation (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 331)) COMMA_SOURCE_FILE ("gtl_types.galgas", 331)) ;
//---
  return result_exists ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_setterExists (void) {
  enterExtensionGetter_setterExists (kTypeDescriptor_GALGAS_library.mSlotID,
                                     extensionGetter_library_setterExists) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_setterExists (void) {
  gExtensionGetterTable_library_setterExists.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_setterExists (defineExtensionGetter_library_setterExists,
                                                 freeExtensionGetter_library_setterExists) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library getSetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_getSetter> gExtensionGetterTable_library_getSetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getSetter (const int32_t inClassIndex,
                                     enterExtensionGetter_library_getSetter inGetter) {
  gExtensionGetterTable_library_getSetter.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetter callExtensionGetter_getSetter (const cPtr_library * inObject,
                                                const GALGAS_string & in_type,
                                                const GALGAS_lstring & in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetter result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_getSetter f = NULL ;
    if (classIndex < gExtensionGetterTable_library_getSetter.count ()) {
      f = gExtensionGetterTable_library_getSetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_getSetter.count ()) {
           f = gExtensionGetterTable_library_getSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_getSetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_type, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlSetter extensionGetter_library_getSetter (const cPtr_library * inObject,
                                                           const GALGAS_string & constinArgument_type,
                                                           const GALGAS_lstring & constinArgument_name,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlSetter result_aSetter ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mAttribute_setterMap.method_get (GALGAS_lstring::constructor_new (constinArgument_type.add_operation (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 339)), constinArgument_name.getter_location (SOURCE_FILE ("gtl_types.galgas", 339))  COMMA_SOURCE_FILE ("gtl_types.galgas", 339)), result_aSetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 339)) ;
//---
  return result_aSetter ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_getSetter (void) {
  enterExtensionGetter_getSetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionGetter_library_getSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_getSetter (void) {
  gExtensionGetterTable_library_getSetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_getSetter (defineExtensionGetter_library_getSetter,
                                              freeExtensionGetter_library_getSetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library putSetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_putSetter> gExtensionModifierTable_library_putSetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putSetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putSetter inModifier) {
  gExtensionModifierTable_library_putSetter.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putSetter (cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlSetter constin_aSetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putSetter f = NULL ;
    if (classIndex < gExtensionModifierTable_library_putSetter.count ()) {
      f = gExtensionModifierTable_library_putSetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putSetter.count ()) {
           f = gExtensionModifierTable_library_putSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putSetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aSetter, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_putSetter (cPtr_library * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               const GALGAS_gtlSetter constinArgument_aSetter,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mAttribute_setterMap.setter_put (constinArgument_name, constinArgument_aSetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 346)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_putSetter (void) {
  enterExtensionSetter_putSetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionSetter_library_putSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_putSetter (void) {
  gExtensionModifierTable_library_putSetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_putSetter (defineExtensionSetter_library_putSetter,
                                              freeExtensionModifier_library_putSetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library hasImport'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_hasImport> gExtensionGetterTable_library_hasImport ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasImport (const int32_t inClassIndex,
                                     enterExtensionGetter_library_hasImport inGetter) {
  gExtensionGetterTable_library_hasImport.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasImport (const cPtr_library * inObject,
                                           const GALGAS_string & in_importPath,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_hasImport f = NULL ;
    if (classIndex < gExtensionGetterTable_library_hasImport.count ()) {
      f = gExtensionGetterTable_library_hasImport (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_hasImport.count ()) {
           f = gExtensionGetterTable_library_hasImport (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_hasImport.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_importPath, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_library_hasImport (const cPtr_library * inObject,
                                                      const GALGAS_string & constinArgument_importPath,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  result_result = object->mAttribute_doneImports.getter_hasKey (constinArgument_importPath COMMA_SOURCE_FILE ("gtl_types.galgas", 353)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_hasImport (void) {
  enterExtensionGetter_hasImport (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionGetter_library_hasImport) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_hasImport (void) {
  gExtensionGetterTable_library_hasImport.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_hasImport (defineExtensionGetter_library_hasImport,
                                              freeExtensionGetter_library_hasImport) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library doImport'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_doImport> gExtensionModifierTable_library_doImport ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_doImport (const int32_t inClassIndex,
                                    extensionSetterSignature_library_doImport inModifier) {
  gExtensionModifierTable_library_doImport.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_doImport (cPtr_library * inObject,
                                   const GALGAS_string constin_importPath,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_doImport f = NULL ;
    if (classIndex < gExtensionModifierTable_library_doImport.count ()) {
      f = gExtensionModifierTable_library_doImport (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_doImport.count ()) {
           f = gExtensionModifierTable_library_doImport (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_doImport.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_importPath, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_doImport (cPtr_library * inObject,
                                              const GALGAS_string constinArgument_importPath,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mAttribute_doneImports.addAssign_operation (constinArgument_importPath  COMMA_SOURCE_FILE ("gtl_types.galgas", 359)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_doImport (void) {
  enterExtensionSetter_doImport (kTypeDescriptor_GALGAS_library.mSlotID,
                                 extensionSetter_library_doImport) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_doImport (void) {
  gExtensionModifierTable_library_doImport.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_doImport (defineExtensionSetter_library_doImport,
                                             freeExtensionModifier_library_doImport) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@library getTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_getTemplate> gExtensionModifierTable_library_getTemplate ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_getTemplate (const int32_t inClassIndex,
                                       extensionSetterSignature_library_getTemplate inModifier) {
  gExtensionModifierTable_library_getTemplate.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_getTemplate (cPtr_library * inObject,
                                      const GALGAS_gtlContext constin_context,
                                      GALGAS_lstring in_path,
                                      GALGAS_bool in_ifExists,
                                      GALGAS_library & io_lib,
                                      GALGAS_bool & out_found,
                                      GALGAS_gtlTemplate & out_result,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_found.drop () ;
  out_result.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_getTemplate f = NULL ;
    if (classIndex < gExtensionModifierTable_library_getTemplate.count ()) {
      f = gExtensionModifierTable_library_getTemplate (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_getTemplate.count ()) {
           f = gExtensionModifierTable_library_getTemplate (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_getTemplate.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_context, in_path, in_ifExists, io_lib, out_found, out_result, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_getTemplate (cPtr_library * inObject,
                                                 const GALGAS_gtlContext constinArgument_context,
                                                 GALGAS_lstring inArgument_path,
                                                 GALGAS_bool inArgument_ifExists,
                                                 GALGAS_library & ioArgument_lib,
                                                 GALGAS_bool & outArgument_found,
                                                 GALGAS_gtlTemplate & outArgument_result,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  extensionSetter_getTemplate (object->mAttribute_templateMap, constinArgument_context, inArgument_path, inArgument_ifExists, ioArgument_lib, outArgument_found, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 371)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_getTemplate (void) {
  enterExtensionSetter_getTemplate (kTypeDescriptor_GALGAS_library.mSlotID,
                                    extensionSetter_library_getTemplate) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_getTemplate (void) {
  gExtensionModifierTable_library_getTemplate.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_getTemplate (defineExtensionSetter_library_getTemplate,
                                                freeExtensionModifier_library_getTemplate) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@gtlVarItemField lstringPath'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlVarItemField_lstringPath> gExtensionGetterTable_gtlVarItemField_lstringPath ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_lstringPath (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlVarItemField_lstringPath inGetter) {
  gExtensionGetterTable_gtlVarItemField_lstringPath.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_lstringPath (const cPtr_gtlVarItemField * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlVarItemField) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlVarItemField_lstringPath f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlVarItemField_lstringPath.count ()) {
      f = gExtensionGetterTable_gtlVarItemField_lstringPath (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlVarItemField_lstringPath.count ()) {
           f = gExtensionGetterTable_gtlVarItemField_lstringPath (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlVarItemField_lstringPath.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlVarItemField_lstringPath (const cPtr_gtlVarItemField * inObject,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_result = object->mAttribute_field ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_lstringPath (void) {
  enterExtensionGetter_lstringPath (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                    extensionGetter_gtlVarItemField_lstringPath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlVarItemField_lstringPath (void) {
  gExtensionGetterTable_gtlVarItemField_lstringPath.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_lstringPath (defineExtensionGetter_gtlVarItemField_lstringPath,
                                                        freeExtensionGetter_gtlVarItemField_lstringPath) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlExpression location'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlExpression_location> gExtensionGetterTable_gtlExpression_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_gtlExpression_location inGetter) {
  gExtensionGetterTable_gtlExpression_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callExtensionGetter_location (const cPtr_gtlExpression * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlExpression_location f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlExpression_location.count ()) {
      f = gExtensionGetterTable_gtlExpression_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlExpression_location.count ()) {
           f = gExtensionGetterTable_gtlExpression_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlExpression_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_gtlExpression_location (const cPtr_gtlExpression * inObject,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_gtlExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlExpression) ;
  result_result = object->mAttribute_where ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpression_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlExpression.mSlotID,
                                 extensionGetter_gtlExpression_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlExpression_location (void) {
  gExtensionGetterTable_gtlExpression_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpression_location (defineExtensionGetter_gtlExpression_location,
                                                   freeExtensionGetter_gtlExpression_location) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Abstract extension getter '@gtlExpression eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlExpression_eval> gExtensionGetterTable_gtlExpression_eval ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_eval (const int32_t inClassIndex,
                                enterExtensionGetter_gtlExpression_eval inGetter) {
  gExtensionGetterTable_gtlExpression_eval.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlExpression_eval (void) {
  gExtensionGetterTable_gtlExpression_eval.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpression_eval (NULL,
                                               freeExtensionGetter_gtlExpression_eval) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_eval (const cPtr_gtlExpression * inObject,
                                         const GALGAS_gtlData & in_vars,
                                         const GALGAS_library & in_lib,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlExpression_eval f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlExpression_eval.count ()) {
      f = gExtensionGetterTable_gtlExpression_eval (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlExpression_eval.count ()) {
           f = gExtensionGetterTable_gtlExpression_eval (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlExpression_eval.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_vars, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@type typeName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_typeName (const GALGAS_type & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_typeName ; // Returned variable
  const GALGAS_type temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, temp_0.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_typeName = GALGAS_string ("int") ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_type temp_2 = inObject ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_2.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar))).boolEnum () ;
    if (kBoolTrue == test_3) {
      result_typeName = GALGAS_string ("char") ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_type temp_4 = inObject ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, temp_4.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_typeName = GALGAS_string ("float") ;
      }else if (kBoolFalse == test_5) {
        const GALGAS_type temp_6 = inObject ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_6.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
        if (kBoolTrue == test_7) {
          result_typeName = GALGAS_string ("string") ;
        }else if (kBoolFalse == test_7) {
          const GALGAS_type temp_8 = inObject ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, temp_8.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool))).boolEnum () ;
          if (kBoolTrue == test_9) {
            result_typeName = GALGAS_string ("bool") ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_type temp_10 = inObject ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_10.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct))).boolEnum () ;
            if (kBoolTrue == test_11) {
              result_typeName = GALGAS_string ("struct") ;
            }else if (kBoolFalse == test_11) {
              const GALGAS_type temp_12 = inObject ;
              const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, temp_12.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlList))).boolEnum () ;
              if (kBoolTrue == test_13) {
                result_typeName = GALGAS_string ("list") ;
              }else if (kBoolFalse == test_13) {
                const GALGAS_type temp_14 = inObject ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, temp_14.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlMap))).boolEnum () ;
                if (kBoolTrue == test_15) {
                  result_typeName = GALGAS_string ("map") ;
                }else if (kBoolFalse == test_15) {
                  const GALGAS_type temp_16 = inObject ;
                  const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, temp_16.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlType))).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    result_typeName = GALGAS_string ("type") ;
                  }else if (kBoolFalse == test_17) {
                    const GALGAS_type temp_18 = inObject ;
                    const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, temp_18.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlEnum))).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      result_typeName = GALGAS_string ("enum") ;
                    }else if (kBoolFalse == test_19) {
                      const GALGAS_type temp_20 = inObject ;
                      const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, temp_20.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlSet))).boolEnum () ;
                      if (kBoolTrue == test_21) {
                        result_typeName = GALGAS_string ("set") ;
                      }else if (kBoolFalse == test_21) {
                        const GALGAS_type temp_22 = inObject ;
                        const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, temp_22.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlUnconstructed))).boolEnum () ;
                        if (kBoolTrue == test_23) {
                          result_typeName = GALGAS_string ("unconstructed") ;
                        }else if (kBoolFalse == test_23) {
                          result_typeName = GALGAS_string ("-unknown-") ;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_typeName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension Getter '@lstring gtlType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type extensionGetter_gtlType (const GALGAS_lstring & inObject,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_type ; // Returned variable
  const GALGAS_lstring temp_0 = inObject ;
  GALGAS_string var_typeName_2294 = temp_0.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 67)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("int"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("char"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("float"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlString) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("bool"))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool) ;
          }else if (kBoolFalse == test_5) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("struct"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("list"))).boolEnum () ;
              if (kBoolTrue == test_7) {
                result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlList) ;
              }else if (kBoolFalse == test_7) {
                const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("map"))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlMap) ;
                }else if (kBoolFalse == test_8) {
                  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("type"))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlType) ;
                  }else if (kBoolFalse == test_9) {
                    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("enum"))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlEnum) ;
                    }else if (kBoolFalse == test_10) {
                      const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("set"))).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlSet) ;
                      }else if (kBoolFalse == test_11) {
                        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("unconstructed"))).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlUnconstructed) ;
                        }else if (kBoolFalse == test_12) {
                          TC_Array <C_FixItDescription> fixItArray13 ;
                          inCompiler->emitSemanticError (inObject.mAttribute_location, GALGAS_string ("unknown type"), fixItArray13  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 80)) ;
                          result_type.drop () ; // Release error dropped variable
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_type ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@gtlData location'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_location> gExtensionGetterTable_gtlData_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_gtlData_location inGetter) {
  gExtensionGetterTable_gtlData_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callExtensionGetter_location (const cPtr_gtlData * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_location f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_location.count ()) {
      f = gExtensionGetterTable_gtlData_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_location.count ()) {
           f = gExtensionGetterTable_gtlData_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_gtlData_location (const cPtr_gtlData * inObject,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  result_result = object->mAttribute_where ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                 extensionGetter_gtlData_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_location (void) {
  gExtensionGetterTable_gtlData_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_location (defineExtensionGetter_gtlData_location,
                                             freeExtensionGetter_gtlData_location) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_desc> gExtensionGetterTable_gtlData_desc ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_desc (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_desc inGetter) {
  gExtensionGetterTable_gtlData_desc.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_desc (void) {
  gExtensionGetterTable_gtlData_desc.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_desc (NULL,
                                         freeExtensionGetter_gtlData_desc) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_desc (const cPtr_gtlData * inObject,
                                        const GALGAS_uint & in_tab,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_desc f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_desc.count ()) {
      f = gExtensionGetterTable_gtlData_desc (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_desc.count ()) {
           f = gExtensionGetterTable_gtlData_desc (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_desc.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_tab, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_string> gExtensionGetterTable_gtlData_string ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_string (const int32_t inClassIndex,
                                  enterExtensionGetter_gtlData_string inGetter) {
  gExtensionGetterTable_gtlData_string.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_string (void) {
  gExtensionGetterTable_gtlData_string.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_string (NULL,
                                           freeExtensionGetter_gtlData_string) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_string (const cPtr_gtlData * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_string f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_string.count ()) {
      f = gExtensionGetterTable_gtlData_string (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_string.count ()) {
           f = gExtensionGetterTable_gtlData_string (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_string.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Abstract extension getter '@gtlData lstring'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_lstring> gExtensionGetterTable_gtlData_lstring ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_lstring (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlData_lstring inGetter) {
  gExtensionGetterTable_gtlData_lstring.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_lstring (void) {
  gExtensionGetterTable_gtlData_lstring.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_lstring (NULL,
                                            freeExtensionGetter_gtlData_lstring) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_lstring (const cPtr_gtlData * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_lstring f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_lstring.count ()) {
      f = gExtensionGetterTable_gtlData_lstring (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_lstring.count ()) {
           f = gExtensionGetterTable_gtlData_lstring (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_lstring.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_bool> gExtensionGetterTable_gtlData_bool ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_bool (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_bool inGetter) {
  gExtensionGetterTable_gtlData_bool.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_bool (void) {
  gExtensionGetterTable_gtlData_bool.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_bool (NULL,
                                         freeExtensionGetter_gtlData_bool) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_bool (const cPtr_gtlData * inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_bool f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_bool.count ()) {
      f = gExtensionGetterTable_gtlData_bool (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_bool.count ()) {
           f = gExtensionGetterTable_gtlData_bool (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_bool.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData int'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_int> gExtensionGetterTable_gtlData_int ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_int (const int32_t inClassIndex,
                               enterExtensionGetter_gtlData_int inGetter) {
  gExtensionGetterTable_gtlData_int.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_int (void) {
  gExtensionGetterTable_gtlData_int.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_int (NULL,
                                        freeExtensionGetter_gtlData_int) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint callExtensionGetter_int (const cPtr_gtlData * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_bigint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_int f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_int.count ()) {
      f = gExtensionGetterTable_gtlData_int (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_int.count ()) {
           f = gExtensionGetterTable_gtlData_int (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_int.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData float'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_float> gExtensionGetterTable_gtlData_float ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_float (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_float inGetter) {
  gExtensionGetterTable_gtlData_float.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_float (void) {
  gExtensionGetterTable_gtlData_float.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_float (NULL,
                                          freeExtensionGetter_gtlData_float) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double callExtensionGetter_float (const cPtr_gtlData * inObject,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_double result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_float f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_float.count ()) {
      f = gExtensionGetterTable_gtlData_float (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_float.count ()) {
           f = gExtensionGetterTable_gtlData_float (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_float.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_plusOp> gExtensionGetterTable_gtlData_plusOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_plusOp (const int32_t inClassIndex,
                                  enterExtensionGetter_gtlData_plusOp inGetter) {
  gExtensionGetterTable_gtlData_plusOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_plusOp (void) {
  gExtensionGetterTable_gtlData_plusOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_plusOp (NULL,
                                           freeExtensionGetter_gtlData_plusOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_plusOp (const cPtr_gtlData * inObject,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_plusOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_plusOp.count ()) {
      f = gExtensionGetterTable_gtlData_plusOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_plusOp.count ()) {
           f = gExtensionGetterTable_gtlData_plusOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_plusOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Abstract extension getter '@gtlData minusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_minusOp> gExtensionGetterTable_gtlData_minusOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_minusOp (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlData_minusOp inGetter) {
  gExtensionGetterTable_gtlData_minusOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_minusOp (void) {
  gExtensionGetterTable_gtlData_minusOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_minusOp (NULL,
                                            freeExtensionGetter_gtlData_minusOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_minusOp (const cPtr_gtlData * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_minusOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_minusOp.count ()) {
      f = gExtensionGetterTable_gtlData_minusOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_minusOp.count ()) {
           f = gExtensionGetterTable_gtlData_minusOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_minusOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData notOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_notOp> gExtensionGetterTable_gtlData_notOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_notOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_notOp inGetter) {
  gExtensionGetterTable_gtlData_notOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_notOp (void) {
  gExtensionGetterTable_gtlData_notOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_notOp (NULL,
                                          freeExtensionGetter_gtlData_notOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_notOp (const cPtr_gtlData * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_notOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_notOp.count ()) {
      f = gExtensionGetterTable_gtlData_notOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_notOp.count ()) {
           f = gExtensionGetterTable_gtlData_notOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_notOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData addOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_addOp> gExtensionGetterTable_gtlData_addOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_addOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_addOp inGetter) {
  gExtensionGetterTable_gtlData_addOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_addOp (void) {
  gExtensionGetterTable_gtlData_addOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_addOp (NULL,
                                          freeExtensionGetter_gtlData_addOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_addOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData & in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_addOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_addOp.count ()) {
      f = gExtensionGetterTable_gtlData_addOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_addOp.count ()) {
           f = gExtensionGetterTable_gtlData_addOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_addOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData subOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_subOp> gExtensionGetterTable_gtlData_subOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_subOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_subOp inGetter) {
  gExtensionGetterTable_gtlData_subOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_subOp (void) {
  gExtensionGetterTable_gtlData_subOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_subOp (NULL,
                                          freeExtensionGetter_gtlData_subOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_subOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData & in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_subOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_subOp.count ()) {
      f = gExtensionGetterTable_gtlData_subOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_subOp.count ()) {
           f = gExtensionGetterTable_gtlData_subOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_subOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData mulOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_mulOp> gExtensionGetterTable_gtlData_mulOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mulOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_mulOp inGetter) {
  gExtensionGetterTable_gtlData_mulOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_mulOp (void) {
  gExtensionGetterTable_gtlData_mulOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_mulOp (NULL,
                                          freeExtensionGetter_gtlData_mulOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_mulOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData & in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_mulOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_mulOp.count ()) {
      f = gExtensionGetterTable_gtlData_mulOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_mulOp.count ()) {
           f = gExtensionGetterTable_gtlData_mulOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_mulOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData divOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_divOp> gExtensionGetterTable_gtlData_divOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_divOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_divOp inGetter) {
  gExtensionGetterTable_gtlData_divOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_divOp (void) {
  gExtensionGetterTable_gtlData_divOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_divOp (NULL,
                                          freeExtensionGetter_gtlData_divOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_divOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData & in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_divOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_divOp.count ()) {
      f = gExtensionGetterTable_gtlData_divOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_divOp.count ()) {
           f = gExtensionGetterTable_gtlData_divOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_divOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData modOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_modOp> gExtensionGetterTable_gtlData_modOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_modOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_modOp inGetter) {
  gExtensionGetterTable_gtlData_modOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_modOp (void) {
  gExtensionGetterTable_gtlData_modOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_modOp (NULL,
                                          freeExtensionGetter_gtlData_modOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_modOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData & in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_modOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_modOp.count ()) {
      f = gExtensionGetterTable_gtlData_modOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_modOp.count ()) {
           f = gExtensionGetterTable_gtlData_modOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_modOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData andOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_andOp> gExtensionGetterTable_gtlData_andOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_andOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_andOp inGetter) {
  gExtensionGetterTable_gtlData_andOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_andOp (void) {
  gExtensionGetterTable_gtlData_andOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_andOp (NULL,
                                          freeExtensionGetter_gtlData_andOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_andOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData & in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_andOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_andOp.count ()) {
      f = gExtensionGetterTable_gtlData_andOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_andOp.count ()) {
           f = gExtensionGetterTable_gtlData_andOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_andOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_orOp> gExtensionGetterTable_gtlData_orOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_orOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_orOp inGetter) {
  gExtensionGetterTable_gtlData_orOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_orOp (void) {
  gExtensionGetterTable_gtlData_orOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_orOp (NULL,
                                         freeExtensionGetter_gtlData_orOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_orOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData & in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_orOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_orOp.count ()) {
      f = gExtensionGetterTable_gtlData_orOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_orOp.count ()) {
           f = gExtensionGetterTable_gtlData_orOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_orOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData xorOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_xorOp> gExtensionGetterTable_gtlData_xorOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_xorOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_xorOp inGetter) {
  gExtensionGetterTable_gtlData_xorOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_xorOp (void) {
  gExtensionGetterTable_gtlData_xorOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_xorOp (NULL,
                                          freeExtensionGetter_gtlData_xorOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_xorOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData & in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_xorOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_xorOp.count ()) {
      f = gExtensionGetterTable_gtlData_xorOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_xorOp.count ()) {
           f = gExtensionGetterTable_gtlData_xorOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_xorOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_slOp> gExtensionGetterTable_gtlData_slOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_slOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_slOp inGetter) {
  gExtensionGetterTable_gtlData_slOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_slOp (void) {
  gExtensionGetterTable_gtlData_slOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_slOp (NULL,
                                         freeExtensionGetter_gtlData_slOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_slOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData & in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_slOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_slOp.count ()) {
      f = gExtensionGetterTable_gtlData_slOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_slOp.count ()) {
           f = gExtensionGetterTable_gtlData_slOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_slOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_srOp> gExtensionGetterTable_gtlData_srOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_srOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_srOp inGetter) {
  gExtensionGetterTable_gtlData_srOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_srOp (void) {
  gExtensionGetterTable_gtlData_srOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_srOp (NULL,
                                         freeExtensionGetter_gtlData_srOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_srOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData & in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_srOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_srOp.count ()) {
      f = gExtensionGetterTable_gtlData_srOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_srOp.count ()) {
           f = gExtensionGetterTable_gtlData_srOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_srOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData neqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_neqOp> gExtensionGetterTable_gtlData_neqOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_neqOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_neqOp inGetter) {
  gExtensionGetterTable_gtlData_neqOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_neqOp (void) {
  gExtensionGetterTable_gtlData_neqOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_neqOp (NULL,
                                          freeExtensionGetter_gtlData_neqOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_neqOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData & in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_neqOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_neqOp.count ()) {
      f = gExtensionGetterTable_gtlData_neqOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_neqOp.count ()) {
           f = gExtensionGetterTable_gtlData_neqOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_neqOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_eqOp> gExtensionGetterTable_gtlData_eqOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_eqOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_eqOp inGetter) {
  gExtensionGetterTable_gtlData_eqOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_eqOp (void) {
  gExtensionGetterTable_gtlData_eqOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_eqOp (NULL,
                                         freeExtensionGetter_gtlData_eqOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_eqOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData & in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_eqOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_eqOp.count ()) {
      f = gExtensionGetterTable_gtlData_eqOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_eqOp.count ()) {
           f = gExtensionGetterTable_gtlData_eqOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_eqOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_ltOp> gExtensionGetterTable_gtlData_ltOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_ltOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_ltOp inGetter) {
  gExtensionGetterTable_gtlData_ltOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_ltOp (void) {
  gExtensionGetterTable_gtlData_ltOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_ltOp (NULL,
                                         freeExtensionGetter_gtlData_ltOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_ltOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData & in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_ltOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_ltOp.count ()) {
      f = gExtensionGetterTable_gtlData_ltOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_ltOp.count ()) {
           f = gExtensionGetterTable_gtlData_ltOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_ltOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_leOp> gExtensionGetterTable_gtlData_leOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_leOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_leOp inGetter) {
  gExtensionGetterTable_gtlData_leOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_leOp (void) {
  gExtensionGetterTable_gtlData_leOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_leOp (NULL,
                                         freeExtensionGetter_gtlData_leOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_leOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData & in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_leOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_leOp.count ()) {
      f = gExtensionGetterTable_gtlData_leOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_leOp.count ()) {
           f = gExtensionGetterTable_gtlData_leOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_leOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_gtOp> gExtensionGetterTable_gtlData_gtOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_gtOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_gtOp inGetter) {
  gExtensionGetterTable_gtlData_gtOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_gtOp (void) {
  gExtensionGetterTable_gtlData_gtOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_gtOp (NULL,
                                         freeExtensionGetter_gtlData_gtOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_gtOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData & in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_gtOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_gtOp.count ()) {
      f = gExtensionGetterTable_gtlData_gtOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_gtOp.count ()) {
           f = gExtensionGetterTable_gtlData_gtOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_gtOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_geOp> gExtensionGetterTable_gtlData_geOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_geOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_geOp inGetter) {
  gExtensionGetterTable_gtlData_geOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_geOp (void) {
  gExtensionGetterTable_gtlData_geOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_geOp (NULL,
                                         freeExtensionGetter_gtlData_geOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_geOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData & in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_geOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_geOp.count ()) {
      f = gExtensionGetterTable_gtlData_geOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_geOp.count ()) {
           f = gExtensionGetterTable_gtlData_geOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_geOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Abstract extension getter '@gtlData embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_embeddedType> gExtensionGetterTable_gtlData_embeddedType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_embeddedType (const int32_t inClassIndex,
                                        enterExtensionGetter_gtlData_embeddedType inGetter) {
  gExtensionGetterTable_gtlData_embeddedType.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_embeddedType (void) {
  gExtensionGetterTable_gtlData_embeddedType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_embeddedType (NULL,
                                                 freeExtensionGetter_gtlData_embeddedType) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type callExtensionGetter_embeddedType (const cPtr_gtlData * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_type result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_embeddedType f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_embeddedType.count ()) {
      f = gExtensionGetterTable_gtlData_embeddedType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_embeddedType.count ()) {
           f = gExtensionGetterTable_gtlData_embeddedType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_embeddedType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Abstract extension method '@gtlData addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlData_addMyValue> gExtensionMethodTable_gtlData_addMyValue ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addMyValue (const int32_t inClassIndex,
                                      extensionMethodSignature_gtlData_addMyValue inMethod) {
  gExtensionMethodTable_gtlData_addMyValue.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlData_addMyValue (void) {
  gExtensionMethodTable_gtlData_addMyValue.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlData_addMyValue (NULL,
                                               freeExtensionMethod_gtlData_addMyValue) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addMyValue (const cPtr_gtlData * inObject,
                                     GALGAS_objectlist & io_objectList,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlData_addMyValue f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlData_addMyValue.count ()) {
      f = gExtensionMethodTable_gtlData_addMyValue (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_gtlData_addMyValue.count ()) {
          f = gExtensionMethodTable_gtlData_addMyValue (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_gtlData_addMyValue.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_objectList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension getter '@gtlData performGetter'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_performGetter> gExtensionGetterTable_gtlData_performGetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_performGetter (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlData_performGetter inGetter) {
  gExtensionGetterTable_gtlData_performGetter.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_performGetter (void) {
  gExtensionGetterTable_gtlData_performGetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_performGetter (NULL,
                                                  freeExtensionGetter_gtlData_performGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_performGetter (const cPtr_gtlData * inObject,
                                                  const GALGAS_lstring & in_methodName,
                                                  const GALGAS_gtlDataList & in_arguments,
                                                  const GALGAS_library & in_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_performGetter f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_performGetter.count ()) {
      f = gExtensionGetterTable_gtlData_performGetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_performGetter.count ()) {
           f = gExtensionGetterTable_gtlData_performGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_performGetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_methodName, in_arguments, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension setter '@gtlData performSetter'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_performSetter> gExtensionModifierTable_gtlData_performSetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_performSetter (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_performSetter inModifier) {
  gExtensionModifierTable_gtlData_performSetter.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_performSetter (void) {
  gExtensionModifierTable_gtlData_performSetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_performSetter (NULL,
                                                  freeExtensionModifier_gtlData_performSetter) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_performSetter (cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_methodName,
                                        const GALGAS_gtlDataList constin_arguments,
                                        const GALGAS_library constin_lib,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_performSetter f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_performSetter.count ()) {
      f = gExtensionModifierTable_gtlData_performSetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_performSetter.count ()) {
           f = gExtensionModifierTable_gtlData_performSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_performSetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_methodName, constin_arguments, constin_lib, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@gtlData structField'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlData_structField> gExtensionMethodTable_gtlData_structField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_structField (const int32_t inClassIndex,
                                       extensionMethodSignature_gtlData_structField inMethod) {
  gExtensionMethodTable_gtlData_structField.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_structField (const cPtr_gtlData * inObject,
                                      const GALGAS_lstring constin_name,
                                      GALGAS_gtlData & out_result,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlData_structField f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlData_structField.count ()) {
      f = gExtensionMethodTable_gtlData_structField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlData_structField.count ()) {
           f = gExtensionMethodTable_gtlData_structField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlData_structField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_name, out_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlData_structField (const cPtr_gtlData * inObject,
                                                 const GALGAS_lstring constinArgument_name,
                                                 GALGAS_gtlData & outArgument_result,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 238)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 238)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 238)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 238)) ;
  outArgument_result.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlData_structField (void) {
  enterExtensionMethod_structField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                    extensionMethod_gtlData_structField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlData_structField (void) {
  gExtensionMethodTable_gtlData_structField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlData_structField (defineExtensionMethod_gtlData_structField,
                                                freeExtensionMethod_gtlData_structField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData resultField'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_resultField> gExtensionGetterTable_gtlData_resultField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_resultField (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlData_resultField inGetter) {
  gExtensionGetterTable_gtlData_resultField.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_resultField (const cPtr_gtlData * inObject,
                                                const GALGAS_lstring & in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_resultField f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_resultField.count ()) {
      f = gExtensionGetterTable_gtlData_resultField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_resultField.count ()) {
           f = gExtensionGetterTable_gtlData_resultField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_resultField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlData_resultField (const cPtr_gtlData * inObject,
                                                           const GALGAS_lstring & constinArgument_name,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 245)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 245)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 245)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 245)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_resultField (void) {
  enterExtensionGetter_resultField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                    extensionGetter_gtlData_resultField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_resultField (void) {
  gExtensionGetterTable_gtlData_resultField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_resultField (defineExtensionGetter_gtlData_resultField,
                                                freeExtensionGetter_gtlData_resultField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension setter '@gtlData setStructField'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_setStructField> gExtensionModifierTable_gtlData_setStructField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setStructField (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setStructField inModifier) {
  gExtensionModifierTable_gtlData_setStructField.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setStructField (cPtr_gtlData * inObject,
                                         const GALGAS_lstring constin_name,
                                         const GALGAS_gtlData constin_data,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setStructField f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_setStructField.count ()) {
      f = gExtensionModifierTable_gtlData_setStructField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setStructField.count ()) {
           f = gExtensionModifierTable_gtlData_setStructField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setStructField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_setStructField (cPtr_gtlData * inObject,
                                                    const GALGAS_lstring constinArgument_name,
                                                    const GALGAS_gtlData /* constinArgument_data */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 253)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 253)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 253)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 253)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_setStructField (void) {
  enterExtensionSetter_setStructField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionSetter_gtlData_setStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_setStructField (void) {
  gExtensionModifierTable_gtlData_setStructField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_setStructField (defineExtensionSetter_gtlData_setStructField,
                                                   freeExtensionModifier_gtlData_setStructField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension setter '@gtlData setStructFieldAtLevel'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_setStructFieldAtLevel> gExtensionModifierTable_gtlData_setStructFieldAtLevel ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setStructFieldAtLevel (const int32_t inClassIndex,
                                                 extensionSetterSignature_gtlData_setStructFieldAtLevel inModifier) {
  gExtensionModifierTable_gtlData_setStructFieldAtLevel.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setStructFieldAtLevel (cPtr_gtlData * inObject,
                                                const GALGAS_lstring constin_name,
                                                const GALGAS_gtlData constin_data,
                                                const GALGAS_uint constin_level,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setStructFieldAtLevel f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_setStructFieldAtLevel.count ()) {
      f = gExtensionModifierTable_gtlData_setStructFieldAtLevel (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setStructFieldAtLevel.count ()) {
           f = gExtensionModifierTable_gtlData_setStructFieldAtLevel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setStructFieldAtLevel.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, constin_level, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_setStructFieldAtLevel (cPtr_gtlData * inObject,
                                                           const GALGAS_lstring constinArgument_name,
                                                           const GALGAS_gtlData /* constinArgument_data */,
                                                           const GALGAS_uint /* constinArgument_level */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 262)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 262)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 262)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 262)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_setStructFieldAtLevel (void) {
  enterExtensionSetter_setStructFieldAtLevel (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                              extensionSetter_gtlData_setStructFieldAtLevel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_setStructFieldAtLevel (void) {
  gExtensionModifierTable_gtlData_setStructFieldAtLevel.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_setStructFieldAtLevel (defineExtensionSetter_gtlData_setStructFieldAtLevel,
                                                          freeExtensionModifier_gtlData_setStructFieldAtLevel) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlData deleteStructField'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteStructField> gExtensionModifierTable_gtlData_deleteStructField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteStructField (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteStructField inModifier) {
  gExtensionModifierTable_gtlData_deleteStructField.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteStructField (cPtr_gtlData * inObject,
                                            const GALGAS_lstring constin_name,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteStructField f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteStructField.count ()) {
      f = gExtensionModifierTable_gtlData_deleteStructField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteStructField.count ()) {
           f = gExtensionModifierTable_gtlData_deleteStructField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteStructField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_deleteStructField (cPtr_gtlData * inObject,
                                                       const GALGAS_lstring constinArgument_name,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 268)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 268)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 268)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 268)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_deleteStructField (void) {
  enterExtensionSetter_deleteStructField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                          extensionSetter_gtlData_deleteStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_deleteStructField (void) {
  gExtensionModifierTable_gtlData_deleteStructField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_deleteStructField (defineExtensionSetter_gtlData_deleteStructField,
                                                      freeExtensionModifier_gtlData_deleteStructField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlData hasStructField'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_hasStructField> gExtensionGetterTable_gtlData_hasStructField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasStructField (const int32_t inClassIndex,
                                          enterExtensionGetter_gtlData_hasStructField inGetter) {
  gExtensionGetterTable_gtlData_hasStructField.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasStructField (const cPtr_gtlData * inObject,
                                                const GALGAS_lstring & in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_hasStructField f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_hasStructField.count ()) {
      f = gExtensionGetterTable_gtlData_hasStructField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_hasStructField.count ()) {
           f = gExtensionGetterTable_gtlData_hasStructField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_hasStructField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlData_hasStructField (const cPtr_gtlData * /* inObject */,
                                                           const GALGAS_lstring & /* constinArgument_name */,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_hasStructField (void) {
  enterExtensionGetter_hasStructField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionGetter_gtlData_hasStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_hasStructField (void) {
  gExtensionGetterTable_gtlData_hasStructField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_hasStructField (defineExtensionGetter_gtlData_hasStructField,
                                                   freeExtensionGetter_gtlData_hasStructField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData overrideMap'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_overrideMap> gExtensionGetterTable_gtlData_overrideMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_overrideMap (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlData_overrideMap inGetter) {
  gExtensionGetterTable_gtlData_overrideMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct callExtensionGetter_overrideMap (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_overrideMap f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_overrideMap.count ()) {
      f = gExtensionGetterTable_gtlData_overrideMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_overrideMap.count ()) {
           f = gExtensionGetterTable_gtlData_overrideMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_overrideMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlStruct extensionGetter_gtlData_overrideMap (const cPtr_gtlData * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_mapOverriden ; // Returned variable
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 281)), GALGAS_string ("INTERNAL ERROR : a variable map should be a @gtlStruct"), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 281)) ;
  result_mapOverriden.drop () ; // Release error dropped variable
//---
  return result_mapOverriden ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_overrideMap (void) {
  enterExtensionGetter_overrideMap (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                    extensionGetter_gtlData_overrideMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_overrideMap (void) {
  gExtensionGetterTable_gtlData_overrideMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_overrideMap (defineExtensionGetter_gtlData_overrideMap,
                                                freeExtensionGetter_gtlData_overrideMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@gtlData overriddenMap'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_overriddenMap> gExtensionGetterTable_gtlData_overriddenMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_overriddenMap (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlData_overriddenMap inGetter) {
  gExtensionGetterTable_gtlData_overriddenMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct callExtensionGetter_overriddenMap (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_overriddenMap f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_overriddenMap.count ()) {
      f = gExtensionGetterTable_gtlData_overriddenMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_overriddenMap.count ()) {
           f = gExtensionGetterTable_gtlData_overriddenMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_overriddenMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlStruct extensionGetter_gtlData_overriddenMap (const cPtr_gtlData * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_overriddenMap ; // Returned variable
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 287)), GALGAS_string ("INTERNAL ERROR : a variable map should be a @gtlStruct"), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 287)) ;
  result_overriddenMap.drop () ; // Release error dropped variable
//---
  return result_overriddenMap ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_overriddenMap (void) {
  enterExtensionGetter_overriddenMap (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                      extensionGetter_gtlData_overriddenMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_overriddenMap (void) {
  gExtensionGetterTable_gtlData_overriddenMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_overriddenMap (defineExtensionGetter_gtlData_overriddenMap,
                                                  freeExtensionGetter_gtlData_overriddenMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension method '@gtlData mapItem'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlData_mapItem> gExtensionMethodTable_gtlData_mapItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_mapItem (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlData_mapItem inMethod) {
  gExtensionMethodTable_gtlData_mapItem.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_mapItem (const cPtr_gtlData * inObject,
                                  const GALGAS_lstring constin_name,
                                  GALGAS_gtlData & out_result,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlData_mapItem f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlData_mapItem.count ()) {
      f = gExtensionMethodTable_gtlData_mapItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlData_mapItem.count ()) {
           f = gExtensionMethodTable_gtlData_mapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlData_mapItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_name, out_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlData_mapItem (const cPtr_gtlData * inObject,
                                             const GALGAS_lstring constinArgument_name,
                                             GALGAS_gtlData & outArgument_result,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 294)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 294)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 294)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 294)) ;
  outArgument_result.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlData_mapItem (void) {
  enterExtensionMethod_mapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                extensionMethod_gtlData_mapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlData_mapItem (void) {
  gExtensionMethodTable_gtlData_mapItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlData_mapItem (defineExtensionMethod_gtlData_mapItem,
                                            freeExtensionMethod_gtlData_mapItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData hasMapItem'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_hasMapItem> gExtensionGetterTable_gtlData_hasMapItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasMapItem (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlData_hasMapItem inGetter) {
  gExtensionGetterTable_gtlData_hasMapItem.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasMapItem (const cPtr_gtlData * inObject,
                                            const GALGAS_lstring & in_name,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_hasMapItem f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_hasMapItem.count ()) {
      f = gExtensionGetterTable_gtlData_hasMapItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_hasMapItem.count ()) {
           f = gExtensionGetterTable_gtlData_hasMapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_hasMapItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlData_hasMapItem (const cPtr_gtlData * /* inObject */,
                                                       const GALGAS_lstring & /* constinArgument_name */,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_hasMapItem (void) {
  enterExtensionGetter_hasMapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                   extensionGetter_gtlData_hasMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_hasMapItem (void) {
  gExtensionGetterTable_gtlData_hasMapItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_hasMapItem (defineExtensionGetter_gtlData_hasMapItem,
                                               freeExtensionGetter_gtlData_hasMapItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@gtlData setMapItem'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_setMapItem> gExtensionModifierTable_gtlData_setMapItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setMapItem (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlData_setMapItem inModifier) {
  gExtensionModifierTable_gtlData_setMapItem.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setMapItem (cPtr_gtlData * inObject,
                                     const GALGAS_lstring constin_name,
                                     const GALGAS_gtlData constin_data,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setMapItem f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_setMapItem.count ()) {
      f = gExtensionModifierTable_gtlData_setMapItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setMapItem.count ()) {
           f = gExtensionModifierTable_gtlData_setMapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setMapItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_setMapItem (cPtr_gtlData * inObject,
                                                const GALGAS_lstring constinArgument_name,
                                                const GALGAS_gtlData /* constinArgument_data */,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 308)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 308)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 308)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 308)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_setMapItem (void) {
  enterExtensionSetter_setMapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                   extensionSetter_gtlData_setMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_setMapItem (void) {
  gExtensionModifierTable_gtlData_setMapItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_setMapItem (defineExtensionSetter_gtlData_setMapItem,
                                               freeExtensionModifier_gtlData_setMapItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension setter '@gtlData deleteMapItem'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteMapItem> gExtensionModifierTable_gtlData_deleteMapItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteMapItem (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_deleteMapItem inModifier) {
  gExtensionModifierTable_gtlData_deleteMapItem.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteMapItem (cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_name,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteMapItem f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteMapItem.count ()) {
      f = gExtensionModifierTable_gtlData_deleteMapItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteMapItem.count ()) {
           f = gExtensionModifierTable_gtlData_deleteMapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteMapItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_deleteMapItem (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_name,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 314)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 314)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 314)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 314)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_deleteMapItem (void) {
  enterExtensionSetter_deleteMapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                      extensionSetter_gtlData_deleteMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_deleteMapItem (void) {
  gExtensionModifierTable_gtlData_deleteMapItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_deleteMapItem (defineExtensionSetter_gtlData_deleteMapItem,
                                                  freeExtensionModifier_gtlData_deleteMapItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@gtlData itemAtIndex'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlData_itemAtIndex> gExtensionMethodTable_gtlData_itemAtIndex ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_itemAtIndex (const int32_t inClassIndex,
                                       extensionMethodSignature_gtlData_itemAtIndex inMethod) {
  gExtensionMethodTable_gtlData_itemAtIndex.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_itemAtIndex (const cPtr_gtlData * inObject,
                                      GALGAS_gtlData & out_result,
                                      const GALGAS_gtlInt constin_index,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlData_itemAtIndex f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlData_itemAtIndex.count ()) {
      f = gExtensionMethodTable_gtlData_itemAtIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlData_itemAtIndex.count ()) {
           f = gExtensionMethodTable_gtlData_itemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlData_itemAtIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_result, constin_index, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlData_itemAtIndex (const cPtr_gtlData * inObject,
                                                 GALGAS_gtlData & outArgument_result,
                                                 const GALGAS_gtlInt constinArgument_index,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)) ;
  outArgument_result.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlData_itemAtIndex (void) {
  enterExtensionMethod_itemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                    extensionMethod_gtlData_itemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlData_itemAtIndex (void) {
  gExtensionMethodTable_gtlData_itemAtIndex.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlData_itemAtIndex (defineExtensionMethod_gtlData_itemAtIndex,
                                                freeExtensionMethod_gtlData_itemAtIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlData hasItemAtIndex'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_hasItemAtIndex> gExtensionGetterTable_gtlData_hasItemAtIndex ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasItemAtIndex (const int32_t inClassIndex,
                                          enterExtensionGetter_gtlData_hasItemAtIndex inGetter) {
  gExtensionGetterTable_gtlData_hasItemAtIndex.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasItemAtIndex (const cPtr_gtlData * inObject,
                                                const GALGAS_gtlInt & in_index,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_hasItemAtIndex f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_hasItemAtIndex.count ()) {
      f = gExtensionGetterTable_gtlData_hasItemAtIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_hasItemAtIndex.count ()) {
           f = gExtensionGetterTable_gtlData_hasItemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_hasItemAtIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_index, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlData_hasItemAtIndex (const cPtr_gtlData * /* inObject */,
                                                           const GALGAS_gtlInt & /* constinArgument_index */,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_hasItemAtIndex (void) {
  enterExtensionGetter_hasItemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionGetter_gtlData_hasItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_hasItemAtIndex (void) {
  gExtensionGetterTable_gtlData_hasItemAtIndex.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_hasItemAtIndex (defineExtensionGetter_gtlData_hasItemAtIndex,
                                                   freeExtensionGetter_gtlData_hasItemAtIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension setter '@gtlData setItemAtIndex'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_setItemAtIndex> gExtensionModifierTable_gtlData_setItemAtIndex ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setItemAtIndex (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setItemAtIndex inModifier) {
  gExtensionModifierTable_gtlData_setItemAtIndex.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setItemAtIndex (cPtr_gtlData * inObject,
                                         const GALGAS_gtlData constin_data,
                                         const GALGAS_gtlInt constin_index,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setItemAtIndex f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_setItemAtIndex.count ()) {
      f = gExtensionModifierTable_gtlData_setItemAtIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setItemAtIndex.count ()) {
           f = gExtensionModifierTable_gtlData_setItemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setItemAtIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_data, constin_index, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_setItemAtIndex (cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_data */,
                                                    const GALGAS_gtlInt constinArgument_index,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_setItemAtIndex (void) {
  enterExtensionSetter_setItemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionSetter_gtlData_setItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_setItemAtIndex (void) {
  gExtensionModifierTable_gtlData_setItemAtIndex.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_setItemAtIndex (defineExtensionSetter_gtlData_setItemAtIndex,
                                                   freeExtensionModifier_gtlData_setItemAtIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlData deleteItemAtIndex'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteItemAtIndex> gExtensionModifierTable_gtlData_deleteItemAtIndex ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteItemAtIndex (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteItemAtIndex inModifier) {
  gExtensionModifierTable_gtlData_deleteItemAtIndex.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteItemAtIndex (cPtr_gtlData * inObject,
                                            const GALGAS_gtlInt constin_index,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteItemAtIndex f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteItemAtIndex.count ()) {
      f = gExtensionModifierTable_gtlData_deleteItemAtIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteItemAtIndex.count ()) {
           f = gExtensionModifierTable_gtlData_deleteItemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteItemAtIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_index, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_deleteItemAtIndex (cPtr_gtlData * inObject,
                                                       const GALGAS_gtlInt constinArgument_index,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_deleteItemAtIndex (void) {
  enterExtensionSetter_deleteItemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                          extensionSetter_gtlData_deleteItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_deleteItemAtIndex (void) {
  gExtensionModifierTable_gtlData_deleteItemAtIndex.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_deleteItemAtIndex (defineExtensionSetter_gtlData_deleteItemAtIndex,
                                                      freeExtensionModifier_gtlData_deleteItemAtIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@gtlData appendItem'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_appendItem> gExtensionModifierTable_gtlData_appendItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_appendItem (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlData_appendItem inModifier) {
  gExtensionModifierTable_gtlData_appendItem.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_appendItem (cPtr_gtlData * inObject,
                                     const GALGAS_gtlData constin_item,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_appendItem f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_appendItem.count ()) {
      f = gExtensionModifierTable_gtlData_appendItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_appendItem.count ()) {
           f = gExtensionModifierTable_gtlData_appendItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_appendItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_item, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_appendItem (cPtr_gtlData * inObject,
                                                const GALGAS_gtlData constinArgument_item,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_item.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_appendItem (void) {
  enterExtensionSetter_appendItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                   extensionSetter_gtlData_appendItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_appendItem (void) {
  gExtensionModifierTable_gtlData_appendItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_appendItem (defineExtensionSetter_gtlData_appendItem,
                                               freeExtensionModifier_gtlData_appendItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@gtlExecutableEntity checkArguments'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlExecutableEntity_checkArguments> gExtensionMethodTable_gtlExecutableEntity_checkArguments ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkArguments (const int32_t inClassIndex,
                                          extensionMethodSignature_gtlExecutableEntity_checkArguments inMethod) {
  gExtensionMethodTable_gtlExecutableEntity_checkArguments.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkArguments (const cPtr_gtlExecutableEntity * inObject,
                                         const GALGAS_location constin_fromLocation,
                                         const GALGAS_gtlDataList constin_actualArguments,
                                         GALGAS_gtlData & out_entityVariableMap,
                                         GALGAS_bool & out_result,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_entityVariableMap.drop () ;
  out_result.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExecutableEntity) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlExecutableEntity_checkArguments f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlExecutableEntity_checkArguments.count ()) {
      f = gExtensionMethodTable_gtlExecutableEntity_checkArguments (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlExecutableEntity_checkArguments.count ()) {
           f = gExtensionMethodTable_gtlExecutableEntity_checkArguments (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlExecutableEntity_checkArguments.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_fromLocation, constin_actualArguments, out_entityVariableMap, out_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlExecutableEntity_checkArguments (const cPtr_gtlExecutableEntity * inObject,
                                                                const GALGAS_location constinArgument_fromLocation,
                                                                const GALGAS_gtlDataList constinArgument_actualArguments,
                                                                GALGAS_gtlData & outArgument_entityVariableMap,
                                                                GALGAS_bool & outArgument_result,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlExecutableEntity * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlExecutableEntity) ;
  outArgument_result = GALGAS_bool (true) ;
  outArgument_entityVariableMap = GALGAS_gtlStruct::constructor_new (constinArgument_fromLocation, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 52)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_module.galgas", 53))  COMMA_SOURCE_FILE ("gtl_module.galgas", 50)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_formalArguments.getter_length (SOURCE_FILE ("gtl_module.galgas", 56)).objectCompare (constinArgument_actualArguments.getter_length (SOURCE_FILE ("gtl_module.galgas", 56)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_gtlExecutableEntity temp_1 = object ;
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_1.getter_dynamicType (SOURCE_FILE ("gtl_module.galgas", 58)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlProcedure))).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_string ("procedure '") ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string ("function '") ;
    }
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("calling ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 57)).add_operation (object->mAttribute_name.getter_string (SOURCE_FILE ("gtl_module.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 62)).add_operation (GALGAS_string ("' needs "), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 63)).add_operation (object->mAttribute_formalArguments.getter_length (SOURCE_FILE ("gtl_module.galgas", 63)).getter_string (SOURCE_FILE ("gtl_module.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 63)).add_operation (GALGAS_string (" arguments"), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 63)), fixItArray4  COMMA_SOURCE_FILE ("gtl_module.galgas", 57)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_gtlArgumentList enumerator_1631 (object->mAttribute_formalArguments, kEnumeration_up) ;
    cEnumerator_gtlDataList enumerator_1654 (constinArgument_actualArguments, kEnumeration_up) ;
    while (enumerator_1631.hasCurrentObject () && enumerator_1654.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_1654.current_data (HERE).getter_dynamicType (SOURCE_FILE ("gtl_module.galgas", 67)).objectCompare (enumerator_1631.current_type (HERE))).operator_and (enumerator_1631.current_typed (HERE) COMMA_SOURCE_FILE ("gtl_module.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) enumerator_1654.current_data (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 68)), extensionGetter_typeName (enumerator_1631.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 68)).add_operation (GALGAS_string (" expected for "), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 68)).add_operation (enumerator_1631.current_name (HERE).getter_string (SOURCE_FILE ("gtl_module.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 68)), fixItArray6  COMMA_SOURCE_FILE ("gtl_module.galgas", 68)) ;
        outArgument_result = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_5) {
        {
        outArgument_entityVariableMap.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_1843 = (cPtr_gtlData *) outArgument_entityVariableMap.ptr () ;
        callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_1843, enumerator_1631.current_name (HERE), enumerator_1654.current_data (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 71)) ;
        }
      }
      enumerator_1631.gotoNextObject () ;
      enumerator_1654.gotoNextObject () ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlExecutableEntity_checkArguments (void) {
  enterExtensionMethod_checkArguments (kTypeDescriptor_GALGAS_gtlExecutableEntity.mSlotID,
                                       extensionMethod_gtlExecutableEntity_checkArguments) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlExecutableEntity_checkArguments (void) {
  gExtensionMethodTable_gtlExecutableEntity_checkArguments.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlExecutableEntity_checkArguments (defineExtensionMethod_gtlExecutableEntity_checkArguments,
                                                               freeExtensionMethod_gtlExecutableEntity_checkArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension method '@gtlProcedure call'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlProcedure_call> gExtensionMethodTable_gtlProcedure_call ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_call (const int32_t inClassIndex,
                                extensionMethodSignature_gtlProcedure_call inMethod) {
  gExtensionMethodTable_gtlProcedure_call.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_call (const cPtr_gtlProcedure * inObject,
                               GALGAS_gtlContext & io_context,
                               GALGAS_library & io_lib,
                               GALGAS_string & io_outputString,
                               const GALGAS_location constin_fromLocation,
                               const GALGAS_gtlDataList constin_actualArguments,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlProcedure) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlProcedure_call f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlProcedure_call.count ()) {
      f = gExtensionMethodTable_gtlProcedure_call (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlProcedure_call.count ()) {
           f = gExtensionMethodTable_gtlProcedure_call (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlProcedure_call.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_lib, io_outputString, constin_fromLocation, constin_actualArguments, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlProcedure_call (const cPtr_gtlProcedure * inObject,
                                               GALGAS_gtlContext & ioArgument_context,
                                               GALGAS_library & ioArgument_lib,
                                               GALGAS_string & ioArgument_outputString,
                                               const GALGAS_location constinArgument_fromLocation,
                                               const GALGAS_gtlDataList constinArgument_actualArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlProcedure * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlProcedure) ;
  GALGAS_gtlData var_vars_2288 ;
  GALGAS_bool var_ok_2298 ;
  const GALGAS_gtlProcedure temp_0 = object ;
  callExtensionMethod_checkArguments ((const cPtr_gtlProcedure *) temp_0.ptr (), constinArgument_fromLocation, constinArgument_actualArguments, var_vars_2288, var_ok_2298, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 89)) ;
  const enumGalgasBool test_1 = var_ok_2298.boolEnum () ;
  if (kBoolTrue == test_1) {
    extensionMethod_execute (object->mAttribute_instructions, ioArgument_context, var_vars_2288, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 92)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("procedure call failed"), fixItArray2  COMMA_SOURCE_FILE ("gtl_module.galgas", 94)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlProcedure_call (void) {
  enterExtensionMethod_call (kTypeDescriptor_GALGAS_gtlProcedure.mSlotID,
                             extensionMethod_gtlProcedure_call) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlProcedure_call (void) {
  gExtensionMethodTable_gtlProcedure_call.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlProcedure_call (defineExtensionMethod_gtlProcedure_call,
                                              freeExtensionMethod_gtlProcedure_call) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@gtlFunction call'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlFunction_call> gExtensionGetterTable_gtlFunction_call ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_call (const int32_t inClassIndex,
                                enterExtensionGetter_gtlFunction_call inGetter) {
  gExtensionGetterTable_gtlFunction_call.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_call (const cPtr_gtlFunction * inObject,
                                         const GALGAS_location & in_fromLocation,
                                         GALGAS_library in_lib,
                                         const GALGAS_gtlDataList & in_actualArguments,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlFunction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlFunction_call f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlFunction_call.count ()) {
      f = gExtensionGetterTable_gtlFunction_call (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlFunction_call.count ()) {
           f = gExtensionGetterTable_gtlFunction_call (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlFunction_call.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_fromLocation, in_lib, in_actualArguments, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFunction_call (const cPtr_gtlFunction * inObject,
                                                        const GALGAS_location & constinArgument_fromLocation,
                                                        GALGAS_library inArgument_lib,
                                                        const GALGAS_gtlDataList & constinArgument_actualArguments,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFunction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlFunction) ;
  GALGAS_gtlData var_funcVariableMap_2829 ;
  GALGAS_bool var_ok_2839 ;
  const GALGAS_gtlFunction temp_0 = object ;
  callExtensionMethod_checkArguments ((const cPtr_gtlFunction *) temp_0.ptr (), constinArgument_fromLocation, constinArgument_actualArguments, var_funcVariableMap_2829, var_ok_2839, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 110)) ;
  {
  var_funcVariableMap_2829.insulate (HERE) ; // §ABSTRACT
  cPtr_gtlData * ptr_2861 = (cPtr_gtlData *) var_funcVariableMap_2829.ptr () ;
  callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_2861, object->mAttribute_returnVariable, GALGAS_gtlUnconstructed::constructor_new (object->mAttribute_returnVariable.getter_location (SOURCE_FILE ("gtl_module.galgas", 114)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 114))  COMMA_SOURCE_FILE ("gtl_module.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 112)) ;
  }
  const enumGalgasBool test_1 = var_ok_2839.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_gtlContext var_functionContext_3018 = function_emptyContext (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 117)) ;
    GALGAS_string var_outputString_3060 = GALGAS_string::makeEmptyString () ;
    extensionMethod_execute (object->mAttribute_instructions, var_functionContext_3018, var_funcVariableMap_2829, inArgument_lib, var_outputString_3060, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 119)) ;
    result_result = callExtensionGetter_resultField ((const cPtr_gtlData *) var_funcVariableMap_2829.ptr (), object->mAttribute_returnVariable, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 120)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("function call failed"), fixItArray2  COMMA_SOURCE_FILE ("gtl_module.galgas", 122)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFunction_call (void) {
  enterExtensionGetter_call (kTypeDescriptor_GALGAS_gtlFunction.mSlotID,
                             extensionGetter_gtlFunction_call) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlFunction_call (void) {
  gExtensionGetterTable_gtlFunction_call.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFunction_call (defineExtensionGetter_gtlFunction_call,
                                             freeExtensionGetter_gtlFunction_call) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@gtlGetter callGetter'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlGetter_callGetter> gExtensionGetterTable_gtlGetter_callGetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_callGetter (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlGetter_callGetter inGetter) {
  gExtensionGetterTable_gtlGetter_callGetter.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_callGetter (const cPtr_gtlGetter * inObject,
                                               const GALGAS_location & in_fromLocation,
                                               GALGAS_library in_lib,
                                               const GALGAS_gtlData & in_target,
                                               const GALGAS_gtlDataList & in_actualArguments,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlGetter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlGetter_callGetter f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlGetter_callGetter.count ()) {
      f = gExtensionGetterTable_gtlGetter_callGetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlGetter_callGetter.count ()) {
           f = gExtensionGetterTable_gtlGetter_callGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlGetter_callGetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_fromLocation, in_lib, in_target, in_actualArguments, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlGetter_callGetter (const cPtr_gtlGetter * inObject,
                                                            const GALGAS_location & constinArgument_fromLocation,
                                                            GALGAS_library inArgument_lib,
                                                            const GALGAS_gtlData & constinArgument_target,
                                                            const GALGAS_gtlDataList & constinArgument_actualArguments,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlGetter * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlGetter) ;
  GALGAS_gtlData var_getterVariableMap_3685 ;
  GALGAS_bool var_ok_3695 ;
  const GALGAS_gtlGetter temp_0 = object ;
  callExtensionMethod_checkArguments ((const cPtr_gtlGetter *) temp_0.ptr (), constinArgument_fromLocation, constinArgument_actualArguments, var_getterVariableMap_3685, var_ok_3695, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 139)) ;
  {
  var_getterVariableMap_3685.insulate (HERE) ; // §ABSTRACT
  cPtr_gtlData * ptr_3719 = (cPtr_gtlData *) var_getterVariableMap_3685.ptr () ;
  callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_3719, object->mAttribute_returnVariable, GALGAS_gtlUnconstructed::constructor_new (object->mAttribute_returnVariable.getter_location (SOURCE_FILE ("gtl_module.galgas", 143)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 143))  COMMA_SOURCE_FILE ("gtl_module.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 141)) ;
  }
  const enumGalgasBool test_1 = var_ok_3695.boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    var_getterVariableMap_3685.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_3869 = (cPtr_gtlData *) var_getterVariableMap_3685.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_3869, GALGAS_lstring::constructor_new (GALGAS_string ("self"), constinArgument_fromLocation  COMMA_SOURCE_FILE ("gtl_module.galgas", 147)), constinArgument_target, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 146)) ;
    }
    GALGAS_gtlContext var_getterContext_3972 = function_emptyContext (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 150)) ;
    GALGAS_string var_outputString_4014 = GALGAS_string::makeEmptyString () ;
    extensionMethod_execute (object->mAttribute_instructions, var_getterContext_3972, var_getterVariableMap_3685, inArgument_lib, var_outputString_4014, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 152)) ;
    result_result = callExtensionGetter_resultField ((const cPtr_gtlData *) var_getterVariableMap_3685.ptr (), object->mAttribute_returnVariable, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 153)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("getter call failed"), fixItArray2  COMMA_SOURCE_FILE ("gtl_module.galgas", 155)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGetter_callGetter (void) {
  enterExtensionGetter_callGetter (kTypeDescriptor_GALGAS_gtlGetter.mSlotID,
                                   extensionGetter_gtlGetter_callGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlGetter_callGetter (void) {
  gExtensionGetterTable_gtlGetter_callGetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGetter_callGetter (defineExtensionGetter_gtlGetter_callGetter,
                                                 freeExtensionGetter_gtlGetter_callGetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlGetter typedName'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlGetter_typedName> gExtensionGetterTable_gtlGetter_typedName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typedName (const int32_t inClassIndex,
                                     enterExtensionGetter_gtlGetter_typedName inGetter) {
  gExtensionGetterTable_gtlGetter_typedName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_typedName (const cPtr_gtlGetter * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlGetter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlGetter_typedName f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlGetter_typedName.count ()) {
      f = gExtensionGetterTable_gtlGetter_typedName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlGetter_typedName.count ()) {
           f = gExtensionGetterTable_gtlGetter_typedName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlGetter_typedName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlGetter_typedName (const cPtr_gtlGetter * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlGetter * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlGetter) ;
  result_result = GALGAS_lstring::constructor_new (extensionGetter_typeName (object->mAttribute_targetType, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 162)).add_operation (object->mAttribute_name.getter_string (SOURCE_FILE ("gtl_module.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 162)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_module.galgas", 162)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGetter_typedName (void) {
  enterExtensionGetter_typedName (kTypeDescriptor_GALGAS_gtlGetter.mSlotID,
                                  extensionGetter_gtlGetter_typedName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlGetter_typedName (void) {
  gExtensionGetterTable_gtlGetter_typedName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGetter_typedName (defineExtensionGetter_gtlGetter_typedName,
                                                freeExtensionGetter_gtlGetter_typedName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension method '@gtlSetter callSetter'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlSetter_callSetter> gExtensionMethodTable_gtlSetter_callSetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_callSetter (const int32_t inClassIndex,
                                      extensionMethodSignature_gtlSetter_callSetter inMethod) {
  gExtensionMethodTable_gtlSetter_callSetter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_callSetter (const cPtr_gtlSetter * inObject,
                                     const GALGAS_location constin_fromLocation,
                                     GALGAS_library in_lib,
                                     GALGAS_gtlData & io_target,
                                     const GALGAS_gtlDataList constin_actualArguments,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlSetter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlSetter_callSetter f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlSetter_callSetter.count ()) {
      f = gExtensionMethodTable_gtlSetter_callSetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlSetter_callSetter.count ()) {
           f = gExtensionMethodTable_gtlSetter_callSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlSetter_callSetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_fromLocation, in_lib, io_target, constin_actualArguments, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlSetter_callSetter (const cPtr_gtlSetter * inObject,
                                                  const GALGAS_location constinArgument_fromLocation,
                                                  GALGAS_library inArgument_lib,
                                                  GALGAS_gtlData & ioArgument_target,
                                                  const GALGAS_gtlDataList constinArgument_actualArguments,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSetter * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlSetter) ;
  GALGAS_gtlData var_setterVariableMap_4736 ;
  GALGAS_bool var_ok_4746 ;
  const GALGAS_gtlSetter temp_0 = object ;
  callExtensionMethod_checkArguments ((const cPtr_gtlSetter *) temp_0.ptr (), constinArgument_fromLocation, constinArgument_actualArguments, var_setterVariableMap_4736, var_ok_4746, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 177)) ;
  const enumGalgasBool test_1 = var_ok_4746.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_selfName_4786 = GALGAS_lstring::constructor_new (GALGAS_string ("self"), constinArgument_fromLocation  COMMA_SOURCE_FILE ("gtl_module.galgas", 180)) ;
    {
    var_setterVariableMap_4736.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_4844 = (cPtr_gtlData *) var_setterVariableMap_4736.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_4844, var_selfName_4786, ioArgument_target, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 181)) ;
    }
    GALGAS_gtlContext var_setterContext_4925 = function_emptyContext (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 185)) ;
    GALGAS_string var_outputString_4967 = GALGAS_string::makeEmptyString () ;
    extensionMethod_execute (object->mAttribute_instructions, var_setterContext_4925, var_setterVariableMap_4736, inArgument_lib, var_outputString_4967, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 187)) ;
    callExtensionMethod_structField ((const cPtr_gtlData *) var_setterVariableMap_4736.ptr (), var_selfName_4786, ioArgument_target, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 188)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("setter call failed"), fixItArray2  COMMA_SOURCE_FILE ("gtl_module.galgas", 190)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlSetter_callSetter (void) {
  enterExtensionMethod_callSetter (kTypeDescriptor_GALGAS_gtlSetter.mSlotID,
                                   extensionMethod_gtlSetter_callSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlSetter_callSetter (void) {
  gExtensionMethodTable_gtlSetter_callSetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlSetter_callSetter (defineExtensionMethod_gtlSetter_callSetter,
                                                 freeExtensionMethod_gtlSetter_callSetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlSetter typedName'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlSetter_typedName> gExtensionGetterTable_gtlSetter_typedName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typedName (const int32_t inClassIndex,
                                     enterExtensionGetter_gtlSetter_typedName inGetter) {
  gExtensionGetterTable_gtlSetter_typedName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_typedName (const cPtr_gtlSetter * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlSetter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlSetter_typedName f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlSetter_typedName.count ()) {
      f = gExtensionGetterTable_gtlSetter_typedName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlSetter_typedName.count ()) {
           f = gExtensionGetterTable_gtlSetter_typedName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlSetter_typedName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlSetter_typedName (const cPtr_gtlSetter * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlSetter * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlSetter) ;
  result_result = GALGAS_lstring::constructor_new (extensionGetter_typeName (object->mAttribute_targetType, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 197)).add_operation (object->mAttribute_name.getter_string (SOURCE_FILE ("gtl_module.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 197)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_module.galgas", 197)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSetter_typedName (void) {
  enterExtensionGetter_typedName (kTypeDescriptor_GALGAS_gtlSetter.mSlotID,
                                  extensionGetter_gtlSetter_typedName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlSetter_typedName (void) {
  gExtensionGetterTable_gtlSetter_typedName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSetter_typedName (defineExtensionGetter_gtlSetter_typedName,
                                                freeExtensionGetter_gtlSetter_typedName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@gtlForeachStatementInstruction iterateOnMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnMap (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnMap (const cPtr_gtlForeachStatementInstruction * inObject,
                                       GALGAS_gtlContext & io_context,
                                       GALGAS_gtlData & io_vars,
                                       GALGAS_library & io_lib,
                                       GALGAS_string & io_outputString,
                                       const GALGAS_gtlMap constin_iterableMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnMap (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                         GALGAS_gtlContext & ioArgument_context,
                                                                         GALGAS_gtlData & ioArgument_vars,
                                                                         GALGAS_library & ioArgument_lib,
                                                                         GALGAS_string & ioArgument_outputString,
                                                                         const GALGAS_gtlMap constinArgument_iterableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 599)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (GALGAS_string ("KEY"), object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 600))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 600)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_keyName ;
  }
  GALGAS_lstring var_actualKeyName_17716 = temp_0 ;
  cEnumerator_gtlVarMap enumerator_17829 (constinArgument_iterableMap.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 605)), kEnumeration_up) ;
  GALGAS_uint index_17803 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_17829.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 607)) ;
    while (enumerator_17829.hasCurrentObject () && bool_2) {
      {
      ioArgument_vars.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_17926 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_17926, object->mAttribute_variableName, enumerator_17829.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 609)) ;
      }
      {
      ioArgument_vars.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_17975 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_17975, var_actualKeyName_17716, GALGAS_gtlString::constructor_new (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 611)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 611)), enumerator_17829.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 611))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 610)) ;
      }
      {
      ioArgument_vars.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_18089 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_18089, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 614)), index_17803.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 614))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 613)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 616)) ;
      enumerator_17829.gotoNextObject () ;
      index_17803.increment () ;
      if (enumerator_17829.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 618)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 620)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnMap (void) {
  enterExtensionMethod_iterateOnMap (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                     extensionMethod_gtlForeachStatementInstruction_iterateOnMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnMap (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnMap (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnMap,
                                                                        freeExtensionMethod_gtlForeachStatementInstruction_iterateOnMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@gtlForeachStatementInstruction iterateOnList'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnList (const int32_t inClassIndex,
                                         extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnList (const cPtr_gtlForeachStatementInstruction * inObject,
                                        GALGAS_gtlContext & io_context,
                                        GALGAS_gtlData & io_vars,
                                        GALGAS_library & io_lib,
                                        GALGAS_string & io_outputString,
                                        const GALGAS_gtlList constin_iterableList,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnList (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                          GALGAS_gtlContext & ioArgument_context,
                                                                          GALGAS_gtlData & ioArgument_vars,
                                                                          GALGAS_library & ioArgument_lib,
                                                                          GALGAS_string & ioArgument_outputString,
                                                                          const GALGAS_gtlList constinArgument_iterableList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 631)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 632)), GALGAS_string ("a key variable cannot be define when iterating on a list"), fixItArray1  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 632)) ;
  }
  cEnumerator_list enumerator_18722 (constinArgument_iterableList.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 634)), kEnumeration_up) ;
  GALGAS_uint index_18695 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_18722.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 636)) ;
    while (enumerator_18722.hasCurrentObject () && bool_2) {
      {
      ioArgument_vars.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_18819 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_18819, object->mAttribute_variableName, enumerator_18722.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 638)) ;
      }
      {
      ioArgument_vars.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_18868 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_18868, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 640)), index_18695.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 640))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 639)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 642)) ;
      enumerator_18722.gotoNextObject () ;
      index_18695.increment () ;
      if (enumerator_18722.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 644)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 646)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnList (void) {
  enterExtensionMethod_iterateOnList (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                      extensionMethod_gtlForeachStatementInstruction_iterateOnList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnList (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnList (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnList,
                                                                         freeExtensionMethod_gtlForeachStatementInstruction_iterateOnList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@gtlForeachStatementInstruction iterateOnSet'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnSet (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnSet (const cPtr_gtlForeachStatementInstruction * inObject,
                                       GALGAS_gtlContext & io_context,
                                       GALGAS_gtlData & io_vars,
                                       GALGAS_library & io_lib,
                                       GALGAS_string & io_outputString,
                                       const GALGAS_gtlSet constin_iterableSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnSet (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                         GALGAS_gtlContext & ioArgument_context,
                                                                         GALGAS_gtlData & ioArgument_vars,
                                                                         GALGAS_library & ioArgument_lib,
                                                                         GALGAS_string & ioArgument_outputString,
                                                                         const GALGAS_gtlSet constinArgument_iterableSet,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 657)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 658)), GALGAS_string ("a key variable cannot be define when iterating on a set"), fixItArray1  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 658)) ;
  }
  cEnumerator_stringset enumerator_19492 (constinArgument_iterableSet.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 660)), kEnumeration_up) ;
  GALGAS_uint index_19466 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_19492.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 662)) ;
    while (enumerator_19492.hasCurrentObject () && bool_2) {
      {
      ioArgument_vars.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_19589 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_19589, object->mAttribute_variableName, GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 666)), enumerator_19492.current_key (HERE)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 664)) ;
      }
      {
      ioArgument_vars.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_19696 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_19696, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 669)), index_19466.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 669))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 668)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 671)) ;
      enumerator_19492.gotoNextObject () ;
      index_19466.increment () ;
      if (enumerator_19492.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 673)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 675)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnSet (void) {
  enterExtensionMethod_iterateOnSet (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                     extensionMethod_gtlForeachStatementInstruction_iterateOnSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnSet (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnSet (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnSet,
                                                                        freeExtensionMethod_gtlForeachStatementInstruction_iterateOnSet) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@debuggerContext appendInstructionToStepDo'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_appendInstructionToStepDo> gExtensionModifierTable_debuggerContext_appendInstructionToStepDo ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_appendInstructionToStepDo (const int32_t inClassIndex,
                                                     extensionSetterSignature_debuggerContext_appendInstructionToStepDo inModifier) {
  gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_appendInstructionToStepDo (cPtr_debuggerContext * inObject,
                                                    GALGAS_gtlInstruction in_instruction,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_appendInstructionToStepDo f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.count ()) {
      f = gExtensionModifierTable_debuggerContext_appendInstructionToStepDo (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.count ()) {
           f = gExtensionModifierTable_debuggerContext_appendInstructionToStepDo (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_instruction, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_appendInstructionToStepDo (cPtr_debuggerContext * inObject,
                                                                       GALGAS_gtlInstruction inArgument_instruction,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mAttribute_doList.addAssign_operation (inArgument_instruction  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 90)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_appendInstructionToStepDo (void) {
  enterExtensionSetter_appendInstructionToStepDo (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                                  extensionSetter_debuggerContext_appendInstructionToStepDo) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_appendInstructionToStepDo (void) {
  gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_appendInstructionToStepDo (defineExtensionSetter_debuggerContext_appendInstructionToStepDo,
                                                                      freeExtensionModifier_debuggerContext_appendInstructionToStepDo) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@debuggerContext deleteStepDoInstruction'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteStepDoInstruction> gExtensionModifierTable_debuggerContext_deleteStepDoInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteStepDoInstruction (const int32_t inClassIndex,
                                                   extensionSetterSignature_debuggerContext_deleteStepDoInstruction inModifier) {
  gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteStepDoInstruction (cPtr_debuggerContext * inObject,
                                                  const GALGAS_lbigint constin_numToDelete,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteStepDoInstruction f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteStepDoInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteStepDoInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_deleteStepDoInstruction (cPtr_debuggerContext * inObject,
                                                                     const GALGAS_lbigint constinArgument_numToDelete,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 97)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 97)).getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 97)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_numToDeleteUInt_3945 = constinArgument_numToDelete.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 98)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_numToDeleteUInt_3945.objectCompare (object->mAttribute_doList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 99)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_gtlInstruction var_instruction_4071 ;
      {
      object->mAttribute_doList.setter_removeAtIndex (var_instruction_4071, var_numToDeleteUInt_3945, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 100)) ;
      }
      inCompiler->printMessage (GALGAS_string ("Command: ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 101)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 102))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 102)) ;
      callExtensionMethod_display ((const cPtr_gtlInstruction *) var_instruction_4071.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 103)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 104))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 104)) ;
      inCompiler->printMessage (GALGAS_string (" deleted\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 105)) ;
    }else if (kBoolFalse == test_1) {
      inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 107))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 107)) ;
      inCompiler->printMessage (GALGAS_string ("no do command at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 108)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 108)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 108))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 108)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 111))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 111)) ;
    inCompiler->printMessage (GALGAS_string ("no do command at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 112)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 112)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 112))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 112)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_deleteStepDoInstruction (void) {
  enterExtensionSetter_deleteStepDoInstruction (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                                extensionSetter_debuggerContext_deleteStepDoInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_deleteStepDoInstruction (void) {
  gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_deleteStepDoInstruction (defineExtensionSetter_debuggerContext_deleteStepDoInstruction,
                                                                    freeExtensionModifier_debuggerContext_deleteStepDoInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@debuggerContext listStepDoInstructions'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_debuggerContext_listStepDoInstructions> gExtensionMethodTable_debuggerContext_listStepDoInstructions ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_listStepDoInstructions (const int32_t inClassIndex,
                                                  extensionMethodSignature_debuggerContext_listStepDoInstructions inMethod) {
  gExtensionMethodTable_debuggerContext_listStepDoInstructions.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_listStepDoInstructions (const cPtr_debuggerContext * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_listStepDoInstructions f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_listStepDoInstructions.count ()) {
      f = gExtensionMethodTable_debuggerContext_listStepDoInstructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_listStepDoInstructions.count ()) {
           f = gExtensionMethodTable_debuggerContext_listStepDoInstructions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_listStepDoInstructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_debuggerContext_listStepDoInstructions (const cPtr_debuggerContext * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_doList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 119)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Step do commands:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 120)) ;
    cEnumerator_gtlInstructionList enumerator_4746 (object->mAttribute_doList, kEnumeration_up) ;
    GALGAS_uint index_4722 ((uint32_t) 0) ;
    while (enumerator_4746.hasCurrentObject ()) {
      inCompiler->printMessage (index_4722.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 122)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 122)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 122))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 122)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 123))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 123)) ;
      callExtensionMethod_display ((const cPtr_gtlInstruction *) enumerator_4746.current_instruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 124)) ;
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 125)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 126))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 126)) ;
      enumerator_4746.gotoNextObject () ;
      index_4722.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 121)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("No step do commands\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 129)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_debuggerContext_listStepDoInstructions (void) {
  enterExtensionMethod_listStepDoInstructions (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                               extensionMethod_debuggerContext_listStepDoInstructions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_debuggerContext_listStepDoInstructions (void) {
  gExtensionMethodTable_debuggerContext_listStepDoInstructions.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_debuggerContext_listStepDoInstructions (defineExtensionMethod_debuggerContext_listStepDoInstructions,
                                                                   freeExtensionMethod_debuggerContext_listStepDoInstructions) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension setter '@debuggerContext setBreakpoint'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_setBreakpoint> gExtensionModifierTable_debuggerContext_setBreakpoint ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setBreakpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_debuggerContext_setBreakpoint inModifier) {
  gExtensionModifierTable_debuggerContext_setBreakpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setBreakpoint (cPtr_debuggerContext * inObject,
                                        const GALGAS_string constin_fileName,
                                        const GALGAS_uint constin_lineNum,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_setBreakpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_setBreakpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_setBreakpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_setBreakpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_setBreakpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_setBreakpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_fileName, constin_lineNum, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_setBreakpoint (cPtr_debuggerContext * inObject,
                                                           const GALGAS_string constinArgument_fileName,
                                                           const GALGAS_uint constinArgument_lineNum,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  GALGAS_string var_signature_5205 = constinArgument_fileName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 138)).add_operation (constinArgument_lineNum.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 138)).getter_md_35_ (SOURCE_FILE ("gtl_debugger.galgas", 138)) ;
  GALGAS_bool var_notThere_5255 = GALGAS_bool (true) ;
  cEnumerator_gtlBreakpointList enumerator_5288 (object->mAttribute_breakpoints, kEnumeration_up) ;
  while (enumerator_5288.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_5288.current_breakpoint (HERE).getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 141)).objectCompare (var_signature_5205)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_notThere_5255 = GALGAS_bool (false) ;
    }
    enumerator_5288.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = var_notThere_5255.boolEnum () ;
  if (kBoolTrue == test_1) {
    object->mAttribute_breakpoints.addAssign_operation (GALGAS_gtlBreakpoint::constructor_new (constinArgument_fileName, constinArgument_lineNum, var_signature_5205  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 146))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 146)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_setBreakpoint (void) {
  enterExtensionSetter_setBreakpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                      extensionSetter_debuggerContext_setBreakpoint) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_setBreakpoint (void) {
  gExtensionModifierTable_debuggerContext_setBreakpoint.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_setBreakpoint (defineExtensionSetter_debuggerContext_setBreakpoint,
                                                          freeExtensionModifier_debuggerContext_setBreakpoint) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@debuggerContext listBreakpoints'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_debuggerContext_listBreakpoints> gExtensionMethodTable_debuggerContext_listBreakpoints ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_listBreakpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_debuggerContext_listBreakpoints inMethod) {
  gExtensionMethodTable_debuggerContext_listBreakpoints.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_listBreakpoints (const cPtr_debuggerContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_listBreakpoints f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_listBreakpoints.count ()) {
      f = gExtensionMethodTable_debuggerContext_listBreakpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_listBreakpoints.count ()) {
           f = gExtensionMethodTable_debuggerContext_listBreakpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_listBreakpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_debuggerContext_listBreakpoints (const cPtr_debuggerContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_breakpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Breakpoints:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 154)) ;
    cEnumerator_gtlBreakpointList enumerator_5688 (object->mAttribute_breakpoints, kEnumeration_up) ;
    GALGAS_uint index_5668 ((uint32_t) 0) ;
    while (enumerator_5688.hasCurrentObject ()) {
      inCompiler->printMessage (index_5668.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 156)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 156)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 156))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 156)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 157))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 157)) ;
      inCompiler->printMessage (enumerator_5688.current_breakpoint (HERE).getter_fileName (SOURCE_FILE ("gtl_debugger.galgas", 158)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 158)).add_operation (enumerator_5688.current_breakpoint (HERE).getter_lineNum (SOURCE_FILE ("gtl_debugger.galgas", 158)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 158))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 158)) ;
      inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 159)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 160))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 160)) ;
      enumerator_5688.gotoNextObject () ;
      index_5668.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 155)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("No breakpoint\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 163)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_debuggerContext_listBreakpoints (void) {
  enterExtensionMethod_listBreakpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                        extensionMethod_debuggerContext_listBreakpoints) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_debuggerContext_listBreakpoints (void) {
  gExtensionMethodTable_debuggerContext_listBreakpoints.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_debuggerContext_listBreakpoints (defineExtensionMethod_debuggerContext_listBreakpoints,
                                                            freeExtensionMethod_debuggerContext_listBreakpoints) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension setter '@debuggerContext deleteBreakpoint'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteBreakpoint> gExtensionModifierTable_debuggerContext_deleteBreakpoint ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteBreakpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_debuggerContext_deleteBreakpoint inModifier) {
  gExtensionModifierTable_debuggerContext_deleteBreakpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteBreakpoint (cPtr_debuggerContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteBreakpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteBreakpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteBreakpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteBreakpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteBreakpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteBreakpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_deleteBreakpoint (cPtr_debuggerContext * inObject,
                                                              const GALGAS_lbigint constinArgument_numToDelete,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 171)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 171)).getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 171)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_numToDeleteUInt_6231 = constinArgument_numToDelete.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 172)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_numToDeleteUInt_6231.objectCompare (object->mAttribute_breakpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 173)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_gtlBreakpoint var_bp_6357 ;
      {
      object->mAttribute_breakpoints.setter_removeAtIndex (var_bp_6357, var_numToDeleteUInt_6231, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 174)) ;
      }
      inCompiler->printMessage (GALGAS_string ("Breakpoint: ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 175)) ;
      inCompiler->printMessage (object->mAttribute_instructionColor.add_operation (object->mAttribute_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 176))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 176)) ;
      inCompiler->printMessage (var_bp_6357.getter_fileName (SOURCE_FILE ("gtl_debugger.galgas", 177)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 177)).add_operation (var_bp_6357.getter_lineNum (SOURCE_FILE ("gtl_debugger.galgas", 177)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 177))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 177)) ;
      inCompiler->printMessage (object->mAttribute_outputColor.add_operation (object->mAttribute_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 178))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 178)) ;
      inCompiler->printMessage (GALGAS_string (" deleted\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 179)) ;
    }else if (kBoolFalse == test_1) {
      inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 181))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 181)) ;
      inCompiler->printMessage (GALGAS_string ("no breakpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 182)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 182)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 182))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 182)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (object->mAttribute_warningColor.add_operation (object->mAttribute_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 185))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 185)) ;
    inCompiler->printMessage (GALGAS_string ("no breakpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 186)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 186)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 186))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 186)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_deleteBreakpoint (void) {
  enterExtensionSetter_deleteBreakpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                         extensionSetter_debuggerContext_deleteBreakpoint) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_deleteBreakpoint (void) {
  gExtensionModifierTable_debuggerContext_deleteBreakpoint.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_deleteBreakpoint (defineExtensionSetter_debuggerContext_deleteBreakpoint,
                                                             freeExtensionModifier_debuggerContext_deleteBreakpoint) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@debuggerContext breakOn'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_debuggerContext_breakOn> gExtensionGetterTable_debuggerContext_breakOn ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_breakOn (const int32_t inClassIndex,
                                   enterExtensionGetter_debuggerContext_breakOn inGetter) {
  gExtensionGetterTable_debuggerContext_breakOn.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_breakOn (const cPtr_debuggerContext * inObject,
                                         const GALGAS_gtlInstruction & in_instruction,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_debuggerContext_breakOn f = NULL ;
    if (classIndex < gExtensionGetterTable_debuggerContext_breakOn.count ()) {
      f = gExtensionGetterTable_debuggerContext_breakOn (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_debuggerContext_breakOn.count ()) {
           f = gExtensionGetterTable_debuggerContext_breakOn (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_debuggerContext_breakOn.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_instruction, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_debuggerContext_breakOn (const cPtr_debuggerContext * inObject,
                                                            const GALGAS_gtlInstruction & constinArgument_instruction,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_breakOn ; // Returned variable
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  result_breakOn = GALGAS_bool (false) ;
  cEnumerator_gtlBreakpointList enumerator_7042 (object->mAttribute_breakpoints, kEnumeration_up) ;
  while (enumerator_7042.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_instruction.getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 197)).objectCompare (enumerator_7042.current_breakpoint (HERE).getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 197)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_breakOn = GALGAS_bool (true) ;
    }
    enumerator_7042.gotoNextObject () ;
  }
//---
  return result_breakOn ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_debuggerContext_breakOn (void) {
  enterExtensionGetter_breakOn (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                extensionGetter_debuggerContext_breakOn) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_debuggerContext_breakOn (void) {
  gExtensionGetterTable_debuggerContext_breakOn.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_debuggerContext_breakOn (defineExtensionGetter_debuggerContext_breakOn,
                                                    freeExtensionGetter_debuggerContext_breakOn) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension method '@debuggerContext hereWeAre'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_debuggerContext_hereWeAre> gExtensionMethodTable_debuggerContext_hereWeAre ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_hereWeAre (const int32_t inClassIndex,
                                     extensionMethodSignature_debuggerContext_hereWeAre inMethod) {
  gExtensionMethodTable_debuggerContext_hereWeAre.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_hereWeAre (const cPtr_debuggerContext * inObject,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_hereWeAre f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_hereWeAre.count ()) {
      f = gExtensionMethodTable_debuggerContext_hereWeAre (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_hereWeAre.count ()) {
           f = gExtensionMethodTable_debuggerContext_hereWeAre (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_hereWeAre.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_debuggerContext_hereWeAre (const cPtr_debuggerContext * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  GALGAS_uint var_indentation_7273 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlInstructionListContextStack enumerator_7344 (object->mAttribute_contextStack.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 207)), kEnumeration_up) ;
  while (enumerator_7344.hasCurrentObject ()) {
    inCompiler->printMessage (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_indentation_7273  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 208))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 208)) ;
    const GALGAS_debuggerContext temp_0 = object ;
    callExtensionMethod_displayWithLocation ((const cPtr_gtlInstruction *) enumerator_7344.current_instructionList (HERE).getter_instructionAtIndex (enumerator_7344.current_nextInstructionIndex (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 209)).ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 209)) ;
    var_indentation_7273 = var_indentation_7273.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 210)) ;
    enumerator_7344.gotoNextObject () ;
  }
  GALGAS_string var_identationString_7562 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_indentation_7273  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 213)) ;
  GALGAS_uint var_startIndex_7636 ;
  GALGAS_uint var_displayLength_7658 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_nextInstructionIndex.objectCompare (object->mAttribute_instructionWindow)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_startIndex_7636 = object->mAttribute_nextInstructionIndex.substract_operation (object->mAttribute_instructionWindow, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 218)) ;
  }else if (kBoolFalse == test_1) {
    var_startIndex_7636 = GALGAS_uint ((uint32_t) 0U) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_startIndex_7636.add_operation (object->mAttribute_instructionWindow.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 222)).objectCompare (object->mAttribute_instructionList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 222)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_displayLength_7658 = GALGAS_uint ((uint32_t) 2U).multiply_operation (object->mAttribute_instructionWindow, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 223)) ;
  }else if (kBoolFalse == test_2) {
    var_displayLength_7658 = object->mAttribute_instructionList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 225)).substract_operation (var_startIndex_7636, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 225)) ;
  }
  inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 227))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 227)) ;
  cEnumerator_gtlInstructionList enumerator_8110 (object->mAttribute_instructionList.getter_subListWithRange (GALGAS_range::constructor_new (var_startIndex_7636, var_displayLength_7658  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 229)), kEnumeration_up) ;
  GALGAS_uint index_8011 ((uint32_t) 0) ;
  while (enumerator_8110.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, index_8011.add_operation (var_startIndex_7636, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 232)).objectCompare (object->mAttribute_nextInstructionIndex)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->printMessage (function_red (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 233)).add_operation (function_bold (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 233))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 233)) ;
      inCompiler->printMessage (var_identationString_7562.add_operation (GALGAS_string (">>> "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 234))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 234)) ;
      inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 235))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 235)) ;
    }else if (kBoolFalse == test_3) {
      inCompiler->printMessage (var_identationString_7562.add_operation (GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 237))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 237)) ;
    }
    const GALGAS_debuggerContext temp_4 = object ;
    callExtensionMethod_displayWithLocation ((const cPtr_gtlInstruction *) enumerator_8110.current_instruction (HERE).ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 239)) ;
    enumerator_8110.gotoNextObject () ;
    index_8011.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 228)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_debuggerContext_hereWeAre (void) {
  enterExtensionMethod_hereWeAre (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                  extensionMethod_debuggerContext_hereWeAre) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_debuggerContext_hereWeAre (void) {
  gExtensionMethodTable_debuggerContext_hereWeAre.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_debuggerContext_hereWeAre (defineExtensionMethod_debuggerContext_hereWeAre,
                                                      freeExtensionMethod_debuggerContext_hereWeAre) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension setter '@debuggerContext pushInstructionList'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_pushInstructionList> gExtensionModifierTable_debuggerContext_pushInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_pushInstructionList (const int32_t inClassIndex,
                                               extensionSetterSignature_debuggerContext_pushInstructionList inModifier) {
  gExtensionModifierTable_debuggerContext_pushInstructionList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_pushInstructionList (cPtr_debuggerContext * inObject,
                                              const GALGAS_gtlInstructionList constin_instructions,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_pushInstructionList f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_pushInstructionList.count ()) {
      f = gExtensionModifierTable_debuggerContext_pushInstructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_pushInstructionList.count ()) {
           f = gExtensionModifierTable_debuggerContext_pushInstructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_pushInstructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_instructions, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_pushInstructionList (cPtr_debuggerContext * inObject,
                                                                 const GALGAS_gtlInstructionList constinArgument_instructions,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mAttribute_contextStack.addAssign_operation (object->mAttribute_nextInstructionIndex, object->mAttribute_instructionList  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 248)) ;
  object->mAttribute_nextInstructionIndex = GALGAS_uint ((uint32_t) 0U) ;
  object->mAttribute_instructionList = constinArgument_instructions ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_pushInstructionList (void) {
  enterExtensionSetter_pushInstructionList (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                            extensionSetter_debuggerContext_pushInstructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_pushInstructionList (void) {
  gExtensionModifierTable_debuggerContext_pushInstructionList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_pushInstructionList (defineExtensionSetter_debuggerContext_pushInstructionList,
                                                                freeExtensionModifier_debuggerContext_pushInstructionList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension setter '@debuggerContext popInstructionList'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debuggerContext_popInstructionList> gExtensionModifierTable_debuggerContext_popInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_popInstructionList (const int32_t inClassIndex,
                                              extensionSetterSignature_debuggerContext_popInstructionList inModifier) {
  gExtensionModifierTable_debuggerContext_popInstructionList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_popInstructionList (cPtr_debuggerContext * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_popInstructionList f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_popInstructionList.count ()) {
      f = gExtensionModifierTable_debuggerContext_popInstructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_popInstructionList.count ()) {
           f = gExtensionModifierTable_debuggerContext_popInstructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_popInstructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debuggerContext_popInstructionList (cPtr_debuggerContext * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  {
  object->mAttribute_contextStack.setter_popLast (object->mAttribute_nextInstructionIndex, object->mAttribute_instructionList, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 255)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debuggerContext_popInstructionList (void) {
  enterExtensionSetter_popInstructionList (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                           extensionSetter_debuggerContext_popInstructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debuggerContext_popInstructionList (void) {
  gExtensionModifierTable_debuggerContext_popInstructionList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debuggerContext_popInstructionList (defineExtensionSetter_debuggerContext_popInstructionList,
                                                               freeExtensionModifier_debuggerContext_popInstructionList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract extension getter '@gtlExpression stringRepresentation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlExpression_stringRepresentation> gExtensionGetterTable_gtlExpression_stringRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlExpression_stringRepresentation inGetter) {
  gExtensionGetterTable_gtlExpression_stringRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlExpression_stringRepresentation (void) {
  gExtensionGetterTable_gtlExpression_stringRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpression_stringRepresentation (NULL,
                                                               freeExtensionGetter_gtlExpression_stringRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlExpression_stringRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlExpression_stringRepresentation.count ()) {
      f = gExtensionGetterTable_gtlExpression_stringRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlExpression_stringRepresentation.count ()) {
           f = gExtensionGetterTable_gtlExpression_stringRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlExpression_stringRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract extension getter '@gtlData stringRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_stringRepresentation> gExtensionGetterTable_gtlData_stringRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlData_stringRepresentation inGetter) {
  gExtensionGetterTable_gtlData_stringRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_stringRepresentation (void) {
  gExtensionGetterTable_gtlData_stringRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_stringRepresentation (NULL,
                                                         freeExtensionGetter_gtlData_stringRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_stringRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_stringRepresentation.count ()) {
      f = gExtensionGetterTable_gtlData_stringRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_stringRepresentation.count ()) {
           f = gExtensionGetterTable_gtlData_stringRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_stringRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension Getter '@lsint stringRepresentation'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_lsint & inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lsint temp_0 = inObject ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, GALGAS_sint ((int32_t) 0L).objectCompare (temp_0.getter_sint (SOURCE_FILE ("gtl_debugger.galgas", 903)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("<") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string (">") ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension getter '@impType mergeWithType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_impType_mergeWithType> gExtensionGetterTable_impType_mergeWithType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mergeWithType (const int32_t inClassIndex,
                                         enterExtensionGetter_impType_mergeWithType inGetter) {
  gExtensionGetterTable_impType_mergeWithType.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_impType_mergeWithType (void) {
  gExtensionGetterTable_impType_mergeWithType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_impType_mergeWithType (NULL,
                                                  freeExtensionGetter_impType_mergeWithType) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType callExtensionGetter_mergeWithType (const cPtr_impType * inObject,
                                                  GALGAS_impType in_typeToMerge,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_impType result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_impType_mergeWithType f = NULL ;
    if (classIndex < gExtensionGetterTable_impType_mergeWithType.count ()) {
      f = gExtensionGetterTable_impType_mergeWithType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_impType_mergeWithType.count ()) {
           f = gExtensionGetterTable_impType_mergeWithType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_impType_mergeWithType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_typeToMerge, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@impType autoAllowed'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_impType_autoAllowed> gExtensionGetterTable_impType_autoAllowed ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_autoAllowed (const int32_t inClassIndex,
                                       enterExtensionGetter_impType_autoAllowed inGetter) {
  gExtensionGetterTable_impType_autoAllowed.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_autoAllowed (const cPtr_impType * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_impType_autoAllowed f = NULL ;
    if (classIndex < gExtensionGetterTable_impType_autoAllowed.count ()) {
      f = gExtensionGetterTable_impType_autoAllowed (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_impType_autoAllowed.count ()) {
           f = gExtensionGetterTable_impType_autoAllowed (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_impType_autoAllowed.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_impType_autoAllowed (const cPtr_impType * /* inObject */,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_impType_autoAllowed (void) {
  enterExtensionGetter_autoAllowed (kTypeDescriptor_GALGAS_impType.mSlotID,
                                    extensionGetter_impType_autoAllowed) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_impType_autoAllowed (void) {
  gExtensionGetterTable_impType_autoAllowed.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_impType_autoAllowed (defineExtensionGetter_impType_autoAllowed,
                                                freeExtensionGetter_impType_autoAllowed) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension method '@impAutoDefaultType setDefault'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impAutoDefaultType_setDefault> gExtensionMethodTable_impAutoDefaultType_setDefault ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_setDefault (const int32_t inClassIndex,
                                      extensionMethodSignature_impAutoDefaultType_setDefault inMethod) {
  gExtensionMethodTable_impAutoDefaultType_setDefault.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_setDefault (const cPtr_impAutoDefaultType * inObject,
                                     GALGAS_objectAttributes & io_attributes,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impAutoDefaultType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impAutoDefaultType_setDefault f = NULL ;
    if (classIndex < gExtensionMethodTable_impAutoDefaultType_setDefault.count ()) {
      f = gExtensionMethodTable_impAutoDefaultType_setDefault (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impAutoDefaultType_setDefault.count ()) {
           f = gExtensionMethodTable_impAutoDefaultType_setDefault (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impAutoDefaultType_setDefault.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_attributes, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impAutoDefaultType_setDefault (const cPtr_impAutoDefaultType * inObject,
                                                           GALGAS_objectAttributes & ioArgument_attributes,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impAutoDefaultType * object = inObject ;
  macroValidSharedObject (object, cPtr_impAutoDefaultType) ;
  const enumGalgasBool test_0 = ioArgument_attributes.getter_objectParams (SOURCE_FILE ("implementation_types.galgas", 489)).getter_hasKey (object->mAttribute_name.getter_string (SOURCE_FILE ("implementation_types.galgas", 489)) COMMA_SOURCE_FILE ("implementation_types.galgas", 489)).operator_not (SOURCE_FILE ("implementation_types.galgas", 489)).boolEnum () ;
  if (kBoolTrue == test_0) {
    if (object->mAttribute_defaultValue.isValid ()) {
      if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
      }else if (object->mAttribute_defaultValue.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_auto) {
        GALGAS_identifierMap var_attr_13319 = ioArgument_attributes.getter_objectParams (SOURCE_FILE ("implementation_types.galgas", 493)) ;
        {
        var_attr_13319.setter_put (object->mAttribute_name, object->mAttribute_defaultValue, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 494)) ;
        }
        {
        ioArgument_attributes.setter_setObjectParams (var_attr_13319 COMMA_SOURCE_FILE ("implementation_types.galgas", 495)) ;
        }
      }else{
        GALGAS_identifierMap var_attr_13515 = ioArgument_attributes.getter_objectParams (SOURCE_FILE ("implementation_types.galgas", 498)) ;
        {
        var_attr_13515.setter_put (object->mAttribute_name, object->mAttribute_defaultValue, inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 499)) ;
        }
        {
        ioArgument_attributes.setter_setObjectParams (var_attr_13515 COMMA_SOURCE_FILE ("implementation_types.galgas", 500)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impAutoDefaultType_setDefault (void) {
  enterExtensionMethod_setDefault (kTypeDescriptor_GALGAS_impAutoDefaultType.mSlotID,
                                   extensionMethod_impAutoDefaultType_setDefault) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impAutoDefaultType_setDefault (void) {
  gExtensionMethodTable_impAutoDefaultType_setDefault.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impAutoDefaultType_setDefault (defineExtensionMethod_impAutoDefaultType_setDefault,
                                                          freeExtensionMethod_impAutoDefaultType_setDefault) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@impType checkAttributeReferences'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_checkAttributeReferences> gExtensionMethodTable_impType_checkAttributeReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkAttributeReferences (const int32_t inClassIndex,
                                                    extensionMethodSignature_impType_checkAttributeReferences inMethod) {
  gExtensionMethodTable_impType_checkAttributeReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkAttributeReferences (const cPtr_impType * inObject,
                                                   const GALGAS_implementation constin_imp,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_checkAttributeReferences f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_checkAttributeReferences.count ()) {
      f = gExtensionMethodTable_impType_checkAttributeReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_checkAttributeReferences.count ()) {
           f = gExtensionMethodTable_impType_checkAttributeReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_checkAttributeReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_imp, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_checkAttributeReferences (const cPtr_impType * /* inObject */,
                                                              const GALGAS_implementation /* constinArgument_imp */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_checkAttributeReferences (void) {
  enterExtensionMethod_checkAttributeReferences (kTypeDescriptor_GALGAS_impType.mSlotID,
                                                 extensionMethod_impType_checkAttributeReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_checkAttributeReferences (void) {
  gExtensionMethodTable_impType_checkAttributeReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_checkAttributeReferences (defineExtensionMethod_impType_checkAttributeReferences,
                                                             freeExtensionMethod_impType_checkAttributeReferences) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension getter '@implementationObject mergeImplementationObjectWith'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_implementationObject_mergeImplementationObjectWith> gExtensionGetterTable_implementationObject_mergeImplementationObjectWith ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mergeImplementationObjectWith (const int32_t inClassIndex,
                                                         enterExtensionGetter_implementationObject_mergeImplementationObjectWith inGetter) {
  gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject callExtensionGetter_mergeImplementationObjectWith (const cPtr_implementationObject * inObject,
                                                                               const GALGAS_implementationObject & in_objToMerge,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_implementationObject result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementationObject) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_implementationObject_mergeImplementationObjectWith f = NULL ;
    if (classIndex < gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.count ()) {
      f = gExtensionGetterTable_implementationObject_mergeImplementationObjectWith (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.count ()) {
           f = gExtensionGetterTable_implementationObject_mergeImplementationObjectWith (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_objToMerge, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_implementationObject extensionGetter_implementationObject_mergeImplementationObjectWith (const cPtr_implementationObject * inObject,
                                                                                                       const GALGAS_implementationObject & constinArgument_objToMerge,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationObject result_mergedObj ; // Returned variable
  const cPtr_implementationObject * object = inObject ;
  macroValidSharedObject (object, cPtr_implementationObject) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_multiple.objectCompare (constinArgument_objToMerge.getter_multiple (SOURCE_FILE ("implementation_types.galgas", 986)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_goil_5F_options_warnMultiple.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticWarning (constinArgument_objToMerge.getter_multiple (SOURCE_FILE ("implementation_types.galgas", 988)).getter_location (SOURCE_FILE ("implementation_types.galgas", 988)), GALGAS_string ("multiple redefinition"), fixItArray2  COMMA_SOURCE_FILE ("implementation_types.galgas", 988)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (object->mAttribute_multiple.getter_location (SOURCE_FILE ("implementation_types.galgas", 989)), GALGAS_string ("was defined here"), fixItArray3  COMMA_SOURCE_FILE ("implementation_types.galgas", 989)) ;
    }
  }
  result_mergedObj = GALGAS_implementationObject::constructor_new (object->mAttribute_multiple, extensionGetter_mergeImplementationObjectAttributesWith (object->mAttribute_attributes, constinArgument_objToMerge.getter_attributes (SOURCE_FILE ("implementation_types.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("implementation_types.galgas", 1002))  COMMA_SOURCE_FILE ("implementation_types.galgas", 1002)) ;
//---
  return result_mergedObj ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_implementationObject_mergeImplementationObjectWith (void) {
  enterExtensionGetter_mergeImplementationObjectWith (kTypeDescriptor_GALGAS_implementationObject.mSlotID,
                                                      extensionGetter_implementationObject_mergeImplementationObjectWith) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_implementationObject_mergeImplementationObjectWith (void) {
  gExtensionGetterTable_implementationObject_mergeImplementationObjectWith.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_implementationObject_mergeImplementationObjectWith (defineExtensionGetter_implementationObject_mergeImplementationObjectWith,
                                                                               freeExtensionGetter_implementationObject_mergeImplementationObjectWith) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension method '@object_t set'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_object_5F_t_set> gExtensionMethodTable_object_5F_t_set ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_set (const int32_t inClassIndex,
                               extensionMethodSignature_object_5F_t_set inMethod) {
  gExtensionMethodTable_object_5F_t_set.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_set (const cPtr_object_5F_t * inObject,
                              const GALGAS_lstring constin_name,
                              GALGAS_gtlData & io_result,
                              C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_object_5F_t) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_object_5F_t_set f = NULL ;
    if (classIndex < gExtensionMethodTable_object_5F_t_set.count ()) {
      f = gExtensionMethodTable_object_5F_t_set (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_object_5F_t_set.count ()) {
           f = gExtensionMethodTable_object_5F_t_set (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_object_5F_t_set.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_name, io_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_object_5F_t_set (const cPtr_object_5F_t * /* inObject */,
                                             const GALGAS_lstring constinArgument_name,
                                             GALGAS_gtlData & /* ioArgument_result */,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("systemConfig.galgas", 28)), GALGAS_string ("Attribute: ").add_operation (constinArgument_name.getter_string (SOURCE_FILE ("systemConfig.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 28)).add_operation (GALGAS_string (", Internal error"), inCompiler COMMA_SOURCE_FILE ("systemConfig.galgas", 28)), fixItArray0  COMMA_SOURCE_FILE ("systemConfig.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_object_5F_t_set (void) {
  enterExtensionMethod_set (kTypeDescriptor_GALGAS_object_5F_t.mSlotID,
                            extensionMethod_object_5F_t_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_object_5F_t_set (void) {
  gExtensionMethodTable_object_5F_t_set.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_object_5F_t_set (defineExtensionMethod_object_5F_t_set,
                                            freeExtensionMethod_object_5F_t_set) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@applicationDefinition applicationWithDefaults'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_applicationDefinition_applicationWithDefaults> gExtensionGetterTable_applicationDefinition_applicationWithDefaults ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_applicationWithDefaults (const int32_t inClassIndex,
                                                   enterExtensionGetter_applicationDefinition_applicationWithDefaults inGetter) {
  gExtensionGetterTable_applicationDefinition_applicationWithDefaults.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationDefinition callExtensionGetter_applicationWithDefaults (const cPtr_applicationDefinition * inObject,
                                                                          const GALGAS_implementation & in_imp,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_applicationDefinition result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_applicationDefinition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_applicationDefinition_applicationWithDefaults f = NULL ;
    if (classIndex < gExtensionGetterTable_applicationDefinition_applicationWithDefaults.count ()) {
      f = gExtensionGetterTable_applicationDefinition_applicationWithDefaults (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_applicationDefinition_applicationWithDefaults.count ()) {
           f = gExtensionGetterTable_applicationDefinition_applicationWithDefaults (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_applicationDefinition_applicationWithDefaults.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_imp, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_applicationDefinition extensionGetter_applicationDefinition_applicationWithDefaults (const cPtr_applicationDefinition * inObject,
                                                                                                   const GALGAS_implementation & /* constinArgument_imp */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_applicationDefinition result_result ; // Returned variable
  const cPtr_applicationDefinition * object = inObject ;
  macroValidSharedObject (object, cPtr_applicationDefinition) ;
  const GALGAS_applicationDefinition temp_0 = object ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_applicationDefinition_applicationWithDefaults (void) {
  enterExtensionGetter_applicationWithDefaults (kTypeDescriptor_GALGAS_applicationDefinition.mSlotID,
                                                extensionGetter_applicationDefinition_applicationWithDefaults) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_applicationDefinition_applicationWithDefaults (void) {
  gExtensionGetterTable_applicationDefinition_applicationWithDefaults.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_applicationDefinition_applicationWithDefaults (defineExtensionGetter_applicationDefinition_applicationWithDefaults,
                                                                          freeExtensionGetter_applicationDefinition_applicationWithDefaults) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@implementationObject verifyApplication'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_implementationObject_verifyApplication> gExtensionMethodTable_implementationObject_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyApplication (const int32_t inClassIndex,
                                             extensionMethodSignature_implementationObject_verifyApplication inMethod) {
  gExtensionMethodTable_implementationObject_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyApplication (const cPtr_implementationObject * inObject,
                                            const GALGAS_objectKind constin_objectsOfKind,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_implementationObject) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_implementationObject_verifyApplication f = NULL ;
    if (classIndex < gExtensionMethodTable_implementationObject_verifyApplication.count ()) {
      f = gExtensionMethodTable_implementationObject_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_implementationObject_verifyApplication.count ()) {
           f = gExtensionMethodTable_implementationObject_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_implementationObject_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_objectsOfKind, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementationObject_verifyApplication (const cPtr_implementationObject * inObject,
                                                                    const GALGAS_objectKind constinArgument_objectsOfKind,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementationObject * object = inObject ;
  macroValidSharedObject (object, cPtr_implementationObject) ;
  cEnumerator_objectKindMap enumerator_1305 (constinArgument_objectsOfKind.getter_objects (SOURCE_FILE ("semantic_verification.galgas", 46)), kEnumeration_up) ;
  while (enumerator_1305.hasCurrentObject ()) {
    cEnumerator_implementationObjectMap enumerator_1334 (object->mAttribute_attributes, kEnumeration_up) ;
    while (enumerator_1334.hasCurrentObject ()) {
      callExtensionMethod_verifyApplication ((const cPtr_impType *) enumerator_1334.current_type (HERE).ptr (), enumerator_1305.current_attributes (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 48)) ;
      enumerator_1334.gotoNextObject () ;
    }
    enumerator_1305.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementationObject_verifyApplication (void) {
  enterExtensionMethod_verifyApplication (kTypeDescriptor_GALGAS_implementationObject.mSlotID,
                                          extensionMethod_implementationObject_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_implementationObject_verifyApplication (void) {
  gExtensionMethodTable_implementationObject_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementationObject_verifyApplication (defineExtensionMethod_implementationObject_verifyApplication,
                                                                   freeExtensionMethod_implementationObject_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension method '@impType verifyApplication'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyApplication> gExtensionMethodTable_impType_verifyApplication ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyApplication (const int32_t inClassIndex,
                                             extensionMethodSignature_impType_verifyApplication inMethod) {
  gExtensionMethodTable_impType_verifyApplication.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyApplication (const cPtr_impType * inObject,
                                            const GALGAS_objectAttributes constin_attrs,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyApplication f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyApplication.count ()) {
      f = gExtensionMethodTable_impType_verifyApplication (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyApplication.count ()) {
           f = gExtensionMethodTable_impType_verifyApplication (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyApplication.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attrs, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyApplication (const cPtr_impType * inObject,
                                                       const GALGAS_objectAttributes constinArgument_attrs,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impType * object = inObject ;
  macroValidSharedObject (object, cPtr_impType) ;
  cEnumerator_identifierMap enumerator_1580 (constinArgument_attrs.getter_objectParams (SOURCE_FILE ("semantic_verification.galgas", 56)), kEnumeration_up) ;
  while (enumerator_1580.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1580.current_lkey (HERE).getter_string (SOURCE_FILE ("semantic_verification.galgas", 57)).objectCompare (object->mAttribute_name.getter_string (SOURCE_FILE ("semantic_verification.galgas", 57)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_impType temp_1 = object ;
      callExtensionMethod_verifyMultipleType ((const cPtr_impType *) temp_1.ptr (), enumerator_1580.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 58)) ;
    }
    enumerator_1580.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyApplication (void) {
  enterExtensionMethod_verifyApplication (kTypeDescriptor_GALGAS_impType.mSlotID,
                                          extensionMethod_impType_verifyApplication) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyApplication (void) {
  gExtensionMethodTable_impType_verifyApplication.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyApplication (defineExtensionMethod_impType_verifyApplication,
                                                      freeExtensionMethod_impType_verifyApplication) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@impType verifyType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyType> gExtensionMethodTable_impType_verifyType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyType (const int32_t inClassIndex,
                                      extensionMethodSignature_impType_verifyType inMethod) {
  gExtensionMethodTable_impType_verifyType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyType (const cPtr_impType * inObject,
                                     const GALGAS_object_5F_t constin_attr,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyType f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyType.count ()) {
      f = gExtensionMethodTable_impType_verifyType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyType.count ()) {
           f = gExtensionMethodTable_impType_verifyType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attr, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyType (const cPtr_impType * /* inObject */,
                                                const GALGAS_object_5F_t constinArgument_attr,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (constinArgument_attr.getter_location (SOURCE_FILE ("semantic_verification.galgas", 66)), GALGAS_string ("Internal error, a generic type should not be instantiated"), fixItArray0  COMMA_SOURCE_FILE ("semantic_verification.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyType (void) {
  enterExtensionMethod_verifyType (kTypeDescriptor_GALGAS_impType.mSlotID,
                                   extensionMethod_impType_verifyType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyType (void) {
  gExtensionMethodTable_impType_verifyType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyType (defineExtensionMethod_impType_verifyType,
                                               freeExtensionMethod_impType_verifyType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@impType verifyMultipleType'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_impType_verifyMultipleType> gExtensionMethodTable_impType_verifyMultipleType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyMultipleType (const int32_t inClassIndex,
                                              extensionMethodSignature_impType_verifyMultipleType inMethod) {
  gExtensionMethodTable_impType_verifyMultipleType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyMultipleType (const cPtr_impType * inObject,
                                             const GALGAS_object_5F_t constin_attr,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_impType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_impType_verifyMultipleType f = NULL ;
    if (classIndex < gExtensionMethodTable_impType_verifyMultipleType.count ()) {
      f = gExtensionMethodTable_impType_verifyMultipleType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_impType_verifyMultipleType.count ()) {
           f = gExtensionMethodTable_impType_verifyMultipleType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_impType_verifyMultipleType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_attr, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_impType_verifyMultipleType (const cPtr_impType * inObject,
                                                        const GALGAS_object_5F_t constinArgument_attr,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_impType * object = inObject ;
  macroValidSharedObject (object, cPtr_impType) ;
  if (constinArgument_attr.isValid ()) {
    if (constinArgument_attr.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_multipleAttribute) {
      GALGAS_multipleAttribute cast_2080_ma ((cPtr_multipleAttribute *) constinArgument_attr.ptr ()) ;
      cEnumerator_identifierList enumerator_2108 (cast_2080_ma.getter_items (SOURCE_FILE ("semantic_verification.galgas", 74)), kEnumeration_up) ;
      while (enumerator_2108.hasCurrentObject ()) {
        const GALGAS_impType temp_0 = object ;
        callExtensionMethod_verifyType ((const cPtr_impType *) temp_0.ptr (), enumerator_2108.current_item (HERE), inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 75)) ;
        enumerator_2108.gotoNextObject () ;
      }
    }else{
      const GALGAS_impType temp_1 = object ;
      callExtensionMethod_verifyType ((const cPtr_impType *) temp_1.ptr (), constinArgument_attr, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 78)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_impType_verifyMultipleType (void) {
  enterExtensionMethod_verifyMultipleType (kTypeDescriptor_GALGAS_impType.mSlotID,
                                           extensionMethod_impType_verifyMultipleType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_impType_verifyMultipleType (void) {
  gExtensionMethodTable_impType_verifyMultipleType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_impType_verifyMultipleType (defineExtensionMethod_impType_verifyMultipleType,
                                                       freeExtensionMethod_impType_verifyMultipleType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@objectsMap verifyCrossReferences'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_verifyCrossReferences (const GALGAS_objectsMap inObject,
                                            const GALGAS_implementation constinArgument_imp,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_objectsMap temp_0 = inObject ;
  cEnumerator_objectsMap enumerator_18146 (temp_0, kEnumeration_up) ;
  while (enumerator_18146.hasCurrentObject ()) {
    GALGAS_implementationObject var_obj_18201 ;
    constinArgument_imp.getter_imp (SOURCE_FILE ("semantic_verification.galgas", 580)).method_get (enumerator_18146.current_lkey (HERE), var_obj_18201, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 580)) ;
    const GALGAS_objectsMap temp_1 = inObject ;
    callExtensionMethod_verifyCrossReferences ((const cPtr_objectKind *) enumerator_18146.current_objectsOfKind (HERE).ptr (), temp_1, var_obj_18201, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 581)) ;
    enumerator_18146.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@object_t verifyCrossReferences'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_object_5F_t_verifyCrossReferences> gExtensionMethodTable_object_5F_t_verifyCrossReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyCrossReferences (const int32_t inClassIndex,
                                                 extensionMethodSignature_object_5F_t_verifyCrossReferences inMethod) {
  gExtensionMethodTable_object_5F_t_verifyCrossReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyCrossReferences (const cPtr_object_5F_t * inObject,
                                                const GALGAS_objectsMap constin_allObjects,
                                                const GALGAS_impType constin_type,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_object_5F_t) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_object_5F_t_verifyCrossReferences f = NULL ;
    if (classIndex < gExtensionMethodTable_object_5F_t_verifyCrossReferences.count ()) {
      f = gExtensionMethodTable_object_5F_t_verifyCrossReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_object_5F_t_verifyCrossReferences.count ()) {
           f = gExtensionMethodTable_object_5F_t_verifyCrossReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_object_5F_t_verifyCrossReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_allObjects, constin_type, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_object_5F_t_verifyCrossReferences (const cPtr_object_5F_t * /* inObject */,
                                                               const GALGAS_objectsMap /* constinArgument_allObjects */,
                                                               const GALGAS_impType /* constinArgument_type */,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_object_5F_t_verifyCrossReferences (void) {
  enterExtensionMethod_verifyCrossReferences (kTypeDescriptor_GALGAS_object_5F_t.mSlotID,
                                              extensionMethod_object_5F_t_verifyCrossReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_object_5F_t_verifyCrossReferences (void) {
  gExtensionMethodTable_object_5F_t_verifyCrossReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_object_5F_t_verifyCrossReferences (defineExtensionMethod_object_5F_t_verifyCrossReferences,
                                                              freeExtensionMethod_object_5F_t_verifyCrossReferences) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@applicationDefinition verifyCrossReferences'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_applicationDefinition_verifyCrossReferences> gExtensionMethodTable_applicationDefinition_verifyCrossReferences ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_verifyCrossReferences (const int32_t inClassIndex,
                                                 extensionMethodSignature_applicationDefinition_verifyCrossReferences inMethod) {
  gExtensionMethodTable_applicationDefinition_verifyCrossReferences.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_verifyCrossReferences (const cPtr_applicationDefinition * inObject,
                                                const GALGAS_implementation constin_imp,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_applicationDefinition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_applicationDefinition_verifyCrossReferences f = NULL ;
    if (classIndex < gExtensionMethodTable_applicationDefinition_verifyCrossReferences.count ()) {
      f = gExtensionMethodTable_applicationDefinition_verifyCrossReferences (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_applicationDefinition_verifyCrossReferences.count ()) {
           f = gExtensionMethodTable_applicationDefinition_verifyCrossReferences (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_applicationDefinition_verifyCrossReferences.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_imp, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_applicationDefinition_verifyCrossReferences (const cPtr_applicationDefinition * inObject,
                                                                         const GALGAS_implementation constinArgument_imp,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_applicationDefinition * object = inObject ;
  macroValidSharedObject (object, cPtr_applicationDefinition) ;
  extensionMethod_verifyCrossReferences (object->mAttribute_objects, constinArgument_imp, inCompiler COMMA_SOURCE_FILE ("semantic_verification.galgas", 667)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_applicationDefinition_verifyCrossReferences (void) {
  enterExtensionMethod_verifyCrossReferences (kTypeDescriptor_GALGAS_applicationDefinition.mSlotID,
                                              extensionMethod_applicationDefinition_verifyCrossReferences) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_applicationDefinition_verifyCrossReferences (void) {
  gExtensionMethodTable_applicationDefinition_verifyCrossReferences.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_applicationDefinition_verifyCrossReferences (defineExtensionMethod_applicationDefinition_verifyCrossReferences,
                                                                        freeExtensionMethod_applicationDefinition_verifyCrossReferences) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::GALGAS_gtlDataList_2D_element (void) :
mAttribute_data () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::~ GALGAS_gtlDataList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::GALGAS_gtlDataList_2D_element (const GALGAS_gtlData & inOperand0) :
mAttribute_data (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element GALGAS_gtlDataList_2D_element::constructor_new (const GALGAS_gtlData & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlDataList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlDataList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlDataList_2D_element::objectCompare (const GALGAS_gtlDataList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_data.objectCompare (inOperand.mAttribute_data) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlDataList_2D_element::isValid (void) const {
  return mAttribute_data.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlDataList_2D_element::drop (void) {
  mAttribute_data.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlDataList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @gtlDataList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_data.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlDataList_2D_element::getter_data (UNUSED_LOCATION_ARGS) const {
  return mAttribute_data ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlDataList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDataList_2D_element ("gtlDataList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlDataList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDataList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlDataList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDataList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element GALGAS_gtlDataList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlDataList_2D_element result ;
  const GALGAS_gtlDataList_2D_element * p = (const GALGAS_gtlDataList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDataList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDataList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::GALGAS_gtlVarMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::~ GALGAS_gtlVarMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::GALGAS_gtlVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_gtlData & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element GALGAS_gtlVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_gtlData & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlVarMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlVarMap_2D_element::objectCompare (const GALGAS_gtlVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlVarMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @gtlVarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlVarMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlVarMap_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlVarMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlVarMap_2D_element ("gtlVarMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlVarMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlVarMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element GALGAS_gtlVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlVarMap_2D_element result ;
  const GALGAS_gtlVarMap_2D_element * p = (const GALGAS_gtlVarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element::GALGAS_gtlExpressionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element::~ GALGAS_gtlExpressionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element::GALGAS_gtlExpressionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_gtlExpression & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_expression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element GALGAS_gtlExpressionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_gtlExpression & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlExpressionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlExpressionMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlExpressionMap_2D_element::objectCompare (const GALGAS_gtlExpressionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_expression.objectCompare (inOperand.mAttribute_expression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlExpressionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_expression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlExpressionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_expression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlExpressionMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @gtlExpressionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_expression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlExpressionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlExpressionMap_2D_element::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_expression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlExpressionMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpressionMap_2D_element ("gtlExpressionMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExpressionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpressionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExpressionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpressionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element GALGAS_gtlExpressionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpressionMap_2D_element result ;
  const GALGAS_gtlExpressionMap_2D_element * p = (const GALGAS_gtlExpressionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExpressionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExpressionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element::GALGAS_gtlTemplateMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_aTemplate () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element::~ GALGAS_gtlTemplateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element::GALGAS_gtlTemplateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_gtlTemplate & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_aTemplate (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element GALGAS_gtlTemplateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlTemplateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_gtlTemplate::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element GALGAS_gtlTemplateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_gtlTemplate & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTemplateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlTemplateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlTemplateMap_2D_element::objectCompare (const GALGAS_gtlTemplateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_aTemplate.objectCompare (inOperand.mAttribute_aTemplate) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlTemplateMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_aTemplate.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlTemplateMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_aTemplate.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlTemplateMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @gtlTemplateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_aTemplate.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlTemplateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplate GALGAS_gtlTemplateMap_2D_element::getter_aTemplate (UNUSED_LOCATION_ARGS) const {
  return mAttribute_aTemplate ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlTemplateMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTemplateMap_2D_element ("gtlTemplateMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlTemplateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTemplateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlTemplateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTemplateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element GALGAS_gtlTemplateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlTemplateMap_2D_element result ;
  const GALGAS_gtlTemplateMap_2D_element * p = (const GALGAS_gtlTemplateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlTemplateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTemplateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element::GALGAS_gtlExpressionList_2D_element (void) :
mAttribute_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element::~ GALGAS_gtlExpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element::GALGAS_gtlExpressionList_2D_element (const GALGAS_gtlExpression & inOperand0) :
mAttribute_expression (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element GALGAS_gtlExpressionList_2D_element::constructor_new (const GALGAS_gtlExpression & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlExpressionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlExpressionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlExpressionList_2D_element::objectCompare (const GALGAS_gtlExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_expression.objectCompare (inOperand.mAttribute_expression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlExpressionList_2D_element::isValid (void) const {
  return mAttribute_expression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlExpressionList_2D_element::drop (void) {
  mAttribute_expression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlExpressionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @gtlExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_expression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlExpressionList_2D_element::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_expression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlExpressionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpressionList_2D_element ("gtlExpressionList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element GALGAS_gtlExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpressionList_2D_element result ;
  const GALGAS_gtlExpressionList_2D_element * p = (const GALGAS_gtlExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element::GALGAS_list_2D_element (void) :
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element::~ GALGAS_list_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element::GALGAS_list_2D_element (const GALGAS_gtlData & inOperand0) :
mAttribute_value (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element GALGAS_list_2D_element::constructor_new (const GALGAS_gtlData & inOperand0 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_list_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_list_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_list_2D_element::objectCompare (const GALGAS_list_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_list_2D_element::isValid (void) const {
  return mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_list_2D_element::drop (void) {
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_list_2D_element::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @list-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_list_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @list-element type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_list_2D_element ("list-element",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_list_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_list_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_list_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_list_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element GALGAS_list_2D_element::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_list_2D_element result ;
  const GALGAS_list_2D_element * p = (const GALGAS_list_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_list_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("list-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element::GALGAS_gtlArgumentList_2D_element (void) :
mAttribute_typed (),
mAttribute_type (),
mAttribute_name () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element::~ GALGAS_gtlArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element::GALGAS_gtlArgumentList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_type & inOperand1,
                                                                      const GALGAS_lstring & inOperand2) :
mAttribute_typed (inOperand0),
mAttribute_type (inOperand1),
mAttribute_name (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element GALGAS_gtlArgumentList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_type & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_gtlArgumentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlArgumentList_2D_element::objectCompare (const GALGAS_gtlArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_typed.objectCompare (inOperand.mAttribute_typed) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_type.objectCompare (inOperand.mAttribute_type) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_name.objectCompare (inOperand.mAttribute_name) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlArgumentList_2D_element::isValid (void) const {
  return mAttribute_typed.isValid () && mAttribute_type.isValid () && mAttribute_name.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlArgumentList_2D_element::drop (void) {
  mAttribute_typed.drop () ;
  mAttribute_type.drop () ;
  mAttribute_name.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlArgumentList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @gtlArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_typed.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_name.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_gtlArgumentList_2D_element::getter_typed (UNUSED_LOCATION_ARGS) const {
  return mAttribute_typed ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_gtlArgumentList_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlArgumentList_2D_element::getter_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlArgumentList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlArgumentList_2D_element ("gtlArgumentList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element GALGAS_gtlArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlArgumentList_2D_element result ;
  const GALGAS_gtlArgumentList_2D_element * p = (const GALGAS_gtlArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element::GALGAS_gtlProcMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_procedure () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element::~ GALGAS_gtlProcMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element::GALGAS_gtlProcMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_gtlProcedure & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_procedure (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element GALGAS_gtlProcMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlProcMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_gtlProcedure::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element GALGAS_gtlProcMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_gtlProcedure & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlProcMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlProcMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlProcMap_2D_element::objectCompare (const GALGAS_gtlProcMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_procedure.objectCompare (inOperand.mAttribute_procedure) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlProcMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_procedure.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlProcMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_procedure.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlProcMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @gtlProcMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_procedure.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlProcMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcedure GALGAS_gtlProcMap_2D_element::getter_procedure (UNUSED_LOCATION_ARGS) const {
  return mAttribute_procedure ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlProcMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlProcMap_2D_element ("gtlProcMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlProcMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlProcMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlProcMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlProcMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element GALGAS_gtlProcMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlProcMap_2D_element result ;
  const GALGAS_gtlProcMap_2D_element * p = (const GALGAS_gtlProcMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlProcMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlProcMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element::GALGAS_gtlFuncMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_function () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element::~ GALGAS_gtlFuncMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element::GALGAS_gtlFuncMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_gtlFunction & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_function (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element GALGAS_gtlFuncMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlFuncMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_gtlFunction::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element GALGAS_gtlFuncMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_gtlFunction & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlFuncMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlFuncMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlFuncMap_2D_element::objectCompare (const GALGAS_gtlFuncMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_function.objectCompare (inOperand.mAttribute_function) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlFuncMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_function.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlFuncMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_function.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlFuncMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @gtlFuncMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_function.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlFuncMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction GALGAS_gtlFuncMap_2D_element::getter_function (UNUSED_LOCATION_ARGS) const {
  return mAttribute_function ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlFuncMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlFuncMap_2D_element ("gtlFuncMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlFuncMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFuncMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlFuncMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlFuncMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element GALGAS_gtlFuncMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlFuncMap_2D_element result ;
  const GALGAS_gtlFuncMap_2D_element * p = (const GALGAS_gtlFuncMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlFuncMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlFuncMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element::GALGAS_gtlGetterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_theGetter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element::~ GALGAS_gtlGetterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element::GALGAS_gtlGetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_gtlGetter & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_theGetter (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element GALGAS_gtlGetterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_gtlGetter & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlGetterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlGetterMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlGetterMap_2D_element::objectCompare (const GALGAS_gtlGetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_theGetter.objectCompare (inOperand.mAttribute_theGetter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlGetterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_theGetter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlGetterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_theGetter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlGetterMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @gtlGetterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_theGetter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlGetterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetter GALGAS_gtlGetterMap_2D_element::getter_theGetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_theGetter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlGetterMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlGetterMap_2D_element ("gtlGetterMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlGetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGetterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlGetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlGetterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element GALGAS_gtlGetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetterMap_2D_element result ;
  const GALGAS_gtlGetterMap_2D_element * p = (const GALGAS_gtlGetterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlGetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlGetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element::GALGAS_gtlSetterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_theSetter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element::~ GALGAS_gtlSetterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element::GALGAS_gtlSetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_gtlSetter & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_theSetter (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element GALGAS_gtlSetterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_gtlSetter & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlSetterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlSetterMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlSetterMap_2D_element::objectCompare (const GALGAS_gtlSetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_theSetter.objectCompare (inOperand.mAttribute_theSetter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlSetterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_theSetter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlSetterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_theSetter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlSetterMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @gtlSetterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_theSetter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlSetterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetter GALGAS_gtlSetterMap_2D_element::getter_theSetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_theSetter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlSetterMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSetterMap_2D_element ("gtlSetterMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlSetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSetterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlSetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSetterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element GALGAS_gtlSetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetterMap_2D_element result ;
  const GALGAS_gtlSetterMap_2D_element * p = (const GALGAS_gtlSetterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlSetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlSetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element::GALGAS_gtlThenElsifStatementList_2D_element (void) :
mAttribute_condition (),
mAttribute_instructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element::~ GALGAS_gtlThenElsifStatementList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element::GALGAS_gtlThenElsifStatementList_2D_element (const GALGAS_gtlExpression & inOperand0,
                                                                                          const GALGAS_gtlInstructionList & inOperand1) :
mAttribute_condition (inOperand0),
mAttribute_instructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element GALGAS_gtlThenElsifStatementList_2D_element::constructor_new (const GALGAS_gtlExpression & inOperand0,
                                                                                                          const GALGAS_gtlInstructionList & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlThenElsifStatementList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlThenElsifStatementList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlThenElsifStatementList_2D_element::objectCompare (const GALGAS_gtlThenElsifStatementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_condition.objectCompare (inOperand.mAttribute_condition) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_instructionList.objectCompare (inOperand.mAttribute_instructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlThenElsifStatementList_2D_element::isValid (void) const {
  return mAttribute_condition.isValid () && mAttribute_instructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlThenElsifStatementList_2D_element::drop (void) {
  mAttribute_condition.drop () ;
  mAttribute_instructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlThenElsifStatementList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @gtlThenElsifStatementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_condition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_instructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlThenElsifStatementList_2D_element::getter_condition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_condition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlThenElsifStatementList_2D_element::getter_instructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_instructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @gtlThenElsifStatementList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlThenElsifStatementList_2D_element ("gtlThenElsifStatementList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlThenElsifStatementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlThenElsifStatementList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlThenElsifStatementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlThenElsifStatementList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element GALGAS_gtlThenElsifStatementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlThenElsifStatementList_2D_element result ;
  const GALGAS_gtlThenElsifStatementList_2D_element * p = (const GALGAS_gtlThenElsifStatementList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlThenElsifStatementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlThenElsifStatementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::GALGAS_sortingKeyList_2D_element (void) :
mAttribute_key (),
mAttribute_order () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::~ GALGAS_sortingKeyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::GALGAS_sortingKeyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lsint & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_order (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortingKeyList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lsint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lsint & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortingKeyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortingKeyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortingKeyList_2D_element::objectCompare (const GALGAS_sortingKeyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_order.objectCompare (inOperand.mAttribute_order) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sortingKeyList_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_order.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortingKeyList_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_order.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortingKeyList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @sortingKeyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_order.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sortingKeyList_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_sortingKeyList_2D_element::getter_order (UNUSED_LOCATION_ARGS) const {
  return mAttribute_order ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @sortingKeyList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortingKeyList_2D_element ("sortingKeyList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortingKeyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortingKeyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortingKeyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortingKeyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sortingKeyList_2D_element result ;
  const GALGAS_sortingKeyList_2D_element * p = (const GALGAS_sortingKeyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortingKeyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortingKeyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element::GALGAS_numberList_2D_element (void) :
mAttribute_location (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element::~ GALGAS_numberList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element::GALGAS_numberList_2D_element (const GALGAS_location & inOperand0,
                                                            const GALGAS_object_5F_t & inOperand1) :
mAttribute_location (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element GALGAS_numberList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                            const GALGAS_object_5F_t & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_numberList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_numberList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_numberList_2D_element::objectCompare (const GALGAS_numberList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_numberList_2D_element::isValid (void) const {
  return mAttribute_location.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_numberList_2D_element::drop (void) {
  mAttribute_location.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_numberList_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @numberList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_location.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_numberList_2D_element::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_numberList_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @numberList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_numberList_2D_element ("numberList-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_numberList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_numberList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_numberList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_numberList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_numberList_2D_element GALGAS_numberList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_numberList_2D_element result ;
  const GALGAS_numberList_2D_element * p = (const GALGAS_numberList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_numberList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("numberList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element::GALGAS_implementationObjectMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_type () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element::~ GALGAS_implementationObjectMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element::GALGAS_implementationObjectMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_impType & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_type (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element GALGAS_implementationObjectMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_impType & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationObjectMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_implementationObjectMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_implementationObjectMap_2D_element::objectCompare (const GALGAS_implementationObjectMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_type.objectCompare (inOperand.mAttribute_type) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_implementationObjectMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_type.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationObjectMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_type.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationObjectMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @implementationObjectMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_type.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_implementationObjectMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impType GALGAS_implementationObjectMap_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @implementationObjectMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementationObjectMap_2D_element ("implementationObjectMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_implementationObjectMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationObjectMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_implementationObjectMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementationObjectMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap_2D_element GALGAS_implementationObjectMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_implementationObjectMap_2D_element result ;
  const GALGAS_implementationObjectMap_2D_element * p = (const GALGAS_implementationObjectMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementationObjectMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementationObjectMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element::GALGAS_enumValues_2D_element (void) :
mAttribute_lkey (),
mAttribute_subAttributes () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element::~ GALGAS_enumValues_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element::GALGAS_enumValues_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_implementationObjectMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_subAttributes (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element GALGAS_enumValues_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumValues_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_implementationObjectMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element GALGAS_enumValues_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_implementationObjectMap & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumValues_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumValues_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumValues_2D_element::objectCompare (const GALGAS_enumValues_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_subAttributes.objectCompare (inOperand.mAttribute_subAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumValues_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_subAttributes.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumValues_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_subAttributes.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumValues_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @enumValues-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_subAttributes.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumValues_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObjectMap GALGAS_enumValues_2D_element::getter_subAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_subAttributes ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @enumValues-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumValues_2D_element ("enumValues-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumValues_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumValues_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumValues_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumValues_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumValues_2D_element GALGAS_enumValues_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumValues_2D_element result ;
  const GALGAS_enumValues_2D_element * p = (const GALGAS_enumValues_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumValues_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumValues-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element::GALGAS_implementationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_obj () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element::~ GALGAS_implementationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element::GALGAS_implementationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_implementationObject & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_obj (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element GALGAS_implementationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_implementationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_implementationObject::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element GALGAS_implementationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_implementationObject & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implementationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_implementationMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_implementationMap_2D_element::objectCompare (const GALGAS_implementationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_obj.objectCompare (inOperand.mAttribute_obj) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_implementationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_obj.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_obj.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_implementationMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @implementationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_obj.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_implementationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationObject GALGAS_implementationMap_2D_element::getter_obj (UNUSED_LOCATION_ARGS) const {
  return mAttribute_obj ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @implementationMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementationMap_2D_element ("implementationMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_implementationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_implementationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_implementationMap_2D_element GALGAS_implementationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implementationMap_2D_element result ;
  const GALGAS_implementationMap_2D_element * p = (const GALGAS_implementationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element::GALGAS_identifierMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element::~ GALGAS_identifierMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element::GALGAS_identifierMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_object_5F_t & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element GALGAS_identifierMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_object_5F_t & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_identifierMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_identifierMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_identifierMap_2D_element::objectCompare (const GALGAS_identifierMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_identifierMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_identifierMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_identifierMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @identifierMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_identifierMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_identifierMap_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @identifierMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierMap_2D_element ("identifierMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_identifierMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_identifierMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierMap_2D_element GALGAS_identifierMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_identifierMap_2D_element result ;
  const GALGAS_identifierMap_2D_element * p = (const GALGAS_identifierMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_identifierMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element::GALGAS_identifierList_2D_element (void) :
mAttribute_item () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element::~ GALGAS_identifierList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element::GALGAS_identifierList_2D_element (const GALGAS_object_5F_t & inOperand0) :
mAttribute_item (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element GALGAS_identifierList_2D_element::constructor_new (const GALGAS_object_5F_t & inOperand0 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_identifierList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_identifierList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_identifierList_2D_element::objectCompare (const GALGAS_identifierList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_item.objectCompare (inOperand.mAttribute_item) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_identifierList_2D_element::isValid (void) const {
  return mAttribute_item.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_identifierList_2D_element::drop (void) {
  mAttribute_item.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_identifierList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @identifierList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_item.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object_5F_t GALGAS_identifierList_2D_element::getter_item (UNUSED_LOCATION_ARGS) const {
  return mAttribute_item ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @identifierList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierList_2D_element ("identifierList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_identifierList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_identifierList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierList_2D_element GALGAS_identifierList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_identifierList_2D_element result ;
  const GALGAS_identifierList_2D_element * p = (const GALGAS_identifierList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_identifierList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element::GALGAS_stringMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element::~ GALGAS_stringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element::GALGAS_stringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element GALGAS_stringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_stringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element GALGAS_stringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_string & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_stringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_stringMap_2D_element::objectCompare (const GALGAS_stringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_stringMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @stringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_stringMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_stringMap_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @stringMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringMap_2D_element ("stringMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringMap_2D_element GALGAS_stringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_stringMap_2D_element result ;
  const GALGAS_stringMap_2D_element * p = (const GALGAS_stringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element::GALGAS_lstringMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element::~ GALGAS_lstringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element::GALGAS_lstringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element GALGAS_lstringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lstringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element GALGAS_lstringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lstringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lstringMap_2D_element::objectCompare (const GALGAS_lstringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lstringMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @lstringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstringMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstringMap_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lstringMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstringMap_2D_element ("lstringMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lstringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lstringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringMap_2D_element GALGAS_lstringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lstringMap_2D_element result ;
  const GALGAS_lstringMap_2D_element * p = (const GALGAS_lstringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element::GALGAS_prefix_5F_map_2D_element (void) :
mAttribute_lkey (),
mAttribute_prefix (),
mAttribute_tag_5F_to_5F_rep () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element::~ GALGAS_prefix_5F_map_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element::GALGAS_prefix_5F_map_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_prefix (inOperand1),
mAttribute_tag_5F_to_5F_rep (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element GALGAS_prefix_5F_map_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefix_5F_map_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element GALGAS_prefix_5F_map_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefix_5F_map_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_prefix_5F_map_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefix_5F_map_2D_element::objectCompare (const GALGAS_prefix_5F_map_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_prefix.objectCompare (inOperand.mAttribute_prefix) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_tag_5F_to_5F_rep.objectCompare (inOperand.mAttribute_tag_5F_to_5F_rep) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefix_5F_map_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_prefix.isValid () && mAttribute_tag_5F_to_5F_rep.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefix_5F_map_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_prefix.drop () ;
  mAttribute_tag_5F_to_5F_rep.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefix_5F_map_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @prefix_map-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_prefix.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_tag_5F_to_5F_rep.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefix_5F_map_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_prefix_5F_map_2D_element::getter_prefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_prefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_prefix_5F_map_2D_element::getter_tag_5F_to_5F_rep (UNUSED_LOCATION_ARGS) const {
  return mAttribute_tag_5F_to_5F_rep ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @prefix_map-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefix_5F_map_2D_element ("prefix_map-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefix_5F_map_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefix_5F_map_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefix_5F_map_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefix_5F_map_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefix_5F_map_2D_element GALGAS_prefix_5F_map_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_prefix_5F_map_2D_element result ;
  const GALGAS_prefix_5F_map_2D_element * p = (const GALGAS_prefix_5F_map_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefix_5F_map_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefix_map-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element::GALGAS_stringset_5F_map_2D_element (void) :
mAttribute_lkey (),
mAttribute_ids () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element::~ GALGAS_stringset_5F_map_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element::GALGAS_stringset_5F_map_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_stringset & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_ids (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element GALGAS_stringset_5F_map_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_stringset_5F_map_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element GALGAS_stringset_5F_map_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_stringset & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset_5F_map_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_stringset_5F_map_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_stringset_5F_map_2D_element::objectCompare (const GALGAS_stringset_5F_map_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_ids.objectCompare (inOperand.mAttribute_ids) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_stringset_5F_map_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_ids.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringset_5F_map_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_ids.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringset_5F_map_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @stringset_map-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_ids.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_stringset_5F_map_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_stringset_5F_map_2D_element::getter_ids (UNUSED_LOCATION_ARGS) const {
  return mAttribute_ids ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @stringset_map-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringset_5F_map_2D_element ("stringset_map-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringset_5F_map_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringset_5F_map_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringset_5F_map_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringset_5F_map_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset_5F_map_2D_element GALGAS_stringset_5F_map_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_stringset_5F_map_2D_element result ;
  const GALGAS_stringset_5F_map_2D_element * p = (const GALGAS_stringset_5F_map_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringset_5F_map_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringset_map-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element::GALGAS_ident_5F_list_2D_element (void) :
mAttribute_obj_5F_name () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element::~ GALGAS_ident_5F_list_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element::GALGAS_ident_5F_list_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_obj_5F_name (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element GALGAS_ident_5F_list_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ident_5F_list_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element GALGAS_ident_5F_list_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ident_5F_list_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ident_5F_list_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ident_5F_list_2D_element::objectCompare (const GALGAS_ident_5F_list_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_obj_5F_name.objectCompare (inOperand.mAttribute_obj_5F_name) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ident_5F_list_2D_element::isValid (void) const {
  return mAttribute_obj_5F_name.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ident_5F_list_2D_element::drop (void) {
  mAttribute_obj_5F_name.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ident_5F_list_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @ident_list-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_obj_5F_name.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ident_5F_list_2D_element::getter_obj_5F_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_obj_5F_name ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @ident_list-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ident_5F_list_2D_element ("ident_list-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ident_5F_list_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ident_5F_list_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ident_5F_list_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ident_5F_list_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_2D_element GALGAS_ident_5F_list_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ident_5F_list_2D_element result ;
  const GALGAS_ident_5F_list_2D_element * p = (const GALGAS_ident_5F_list_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ident_5F_list_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ident_list-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element::GALGAS_ident_5F_list_5F_map_2D_element (void) :
mAttribute_lkey (),
mAttribute_objs () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element::~ GALGAS_ident_5F_list_5F_map_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element::GALGAS_ident_5F_list_5F_map_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_ident_5F_list & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_objs (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element GALGAS_ident_5F_list_5F_map_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ident_5F_list_5F_map_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_ident_5F_list::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element GALGAS_ident_5F_list_5F_map_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_ident_5F_list & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ident_5F_list_5F_map_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ident_5F_list_5F_map_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ident_5F_list_5F_map_2D_element::objectCompare (const GALGAS_ident_5F_list_5F_map_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_objs.objectCompare (inOperand.mAttribute_objs) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ident_5F_list_5F_map_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_objs.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ident_5F_list_5F_map_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_objs.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ident_5F_list_5F_map_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @ident_list_map-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_objs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ident_5F_list_5F_map_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list GALGAS_ident_5F_list_5F_map_2D_element::getter_objs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objs ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @ident_list_map-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ident_5F_list_5F_map_2D_element ("ident_list_map-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ident_5F_list_5F_map_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ident_5F_list_5F_map_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ident_5F_list_5F_map_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ident_5F_list_5F_map_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ident_5F_list_5F_map_2D_element GALGAS_ident_5F_list_5F_map_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ident_5F_list_5F_map_2D_element result ;
  const GALGAS_ident_5F_list_5F_map_2D_element * p = (const GALGAS_ident_5F_list_5F_map_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ident_5F_list_5F_map_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ident_list_map-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element::GALGAS_objectKindMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_attributes () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element::~ GALGAS_objectKindMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element::GALGAS_objectKindMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_objectAttributes & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_attributes (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element GALGAS_objectKindMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_objectKindMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_objectAttributes::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element GALGAS_objectKindMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_objectAttributes & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectKindMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_objectKindMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectKindMap_2D_element::objectCompare (const GALGAS_objectKindMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_attributes.objectCompare (inOperand.mAttribute_attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_objectKindMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_attributes.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectKindMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_attributes.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectKindMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @objectKindMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_attributes.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_objectKindMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectAttributes GALGAS_objectKindMap_2D_element::getter_attributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_attributes ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @objectKindMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectKindMap_2D_element ("objectKindMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectKindMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectKindMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectKindMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectKindMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKindMap_2D_element GALGAS_objectKindMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectKindMap_2D_element result ;
  const GALGAS_objectKindMap_2D_element * p = (const GALGAS_objectKindMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectKindMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectKindMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element::GALGAS_objectsMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_objectsOfKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element::~ GALGAS_objectsMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element::GALGAS_objectsMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_objectKind & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_objectsOfKind (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element GALGAS_objectsMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_objectsMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_objectKind::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element GALGAS_objectsMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_objectKind & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectsMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_objectsMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectsMap_2D_element::objectCompare (const GALGAS_objectsMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_objectsOfKind.objectCompare (inOperand.mAttribute_objectsOfKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_objectsMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_objectsOfKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectsMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_objectsOfKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectsMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @objectsMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_objectsOfKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_objectsMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectKind GALGAS_objectsMap_2D_element::getter_objectsOfKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_objectsOfKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @objectsMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectsMap_2D_element ("objectsMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectsMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectsMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectsMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectsMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectsMap_2D_element GALGAS_objectsMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectsMap_2D_element result ;
  const GALGAS_objectsMap_2D_element * p = (const GALGAS_objectsMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectsMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectsMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlContext addModulePath'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlContext_addModulePath> gExtensionModifierTable_gtlContext_addModulePath ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_addModulePath (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_addModulePath inModifier) {
  gExtensionModifierTable_gtlContext_addModulePath.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_addModulePath (cPtr_gtlContext * inObject,
                                        const GALGAS_string constin_rootPath,
                                        const GALGAS_string constin_modulePath,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_addModulePath f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_addModulePath.count ()) {
      f = gExtensionModifierTable_gtlContext_addModulePath (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_addModulePath.count ()) {
           f = gExtensionModifierTable_gtlContext_addModulePath (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_addModulePath.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_rootPath, constin_modulePath, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlContext_addModulePath (cPtr_gtlContext * inObject,
                                                      const GALGAS_string constinArgument_rootPath,
                                                      const GALGAS_string constinArgument_modulePath,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  GALGAS_string var_normalizedModulePath_1508 = constinArgument_modulePath.getter_absolutePathFromPath (constinArgument_rootPath COMMA_SOURCE_FILE ("gtl_types.galgas", 59)).getter_stringByStandardizingPath (SOURCE_FILE ("gtl_types.galgas", 59)) ;
  object->mAttribute_importPath.addAssign_operation (var_normalizedModulePath_1508  COMMA_SOURCE_FILE ("gtl_types.galgas", 60)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlContext_addModulePath (void) {
  enterExtensionSetter_addModulePath (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                      extensionSetter_gtlContext_addModulePath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlContext_addModulePath (void) {
  gExtensionModifierTable_gtlContext_addModulePath.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlContext_addModulePath (defineExtensionSetter_gtlContext_addModulePath,
                                                     freeExtensionModifier_gtlContext_addModulePath) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension setter '@gtlContext addInputVariable'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlContext_addInputVariable> gExtensionModifierTable_gtlContext_addInputVariable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_addInputVariable (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_addInputVariable inModifier) {
  gExtensionModifierTable_gtlContext_addInputVariable.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_addInputVariable (cPtr_gtlContext * inObject,
                                           GALGAS_gtlData in_inputVariable,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_addInputVariable f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_addInputVariable.count ()) {
      f = gExtensionModifierTable_gtlContext_addInputVariable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_addInputVariable.count ()) {
           f = gExtensionModifierTable_gtlContext_addInputVariable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_addInputVariable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_inputVariable, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlContext_addInputVariable (cPtr_gtlContext * inObject,
                                                         GALGAS_gtlData inArgument_inputVariable,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  object->mAttribute_inputVars.addAssign_operation (inArgument_inputVariable  COMMA_SOURCE_FILE ("gtl_types.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlContext_addInputVariable (void) {
  enterExtensionSetter_addInputVariable (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_addInputVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlContext_addInputVariable (void) {
  gExtensionModifierTable_gtlContext_addInputVariable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlContext_addInputVariable (defineExtensionSetter_gtlContext_addInputVariable,
                                                        freeExtensionModifier_gtlContext_addInputVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension setter '@gtlContext popFirstInputArg'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlContext_popFirstInputArg> gExtensionModifierTable_gtlContext_popFirstInputArg ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_popFirstInputArg (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_popFirstInputArg inModifier) {
  gExtensionModifierTable_gtlContext_popFirstInputArg.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_popFirstInputArg (cPtr_gtlContext * inObject,
                                           GALGAS_location in_where,
                                           GALGAS_gtlData & out_result,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_result.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_popFirstInputArg f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_popFirstInputArg.count ()) {
      f = gExtensionModifierTable_gtlContext_popFirstInputArg (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_popFirstInputArg.count ()) {
           f = gExtensionModifierTable_gtlContext_popFirstInputArg (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_popFirstInputArg.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_where, out_result, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlContext_popFirstInputArg (cPtr_gtlContext * inObject,
                                                         GALGAS_location inArgument_where,
                                                         GALGAS_gtlData & outArgument_result,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_inputVars.getter_length (SOURCE_FILE ("gtl_types.galgas", 73)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    object->mAttribute_inputVars.setter_popFirst (outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 74)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (inArgument_where, GALGAS_string ("No input argument available"), fixItArray1  COMMA_SOURCE_FILE ("gtl_types.galgas", 76)) ;
    outArgument_result.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlContext_popFirstInputArg (void) {
  enterExtensionSetter_popFirstInputArg (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_popFirstInputArg) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlContext_popFirstInputArg (void) {
  gExtensionModifierTable_gtlContext_popFirstInputArg.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlContext_popFirstInputArg (defineExtensionSetter_gtlContext_popFirstInputArg,
                                                        freeExtensionModifier_gtlContext_popFirstInputArg) ;

