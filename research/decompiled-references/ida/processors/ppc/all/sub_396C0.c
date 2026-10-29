__int64 __fastcall sub_396C0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 that; // rax
  unsigned __int64 item_end; // r13
  int flags; // r14d
  int v12; // r14d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  int v15; // eax
  char v16; // dl
  unsigned __int64 v17; // rsi
  char v18; // al
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 not_tail; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // r14
  int v25; // eax
  unsigned __int64 v26; // rbx
  unsigned int dword; // eax
  __int64 v28; // rax
  char *v29; // rax
  unsigned __int64 v30; // r14
  unsigned __int16 word; // r10
  __int64 v32; // r14
  char *v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-5E8h]
  unsigned __int64 v35; // [rsp+0h] [rbp-5E8h]
  unsigned __int64 v36; // [rsp+0h] [rbp-5E8h]
  unsigned __int64 v37; // [rsp+0h] [rbp-5E8h]
  unsigned __int64 v38; // [rsp+0h] [rbp-5E8h]
  unsigned __int64 v39; // [rsp+0h] [rbp-5E8h]
  __int64 v40; // [rsp+8h] [rbp-5E0h]
  bool v41; // [rsp+14h] [rbp-5D4h]
  unsigned __int16 v42; // [rsp+14h] [rbp-5D4h]
  __int64 v43; // [rsp+18h] [rbp-5D0h]
  _BYTE v44[2]; // [rsp+28h] [rbp-5C0h] BYREF
  char v45; // [rsp+2Ah] [rbp-5BEh]
  char v46; // [rsp+2Bh] [rbp-5BDh]
  char v47; // [rsp+2Dh] [rbp-5BBh]
  unsigned __int8 v48; // [rsp+2Eh] [rbp-5BAh]
  unsigned __int8 v49; // [rsp+2Fh] [rbp-5B9h]
  __int128 v50; // [rsp+30h] [rbp-5B8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-5A8h]
  __int64 v52; // [rsp+48h] [rbp-5A0h]
  __int64 v53; // [rsp+50h] [rbp-598h]
  _BYTE v54[320]; // [rsp+58h] [rbp-590h] BYREF
  char v55[8]; // [rsp+198h] [rbp-450h] BYREF
  _BYTE v56[1032]; // [rsp+1A0h] [rbp-448h] BYREF
  unsigned __int64 v57; // [rsp+5A8h] [rbp-40h]

  v4 = a2;
  v57 = __readfsqword(0x28u);
  v6 = sub_4E2D0(a1);
  if ( (unsigned int)v6 > 9 )
    return 0;
  v7 = 534;
  LOBYTE(v3) = _bittest64(&v7, v6);
  if ( !(_BYTE)v3 )
    return 0;
  that = prev_that(a3, a2, sub_31320, 0);
  if ( that == -1 )
    return 0;
  item_end = get_item_end(that);
  flags = get_flags_ex(item_end, 4);
  if ( (unsigned int)get_dword(item_end) )
    return 0;
  if ( (flags & 0x10000) != 0 )
    return 0;
  v12 = flags & 0x600;
  if ( v12 )
  {
    if ( v12 != 1024 || !(unsigned __int8)is_problem_present(13, item_end) )
      return 0;
  }
  v13 = item_end + 4;
  if ( get_bytes(v44, 8, item_end + 4, 0, 0) != 8 || v44[0] || v44[1] > 0xEu )
    return 0;
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (item_end + 12);
  if ( v13 < v34 )
  {
    while ( !(unsigned int)get_dword(v13) )
    {
      v13 += 4LL;
      if ( v13 >= v34 )
        goto LABEL_19;
    }
    if ( (v13 & 0xF) == 0 )
    {
      v51 = -1;
      v33 = v54;
      v52 = 0;
      v53 = 0;
      v50 = -1;
      do
      {
        *(_WORD *)v33 = 0;
        v33 += 40;
        *((_WORD *)v33 - 19) = 0;
        *((_WORD *)v33 - 18) = 0;
        *((_DWORD *)v33 - 2) = 0;
        *((_WORD *)v33 - 17) = 0;
        *((_OWORD *)v33 - 2) = 0;
        *((_QWORD *)v33 - 2) = 0;
      }
      while ( v55 != v33 );
      if ( (unsigned int)decode_insn(&v50, v13, &v50, 0.0) && (int)sub_37380(a1, (__int64)&v50) > 75 )
      {
        create_align(item_end, v13 - item_end, 0);
        return 0;
      }
    }
  }
LABEL_19:
  v14 = v34 + 4;
  if ( !(v48 | (v49 >> 1)) )
    v14 = v34;
  v35 = v14;
  v15 = get_flags_ex(a2, 4);
  v16 = v45;
  LODWORD(v43) = v15;
  if ( (v45 & 0x20) != 0 )
  {
    dword = get_dword(v35);
    if ( dword + a2 != item_end )
    {
      if ( item_end < dword )
        return 0;
      v4 = item_end - dword;
      v43 = get_flags_ex(v4, 4);
      v28 = v43 & 0x600;
      if ( ((v28 - 512) & 0xFFFFFFFFFFFFFC00LL) == 0 )
        return 0;
      if ( v28 != 1536 || (v43 & 0x10000000) == 0 )
      {
        v51 = -1;
        v29 = v54;
        v52 = 0;
        v53 = 0;
        v50 = -1;
        do
        {
          *(_WORD *)v29 = 0;
          v29 += 40;
          *((_WORD *)v29 - 19) = 0;
          *((_WORD *)v29 - 18) = 0;
          *((_DWORD *)v29 - 2) = 0;
          *((_WORD *)v29 - 17) = 0;
          *((_OWORD *)v29 - 2) = 0;
          *((_QWORD *)v29 - 2) = 0;
        }
        while ( v55 != v29 );
        if ( !(unsigned int)decode_insn(&v50, v4, v55, 0.0) || (int)sub_37380(a1, (__int64)&v50) <= 75 )
          return 0;
      }
    }
    v35 += 4LL;
    v16 = v45;
  }
  v17 = v35;
  v18 = v46;
  v19 = v35 + 4;
  if ( v46 >= 0 )
    v19 = v35;
  v20 = v16 & 8;
  v36 = v19;
  if ( (_DWORD)v20 )
  {
    v30 = 4 * (unsigned int)get_dword(v19) + 4 + v19;
    v18 = v46;
    v36 = v30;
  }
  v56[0] = 0;
  if ( (v18 & 0x40) != 0 )
  {
    word = get_word(v36, v17, v20);
    if ( (unsigned __int16)(word - 1) > 0x3FEu )
      return 0;
    v32 = word;
    v42 = word;
    v39 = v36 + 2;
    if ( word != get_bytes(v56, word, v39, 0, 0) )
      return 0;
    v56[v42] = 0;
    if ( !(unsigned __int8)is_ident(v56) )
      return 0;
    v36 = v32 + v39;
    v18 = v46;
  }
  v37 = v36 - (((v18 & 0x20) == 0) - 1LL);
  if ( v47 < 0 )
    v37 += 2LL;
  v38 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v37;
  if ( item_end < v38 )
  {
    v41 = 0;
    not_tail = item_end;
    while ( 1 )
    {
      v22 = get_flags_ex(not_tail, 4) & 0x600;
      if ( (_DWORD)v22 )
      {
        v40 = (unsigned int)v22;
        if ( (unsigned __int8)is_problem_present(13, not_tail) )
        {
          v41 = v40 == 1536;
        }
        else
        {
          if ( !v41 || v40 != 1536 )
            return 0;
          v41 = v3;
        }
        not_tail = next_not_tail(not_tail);
      }
      else
      {
        not_tail = next_that(not_tail, v38, sub_31330, 0);
      }
      if ( not_tail >= v38 )
        goto LABEL_41;
    }
  }
  v41 = 0;
LABEL_41:
  if ( (~(_WORD)v43 & 0x600) != 0 || (v43 & 0x10000000) == 0 )
  {
    auto_mark_range(v4, v4 + 1, 20);
    auto_mark_range(v4, v4 + 1, 30);
  }
  if ( v56[0] && (v43 & 0x4000) == 0 )
    set_name(v4, v56, 7168);
  v23 = item_end;
  revert_ida_decisions(item_end, v38);
  if ( item_end < v38 )
  {
    do
    {
      if ( (~(unsigned __int16)get_flags_ex(v23, 4) & 0x600) == 0 )
      {
        v24 = get_item_end(v23);
        del_items(v23, 0, 1, 0);
        if ( v24 >= v38 )
        {
          if ( v38 < v24 )
            auto_mark_range(v38, v24, 200);
          if ( v41 )
          {
            v25 = get_flags_ex(v24, 4);
            if ( (~(_WORD)v25 & 0x600) == 0 && (v25 & 0x10000000) == 0 )
              sub_393C0(a1, v24);
          }
        }
      }
      v23 = next_that(v23, v38, sub_31330, 0);
    }
    while ( v23 < v38 );
  }
  create_data(item_end, 0, v38 - item_end, -1);
  if ( v38 < a3 )
  {
    v26 = v38;
    while ( !(unsigned __int8)get_byte(v26) )
    {
      if ( ++v26 >= a3 )
        goto LABEL_62;
    }
    if ( v26 < a3 )
      return v3;
LABEL_62:
    create_align(v38, a3 - v38, 0);
  }
  return v3;
}

