__int64 __fastcall sub_9FB0(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  char v5; // al
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  bool v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  unsigned int dword; // eax
  __int64 v15; // rdx

  if ( *(_WORD *)(a1 + 40) != 60 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  v3 = *(_BYTE *)(v2 + 41);
  if ( !v3 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v4 != sub_9290 )
  {
    v5 = v4(a1, a1 + 56, v2 + 40);
LABEL_12:
    if ( !v5 )
      return 0;
    goto LABEL_13;
  }
  if ( v3 != *(_BYTE *)(a1 + 57) )
    return 0;
  if ( v3 != 99 )
  {
    if ( v3 == 100 )
    {
      v5 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v2 + 48);
    }
    else
    {
      if ( v3 != 1 )
        return 0;
      v5 = *(_WORD *)(a1 + 62) == *(_WORD *)(v2 + 46);
    }
    goto LABEL_12;
  }
LABEL_13:
  v6 = *(_BYTE *)(v2 + 45);
  v7 = *(_BYTE *)(a1 + 61);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && v7 >= v6 )
      goto LABEL_22;
  }
  else if ( v6 > 0xF9u || v7 >= v6 || *(_BYTE *)(a1 + 8) && v7 == 2 )
  {
    goto LABEL_22;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 == sub_92F0 )
    return 0;
  v10 = v9(a1, a1 + 56);
  v11 = v8 || v10 < v6;
  v12 = v10 <= 0xF9u;
  v13 = v10 < v6 && v8;
  if ( !v12 )
    v13 = v11;
  if ( v13 )
    return 0;
LABEL_22:
  dword = get_dword();
  v15 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 896) = dword;
  *(_QWORD *)(v15 + 8) = dword;
  return 1;
}
