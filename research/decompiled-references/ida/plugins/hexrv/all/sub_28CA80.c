__int64 __fastcall sub_28CA80(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  char tinfo_property; // al
  unsigned int v6; // r12d
  char v8; // al
  int v9; // r13d
  __int64 v10; // r15
  unsigned int v11; // r14d
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rsi
  bool v15; // r12
  int v16; // edx
  int v17; // ecx
  unsigned __int8 v18; // al
  int v19; // eax
  __int64 *v20; // r12
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  bool v24; // si
  bool v25; // r8
  char v26; // al
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  char v30; // al
  int v31; // eax
  int v32; // eax
  int v33; // [rsp+8h] [rbp-80h]
  __int64 v34; // [rsp+10h] [rbp-78h]
  int tinfo_size; // [rsp+18h] [rbp-70h]
  __int16 v36; // [rsp+18h] [rbp-70h]
  int v37; // [rsp+20h] [rbp-68h]
  int v38; // [rsp+28h] [rbp-60h]
  int v39; // [rsp+2Ch] [rbp-5Ch]
  int v40; // [rsp+30h] [rbp-58h]
  __int16 v41; // [rsp+34h] [rbp-54h]
  __int16 v42; // [rsp+34h] [rbp-54h]
  bool v43; // [rsp+39h] [rbp-4Fh]
  unsigned __int8 v44; // [rsp+3Ah] [rbp-4Eh]
  bool v45; // [rsp+3Bh] [rbp-4Dh]
  int v46; // [rsp+3Ch] [rbp-4Ch]
  int v47; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-40h]

  v3 = a2[3];
  v48 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) == 0 )
    return 0;
  if ( (tinfo_property & 0xFu) > 9 )
    return 0;
  v8 = get_tinfo_property();
  if ( (v8 & 0x3E) == 0 || (v8 & 0xFu) > 9 && (v8 & 0x3F) != 0x2D )
    return 0;
  tinfo_size = get_tinfo_size();
  v37 = get_tinfo_size();
  v9 = 8 * v37;
  v38 = 8 * tinfo_size;
  v33 = get_tinfo_property();
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  v43 = sub_251850((__int64)a2, v10);
  if ( !v43 )
  {
    if ( !under_debugger )
      sub_37DDE0(50628);
    BUG();
  }
  v11 = *(_DWORD *)(v10 + 8);
  v34 = v3 + 48;
  v44 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
  if ( v11 == 34 )
  {
    v39 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL);
    if ( 8 * v39 < v9 && v38 < v9 )
      return 0;
    v12 = get_tinfo_property();
    v13 = a2[3];
    v40 = v12;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
    if ( (unk_4B2F8B & 0x28) != 0 )
      goto LABEL_12;
    v47 = sub_280D70(v13, v14);
    LOWORD(v16) = v47;
    if ( v33 != 1 )
      goto LABEL_40;
LABEL_59:
    v15 = v37 <= v39 && tinfo_size < v39;
    if ( !v15 )
      goto LABEL_60;
    if ( v40 == 1 )
    {
      v15 = 0;
      v25 = 0;
      goto LABEL_47;
    }
    if ( v11 != 34 )
    {
      v24 = v37 <= v39 && tinfo_size < v39;
      v15 = 0;
      goto LABEL_67;
    }
    v15 = 0;
LABEL_100:
    if ( tinfo_size <= v37 )
      goto LABEL_51;
    if ( (unk_4B2F8B & 8) != 0 )
    {
      v16 = (__int16)v16;
      v32 = 8 * v39;
      if ( 8 * v39 < v9 )
        v32 = 8 * v37;
      if ( v32 > (__int16)v16 )
        goto LABEL_51;
      goto LABEL_103;
    }
LABEL_102:
    v16 = (__int16)v16;
LABEL_103:
    if ( v9 <= v16 - SHIWORD(v47) || v38 > v16 )
      goto LABEL_51;
    goto LABEL_77;
  }
  v40 = get_tinfo_property();
  if ( v11 > 0x45 )
  {
    v22 = a2[3];
    v23 = *(_QWORD *)(a1 + 72);
    v15 = 0;
    goto LABEL_37;
  }
  v22 = a2[3];
  v23 = *(_QWORD *)(a1 + 72);
  v14 = *(_QWORD *)(v23 + 112);
  v13 = a2[3];
  if ( (*((_BYTE *)&off_4B2D60 + 16 * (int)v11 + 11) & 0x28) == 0 )
  {
    if ( v11 - 2 > 0xD )
    {
      v47 = sub_280D70(v22, v14);
      LOWORD(v16) = v47;
      if ( v33 != 1 )
        goto LABEL_53;
LABEL_58:
      v39 = v44;
      goto LABEL_59;
    }
    v15 = v33 == 1 || v11 != 2;
LABEL_37:
    v47 = sub_280D70(v22, *(_QWORD *)(v23 + 112));
    if ( v11 == 77 || v15 )
    {
      v39 = v44;
      goto LABEL_13;
    }
    if ( v33 != 1 )
      goto LABEL_40;
    LOWORD(v16) = v47;
    goto LABEL_58;
  }
  v39 = v44;
LABEL_12:
  v15 = v43;
  v47 = sub_280D70(v13, v14);
LABEL_13:
  sub_280A50((__int16 *)&v47, *(_QWORD *)(a1 + 72), a2[3] + 48, 0);
  LOWORD(v16) = v47;
  if ( v39 > tinfo_size && v39 >= v37 )
  {
    v24 = v33 == 1;
    if ( v40 == 1 && v33 == 1 )
    {
      v40 = 1;
      v25 = 0;
      goto LABEL_47;
    }
    if ( v11 != 34 )
    {
LABEL_67:
      if ( v11 - 32 > 1 )
        goto LABEL_15;
      if ( v33 != v40 )
      {
        v17 = (__int16)v16;
        if ( !v24 || tinfo_size <= v37 )
          goto LABEL_19;
        if ( (*((_BYTE *)&off_4B2D60 + 16 * (int)v11 + 11) & 8) != 0 )
        {
          v27 = 8 * v39;
          if ( 8 * v39 < v9 )
            v27 = 8 * v37;
          if ( v27 > (__int16)v16 )
            goto LABEL_19;
        }
        if ( v9 <= (__int16)v16 - SHIWORD(v47) || v38 > (__int16)v16 )
          goto LABEL_19;
        goto LABEL_77;
      }
      if ( !v24 )
        goto LABEL_51;
      if ( (*((_BYTE *)&off_4B2D60 + 16 * (int)v11 + 11) & 8) != 0 )
      {
        v31 = 8 * v39;
        if ( 8 * v39 < v9 )
          v31 = 8 * v37;
        if ( (__int16)v16 < v31 || v38 > (__int16)v16 || v9 <= (__int16)v16 - SHIWORD(v47) )
          goto LABEL_51;
LABEL_77:
        if ( !v15 )
          goto LABEL_53;
        goto LABEL_52;
      }
      goto LABEL_102;
    }
    if ( v33 != 1 )
      goto LABEL_51;
    goto LABEL_100;
  }
LABEL_15:
  if ( v33 != 1 )
  {
    if ( v11 == 48 )
    {
      v36 = v16;
      get_tinfo_property();
      LOWORD(v16) = v36;
    }
    goto LABEL_18;
  }
LABEL_60:
  v25 = tinfo_size > v37 || v40 == 1;
  if ( !v25 )
  {
    if ( v11 == 48 )
    {
      v41 = v16;
      v26 = get_tinfo_property();
      LOWORD(v16) = v41;
      if ( (v26 & 0xF) == 9 && tinfo_size < v37 )
        goto LABEL_64;
    }
LABEL_18:
    v17 = (__int16)v16;
LABEL_19:
    v18 = 1;
    if ( v17 < v38 )
    {
      v43 = v33 == 1 && v17 >= v9;
      v18 = v43;
    }
    v19 = sub_2816C0(a1, (__int64)a2, (__int16)(v16 + 7) >> 3, v18, 0);
    if ( v19 == 2 )
      return 0;
    if ( !v15 )
      goto LABEL_53;
    v20 = *(__int64 **)(v10 + 24);
    if ( a2 == v20 )
      v20 = *(__int64 **)(v10 + 32);
    if ( v19 == 1 )
    {
      if ( (unsigned __int8)sub_279E20(*(_QWORD *)(a1 + 72), (__int64)(v20 + 6), v34, (__int64)(a2 + 6), 1) )
        return 0;
      v21 = get_tinfo_size();
      if ( v43 && (v9 < 8 * v21 || 8 * v39 > v9) && (v40 != v33 || v33 == 1) )
        return 0;
    }
LABEL_52:
    if ( 8 * get_tinfo_size() >= (unsigned __int64)v9 )
      goto LABEL_41;
LABEL_53:
    if ( v11 == 48 )
      goto LABEL_41;
    goto LABEL_40;
  }
LABEL_47:
  if ( v11 <= 0x45 )
  {
    if ( (*((_BYTE *)&off_4B2D60 + 16 * (int)v11 + 11) & 8) != 0 )
    {
      v28 = (__int16)v16;
      v29 = 8 * v39;
      if ( 8 * v39 < v9 )
        v29 = 8 * v37;
      if ( (__int16)v16 < v29 )
        goto LABEL_83;
    }
    if ( v11 - 22 <= 1 )
      goto LABEL_50;
    v28 = (__int16)v16;
    if ( (__int16)v16 - SHIWORD(v47) >= v9 || (__int16)v16 < v38 )
    {
LABEL_83:
      if ( v11 == 48 )
      {
        v46 = v28;
        v45 = v25;
        v42 = v16;
        v30 = get_tinfo_property();
        LOWORD(v16) = v42;
        v17 = v46;
        if ( ((v30 & 0xF) != 9 || tinfo_size >= v37) && v45 )
          goto LABEL_19;
LABEL_64:
        if ( !v15 )
          goto LABEL_41;
        goto LABEL_52;
      }
LABEL_50:
      if ( v25 )
        goto LABEL_18;
      goto LABEL_51;
    }
    goto LABEL_77;
  }
  if ( v9 <= (__int16)v16 - SHIWORD(v47) || v38 > (__int16)v16 )
    goto LABEL_50;
LABEL_51:
  if ( v15 )
    goto LABEL_52;
LABEL_40:
  if ( (get_tinfo_property() & 0xF) != 9 && v9 / 8 > v44 )
    return 0;
LABEL_41:
  v6 = sub_28B370(a1, (__int64)a2, (__int64)a2);
  if ( !(_BYTE)v6 )
    return 0;
  sub_250C50(a2, a2[3]);
  if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v6;
}

