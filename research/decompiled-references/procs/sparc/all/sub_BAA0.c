__int64 __fastcall sub_BAA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 flags; // rax
  _BYTE *v6; // r8
  const char *v7; // rcx
  __int64 v8; // rsi
  int v9; // edx
  bool v10; // dl
  int v11; // r14d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int8 *v15; // r13
  __int64 v16; // rbp
  _DWORD *v17; // r9
  unsigned __int8 *v18; // r15
  double v19; // xmm0_8
  char v20; // al
  __int64 i; // rbp
  double v22; // xmm0_8
  char v23; // al
  unsigned __int16 v25; // ax
  __int64 v26; // rsi
  char *v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rdi
  char *v31; // rax
  bool v32; // al
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rbp
  __int64 func; // rdi
  int v37; // eax
  unsigned __int8 v38; // al
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned __int8 default_reftype; // al
  int v44; // [rsp+Ch] [rbp-63Ch]
  __int64 v45; // [rsp+10h] [rbp-638h] BYREF
  __m128i si128; // [rsp+18h] [rbp-630h]
  __int128 v47; // [rsp+28h] [rbp-620h]
  __int64 v48; // [rsp+38h] [rbp-610h]
  __int64 v49; // [rsp+40h] [rbp-608h]
  __int64 v50; // [rsp+48h] [rbp-600h]
  __int64 v51; // [rsp+50h] [rbp-5F8h]
  __int64 v52; // [rsp+58h] [rbp-5F0h]
  __int64 v53; // [rsp+60h] [rbp-5E8h]
  __int64 v54; // [rsp+68h] [rbp-5E0h]
  __int64 v55; // [rsp+70h] [rbp-5D8h]
  __int128 v56; // [rsp+78h] [rbp-5D0h]
  __int128 v57; // [rsp+90h] [rbp-5B8h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-5A8h]
  __int64 v59; // [rsp+A8h] [rbp-5A0h]
  __int64 v60; // [rsp+B0h] [rbp-598h]
  char v61; // [rsp+B8h] [rbp-590h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-588h]
  __int16 v63; // [rsp+E6h] [rbp-562h]
  _BYTE v64[8]; // [rsp+1F8h] [rbp-450h] BYREF
  _BYTE v65[1023]; // [rsp+200h] [rbp-448h] BYREF
  char v66; // [rsp+5FFh] [rbp-49h] BYREF
  char v67; // [rsp+600h] [rbp-48h] BYREF
  unsigned __int64 v68; // [rsp+608h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 16);
  v68 = __readfsqword(0x28u);
  flags = get_flags_ex(v3, 4);
  v7 = *(const char **)(a1 + 16);
  v8 = *((unsigned int *)v7 + 26);
  v9 = *(unsigned __int16 *)(a2 + 24);
  if ( v9 >= (int)v8 && v9 < *((_DWORD *)v7 + 27) )
  {
    v11 = *(_DWORD *)(*((_QWORD *)v7 + 14) + 16LL * (v9 - (int)v8) + 8);
    v7 = (const char *)(v11 & 1);
    v44 = v11 & 1;
    v10 = !(v11 & 1);
  }
  else
  {
    v44 = 0;
    v10 = 1;
    v11 = 0;
  }
  *(_BYTE *)(a1 + 300) = v10;
  v12 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v12 <= 0x5Eu )
  {
    if ( (unsigned __int16)v12 > 0x5Cu )
    {
      if ( (flags & 0x800) == 0 )
      {
        v34 = *(_QWORD *)(a2 + 88);
        if ( v34 <= 5 )
          set_cmt(*(_QWORD *)(a2 + 16), off_16B60[(int)v34], 0);
      }
      goto LABEL_15;
    }
    if ( (unsigned __int16)v12 <= 0x13u )
    {
      if ( (unsigned __int16)v12 > 0x11u || (v12 = (unsigned int)(v12 - 9), (unsigned __int16)v12 <= 1u) )
      {
        if ( *(_BYTE *)(a2 + 32) == 8 && (*(_BYTE *)(a2 + 29) & 1) != 0 )
          *(_BYTE *)(a1 + 300) = 0;
      }
      goto LABEL_18;
    }
    if ( (_WORD)v12 != 82 || (flags & 0x800) != 0 )
      goto LABEL_18;
    v30 = *(_QWORD *)(a2 + 48);
    if ( (v30 & 1) != 0 )
    {
      v6 = v65;
      v7 = " #LoadLoad";
      v31 = v65;
      v8 = (__int64)&v66;
      do
      {
        v12 = *(unsigned __int8 *)v7++;
        *v31 = v12;
        if ( !(_BYTE)v12 )
        {
          if ( (v30 & 2) == 0 )
            goto LABEL_66;
          if ( v31 < &v67 )
            goto LABEL_62;
          goto LABEL_141;
        }
        ++v31;
        v12 = (unsigned __int64)&v66;
      }
      while ( v31 != &v66 );
      v66 = 0;
      if ( (v30 & 2) != 0 )
        goto LABEL_151;
      if ( (v30 & 4) == 0 )
        goto LABEL_73;
LABEL_69:
      if ( v31 == &v66 )
        goto LABEL_146;
      v7 = " #LoadStore";
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)v7++;
        *v31 = v8;
        if ( !(_BYTE)v8 )
          break;
        if ( ++v31 == &v66 )
          goto LABEL_146;
      }
LABEL_73:
      if ( (v30 & 8) == 0 )
        goto LABEL_80;
      if ( v31 < &v67 )
      {
        v12 = (unsigned __int64)&v66;
        goto LABEL_76;
      }
      if ( under_debugger )
LABEL_178:
        BUG();
      goto LABEL_142;
    }
    v6 = v65;
    v31 = v65;
    if ( (v30 & 2) == 0 )
      goto LABEL_66;
LABEL_62:
    v12 = (unsigned __int64)&v66;
    if ( v31 != &v66 )
    {
      v7 = " #StoreLoad";
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)v7++;
        *v31 = v8;
        if ( !(_BYTE)v8 )
          break;
        if ( ++v31 == &v66 )
          goto LABEL_151;
      }
LABEL_66:
      if ( (v30 & 4) == 0 )
        goto LABEL_73;
      if ( v31 < &v67 )
      {
        v12 = (unsigned __int64)&v66;
        goto LABEL_69;
      }
      if ( under_debugger )
        goto LABEL_178;
      goto LABEL_142;
    }
LABEL_151:
    v66 = 0;
    if ( (v30 & 4) != 0 )
    {
LABEL_146:
      v66 = 0;
      if ( (v30 & 8) == 0 )
      {
        v31 = &v66;
        if ( (v30 & 0x10) == 0 )
          goto LABEL_87;
LABEL_83:
        if ( v31 != &v66 )
        {
          v7 = " #Lookaside";
          while ( 1 )
          {
            v8 = *(unsigned __int8 *)v7++;
            *v31 = v8;
            if ( !(_BYTE)v8 )
              break;
            if ( ++v31 == &v66 )
              goto LABEL_157;
          }
LABEL_87:
          if ( (v30 & 0x20) != 0 )
          {
            if ( v31 >= &v67 )
            {
              if ( under_debugger )
                goto LABEL_178;
              goto LABEL_142;
            }
            v12 = (unsigned __int64)&v66;
LABEL_90:
            if ( v31 != &v66 )
            {
              v7 = " #MemIssue";
              do
              {
                v8 = *(unsigned __int8 *)v7++;
                *v31 = v8;
                if ( !(_BYTE)v8 )
                  goto LABEL_94;
              }
              while ( ++v31 != &v66 );
            }
LABEL_149:
            v66 = 0;
            if ( (v30 & 0x40) == 0 )
              goto LABEL_102;
            goto LABEL_150;
          }
LABEL_94:
          if ( (v30 & 0x40) == 0 )
            goto LABEL_101;
          if ( v31 < &v67 )
          {
            v12 = (unsigned __int64)&v66;
            goto LABEL_97;
          }
LABEL_141:
          if ( under_debugger )
            goto LABEL_178;
LABEL_142:
          interr(520);
          goto LABEL_143;
        }
LABEL_157:
        v66 = 0;
        if ( (v30 & 0x20) == 0 )
        {
          v31 = &v66;
          if ( (v30 & 0x40) == 0 )
            goto LABEL_101;
LABEL_97:
          if ( v31 != &v66 )
          {
            v7 = " #Sync";
            while ( 1 )
            {
              v8 = *(unsigned __int8 *)v7++;
              *v31 = v8;
              if ( !(_BYTE)v8 )
                break;
              if ( ++v31 == &v66 )
                goto LABEL_150;
            }
LABEL_101:
            if ( v31 == v65 )
              goto LABEL_18;
LABEL_102:
            v8 = (__int64)v65;
            set_cmt(*(_QWORD *)(a2 + 16), v65, 0);
            goto LABEL_18;
          }
LABEL_150:
          v66 = 0;
          goto LABEL_102;
        }
        goto LABEL_149;
      }
    }
    else
    {
      v31 = &v66;
      if ( (v30 & 8) == 0 )
      {
LABEL_80:
        if ( (v30 & 0x10) == 0 )
          goto LABEL_87;
        if ( v31 >= &v67 )
        {
          if ( under_debugger )
            goto LABEL_178;
          goto LABEL_142;
        }
        v12 = (unsigned __int64)&v66;
        goto LABEL_83;
      }
LABEL_76:
      if ( v31 != &v66 )
      {
        v7 = " #StoreStore";
        do
        {
          v8 = *(unsigned __int8 *)v7++;
          *v31 = v8;
          if ( !(_BYTE)v8 )
            goto LABEL_80;
        }
        while ( ++v31 != &v66 );
      }
    }
    v66 = 0;
    if ( (v30 & 0x10) == 0 )
    {
      v31 = &v66;
      if ( (v30 & 0x20) != 0 )
        goto LABEL_90;
      goto LABEL_94;
    }
    goto LABEL_157;
  }
  if ( (_WORD)v12 != 158 )
  {
    if ( (_WORD)v12 != 163 )
    {
      if ( (_WORD)v12 != 106 )
        goto LABEL_18;
      goto LABEL_15;
    }
    if ( !(unsigned __int8)is_off(flags, 0) )
    {
LABEL_124:
      v13 = *(_QWORD *)(a2 + 16);
      if ( v13 <= 3 )
        goto LABEL_16;
      if ( (unsigned int)sub_B8C0(v13 - 4) == 1073741826 )
      {
        v42 = *(_QWORD *)(a2 + 16);
        default_reftype = get_default_reftype(v42);
        op_offset(v42, 0, default_reftype, -1, v42 - 4, 0);
      }
      v13 = *(_QWORD *)(a2 + 16);
      if ( v13 <= 7 )
        goto LABEL_16;
      v37 = sub_B8C0(v13 - 8);
      v13 = *(_QWORD *)(a2 + 16);
      if ( v37 != 1073741827 )
        goto LABEL_16;
      v38 = get_default_reftype(*(_QWORD *)(a2 + 16));
      op_offset(v13, 0, v38, -1, v13 - 8, 0);
LABEL_15:
      v13 = *(_QWORD *)(a2 + 16);
LABEL_16:
      v14 = get_flags_ex(v13, 0);
      v8 = 1;
      if ( (unsigned __int8)is_defarg(v14, 1) )
      {
        v8 = 1;
        clr_op_type(v13, 1);
      }
      goto LABEL_18;
    }
LABEL_143:
    if ( !(unsigned __int8)get_refinfo(&v45, *(_QWORD *)(a2 + 16), 0) || si128.m128i_i64[0] )
      goto LABEL_15;
    goto LABEL_124;
  }
  if ( *(_BYTE *)(a2 + 41) != 3 )
    goto LABEL_18;
  v8 = 4;
  if ( !(unsigned __int8)getinf_flag(10, 4) )
    goto LABEL_18;
  v33 = *(_QWORD *)(a2 + 16);
  v45 = 0x800000;
  si128 = _mm_load_si128((const __m128i *)&xmmword_13CC0);
  v47 = -1;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0xFFFFFFFFLL;
  v52 = 0;
  v53 = 2;
  v54 = -1;
  v55 = 0;
  v56 = 0;
  if ( (int)get_flags_ex(v33, 4) < 0 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( get_switch_info(&v45, v8) > 0 && (v45 & 0x800000) != 0 && (int)v53 > 1 && (v45 & 0x10) != 0 )
    {
      if ( !v55 )
        goto LABEL_18;
LABEL_114:
      *(_QWORD *)&v56 = 0;
      qfree();
      goto LABEL_18;
    }
  }
  v8 = (__int64)&v45;
  v41 = sub_AB00(0x28u, &v45, a2);
  if ( v41 != -1 )
  {
    if ( v41 == 1 || (v8 = a2, (unsigned __int8)check_for_table_jump(&v45, a2, &off_16B40, 1, 0, 0)) )
    {
      set_switch_info(*(_QWORD *)(a2 + 16), &v45);
      v8 = (__int64)&v45;
      create_switch_table(*(_QWORD *)(a2 + 16), &v45);
    }
  }
  if ( v55 )
    goto LABEL_114;
LABEL_18:
  v15 = (unsigned __int8 *)(a2 + 40);
  v16 = 0;
  v17 = dword_13C80;
  v18 = (unsigned __int8 *)(a2 + 40);
  do
  {
    if ( (dword_13C80[v16] & v11) != 0 )
    {
      v19 = is_forced_operand(*(_QWORD *)(a2 + 16), (unsigned int)v16, v12, v7, v6, dword_13C80);
      v8 = a2;
      sub_B440(a1, a2, v18, v20, 1u, v19);
      v17 = dword_13C80;
    }
    ++v16;
    v18 += 40;
  }
  while ( v16 != 3 );
  for ( i = 0; i != 3; ++i )
  {
    if ( (dword_13CA0[i] & v11) != 0 )
    {
      v22 = is_forced_operand(*(_QWORD *)(a2 + 16), (unsigned int)i, v12, v7, v6, v17);
      v8 = a2;
      sub_B440(a1, a2, v15, v23, 0, v22);
    }
    v15 += 40;
  }
  if ( *(_BYTE *)(a1 + 300) )
  {
    if ( (unsigned __int8)segtype(*(_QWORD *)(a2 + 16), v8, v12, v7, v6, v17) == 1
      || (v32 = sub_B920(*(_QWORD *)(a2 + 16), 0), v44)
      || v32 )
    {
      *(_BYTE *)(a1 + 300) = 0;
    }
    else
    {
      add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
    }
  }
  if ( (unsigned __int8)getinf_flag(10, 4096) && (unsigned int)get_auto_state() == 40 )
  {
    if ( !*(_BYTE *)(a1 + 300) )
    {
      recalc_spd(*(_QWORD *)(a2 + 16));
      goto LABEL_28;
    }
    v25 = *(_WORD *)(a2 + 24);
    if ( v25 == 135 )
    {
      if ( *(_WORD *)(a2 + 46) == 14 && *(_BYTE *)(a2 + 81) == 5 && *(_WORD *)(a2 + 126) == 14 )
      {
        v35 = *(_QWORD *)(a2 + 88);
        func = get_func(*(_QWORD *)(a2 + 16));
        if ( func )
          add_auto_stkpnt(func, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), -v35);
      }
    }
    else if ( v25 > 0x87u )
    {
      if ( (v25 & 0xFFFD) == 0xAD && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0xE000000000100LL )
      {
        v39 = *(_QWORD *)(a2 + 48);
        if ( v25 != 173 )
          v39 = -*(_QWORD *)(a2 + 48);
        v40 = get_func(*(_QWORD *)(a2 + 16));
        if ( v40 )
          add_auto_stkpnt(v40, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), v39);
      }
    }
    else
    {
      if ( v25 != 1 && v25 != 101 || *(_WORD *)(a2 + 46) != 14 || *(_WORD *)(a2 + 126) != 14 )
        goto LABEL_28;
      v26 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a2 + 81) == 5 )
      {
        v28 = *(_QWORD *)(a2 + 88);
        v29 = get_func(*(_QWORD *)(a2 + 16));
        if ( !v29 )
          goto LABEL_28;
        goto LABEL_57;
      }
      v58 = -1;
      v27 = &v61;
      v59 = 0;
      v60 = 0;
      v57 = -1;
      do
      {
        *(_WORD *)v27 = 0;
        v27 += 40;
        *((_WORD *)v27 - 19) = 0;
        *((_WORD *)v27 - 18) = 0;
        *((_DWORD *)v27 - 2) = 0;
        *((_WORD *)v27 - 17) = 0;
        *((_OWORD *)v27 - 2) = 0;
        *((_QWORD *)v27 - 2) = 0;
      }
      while ( v64 != v27 );
      if ( decode_prev_insn(&v57, v26, v64, 0.0) != -1 && (_WORD)v59 == 163 && v63 == *(_WORD *)(a2 + 86) )
      {
        v28 = v62;
        if ( v62 )
        {
          v29 = get_func(*(_QWORD *)(a2 + 16));
          if ( v29 )
LABEL_57:
            add_auto_stkpnt(v29, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), v28);
        }
      }
    }
  }
LABEL_28:
  if ( (unsigned __int8)getinf_flag(10, 512)
    && (unsigned int)get_auto_state() == 40
    && *(_WORD *)(a2 + 24) == 1
    && *(_BYTE *)(a2 + 81) == 5
    && (*(_WORD *)(a2 + 46) & 0xFFEF) == 0xE
    && (*(_WORD *)(a2 + 126) & 0xFFEF) != 0xE
    && (unsigned __int8)insn_create_stkvar(a2, a2 + 80, *(_QWORD *)(a2 + 88), 0) )
  {
    op_stkvar(*(_QWORD *)(a2 + 16), 1);
  }
  return 1;
}
