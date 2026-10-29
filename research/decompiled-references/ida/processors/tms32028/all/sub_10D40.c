__int64 __fastcall sub_10D40(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rbp
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // dl
  bool v9; // al
  unsigned __int16 v10; // ax
  char v11; // dl
  __int64 v12; // rbp
  unsigned __int8 v13; // bp
  unsigned __int8 v14; // al
  bool v15; // r13
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  bool v17; // al
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __int128 v19; // [rsp+18h] [rbp-40h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+30h] [rbp-28h]
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v1 = *(_WORD *)(a1 + 40);
  if ( v1 != 84 )
  {
    if ( v1 != 108
      || *(_BYTE *)(a1 + 97) != 1
      || *(_WORD *)(a1 + 102) != 10
      || *(_BYTE *)(a1 + 57) != 1
      || *(_WORD *)(a1 + 62) != 1 )
    {
      return 0;
    }
    v12 = *(_QWORD *)(a1 + 864);
    v20 = 0;
    v18 = 0x10000000100LL;
    v21 = 0;
    v19 = 0;
    if ( *(_BYTE *)(v12 + 1) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(a1, &v18, v12) )
        return 0;
      v13 = *(_BYTE *)(v12 + 5);
      v14 = BYTE5(v18);
      v15 = v13 <= 0xF9u;
      if ( BYTE5(v18) > 0xF9u )
      {
        if ( v13 > 0xF9u && BYTE5(v18) >= v13 )
          goto LABEL_33;
        v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
        if ( v16 == sub_10110 )
          goto LABEL_41;
      }
      else
      {
        if ( v13 > 0xF9u || BYTE5(v18) >= v13 || BYTE5(v18) == 2 && *(_BYTE *)(a1 + 8) )
          goto LABEL_33;
        v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
        if ( v16 == sub_10110 )
          goto LABEL_31;
      }
      v14 = v16(a1, (__int64)&v18);
      if ( v14 <= 0xF9u )
      {
LABEL_31:
        v17 = v15 && v14 < v13;
        goto LABEL_32;
      }
LABEL_41:
      v17 = v15 || v14 < v13;
LABEL_32:
      if ( !v17 )
      {
LABEL_33:
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = 10;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 864) + 46LL) = 2;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 45LL) = 0;
        return 1;
      }
      return 0;
    }
LABEL_34:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 97) != 4 || *(_QWORD *)(a1 + 112) )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
    goto LABEL_34;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v3) )
    return 0;
  v4 = *(_BYTE *)(v3 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 > 0xF9u && v5 >= v4 )
      goto LABEL_18;
  }
  else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_18;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_10110 )
    return 0;
  v8 = v7(a1, a1 + 56);
  v9 = v6 || v8 < v4;
  if ( v8 <= 0xF9u )
    v9 = v6 && v8 < v4;
  if ( v9 )
    return 0;
LABEL_18:
  v10 = *(_WORD *)(a1 + 102);
  v11 = *((_BYTE *)qword_1B500 + v10);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v10;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v11;
  *(_WORD *)(a1 + 514) = 257;
  return 1;
}

