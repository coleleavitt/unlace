__int64 __fastcall sub_7340(__int64 a1, double a2)
{
  __int64 ph; // rax
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  char *v7; // rbx
  char *v8; // rbp
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  __int64 v11; // rsi
  __int16 v12; // ax
  char v14; // al
  __int64 v15; // rbp
  __int16 v16; // bx
  unsigned __int16 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rbx
  int v20; // ebp
  int dword; // r14d
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r13
  int v26; // ecx
  int v27; // edx
  __int64 v28; // rbp
  __int16 v29; // r12
  unsigned __int16 v30; // bx
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rbx
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // rbx
  __int16 word; // bp
  __int64 v38; // rbp
  __int64 v39; // r13
  __int64 v40; // rbx
  unsigned __int16 v41; // r12
  __int64 flags_by_size; // rax
  int v43; // [rsp+8h] [rbp-460h]
  __int64 v44; // [rsp+8h] [rbp-460h]
  unsigned int v45; // [rsp+10h] [rbp-458h]
  __int64 v46; // [rsp+10h] [rbp-458h]
  __int64 v47; // [rsp+18h] [rbp-450h]
  _BYTE v48[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v49; // [rsp+428h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  ph = get_ph();
  v4 = *(_DWORD *)(ph + 104);
  v5 = *(unsigned __int16 *)(a1 + 24);
  if ( v5 >= v4
    && v5 < *(_DWORD *)(ph + 108)
    && (v6 = *(unsigned __int16 *)(a1 + 24), (*(_WORD *)(*(_QWORD *)(ph + 112) + 16LL * (v5 - v4) + 8) & 0x4001) != 0) )
  {
    if ( (unsigned __int16)v5 > 0x2Du )
    {
LABEL_25:
      if ( (_WORD)v6 == 233 )
LABEL_26:
        set_name(*(_QWORD *)(a1 + 16), "locret", 5025);
      goto LABEL_7;
    }
  }
  else
  {
    add_cref(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26), 21);
    v6 = *(unsigned __int16 *)(a1 + 24);
    if ( (unsigned __int16)v6 > 0x2Du )
      goto LABEL_25;
  }
  if ( (unsigned __int16)v6 <= 0xAu )
  {
LABEL_7:
    v7 = (char *)(a1 + 41);
    v8 = (char *)(a1 + 361);
    while ( 1 )
    {
      v10 = *v7;
      if ( !*v7 )
      {
LABEL_20:
        v12 = *(_WORD *)(a1 + 24);
        if ( ((unsigned __int16)(v12 - 42) <= 1u || v12 == 7)
          && *(_BYTE *)(a1 + 73)
          && (get_flags_ex(*(_QWORD *)(a1 + 16), 4) & 0x800) == 0 )
        {
          qsnprintf(v48, 1024, "nonzero filler %X", *(char *)(a1 + 73));
          set_cmt(*(_QWORD *)(a1 + 16), v48, 0);
        }
        return 2;
      }
      if ( v10 == 11 )
      {
LABEL_10:
        v9 = *(_QWORD *)(v7 + 15);
        if ( v9 )
          insn_add_dref(a1, v9, 0, 3);
        goto LABEL_12;
      }
      if ( v10 <= 0xBu )
      {
        if ( v10 != 7 )
        {
          if ( v10 == 9 )
            goto LABEL_10;
          goto LABEL_12;
        }
      }
      else if ( v10 != 12 )
      {
        goto LABEL_12;
      }
      if ( *(_QWORD *)(v7 + 15) )
      {
        v14 = is_call_insn(a1);
        add_cref(*(_QWORD *)(a1 + 16), *(_QWORD *)(v7 + 15), v14 == 0 ? 19 : 17);
        goto LABEL_12;
      }
      v11 = *(_QWORD *)(v7 + 23);
      if ( v11 )
      {
        v7 += 40;
        add_cref(*(_QWORD *)(a1 + 16), v11, 17);
        if ( v7 == v8 )
          goto LABEL_20;
      }
      else
      {
LABEL_12:
        v7 += 40;
        if ( v7 == v8 )
          goto LABEL_20;
      }
    }
  }
  switch ( v6 )
  {
    case 11:
      sub_7100(*(_QWORD *)(a1 + 16), 2);
      goto LABEL_7;
    case 12:
      sub_7100(*(_QWORD *)(a1 + 16), 4);
      goto LABEL_7;
    case 13:
      sub_7100(*(_QWORD *)(a1 + 16), 1);
      goto LABEL_7;
    case 15:
    case 16:
    case 17:
    case 18:
      goto LABEL_26;
    case 39:
      v36 = *(_QWORD *)(a1 + 96);
      insn_add_dref(a1, v36, 0, 3);
      qsnprintf(v48, 32, "arraydata_%a", a2);
      set_name(v36, v48, 928);
      word = get_word(v36);
      create_data(v36, 0x10000000, 2, -1);
      if ( word == 768 )
      {
        v38 = v36 + 2;
        v39 = v36 + 4;
        v40 = v36 + 8;
        v41 = get_word(v38);
        create_data(v38, 0x10000000, 2, -1);
        LOWORD(v38) = get_word(v39);
        create_data(v39, 0x20000000, 4, -1);
        sub_6FE0(
          *(_QWORD *)(a1 + 96),
          (__int64)"Array definition; %u elements, each %u bytes",
          (unsigned __int16)v38,
          v41);
        sub_6FE0(v40, (__int64)"Array Contents");
        flags_by_size = get_flags_by_size(v41);
        create_data(v40, flags_by_size, (unsigned __int16)v38, -1);
      }
      return 2;
    case 44:
      v15 = *(_QWORD *)(a1 + 96);
      insn_add_dref(a1, v15, 0, 3);
      qsnprintf(v48, 32, "switchdata_%a", a2);
      set_name(v15, v48, 929);
      v16 = get_word(v15);
      v17 = get_word(v15 + 2);
      create_data(v15, 0x10000000, 2, -1);
      create_data(v15 + 2, 0x10000000, 2, -1);
      if ( v16 != 256 )
        return 2;
      create_data(v15 + 4, 0x20000000, 4, -1);
      v18 = v15 + 4;
      v19 = v15 + 8;
      v20 = v17;
      v45 = v19;
      dword = get_dword(v18);
      v43 = dword + v17;
      if ( v17 )
      {
        do
        {
          create_data(v19, 0x20000000, 4, -1);
          v22 = v19;
          v19 += 4;
          v23 = get_dword(v22);
          v24 = *(_QWORD *)(a1 + 16);
          v25 = v24 + 2 * v23;
          add_cref(v24, v25, 19);
          v26 = dword;
          v27 = dword++;
          sub_6FE0(v25, (__int64)"case %d: // (0x%x)", v27, v26);
        }
        while ( v43 != dword );
      }
      create_data(v45, 536871936, 4 * v20, -1);
      break;
    case 45:
      v28 = *(_QWORD *)(a1 + 96);
      insn_add_dref(a1, v28, 0, 3);
      qsnprintf(v48, 32, "switchdata_%a", a2);
      set_name(v28, v48, 929);
      v29 = get_word(v28);
      v30 = get_word(v28 + 2);
      create_data(v28, 0x10000000, 2, -1);
      create_data(v28 + 2, 0x10000000, 2, -1);
      if ( v29 != 512 )
        return 2;
      v47 = v28 + 4;
      create_data(v28 + 4, 0x20000000, 4, -1);
      v31 = 4 * v30;
      v46 = v28 + 4 + v31;
      if ( v30 )
      {
        v32 = v28 + 4 + v31;
        v44 = v46 + 4LL * ((unsigned int)v30 - 1);
        do
        {
          v33 = *(_QWORD *)(a1 + 16) + (int)(2 * get_dword(v32));
          v34 = get_dword(v32 - v31);
          add_cref(*(_QWORD *)(a1 + 16), v33, 19);
          sub_6FE0(v33, (__int64)"case %d: // (0x%x)", v34, v34);
          v35 = v32;
          v32 += 4;
        }
        while ( v35 != v44 );
      }
      create_data(v47, 536871936, v31, -1);
      set_cmt(v47, "Switch keys", 0);
      create_data(v46, 536871936, v31, -1);
      set_cmt(v46, "Switch targets", 0);
      break;
    default:
      goto LABEL_7;
  }
  add_cref(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26), 19);
  sub_6FE0(*(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26), (__int64)"default:");
  return 2;
}

