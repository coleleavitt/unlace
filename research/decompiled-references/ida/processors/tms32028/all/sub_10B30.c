__int64 __fastcall sub_10B30(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rbp
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  bool v10; // cc
  bool v11; // al
  __int64 v12; // r12
  unsigned __int8 v13; // r12
  bool v14; // r14
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  unsigned __int8 v16; // dl
  bool v17; // al
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 108 || *(_BYTE *)(a1 + 97) != 1 || *(_WORD *)(a1 + 102) != 10 )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 41) )
    goto LABEL_7;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v3 + 40) )
    return 0;
  v4 = *(_BYTE *)(v3 + 45);
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
  v10 = v8 <= 0xF9u;
  v11 = v6 && v8 < v4;
  if ( !v10 )
    v11 = v9;
  if ( v11 )
    return 0;
LABEL_18:
  v12 = *(_QWORD *)(a1 + 864);
  v20 = 0;
  v18 = 0xA010000000100LL;
  v21 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v12 + 1) )
  {
    v1 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(a1, &v18, v12);
    if ( !(_BYTE)v1 )
      return 0;
    v13 = *(_BYTE *)(v12 + 5);
    v14 = v13 <= 0xF9u;
    if ( BYTE5(v18) > 0xF9u )
    {
      if ( v13 > 0xF9u && BYTE5(v18) >= v13 )
        goto LABEL_29;
    }
    else if ( v13 > 0xF9u || BYTE5(v18) >= v13 || BYTE5(v18) == 2 && *(_BYTE *)(a1 + 8) )
    {
      goto LABEL_29;
    }
    v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v15 == sub_10110 )
      return 0;
    v16 = v15(a1, (__int64)&v18);
    v17 = v14 || v16 < v13;
    if ( v16 <= 0xF9u )
      v17 = v14 && v16 < v13;
    if ( v17 )
      return 0;
LABEL_29:
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL) = 0;
    return v1;
  }
LABEL_7:
  *(_BYTE *)(a1 + 792) = 1;
  return 0;
}

