__int64 __fastcall sub_1A140(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  char *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // r13d
  __int64 v10; // rdx
  unsigned __int8 v11; // cl
  char v12; // r13

  v5 = sub_1A0A0(a3, a2);
  v6 = (char *)s;
  if ( *(_QWORD *)(v5 + 8) )
    v6 = *(char **)v5;
  if ( sub_19060(a1, v6) )
  {
    *(_BYTE *)(a1 + 120) = 1;
    result = (unsigned __int8)v6[1];
    if ( (unsigned __int8)(result - 97) <= 0x17u )
    {
      v8 = 8912897;
      if ( _bittest64(&v8, (unsigned int)(result - 97)) )
      {
        if ( (_BYTE)result == 97 || (_BYTE)result == 120 )
        {
          v9 = 1;
        }
        else
        {
          if ( (_BYTE)result == 116 )
            *(_BYTE *)(a3 + 94) |= 1u;
          v9 = 2;
        }
        result = *(_QWORD *)(a1 + 104);
        if ( result )
          result = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, _QWORD, __int64))result)(a2, a3, v9, 1);
        if ( *(_BYTE *)(a1 + 121) )
          return sub_190C0((_QWORD *)a1, a3, v9);
      }
    }
    return result;
  }
  v10 = 8196;
  v11 = *(_BYTE *)(a3 + 92);
  result = *(_BYTE *)(a3 + 52) & 0xF;
  if ( !_bittest64(&v10, result) )
  {
    if ( (_BYTE)result != 15 || v11 > 2u )
      return result;
    *(_QWORD *)(a3 + 80) &= ~1uLL;
    goto LABEL_17;
  }
  if ( v11 > 2u )
    return result;
  *(_QWORD *)(a3 + 80) &= ~1uLL;
  if ( (_BYTE)result == 13 )
  {
    *(_BYTE *)(a3 + 93) = 2;
LABEL_17:
    *(_BYTE *)(a3 + 94) |= 1u;
    result = *(_QWORD *)(a1 + 104);
    if ( !result )
      return result;
    ((void (__fastcall *)(_QWORD *, unsigned __int64, __int64, _QWORD))result)(a2, a3, 2, 0);
    goto LABEL_19;
  }
  if ( (*(_BYTE *)(a3 + 56) & 1) != 0 )
    goto LABEL_17;
LABEL_19:
  v12 = *(_BYTE *)(a3 + 94);
  result = v12 & 1;
  if ( !(_BYTE)result )
  {
    if ( !*(_BYTE *)(a1 + 121)
      || (unsigned int)sub_19680(a1, a3) != 2
      || (*(_BYTE *)(a3 + 94) = v12 | 1, (result = *(_QWORD *)(a1 + 104)) != 0)
      && (result = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64, _QWORD))result)(a2, a3, 2, 0),
          (*(_BYTE *)(a3 + 94) & 1) == 0) )
    {
      result = *(_QWORD *)(a1 + 104);
      if ( result )
        return ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64, _QWORD))result)(a2, a3, 1, 0);
    }
  }
  return result;
}

