__int64 __fastcall sub_3770(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  unsigned __int16 v6; // si
  __int16 v7; // r12
  __int64 v8; // rax

  sub_3630(a2, a3, a4);
  result = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)result == 2 )
  {
    if ( *(_WORD *)(a3 + 6) == 63 )
      return result;
    *(_BYTE *)(a3 + 1) = 7;
  }
  else if ( (_BYTE)result != 7 )
  {
    return result;
  }
  v6 = *(_WORD *)(a3 + 16);
  if ( v6 >= *(_WORD *)(a1 + 132) && *(_WORD *)(a1 + 134) >= v6 )
  {
    result = netnode_altval();
    v7 = result;
    if ( (_DWORD)result )
    {
      result = getseg();
      if ( result )
      {
        *(_BYTE *)(a3 + 1) = 6;
        v8 = *(_QWORD *)(result + 48);
        *(_WORD *)(a3 + 24) = v8;
        result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (16 * v8);
        *(_WORD *)(a3 + 16) = v7 - result;
      }
    }
  }
  return result;
}

