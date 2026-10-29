__int64 __fastcall sub_BB40(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  int v5; // eax
  int v7; // ecx
  int v8; // r13d
  int v9; // r14d
  int v10; // r15d
  _BOOL4 v11; // r12d
  unsigned __int8 v12; // al
  __int64 v13; // rdi
  unsigned __int8 v14; // al
  __int64 v15; // rdi
  unsigned __int8 v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // edx
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdi
  __int16 v29; // ax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  int v37; // eax
  __int64 v38; // rdx
  char *v39[45]; // [rsp-170h] [rbp-348h] BYREF
  int v40; // [rsp+8h] [rbp-1D0h]
  int v41; // [rsp+Ch] [rbp-1CCh]
  int v42; // [rsp+10h] [rbp-1C8h]
  unsigned int v43; // [rsp+14h] [rbp-1C4h]
  unsigned int v44; // [rsp+18h] [rbp-1C0h]
  unsigned int v45; // [rsp+1Ch] [rbp-1BCh]
  __int64 v46; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-1B0h] BYREF
  _QWORD v48[53]; // [rsp+30h] [rbp-1A8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned __int16 *)(a2 + 24);
  v48[45] = __readfsqword(0x28u);
  v7 = *(_DWORD *)(v4 + 104);
  if ( v5 >= v7 && *(_DWORD *)(v4 + 108) > v5 )
  {
    v37 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + 16LL * (v5 - v7) + 8);
    v10 = v37 & 0x100;
    v41 = v37 & 4;
    v11 = (v37 & 1) == 0;
    v42 = v37 & 0x10;
    v9 = v37 & 0x200;
    v8 = v37 & 0x400;
    v40 = v37 & 8;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 1;
    v42 = 0;
    v40 = 0;
    v41 = 0;
  }
  v12 = is_forced_operand(*(_QWORD *)(a2 + 16), 0);
  v13 = *(_QWORD *)(a2 + 16);
  v43 = v12;
  v14 = is_forced_operand(v13, 1);
  v15 = *(_QWORD *)(a2 + 16);
  v44 = v14;
  v16 = is_forced_operand(v15, 2);
  *(_DWORD *)(a1 + 3168) = v11;
  v17 = *(_QWORD *)(a2 + 16);
  v18 = *(_QWORD *)(a1 + 248);
  v45 = v16;
  netnode_supdel(v18, v17, 323);
  if ( v10 )
  {
    sub_B400(a1, a2, (unsigned __int8 *)(a2 + 40), v43, 1, v19, a3);
    if ( !v9 )
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_7;
      goto LABEL_36;
    }
  }
  else if ( !v9 )
  {
    goto LABEL_6;
  }
  sub_B400(a1, a2, (unsigned __int8 *)(a2 + 80), v44, 1, v19, a3);
  if ( !v8 )
  {
LABEL_7:
    if ( !v41 )
      goto LABEL_8;
    goto LABEL_37;
  }
LABEL_36:
  sub_B400(a1, a2, (unsigned __int8 *)(a2 + 120), v45, 1, v19, a3);
  if ( !v41 )
  {
LABEL_8:
    if ( !v40 )
      goto LABEL_9;
LABEL_38:
    sub_B400(a1, a2, (unsigned __int8 *)(a2 + 80), v44, 0, v19, a3);
    if ( !v42 )
      goto LABEL_10;
LABEL_39:
    sub_B400(a1, a2, (unsigned __int8 *)(a2 + 120), v45, 0, v19, a3);
    goto LABEL_10;
  }
LABEL_37:
  sub_B400(a1, a2, (unsigned __int8 *)(a2 + 40), v43, 0, v19, a3);
  if ( v40 )
    goto LABEL_38;
LABEL_9:
  if ( v42 )
    goto LABEL_39;
LABEL_10:
  if ( (unsigned __int8)segtype(*(_QWORD *)(a2 + 16)) == 1
    || *(_DWORD *)(a1 + 3168) && (unsigned __int8)sub_9950(a1, (const void *)a2) )
  {
    *(_DWORD *)(a1 + 3168) = 0;
  }
  if ( (unsigned __int8)getinf_flag(10, 4096) )
  {
    if ( (unsigned int)get_auto_state() == 40 )
    {
      sub_B3A0(a1, a2);
      if ( !*(_DWORD *)(a1 + 3168) )
        recalc_spd(*(_QWORD *)(a2 + 16));
    }
  }
  v22 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v22 > 0x24u )
  {
    if ( (_WORD)v22 == 157 )
      goto LABEL_16;
LABEL_28:
    if ( *(_DWORD *)(a1 + 280) == *(_DWORD *)(a1 + 276) && ((_WORD)v22 == 1 || (_WORD)v22 == 94) )
    {
      qmemcpy(v48, (const void *)a2, 0x168u);
      if ( decode_prev_insn(v48, *(_QWORD *)(a2 + 16)) != -1
        && LOWORD(v48[3]) == 160
        && BYTE1(v48[10]) == 1
        && *(_WORD *)(a2 + 86) == HIWORD(v48[10]) )
      {
        v38 = 386;
        if ( *(_WORD *)(a2 + 24) != 94 )
          v38 = 130;
        op_offset(*(_QWORD *)(a2 + 16), 0, v38, -1, v48[6] & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), 0);
      }
    }
    goto LABEL_29;
  }
  if ( (unsigned __int16)v22 <= 8u )
    goto LABEL_28;
  v23 = 0x1800000A00LL;
  if ( !_bittest64(&v23, v22) )
    goto LABEL_29;
LABEL_16:
  v46 = -1;
  v24 = *(unsigned __int16 *)(a2 + 46);
  qmemcpy(v39, (const void *)a2, sizeof(v39));
  if ( !(unsigned __int8)sub_AD00(
                           a1,
                           (char *)&v46,
                           v24,
                           nullptr,
                           v20,
                           v21,
                           (char)v39[0],
                           (int)v39[1],
                           v39[2],
                           (unsigned __int16)v39[3],
                           (int)v39[4],
                           (__int64)v39[5],
                           (__int64)v39[6],
                           (__int64)v39[7],
                           (int)v39[8],
                           (int)v39[9],
                           (__int64)v39[10]) )
  {
    netnode_supdel(*(_QWORD *)(a1 + 248), *(_QWORD *)(a2 + 16), 323);
    v35 = *(_DWORD *)(a1 + 3168);
    goto LABEL_30;
  }
  v25 = v46;
  if ( (*(_WORD *)(a2 + 24) & 0xFFFD) == 9 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v46 + *(_QWORD *)(a2 + 16) + 4);
    v46 = v25;
  }
  if ( !(unsigned __int8)is_loaded(v25) )
  {
LABEL_29:
    v35 = *(_DWORD *)(a1 + 3168);
    goto LABEL_30;
  }
  v26 = *(_QWORD *)(a2 + 16);
  v27 = ea2node(v25);
  v28 = *(_QWORD *)(a1 + 248);
  v47 = v27;
  netnode_supset(v28, v26, &v47, 8, 323);
  v29 = *(_WORD *)(a2 + 24);
  v30 = *(_QWORD *)(a2 + 16);
  if ( v29 != 35 && v29 != 9 )
  {
    add_cref(v30, v25, 17);
    if ( !(unsigned __int8)has_insn_feature(*(unsigned __int16 *)(a2 + 24), 0x8000, v31, v32, v33, v34)
      && !(unsigned __int8)func_does_return(v25) )
    {
      *(_DWORD *)(a1 + 3168) = 0;
      return 1;
    }
    goto LABEL_29;
  }
  add_cref(v30, v25, 19);
  v35 = *(_DWORD *)(a1 + 3168);
LABEL_30:
  if ( v35 )
    add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
  return 1;
}

