const char *__fastcall sub_73570(__int64 a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      result = "SymTagNull";
      break;
    case 1LL:
      result = "SymTagExe";
      break;
    case 2LL:
      result = "SymTagCompiland";
      break;
    case 3LL:
      result = "SymTagCompilandDetails";
      break;
    case 4LL:
      result = "SymTagCompilandEnv";
      break;
    case 5LL:
      result = "SymTagFunction";
      break;
    case 6LL:
      result = "SymTagBlock";
      break;
    case 7LL:
      result = "SymTagData";
      break;
    case 8LL:
      result = "SymTagAnnotation";
      break;
    case 9LL:
      result = "SymTagLabel";
      break;
    case 10LL:
      result = "SymTagPublicSymbol";
      break;
    case 11LL:
      result = "SymTagUDT";
      break;
    case 12LL:
      result = "SymTagEnum";
      break;
    case 13LL:
      result = "SymTagFunctionType";
      break;
    case 14LL:
      result = "SymTagPointerType";
      break;
    case 15LL:
      result = "SymTagArrayType";
      break;
    case 16LL:
      result = "SymTagBaseType";
      break;
    case 17LL:
      result = "SymTagTypedef";
      break;
    case 18LL:
      result = "SymTagBaseClass";
      break;
    case 19LL:
      result = "SymTagFriend";
      break;
    case 20LL:
      result = "SymTagFunctionArgType";
      break;
    case 21LL:
      result = "SymTagFuncDebugStart";
      break;
    case 22LL:
      result = "SymTagFuncDebugEnd";
      break;
    case 23LL:
      result = "SymTagUsingNamespace";
      break;
    case 24LL:
      result = "SymTagVTableShape";
      break;
    case 25LL:
      result = "SymTagVTable";
      break;
    case 26LL:
      result = "SymTagCustom";
      break;
    case 27LL:
      result = "SymTagThunk";
      break;
    case 28LL:
      result = "SymTagCustomType";
      break;
    case 29LL:
      result = "SymTagManagedType";
      break;
    case 30LL:
      result = "SymTagDimension";
      break;
    case 31LL:
      result = "SymTagCallSite";
      break;
    case 32LL:
      result = "SymTagInlineSite";
      break;
    case 33LL:
      result = "SymTagBaseInterface";
      break;
    case 34LL:
      result = "SymTagVectorType";
      break;
    case 35LL:
      result = "SymTagMatrixType";
      break;
    case 36LL:
      result = "SymTagHLSLType";
      break;
    case 37LL:
      result = "SymTagCaller";
      break;
    case 38LL:
      result = "SymTagCallee";
      break;
    case 39LL:
      result = "SymTagExport";
      break;
    case 40LL:
      result = "SymTagHeapAllocationSite";
      break;
    case 41LL:
      result = "SymTagCoffGroup";
      break;
    default:
      result = "SymTagUNK";
      break;
  }
  return result;
}

