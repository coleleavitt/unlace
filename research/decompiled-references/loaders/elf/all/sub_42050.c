unsigned __int64 __fastcall sub_42050(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned int v9; // r14d
  unsigned __int64 v11; // rbp
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __m128i si128; // xmm0
  __int64 not_tail; // rbx
  bool v19; // zf
  bool v20; // sf
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  char v35; // al
  __int64 v36; // rcx
  void (__fastcall *v37)(__int64, __int64); // rax
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+8h] [rbp-80h]
  unsigned int v43; // [rsp+10h] [rbp-78h]
  unsigned int v44; // [rsp+10h] [rbp-78h]
  __int64 v45; // [rsp+10h] [rbp-78h]
  unsigned int v47; // [rsp+18h] [rbp-70h]
  _WORD v48[2]; // [rsp+20h] [rbp-68h] BYREF
  int v49; // [rsp+24h] [rbp-64h]
  __m128i v50; // [rsp+28h] [rbp-60h]
  __int64 v51; // [rsp+38h] [rbp-50h]
  __int64 v52; // [rsp+40h] [rbp-48h]
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v11 = a3;
  v13 = *(_QWORD *)(a1 + 16);
  v53 = __readfsqword(0x28u);
  LOBYTE(v9) = (_WORD)a6 == 12;
  v14 = a7;
  v15 = v9;
  LOBYTE(v15) = *(_BYTE *)(v13 + 617) | ((_WORD)a6 == 12);
  if ( !(_BYTE)v15 )
  {
    a2 = (unsigned int)a2;
    v11 = (unsigned int)a3;
    a5 = (int)a5;
    v14 = (unsigned int)a7;
    LOBYTE(v9) = 0;
  }
  if ( a8 >= 0 && (a8 & 0x40000000) == 0 )
  {
    v43 = a6;
    v40 = a5;
    v35 = is_debugger_on(a1, v15, a3, a4, a5, a6);
    a5 = v40;
    a6 = v43;
    if ( !v35 )
    {
      v36 = a4;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 525LL)
        && (v47 = v43, v45 = v40, v42 = v36, v39 = segtype(a2), v36 = v42, a5 = v45, LODWORD(a6) = v47, v39 == 2) )
      {
        v15 = v42;
        put_byte(a2, v42);
        a5 = v45;
        a6 = v47;
      }
      else
      {
        if ( (_BYTE)v9 )
          v37 = (void (__fastcall *)(__int64, __int64))&put_qword;
        else
          v37 = (void (__fastcall *)(__int64, __int64))&put_dword;
        v44 = a6;
        v15 = v36;
        v41 = a5;
        v37(a2, v36);
        a6 = v44;
        a5 = v41;
      }
    }
  }
  v16 = *(_QWORD *)(a1 + 8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BEB0);
  v49 = a8;
  not_tail = a9 + a2;
  v48[0] = a6;
  v19 = *(_BYTE *)(v16 + 529) == 0;
  v20 = *(char *)(v16 + 529) < 0;
  v50 = si128;
  v51 = 0;
  v52 = 0;
  if ( v19 || v20 && v11 >= *(_QWORD *)(v16 + 312) )
  {
    v52 = a5;
    v49 = a8 | 2;
  }
  else if ( (a8 & 0x20000000) != 0 )
  {
    v52 = a5;
    v51 = v11;
    if ( !v11 )
      goto LABEL_25;
LABEL_9:
    v21 = getseg(v11);
    si128 = _mm_load_si128((const __m128i *)&xmmword_6BEB0);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 48);
      v49 &= ~1u;
      v50.m128i_i64[0] = 0;
      v50.m128i_i64[1] = v22;
      if ( v22 != -1 )
        v11 -= 16 * sel2para(*(double *)si128.m128i_i64);
    }
    else
    {
      v49 &= ~1u;
      v50 = si128;
    }
    v51 = v11;
    if ( v14 )
      goto LABEL_13;
    goto LABEL_26;
  }
  v51 = v11;
  if ( v11 )
    goto LABEL_9;
LABEL_25:
  if ( v14 )
    goto LABEL_13;
LABEL_26:
  if ( (a8 & 0x10000000) == 0 )
    goto LABEL_18;
LABEL_13:
  v23 = *(_QWORD *)(a1 + 8);
  v24 = *(_QWORD *)(v23 + 240);
  if ( *(__int16 *)(v24 + 346) >= 0 && !*(_BYTE *)(v23 + 524) )
  {
    *(_BYTE *)(v23 + 524) = 1;
    v38 = getinf(19, v15, v24, a4, a5, a6);
    sub_32BF0(v38, 1u, (__int64)"err %s", "The output file will not be compilable!");
    sub_EAA0((__int64)"%s\n", "The output file will not be compilable!");
    v25 = v49;
    if ( (v49 & 1) != 0 )
      goto LABEL_16;
LABEL_28:
    v26 = 0;
    if ( v50.m128i_i64[1] != -1 )
    {
      v32 = sel2para(*(double *)si128.m128i_i64);
      v25 = v49;
      v26 = 16 * v32;
    }
    goto LABEL_17;
  }
  v25 = v49;
  if ( (v49 & 1) == 0 )
    goto LABEL_28;
LABEL_16:
  v26 = v50.m128i_i64[0];
LABEL_17:
  v50.m128i_i64[0] = v14;
  v49 = v25 | 1;
  v51 = v51 + v26 - v14;
LABEL_18:
  set_fixup(not_tail, v48);
  if ( a8 >= 0
    && (a8 & 0x40000000) != 0
    && !(unsigned __int8)is_debugger_on(not_tail, v48, v27, v28, v29, v30)
    && !(unsigned __int8)patch_fixup_value(not_tail, v48, *(double *)si128.m128i_i64) )
  {
    append_cmt(not_tail, "Relocation out of range", 0);
  }
  if ( (unsigned __int8)segtype(not_tail) == 3 )
  {
    if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(not_tail, *(double *)si128.m128i_i64);
    if ( (get_flags_ex(not_tail, 4) & 0x600) != 0 )
    {
      v33 = get_item_end(not_tail, *(double *)si128.m128i_i64) - not_tail;
      v34 = v33;
      if ( (_BYTE)v9 )
      {
        if ( (v33 & 7) == 0 )
        {
          del_items(not_tail, 1, 1, 0);
          sub_FA00(not_tail, v34, 0);
        }
      }
      else if ( (v33 & 3) == 0 )
      {
        del_items(not_tail, 1, 1, 0);
        sub_F9E0(not_tail, v34, 0);
      }
    }
  }
  return v53 - __readfsqword(0x28u);
}
