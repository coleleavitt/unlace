__int64 __fastcall sub_13440(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // al
  bool v7; // r12
  __int64 (__fastcall *v8)(__int64, __int64); // rdx
  bool v9; // al

  if ( *(_WORD *)(a1 + 40) != 106
    || (*(_BYTE *)(a1 + 46) & 1) == 0
    || *(_BYTE *)(a1 + 57) != 5
    || *(_QWORD *)(a1 + 64) != 1
    || *(_BYTE *)(a1 + 97) != 1 )
  {
    return 0;
  }
  v2 = *(_QWORD *)(a1 + 864);
  v3 = *(_BYTE *)(v2 + 1);
  if ( !v3 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v4 == sub_12F90 )
  {
    if ( v3 != 1 || *(_WORD *)(a1 + 102) != *(_WORD *)(v2 + 6) )
      return 0;
  }
  else if ( !(unsigned __int8)v4(a1, a1 + 96, v2) )
  {
    return 0;
  }
  v5 = *(_BYTE *)(v2 + 5);
  v6 = *(_BYTE *)(a1 + 101);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_21;
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v8 == sub_12FF0 )
      return 0;
  }
  else
  {
    if ( v5 > 0xF9u || v6 >= v5 || *(_BYTE *)(a1 + 8) && v6 == 2 )
      goto LABEL_21;
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v8 == sub_12FF0 )
      goto LABEL_19;
  }
  v6 = v8(a1, a1 + 96);
  if ( v6 <= 0xF9u )
  {
LABEL_19:
    v9 = v7 && v6 < v5;
    goto LABEL_20;
  }
  v9 = v7 || v6 < v5;
LABEL_20:
  if ( v9 )
    return 0;
LABEL_21:
  **(_DWORD **)(a1 + 376) &= 0xFFFFFBFB;
  return 1;
}

