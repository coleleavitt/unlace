__int64 __fastcall sub_A820(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  int v3; // r12d
  int v4; // edx

  result = a2[12];
  if ( (_WORD)result == 57 )
  {
    result = (unsigned int)get_dword() >> 26;
    if ( (_DWORD)result != 19 )
      return result;
    if ( a2[23] != 30 )
      return result;
    result = get_func();
    if ( !result )
      return result;
    return add_auto_stkpnt();
  }
  if ( (_WORD)result == 99 )
  {
    result = (unsigned int)get_dword() >> 26;
    if ( (_DWORD)result != 27 )
      return result;
    if ( a2[43] != 30 )
      return result;
    result = get_func();
    if ( !result )
      return result;
    return add_auto_stkpnt();
  }
  if ( (_WORD)result != 55 || a2[43] != 30 )
    return result;
  result = a2[23];
  if ( (_WORD)result == 30 )
  {
    result = get_func();
    if ( !result )
      return result;
    return add_auto_stkpnt();
  }
  v3 = (unsigned __int16)result;
  if ( (_WORD)result )
  {
    result = get_func();
    if ( result )
    {
      if ( *(_QWORD *)result == *(_QWORD *)(a1 + 184) )
      {
        v4 = *(_DWORD *)(a1 + 192);
      }
      else
      {
        *(_QWORD *)(a1 + 184) = *(_QWORD *)result;
        result = netnode_altval();
        *(_DWORD *)(a1 + 192) = result;
        v4 = result;
      }
      if ( v3 == v4 )
      {
        result = get_func();
        if ( result )
        {
          get_spd();
          result = get_func();
          if ( result )
            return add_auto_stkpnt();
        }
      }
    }
  }
  return result;
}

