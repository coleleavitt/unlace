char __fastcall sub_E170(__int64 a1)
{
  char result; // al
  __int64 v2; // rbp
  char v3; // al
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rcx
  __int64 v6; // r13
  char v7; // al
  __int64 v8; // rbp
  char v9; // al
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rcx
  char v11; // al
  unsigned __int8 v12; // bp
  unsigned __int8 v13; // al
  bool v14; // r13
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  unsigned __int8 v16; // al
  bool v17; // dl
  bool v18; // cc
  bool v19; // al
  __int64 v20; // rbp
  char v21; // al
  __int64 (__fastcall *v22)(__int64, __int64, __int64); // rcx
  char v23; // al
  unsigned __int8 v24; // bp
  unsigned __int8 v25; // al
  bool v26; // r12
  __int64 (__fastcall *v27)(__int64, __int64); // rax
  unsigned __int8 v28; // al
  bool v29; // dl
  bool v30; // al
  __int64 (__fastcall *v31)(__int64, __int64, __int64); // rcx
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // al
  bool v34; // cl
  bool v35; // dl
  __int64 (__fastcall *v36)(__int64, __int64); // rax
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // al
  bool v39; // cl
  bool v40; // dl
  __int64 (__fastcall *v41)(__int64, __int64); // rax

  if ( *(_WORD *)(a1 + 40) != 115 )
    goto LABEL_2;
  v8 = *(_QWORD *)(a1 + 864);
  v9 = *(_BYTE *)(v8 + 1);
  if ( !v9 )
  {
LABEL_18:
    *(_BYTE *)(a1 + 792) = 1;
    goto LABEL_2;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v10 != sub_9290 )
  {
    v11 = v10(a1, a1 + 56, *(_QWORD *)(a1 + 864));
LABEL_25:
    if ( !v11 )
      goto LABEL_2;
    goto LABEL_26;
  }
  if ( v9 != *(_BYTE *)(a1 + 57) )
    goto LABEL_2;
  if ( v9 != 99 )
  {
    if ( v9 == 100 )
    {
      v11 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v8 + 8);
    }
    else
    {
      if ( v9 != 1 )
        goto LABEL_2;
      v11 = *(_WORD *)(a1 + 62) == *(_WORD *)(v8 + 6);
    }
    goto LABEL_25;
  }
LABEL_26:
  v12 = *(_BYTE *)(v8 + 5);
  v13 = *(_BYTE *)(a1 + 61);
  v14 = v12 <= 0xF9u;
  if ( v13 > 0xF9u )
  {
    if ( v13 >= v12 && v12 > 0xF9u )
      goto LABEL_35;
  }
  else if ( v13 >= v12 || v12 > 0xF9u || *(_BYTE *)(a1 + 8) && v13 == 2 )
  {
    goto LABEL_35;
  }
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v15 == sub_92F0 )
    goto LABEL_2;
  v16 = v15(a1, a1 + 56);
  v17 = v14 || v16 < v12;
  v18 = v16 <= 0xF9u;
  v19 = v14 && v16 < v12;
  if ( !v18 )
    v19 = v17;
  if ( v19 )
    goto LABEL_2;
LABEL_35:
  v20 = *(_QWORD *)(a1 + 864);
  v21 = *(_BYTE *)(v20 + 1);
  if ( !v21 )
    goto LABEL_18;
  v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v22 != sub_9290 )
  {
    v23 = v22(a1, a1 + 96, *(_QWORD *)(a1 + 864));
LABEL_42:
    if ( !v23 )
      goto LABEL_2;
    goto LABEL_43;
  }
  if ( v21 != *(_BYTE *)(a1 + 97) )
    goto LABEL_2;
  if ( v21 != 99 )
  {
    if ( v21 == 100 )
    {
      v23 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v20 + 8);
    }
    else
    {
      if ( v21 != 1 )
        goto LABEL_2;
      v23 = *(_WORD *)(a1 + 102) == *(_WORD *)(v20 + 6);
    }
    goto LABEL_42;
  }
LABEL_43:
  v24 = *(_BYTE *)(v20 + 5);
  v25 = *(_BYTE *)(a1 + 101);
  v26 = v24 <= 0xF9u;
  if ( v25 > 0xF9u )
  {
    if ( v25 < v24 || v24 <= 0xF9u )
      goto LABEL_48;
    return *(_QWORD *)(a1 + 144) == 255;
  }
  if ( v25 >= v24 || v24 > 0xF9u || *(_BYTE *)(a1 + 8) && v25 == 2 )
    return *(_QWORD *)(a1 + 144) == 255;
LABEL_48:
  v27 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v27 != sub_92F0 )
  {
    v28 = v27(a1, a1 + 96);
    v29 = v26 || v28 < v24;
    v18 = v28 <= 0xF9u;
    v30 = v28 < v24 && v26;
    if ( !v18 )
      v30 = v29;
    if ( !v30 )
      return *(_QWORD *)(a1 + 144) == 255;
  }
LABEL_2:
  result = sub_DEB0(a1);
  if ( result && *(_QWORD *)(a1 + 920) == 255 && !*(_QWORD *)(a1 + 912) )
    return result;
  v2 = *(_QWORD *)(a1 + 864);
  v3 = *(_BYTE *)(v2 + 1);
  if ( !v3 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    v3 = *(_BYTE *)(v2 + 1);
    if ( !v3 )
    {
LABEL_7:
      *(_BYTE *)(a1 + 792) = 1;
      return 0;
    }
    goto LABEL_75;
  }
  v4 = *(_QWORD *)a1;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v5 != sub_9290 )
  {
    if ( !(unsigned __int8)v5(a1, a1 + 56, *(_QWORD *)(a1 + 864)) )
      goto LABEL_74;
LABEL_67:
    v37 = *(_BYTE *)(v2 + 5);
    v38 = *(_BYTE *)(a1 + 61);
    v39 = v37 <= 0xF9u;
    v40 = v38 < v37;
    if ( v38 > 0xF9u )
    {
      if ( !v40 && !v39 )
        goto LABEL_74;
    }
    else if ( !v40 || !v39 || v38 == 2 && *(_BYTE *)(a1 + 8) )
    {
      goto LABEL_74;
    }
    v41 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v41 != sub_92F0 )
      v41(a1, a1 + 56);
LABEL_74:
    v2 = *(_QWORD *)(a1 + 864);
    v3 = *(_BYTE *)(v2 + 1);
    if ( !v3 )
      goto LABEL_7;
LABEL_75:
    v4 = *(_QWORD *)a1;
    goto LABEL_56;
  }
  if ( v3 != *(_BYTE *)(a1 + 57) )
    goto LABEL_11;
  if ( v3 == 99 )
    goto LABEL_67;
  if ( v3 != 100 )
  {
    if ( v3 != 1 )
      goto LABEL_56;
    if ( *(_WORD *)(a1 + 62) != *(_WORD *)(v2 + 6) )
    {
LABEL_11:
      v6 = a1 + 96;
      goto LABEL_12;
    }
    goto LABEL_67;
  }
  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(v2 + 8) )
    goto LABEL_67;
LABEL_56:
  v31 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v4 + 8);
  v6 = a1 + 96;
  if ( v31 != sub_9290 )
  {
    v7 = v31(a1, a1 + 96, v2);
    goto LABEL_58;
  }
LABEL_12:
  if ( v3 != *(_BYTE *)(a1 + 97) )
    return 0;
  switch ( v3 )
  {
    case 99:
      goto LABEL_59;
    case 100:
      v7 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v2 + 8);
      break;
    case 1:
      v7 = *(_WORD *)(a1 + 102) == *(_WORD *)(v2 + 6);
      break;
    default:
      return 0;
  }
LABEL_58:
  if ( !v7 )
    return 0;
LABEL_59:
  v32 = *(_BYTE *)(v2 + 5);
  v33 = *(_BYTE *)(a1 + 101);
  v34 = v32 <= 0xF9u;
  v35 = v33 < v32;
  if ( v33 > 0xF9u )
  {
    if ( !v35 && !v34 )
      return 0;
  }
  else if ( !v35 || !v34 || *(_BYTE *)(a1 + 8) && v33 == 2 )
  {
    return 0;
  }
  v36 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v36 == sub_92F0 )
    return 0;
  v36(a1, v6);
  return 0;
}

