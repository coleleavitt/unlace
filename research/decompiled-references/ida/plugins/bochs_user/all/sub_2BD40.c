// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall sub_2BD40(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax

  if ( under_debugger )
    BUG();
  interr();
  result = 1;
  if ( *(_QWORD *)"et_module_data" == *(_QWORD *)"error_string" && (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 2 )
  {
    if ( aGetinfFlag[10] )
    {
      aGetinfFlag[10] = 0;
      return 0;
    }
    else
    {
      aDelIdcFunc[1] = 1;
      return (unsigned int)sub_25D80(4506) == 0;
    }
  }
  return result;
}

