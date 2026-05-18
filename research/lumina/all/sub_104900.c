__int64 __fastcall sub_104900(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  const char *v6; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 i; // dl
  __int64 v14; // rdi

  result = 1;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 16) = a3;
    v6 = nullptr;
    v8 = sub_104290(a1, 0);
    if ( *(_BYTE *)(a1 + 32) )
    {
      if ( a2 )
        sub_E1560(a2, 0, v9, v10, v11, v12);
LABEL_5:
      sub_CA110((_QWORD *)a1, (__int64)v6);
      return 1;
    }
    if ( v8 <= 0 )
      goto LABEL_12;
    v6 = byte_1BADE0;
    for ( i = *(_BYTE *)(a3 + v8); byte_1BADE0[i]; i = *(_BYTE *)(a3 + v8) )
      ++v8;
    if ( v8 <= 0 || (result = 0, i) )
    {
LABEL_12:
      if ( a2 )
      {
        v14 = *(_QWORD *)a2;
        v6 = "malformed JSON";
        *(_DWORD *)(a2 + 36) = 1;
        sub_F11D0(v14, "malformed JSON", -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v12);
      }
      goto LABEL_5;
    }
  }
  return result;
}
