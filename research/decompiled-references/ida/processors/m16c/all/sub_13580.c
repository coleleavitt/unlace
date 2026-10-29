__int64 __fastcall sub_13580(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  bool v5; // al
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  bool v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al

  if ( *(_WORD *)(a1 + 40) != 36 || *(_BYTE *)(a1 + 57) != 5 )
    return 0;
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
    if ( v3 != *(_BYTE *)(a1 + 97) )
      return 0;
    if ( v3 != 99 )
    {
      if ( v3 == 100 )
      {
        v5 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v2 + 8);
      }
      else
      {
        if ( v3 != 1 )
          return 0;
        v5 = *(_WORD *)(a1 + 102) == *(_WORD *)(v2 + 6);
      }
      if ( !v5 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v4(a1, a1 + 96, v2) )
  {
    return 0;
  }
  v6 = *(_BYTE *)(v2 + 5);
  v7 = *(_BYTE *)(a1 + 101);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && v7 >= v6 )
      goto LABEL_23;
  }
  else if ( v6 > 0xF9u || v7 >= v6 || *(_BYTE *)(a1 + 8) && v7 == 2 )
  {
    goto LABEL_23;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 == sub_12FF0 )
    return 0;
  v10 = v9(a1, a1 + 96);
  v11 = v8 || v10 < v6;
  v12 = v10 <= 0xF9u;
  v13 = v8 && v10 < v6;
  if ( !v12 )
    v13 = v11;
  if ( v13 )
    return 0;
LABEL_23:
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = *(_QWORD *)(a1 + 64);
  return 1;
}

