_DWORD *__fastcall sub_163910(__int64 a1, __int64 a2, signed int a3, unsigned __int64 a4)
{
  _DWORD *result; // rax
  bool v7; // zf
  _DWORD *v8; // rdx

  result = (_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 36) < a3 )
  {
    if ( *(_BYTE *)(a2 + 32) == 4 && (v8 = *(_DWORD **)(a2 + 40), *v8 == 11) && a3 <= v8[9] )
    {
      return v8 + 8;
    }
    else
    {
      sub_120F80(a4, (unsigned __int8 *)(a2 + 32));
      v7 = sub_12D580(a4, a1, a3, 1u, 0) == 0;
      result = nullptr;
      if ( !v7 )
        return (_DWORD *)a4;
    }
  }
  return result;
}

