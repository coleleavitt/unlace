__int64 __fastcall sub_291680(__int64 a1, __int64 *a2, __m128 a3)
{
  __int64 v4; // r12
  char tinfo_property; // al
  unsigned int v7; // r12d
  char v9; // al
  int v10; // r13d
  __int64 v11; // r15
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  bool v16; // r12
  int v17; // edx
  int v18; // ecx
  unsigned __int8 v19; // al
  int v20; // eax
  __int64 *v21; // r12
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  bool v25; // si
  bool v26; // r8
  char v27; // al
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  char v31; // al
  int v32; // eax
  int v33; // eax
  int v34; // [rsp+8h] [rbp-80h]
  _QWORD *v35; // [rsp+10h] [rbp-78h]
  int tinfo_size; // [rsp+18h] [rbp-70h]
  __int16 v37; // [rsp+18h] [rbp-70h]
  int v38; // [rsp+20h] [rbp-68h]
  int v39; // [rsp+28h] [rbp-60h]
  int v40; // [rsp+2Ch] [rbp-5Ch]
  int v41; // [rsp+30h] [rbp-58h]
  __int16 v42; // [rsp+34h] [rbp-54h]
  __int16 v43; // [rsp+34h] [rbp-54h]
  bool v44; // [rsp+39h] [rbp-4Fh]
  unsigned __int8 v45; // [rsp+3Ah] [rbp-4Eh]
  bool v46; // [rsp+3Bh] [rbp-4Dh]
  int v47; // [rsp+3Ch] [rbp-4Ch]
  int v48; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v4 = a2[3];
  v49 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) == 0 )
    return 0;
  if ( (tinfo_property & 0xFu) > 9 )
    return 0;
  v9 = get_tinfo_property();
  if ( (v9 & 0x3E) == 0 || (v9 & 0xFu) > 9 && (v9 & 0x3F) != 0x2D )
    return 0;
  tinfo_size = get_tinfo_size();
  v38 = get_tinfo_size();
  v10 = 8 * v38;
  v39 = 8 * tinfo_size;
  v34 = get_tinfo_property();
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  v44 = sub_256450((__int64)a2, v11, *(double *)a3.m128_u64);
  if ( !v44 )
  {
    if ( !under_debugger )
      sub_383060(0xC5C4u, *(double *)a3.m128_u64);
    BUG();
  }
  v12 = *(_DWORD *)(v11 + 8);
  v35 = (_QWORD *)(v4 + 48);
  v45 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
  if ( v12 == 34 )
  {
    v40 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL);
    if ( 8 * v40 < v10 && v39 < v10 )
      return 0;
    v13 = get_tinfo_property();
    v14 = a2[3];
    v41 = v13;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
    if ( (unk_4E054B & 0x28) != 0 )
      goto LABEL_12;
    v48 = sub_285970(v14, v15, *(double *)a3.m128_u64);
    LOWORD(v17) = v48;
    if ( v34 != 1 )
      goto LABEL_40;
LABEL_59:
    v16 = v38 <= v40 && tinfo_size < v40;
    if ( !v16 )
      goto LABEL_60;
    if ( v41 == 1 )
    {
      v16 = 0;
      v26 = 0;
      goto LABEL_47;
    }
    if ( v12 != 34 )
    {
      v25 = v38 <= v40 && tinfo_size < v40;
      v16 = 0;
      goto LABEL_67;
    }
    v16 = 0;
LABEL_100:
    if ( tinfo_size <= v38 )
      goto LABEL_51;
    if ( (unk_4E054B & 8) != 0 )
    {
      v17 = (__int16)v17;
      v33 = 8 * v40;
      if ( 8 * v40 < v10 )
        v33 = 8 * v38;
      if ( v33 > (__int16)v17 )
        goto LABEL_51;
      goto LABEL_103;
    }
LABEL_102:
    v17 = (__int16)v17;
LABEL_103:
    if ( v10 <= v17 - SHIWORD(v48) || v39 > v17 )
      goto LABEL_51;
    goto LABEL_77;
  }
  v41 = get_tinfo_property();
  if ( v12 > 0x45 )
  {
    v23 = a2[3];
    v24 = *(_QWORD *)(a1 + 72);
    v16 = 0;
    goto LABEL_37;
  }
  v23 = a2[3];
  v24 = *(_QWORD *)(a1 + 72);
  v15 = *(_QWORD *)(v24 + 112);
  v14 = a2[3];
  if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v12 + 11) & 0x28) == 0 )
  {
    if ( v12 - 2 > 0xD )
    {
      v48 = sub_285970(v23, v15, *(double *)a3.m128_u64);
      LOWORD(v17) = v48;
      if ( v34 != 1 )
        goto LABEL_53;
LABEL_58:
      v40 = v45;
      goto LABEL_59;
    }
    v16 = v34 == 1 || v12 != 2;
LABEL_37:
    v48 = sub_285970(v23, *(_QWORD *)(v24 + 112), *(double *)a3.m128_u64);
    if ( v12 == 77 || v16 )
    {
      v40 = v45;
      goto LABEL_13;
    }
    if ( v34 != 1 )
      goto LABEL_40;
    LOWORD(v17) = v48;
    goto LABEL_58;
  }
  v40 = v45;
LABEL_12:
  v16 = v44;
  v48 = sub_285970(v14, v15, *(double *)a3.m128_u64);
LABEL_13:
  sub_285650((__int16 *)&v48, *(_QWORD *)(a1 + 72), a2[3] + 48, 0);
  LOWORD(v17) = v48;
  if ( v40 > tinfo_size && v40 >= v38 )
  {
    v25 = v34 == 1;
    if ( v41 == 1 && v34 == 1 )
    {
      v41 = 1;
      v26 = 0;
      goto LABEL_47;
    }
    if ( v12 != 34 )
    {
LABEL_67:
      if ( v12 - 32 > 1 )
        goto LABEL_15;
      if ( v34 != v41 )
      {
        v18 = (__int16)v17;
        if ( !v25 || tinfo_size <= v38 )
          goto LABEL_19;
        if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v12 + 11) & 8) != 0 )
        {
          v28 = 8 * v40;
          if ( 8 * v40 < v10 )
            v28 = 8 * v38;
          if ( v28 > (__int16)v17 )
            goto LABEL_19;
        }
        if ( v10 <= (__int16)v17 - SHIWORD(v48) || v39 > (__int16)v17 )
          goto LABEL_19;
        goto LABEL_77;
      }
      if ( !v25 )
        goto LABEL_51;
      if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v12 + 11) & 8) != 0 )
      {
        v32 = 8 * v40;
        if ( 8 * v40 < v10 )
          v32 = 8 * v38;
        if ( (__int16)v17 < v32 || v39 > (__int16)v17 || v10 <= (__int16)v17 - SHIWORD(v48) )
          goto LABEL_51;
LABEL_77:
        if ( !v16 )
          goto LABEL_53;
        goto LABEL_52;
      }
      goto LABEL_102;
    }
    if ( v34 != 1 )
      goto LABEL_51;
    goto LABEL_100;
  }
LABEL_15:
  if ( v34 != 1 )
  {
    if ( v12 == 48 )
    {
      v37 = v17;
      get_tinfo_property();
      LOWORD(v17) = v37;
    }
    goto LABEL_18;
  }
LABEL_60:
  v26 = tinfo_size > v38 || v41 == 1;
  if ( !v26 )
  {
    if ( v12 == 48 )
    {
      v42 = v17;
      v27 = get_tinfo_property();
      LOWORD(v17) = v42;
      if ( (v27 & 0xF) == 9 && tinfo_size < v38 )
        goto LABEL_64;
    }
LABEL_18:
    v18 = (__int16)v17;
LABEL_19:
    v19 = 1;
    if ( v18 < v39 )
    {
      v44 = v34 == 1 && v18 >= v10;
      v19 = v44;
    }
    v20 = sub_2862C0(a1, (__int64)a2, (__int16)(v17 + 7) >> 3, v19, 0, *(double *)a3.m128_u64);
    if ( v20 == 2 )
      return 0;
    if ( !v16 )
      goto LABEL_53;
    v21 = *(__int64 **)(v11 + 24);
    if ( a2 == v21 )
      v21 = *(__int64 **)(v11 + 32);
    if ( v20 == 1 )
    {
      if ( (unsigned __int8)sub_27EA20(*(_QWORD *)(a1 + 72), v21 + 6, v35, (__int64)(a2 + 6), 1) )
        return 0;
      v22 = get_tinfo_size();
      if ( v44 && (v10 < 8 * v22 || 8 * v40 > v10) && (v41 != v34 || v34 == 1) )
        return 0;
    }
LABEL_52:
    if ( 8 * get_tinfo_size() >= (unsigned __int64)v10 )
      goto LABEL_41;
LABEL_53:
    if ( v12 == 48 )
      goto LABEL_41;
    goto LABEL_40;
  }
LABEL_47:
  if ( v12 <= 0x45 )
  {
    if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v12 + 11) & 8) != 0 )
    {
      v29 = (__int16)v17;
      v30 = 8 * v40;
      if ( 8 * v40 < v10 )
        v30 = 8 * v38;
      if ( (__int16)v17 < v30 )
        goto LABEL_83;
    }
    if ( v12 - 22 <= 1 )
      goto LABEL_50;
    v29 = (__int16)v17;
    if ( (__int16)v17 - SHIWORD(v48) >= v10 || (__int16)v17 < v39 )
    {
LABEL_83:
      if ( v12 == 48 )
      {
        v47 = v29;
        v46 = v26;
        v43 = v17;
        v31 = get_tinfo_property();
        LOWORD(v17) = v43;
        v18 = v47;
        if ( ((v31 & 0xF) != 9 || tinfo_size >= v38) && v46 )
          goto LABEL_19;
LABEL_64:
        if ( !v16 )
          goto LABEL_41;
        goto LABEL_52;
      }
LABEL_50:
      if ( v26 )
        goto LABEL_18;
      goto LABEL_51;
    }
    goto LABEL_77;
  }
  if ( v10 <= (__int16)v17 - SHIWORD(v48) || v39 > (__int16)v17 )
    goto LABEL_50;
LABEL_51:
  if ( v16 )
    goto LABEL_52;
LABEL_40:
  if ( (get_tinfo_property() & 0xF) != 9 && v10 / 8 > v45 )
    return 0;
LABEL_41:
  v7 = sub_28FF70(a1, (__int64)a2, (__int64)a2, *(double *)a3.m128_u64);
  if ( !(_BYTE)v7 )
    return 0;
  sub_255850(a2, a2[3], *(double *)a3.m128_u64);
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v7;
}

