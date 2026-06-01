__int64 __fastcall sub_9170(_BYTE *a1)
{
  int v1; // r13d
  int v2; // eax
  __int64 v4; // rbp
  __int16 v5; // ax
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // dl
  __int64 (__fastcall *v10)(__int64, __int64); // rcx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  unsigned __int8 v12; // bp
  unsigned __int8 v13; // al
  bool v14; // r13
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  unsigned __int8 v16; // al
  bool v17; // dl
  bool v18; // cc
  bool v19; // al

  v2 = *((_DWORD *)a1 + 228);
  if ( v2 == 1 )
  {
    v5 = *((_WORD *)a1 + 20);
    if ( v5 != 81 )
      goto LABEL_8;
  }
  else if ( v2 != 2 || *((_WORD *)a1 + 20) != 82 )
  {
    return 0;
  }
  v4 = *((_QWORD *)a1 + 108);
  if ( !*(_BYTE *)(v4 + 1) )
  {
LABEL_6:
    a1[792] = 1;
    return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v4) )
  {
    v12 = *(_BYTE *)(v4 + 5);
    v13 = a1[61];
    v14 = v12 <= 0xF9u;
    if ( v13 > 0xF9u )
    {
      if ( v12 > 0xF9u && v13 >= v12 )
        return 1;
    }
    else if ( v12 > 0xF9u || v13 >= v12 || a1[8] && v13 == 2 )
    {
      return 1;
    }
    v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v15 != sub_8490 )
    {
      v16 = v15((__int64)a1, (__int64)(a1 + 56));
      v17 = v14 || v16 < v12;
      v18 = v16 <= 0xF9u;
      v19 = v14 && v16 < v12;
      if ( !v18 )
        v19 = v17;
      if ( !v19 )
        return 1;
    }
  }
  if ( *((_DWORD *)a1 + 228) != 1 )
    return 0;
  v5 = *((_WORD *)a1 + 20);
LABEL_8:
  if ( v5 != 1 || a1[57] != 1 || a1[97] != 1 || *((_WORD *)a1 + 31) != *((_WORD *)a1 + 51) )
    return 0;
  v6 = *((_QWORD *)a1 + 108);
  if ( !*(_BYTE *)(v6 + 1) )
    goto LABEL_6;
  v7 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 96, v6);
  if ( !(_BYTE)v7 )
    return 0;
  v8 = *(_BYTE *)(v6 + 5);
  v9 = a1[101];
  LOBYTE(v1) = v8 <= 0xF9u;
  if ( v9 > 0xF9u )
  {
    LOBYTE(v7) = v1 | (v9 < v8);
    if ( (_BYTE)v7 )
    {
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
      if ( v10 == sub_8490 )
        return v7 ^ 1;
      goto LABEL_39;
    }
  }
  else if ( v8 <= 0xF9u && v9 < v8 && (v9 != 2 || !a1[8]) )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    v11 = sub_8490;
    if ( v10 == sub_8490 )
    {
LABEL_20:
      LOBYTE(v11) = v9 < v8;
      v7 = v1 & (unsigned int)v11;
      return v7 ^ 1;
    }
LABEL_39:
    LODWORD(v11) = v10((__int64)a1, (__int64)(a1 + 96));
    v9 = (unsigned __int8)v11;
    if ( (unsigned __int8)v11 > 0xF9u )
    {
      LOBYTE(v11) = (unsigned __int8)v11 < v8;
      v7 = v1 | (unsigned int)v11;
      return v7 ^ 1;
    }
    goto LABEL_20;
  }
  return 1;
}

