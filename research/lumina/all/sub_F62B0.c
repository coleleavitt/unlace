__int64 __fastcall sub_F62B0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int16 v3; // cx
  unsigned __int8 v4; // al
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  v3 = *(_WORD *)(a3 + 20);
  v4 = byte_1BAD40[v3 & 0x3F];
  if ( v4 == 2 )
  {
    v7 = *(_QWORD *)a3;
    if ( (v3 & 8) != 0 )
      return sub_ECCF0(a1, a2, *(double *)&v7);
    else
      return sub_ECCF0(a1, a2, (double)(int)v7);
  }
  else
  {
    if ( v4 <= 2u )
    {
      if ( v4 == 1 )
        return sub_ECD70(a1, a2, *(_QWORD *)a3);
    }
    else
    {
      if ( v4 == 3 )
        return sub_F6130(
                 a1,
                 a2,
                 *(_QWORD **)(a3 + 8),
                 *(int *)(a3 + 16),
                 (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
                 *(_BYTE *)(a3 + 22));
      if ( v4 == 4 )
      {
        if ( (v3 & 0x400) != 0 )
          return sub_ECF00(a1, a2, *(_DWORD *)a3);
        else
          return sub_F6130(
                   a1,
                   a2,
                   *(_QWORD **)(a3 + 8),
                   *(int *)(a3 + 16),
                   (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
                   0);
      }
    }
    result = sub_ECB40(a1, a2);
    if ( !(_DWORD)result )
    {
      sub_D4E10(a1, a2, v6);
      return 0;
    }
  }
  return result;
}
