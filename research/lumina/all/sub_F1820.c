signed __int64 __fastcall sub_F1820(__int64 *a1, __int64 a2, char ***a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char **v8; // rdi
  unsigned __int8 v9; // al
  __int64 v10; // rdi
  signed __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi

  v8 = *a3;
  v9 = byte_1BAD40[*((_WORD *)*a3 + 10) & 0x3F];
  if ( v9 == 1 )
  {
    result = sub_CD0F0(v8);
    v20 = *a1;
    if ( result < 0 )
    {
      v16 = 0x8000000000000000LL;
      if ( result == 0x8000000000000000LL )
      {
        *((_DWORD *)a1 + 9) = 1;
        return sub_F11D0(v20, "integer overflow", -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v19);
      }
      result = -result;
    }
    if ( (*(_WORD *)(v20 + 20) & 0x9000) != 0 )
    {
      return sub_C9430(v20, result, v16, v17, v18, v19);
    }
    else
    {
      *(_QWORD *)v20 = result;
      *(_WORD *)(v20 + 20) = 4;
    }
  }
  else if ( v9 == 5 )
  {
    v10 = *a1;
    if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 )
    {
      return sub_C93F0(v10, a2, (__int64)byte_1BAD40, a4, a5, a6);
    }
    else
    {
      *(_WORD *)(v10 + 20) = 1;
      return 1;
    }
  }
  else
  {
    sub_CD1F0((__int64)v8);
    if ( a7 < 0.0 )
      a7 = -a7;
    return sub_C95A0(*a1, a2, v12, v13, v14, v15, a7);
  }
  return result;
}
