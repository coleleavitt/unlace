__int64 __fastcall sub_4B40(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // al
  __int64 v8; // r9
  __int16 v9; // dx
  int v10; // r15d
  int v11; // ebp
  int v12; // r13d
  unsigned __int16 v13; // ax
  bool v14; // cc
  char v15; // al
  char does_return; // r12
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  char v21; // cl
  unsigned __int16 v22; // dx
  __int64 func; // rax
  __int64 ind_purged; // rbp
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  char v28; // si
  char v29; // dl
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  char v33; // si
  unsigned __int8 v34; // [rsp+2h] [rbp-56h]
  unsigned __int8 v35; // [rsp+3h] [rbp-55h]
  int v36; // [rsp+4h] [rbp-54h]
  int v37; // [rsp+4h] [rbp-54h]
  int v38; // [rsp+8h] [rbp-50h]
  int v39; // [rsp+Ch] [rbp-4Ch]
  int v40; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v41; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v41 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    v12 = 0;
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    *(_BYTE *)(a1 + 154) = 1;
  }
  else
  {
    v36 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    v6 = is_forced_operand();
    v34 = is_forced_operand();
    v7 = is_forced_operand();
    v9 = v36;
    v35 = v7;
    v10 = v36 & 8;
    v11 = v36 & 0x10;
    v12 = v36 & 2;
    *(_BYTE *)(a1 + 154) = ~(_BYTE)v36;
    *(_BYTE *)(a1 + 154) &= 1u;
    v37 = v36 & 0x200;
    v38 = v9 & 0x400;
    v39 = v9 & 4;
    if ( (v9 & 0x100) != 0 )
      sub_4890(a1, a2, (unsigned __int8 *)(a2 + 40), v6, 1, v8, a3);
    if ( v37 )
      sub_4890(a1, a2, (unsigned __int8 *)(a2 + 80), v34, 1, v8, a3);
    if ( v38 )
      sub_4890(a1, a2, (unsigned __int8 *)(a2 + 120), v35, 1, v8, a3);
    if ( v39 )
      sub_4890(a1, a2, (unsigned __int8 *)(a2 + 40), v6, 0, v8, a3);
    if ( v10 )
      sub_4890(a1, a2, (unsigned __int8 *)(a2 + 80), v34, 0, v8, a3);
    if ( v11 )
    {
      sub_4890(a1, a2, (unsigned __int8 *)(a2 + 120), v35, 0, v8, a3);
      if ( (unsigned __int8)segtype() != 1 )
        goto LABEL_15;
      goto LABEL_28;
    }
  }
  if ( (unsigned __int8)segtype() != 1 )
  {
LABEL_15:
    v13 = *(_WORD *)(a2 + 24);
    v14 = v13 <= 0x54u;
    if ( v13 != 84 )
      goto LABEL_16;
LABEL_29:
    if ( (unsigned __int16)(*(_WORD *)(a2 + 86) - 11) <= 4u )
      goto LABEL_30;
    goto LABEL_20;
  }
LABEL_28:
  *(_BYTE *)(a1 + 154) = 0;
  v13 = *(_WORD *)(a2 + 24);
  v14 = v13 <= 0x54u;
  if ( v13 == 84 )
    goto LABEL_29;
LABEL_16:
  if ( v14 )
  {
    if ( v13 == 81 || v13 == 83 )
    {
LABEL_19:
      if ( (unsigned __int16)(*(_WORD *)(a2 + 86) - 11) > 4u )
        goto LABEL_20;
LABEL_30:
      split_sreg_range();
      if ( !v12 )
        goto LABEL_21;
      goto LABEL_31;
    }
  }
  else if ( v13 == 85 )
  {
    goto LABEL_19;
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_21;
LABEL_31:
  get_first_fcref_from();
  does_return = func_does_return();
  if ( (unsigned __int8)getinf_flag() )
  {
    get_func();
    if ( (int)get_func_chunknum() >= 0 )
    {
      func = get_func();
      if ( func )
      {
        ind_purged = *(_QWORD *)(func + 48);
        if ( (*(_BYTE *)(func + 16) & 2) != 0 && *(_BYTE *)(a2 + 41) == 7 )
          ind_purged += 2;
        goto LABEL_61;
      }
      ind_purged = get_ind_purged();
      if ( ind_purged != -1 )
      {
LABEL_61:
        if ( ind_purged && get_func() )
          add_auto_stkpnt();
      }
    }
  }
  if ( !does_return )
    *(_BYTE *)(a1 + 154) = 0;
LABEL_21:
  if ( !(unsigned __int8)getinf_flag() )
    goto LABEL_22;
  if ( (unsigned int)get_auto_state() != 40 )
    goto LABEL_22;
  v18 = get_func();
  v19 = v18;
  if ( !v18 )
    goto LABEL_22;
  v20 = *(_QWORD *)(v18 + 16);
  if ( (v20 & 0x22) == 0 && ((*(_WORD *)(a2 + 24) - 71) & 0xFFFD) == 0 )
  {
    *(_QWORD *)(v19 + 16) = v20 | 2;
    update_func();
    reanalyze_callers();
  }
  v15 = *(_BYTE *)(a1 + 154);
  if ( !v15 )
  {
    recalc_spd();
    v15 = *(_BYTE *)(a1 + 154);
    goto LABEL_23;
  }
  v21 = *(_BYTE *)(a2 + 41);
  if ( v21 != 3 )
  {
    if ( *(_BYTE *)(a2 + 81) == 3 && *(_WORD *)(a2 + 86) == 7 && *(_BYTE *)(a2 + 112) == 1 )
    {
      if ( v21 == 8 )
      {
        v25 = *(unsigned __int16 *)(a2 + 46);
        v26 = 8;
        v27 = 0;
        do
        {
          v28 = v25;
          v25 >>= 1;
          v27 += v28 & 1;
          --v26;
        }
        while ( v26 );
      }
      goto LABEL_81;
    }
    v22 = *(_WORD *)(a2 + 24);
    if ( v22 == 16 )
      goto LABEL_48;
LABEL_45:
    if ( v22 > 0x10u )
    {
      if ( v22 != 17 )
        goto LABEL_23;
    }
    else if ( v22 != 15 )
    {
      if ( v22 <= 0xCu )
        goto LABEL_23;
LABEL_48:
      if ( *(_WORD *)(a2 + 86) != 7 )
        goto LABEL_23;
      if ( v21 == 5 )
      {
        v40 = *(_QWORD *)(a2 + 48);
LABEL_52:
        if ( !get_func() )
          goto LABEL_22;
LABEL_70:
        add_auto_stkpnt();
        v15 = *(_BYTE *)(a1 + 154);
        goto LABEL_23;
      }
LABEL_50:
      if ( v21 != 1 )
        goto LABEL_23;
      if ( !(unsigned __int8)sub_45C0(a2, *(unsigned __int16 *)(a2 + 46), &v40) )
        goto LABEL_22;
      goto LABEL_52;
    }
    if ( *(_WORD *)(a2 + 86) != 7 )
      goto LABEL_23;
    if ( v21 == 5 )
    {
      v40 = *(_QWORD *)(a2 + 48);
    }
    else
    {
      if ( v21 != 1 )
        goto LABEL_23;
      if ( !(unsigned __int8)sub_45C0(a2, *(unsigned __int16 *)(a2 + 46), &v40) )
        goto LABEL_22;
    }
    if ( !get_func() )
      goto LABEL_22;
    goto LABEL_70;
  }
  if ( *(_WORD *)(a2 + 46) == 7 )
  {
    v29 = *(_BYTE *)(a2 + 72);
    if ( v29 == 2 )
    {
      if ( *(_BYTE *)(a2 + 81) == 8 )
      {
        v30 = *(unsigned __int16 *)(a2 + 86);
        v31 = 8;
        v32 = 0;
        do
        {
          v33 = v30;
          v30 >>= 1;
          v32 += v33 & 1;
          --v31;
        }
        while ( v31 );
      }
LABEL_81:
      if ( get_func() )
LABEL_82:
        add_auto_stkpnt();
LABEL_22:
      v15 = *(_BYTE *)(a1 + 154);
      goto LABEL_23;
    }
    if ( *(_BYTE *)(a2 + 81) == 3 && *(_WORD *)(a2 + 86) == 7 && *(_BYTE *)(a2 + 112) == 1 )
      goto LABEL_81;
    if ( v29 == 1 )
    {
      if ( !get_func() )
        goto LABEL_22;
      goto LABEL_82;
    }
    goto LABEL_73;
  }
  if ( *(_BYTE *)(a2 + 81) != 3 || *(_WORD *)(a2 + 86) != 7 )
  {
LABEL_73:
    v22 = *(_WORD *)(a2 + 24);
    if ( v22 != 16 )
      goto LABEL_45;
    if ( *(_WORD *)(a2 + 86) == 7 )
      goto LABEL_50;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a2 + 112) == 1 )
    goto LABEL_81;
  v22 = *(_WORD *)(a2 + 24);
  if ( v22 != 16 )
    goto LABEL_45;
LABEL_23:
  if ( v15 )
    add_cref();
  return 1;
}

