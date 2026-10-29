__int64 __fastcall sub_DC10(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rdx
  int v6; // eax
  int v7; // ecx
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // al
  __int64 v10; // r9
  __int16 v11; // dx
  int v12; // r15d
  int v13; // r14d
  int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 flags; // rbp
  __int16 v18; // ax
  unsigned __int16 v19; // dx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r13
  unsigned __int8 default_reftype; // al
  __int64 word; // rsi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rbp
  unsigned __int8 byte; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 func; // rax
  __int64 v46; // rbp
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 spd; // rbp
  __int64 v50; // rdi
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rbp
  __int64 v54; // rdi
  __int16 v55; // ax
  __int64 v56; // rsi
  __int16 v57; // ax
  __int64 dword; // rsi
  unsigned __int8 v59; // [rsp+2h] [rbp-46h]
  unsigned __int8 v60; // [rsp+3h] [rbp-45h]
  int v61; // [rsp+4h] [rbp-44h]
  unsigned int v62; // [rsp+4h] [rbp-44h]
  unsigned int v63; // [rsp+8h] [rbp-40h]
  int v64; // [rsp+Ch] [rbp-3Ch]

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(unsigned __int16 *)(a2 + 24);
  v7 = *(_DWORD *)(v5 + 104);
  if ( v7 > v6 || *(_DWORD *)(v5 + 108) <= v6 )
  {
    *(_BYTE *)(a1 + 208) = 1;
    is_forced_operand(*(_QWORD *)(a2 + 16), 0);
    is_forced_operand(*(_QWORD *)(a2 + 16), 1);
    is_forced_operand(*(_QWORD *)(a2 + 16), 2);
  }
  else
  {
    v61 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v6 - v7) + 8);
    *(_BYTE *)(a1 + 208) = ~(_BYTE)v61;
    *(_BYTE *)(a1 + 208) &= 1u;
    v60 = is_forced_operand(*(_QWORD *)(a2 + 16), 0);
    v8 = is_forced_operand(*(_QWORD *)(a2 + 16), 1);
    v9 = is_forced_operand(*(_QWORD *)(a2 + 16), 2);
    v11 = v61;
    v59 = v9;
    v12 = v61 & 4;
    v13 = v61 & 8;
    v14 = v61 & 0x10;
    v62 = v61 & 0x200;
    v63 = v11 & 0x400;
    v64 = v11 & 0x4000;
    if ( (v11 & 0x100) != 0 )
      sub_D1A0(a1, a2, (unsigned __int8 *)(a2 + 40), v60, 1u, v10, a3);
    v15 = v62;
    if ( v62 )
      sub_D1A0(a1, a2, (unsigned __int8 *)(a2 + 80), v8, 1u, v10, a3);
    v16 = v63;
    if ( v63 )
      sub_D1A0(a1, a2, (unsigned __int8 *)(a2 + 120), v59, 1u, v10, a3);
    if ( v64 )
      remember_problem(6, *(_QWORD *)(a2 + 16), 0);
    if ( v12 )
      sub_D1A0(a1, a2, (unsigned __int8 *)(a2 + 40), v60, 0, v10, a3);
    if ( v13 )
      sub_D1A0(a1, a2, (unsigned __int8 *)(a2 + 80), v8, 0, v10, a3);
    if ( v14 )
    {
      sub_D1A0(a1, a2, (unsigned __int8 *)(a2 + 120), v59, 0, v10, a3);
      if ( *(_WORD *)(a2 + 24) != 170 )
        goto LABEL_20;
      goto LABEL_17;
    }
  }
  if ( *(_WORD *)(a2 + 24) == 170 )
  {
LABEL_17:
    sub_DA00(a1, a2);
    sub_AD30(a2);
  }
LABEL_20:
  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 4, v16, v15);
  v18 = *(_WORD *)(a2 + 24);
  if ( v18 != 189 )
    goto LABEL_21;
  if ( (flags & 0x800) == 0 )
  {
    word = (unsigned __int16)get_word(*(_QWORD *)(a2 + 16));
    v35 = sub_13B00(a1, word, 0, v32, v33, v34);
    if ( v35 && *(_QWORD *)(v35 + 40) > 1u )
      set_cmt(*(_QWORD *)(a2 + 16), *(_QWORD *)(v35 + 32), 0);
    v18 = *(_WORD *)(a2 + 24);
LABEL_21:
    if ( v18 == 182 )
    {
      if ( *(_BYTE *)(a2 + 41) != 5 || *(_QWORD *)(a2 + 48) > 0xFu )
        goto LABEL_24;
      v21 = getinf(5);
      if ( (unsigned int)v21 <= 0xD )
      {
        v22 = -8293;
        if ( !_bittest64(&v22, v21) )
        {
          v23 = 4LL * *(_QWORD *)(a2 + 48) + 128;
          if ( (unsigned __int8)is_mapped(v23) )
          {
            add_dref(*(_QWORD *)(a2 + 16), v23, 1);
            dword = (unsigned int)get_dword(v23);
            add_cref(*(_QWORD *)(a2 + 16), dword, 17);
          }
        }
      }
      v18 = *(_WORD *)(a2 + 24);
    }
    if ( v18 == 119 )
    {
      if ( (flags & 0xF000000) != 0 )
        goto LABEL_24;
      if ( (unsigned __int8)is_invsign(*(_QWORD *)(a2 + 16), flags, 1) == ((*(_WORD *)(a1 + 184) & 1) == 0) )
        toggle_sign(*(_QWORD *)(a2 + 16), 1);
      v18 = *(_WORD *)(a2 + 24);
    }
    if ( (v18 == 118 || v18 == 145)
      && *(_BYTE *)(a2 + 41) == 2
      && (flags & 0xF00000) == 0
      && (int)get_auto_state() > 39
      && !sub_B600(a2) )
    {
      v25 = *(_QWORD *)(a1 + 32);
      v26 = 16LL * *(_QWORD *)a2;
      v27 = *(_QWORD *)(v25 + 16);
      v28 = v26 + *(_QWORD *)(a2 + 56);
      if ( v28 != v27 )
      {
        v27 &= v28;
        if ( v28 == -1 )
          v27 = -1;
      }
      if ( (get_flags_ex(v27, 4, v25, v24) & 0x600) != 0x200 )
      {
        v29 = *(_QWORD *)(a2 + 16);
        default_reftype = get_default_reftype(v29);
        op_offset(v29, 0, default_reftype, -1, v26, 0);
      }
    }
  }
LABEL_24:
  if ( !(unsigned __int8)getinf_flag(10, 4096) || (unsigned int)get_auto_state() != 40 )
    goto LABEL_25;
  v44 = *(_QWORD *)(a2 + 16);
  if ( !*(_BYTE *)(a1 + 208) )
  {
    recalc_spd(v44);
    v19 = *(_WORD *)(a2 + 24);
    goto LABEL_26;
  }
  func = get_func(v44);
  v19 = *(_WORD *)(a2 + 24);
  if ( !func )
    goto LABEL_26;
  if ( v19 == 119 )
  {
    v53 = *(_QWORD *)(a2 + 88);
    v54 = get_func(*(_QWORD *)(a2 + 16));
    if ( !v54 )
      goto LABEL_25;
    add_auto_stkpnt(v54, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), v53 - 4);
    v19 = *(_WORD *)(a2 + 24);
    goto LABEL_26;
  }
  if ( v19 <= 0x77u )
  {
    switch ( v19 )
    {
      case 0x75u:
        goto LABEL_27;
      case 0x76u:
        if ( *(_WORD *)(a2 + 86) != 15 || *(_BYTE *)(a2 + 41) != 4 )
          goto LABEL_27;
        v51 = *(_QWORD *)(a2 + 56);
        v52 = get_func(*(_QWORD *)(a2 + 16));
        if ( !v52 )
          goto LABEL_25;
        add_auto_stkpnt(v52, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), v51);
        v19 = *(_WORD *)(a2 + 24);
        goto LABEL_26;
      case 5u:
        goto LABEL_81;
      case 0x1Au:
        goto LABEL_27;
      case 3u:
LABEL_81:
        if ( *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) != 15 )
          goto LABEL_27;
        v46 = *(_QWORD *)(a2 + 48);
        v47 = get_func(*(_QWORD *)(a2 + 16));
        if ( v47 )
        {
          add_auto_stkpnt(v47, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), v46);
          v19 = *(_WORD *)(a2 + 24);
          goto LABEL_26;
        }
LABEL_25:
        v19 = *(_WORD *)(a2 + 24);
        goto LABEL_26;
    }
    goto LABEL_100;
  }
  if ( v19 == 177 )
    goto LABEL_107;
  if ( v19 > 0xB1u )
  {
    if ( v19 != 185 )
      goto LABEL_100;
    spd = get_spd(func, *(_QWORD *)(a2 + 16));
LABEL_91:
    v50 = get_func(*(_QWORD *)(a2 + 16));
    if ( !v50 )
      goto LABEL_25;
    add_auto_stkpnt(v50, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), -spd);
    v19 = *(_WORD *)(a2 + 24);
    goto LABEL_26;
  }
  if ( v19 == 145 )
  {
    v48 = get_func(*(_QWORD *)(a2 + 16));
    if ( !v48 )
      goto LABEL_25;
    add_auto_stkpnt(v48, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), -4);
    v19 = *(_WORD *)(a2 + 24);
    goto LABEL_26;
  }
  if ( v19 == 175 )
  {
LABEL_107:
    if ( *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) != 15 )
      goto LABEL_27;
    spd = *(_QWORD *)(a2 + 48);
    goto LABEL_91;
  }
LABEL_100:
  if ( *(_BYTE *)(a2 + 81) == 3 )
  {
    v57 = *(_WORD *)(a2 + 86);
    if ( (v57 & 0x38) == 0x20 )
    {
      if ( (v57 & 7 | 8) == 0xF )
      {
        sub_B8B0(a2, a2 + 40, 1);
        v19 = *(_WORD *)(a2 + 24);
        goto LABEL_26;
      }
    }
    else if ( (*(_WORD *)(a2 + 86) & 0x38) == 0x18 && (v57 & 7 | 8) == 0xF )
    {
      sub_B8B0(a2, a2 + 40, 0);
      v19 = *(_WORD *)(a2 + 24);
      goto LABEL_26;
    }
  }
  if ( *(_BYTE *)(a2 + 41) == 3 )
  {
    v55 = *(_WORD *)(a2 + 46);
    v56 = a2 + 80;
    if ( (v55 & 0x38) == 0x18 )
    {
      if ( (v55 & 7 | 8) == 0xF )
      {
        sub_B8B0(a2, v56, 0);
        v19 = *(_WORD *)(a2 + 24);
      }
      goto LABEL_26;
    }
    if ( (*(_WORD *)(a2 + 46) & 0x38) == 0x20 && (v55 & 7 | 8) == 0xF )
    {
      sub_B8B0(a2, v56, 1);
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( v19 == 116
    && *(_BYTE *)(a2 + 41) == 4
    && (unsigned __int8)get_byte(*(_QWORD *)(a2 + 16)) == 78
    && (unsigned __int8)get_byte(*(_QWORD *)(a2 + 16) + 1LL) == 0xFB
    && (unsigned __int8)get_byte(*(_QWORD *)(a2 + 16) + 2LL) == 24
    && (unsigned __int8)get_byte(*(_QWORD *)(a2 + 16) + 3LL) == 6 )
  {
    v36 = *(_QWORD *)(a2 + 16) - 18LL;
    if ( (unsigned __int8)equal_bytes(v36, &unk_16E10, 255, 22, 1)
      || (v36 = *(_QWORD *)(a2 + 16) - 16LL, (unsigned __int8)equal_bytes(v36, &unk_16DF0, 255, 20, 1)) )
    {
      byte = get_byte(v36 + 1);
      if ( (byte & 7) == 0 )
      {
        v39 = *(_QWORD *)(a2 + 16);
        v40 = (unsigned __int64)byte >> 3;
        v41 = v39 + 4;
        if ( v40 )
        {
          v42 = v41 + 8 * v40;
          do
          {
            if ( (get_flags_ex(v41, 4, v38, v39) & 0x600) == 0 )
            {
              create_data(v41, 0x20000000, 4, -1);
              set_op_type(v41, 0x11111101100000LL, 0);
            }
            v43 = v41 + 4;
            v41 += 8;
            add_cref(*(_QWORD *)(a2 + 16), v43, 19);
          }
          while ( v42 != v41 );
        }
      }
    }
  }
LABEL_27:
  if ( *(_BYTE *)(a1 + 208) )
    add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
  return 1;
}

