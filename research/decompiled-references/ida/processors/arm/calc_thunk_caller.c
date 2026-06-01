__int64 __fastcall sub_72B30(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // r13d
  int v11; // r15d
  __int64 v12; // rsi
  int v13; // r13d
  __m128i si128; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rdi
  __int64 word; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 sreg; // rax
  __int64 first_fcref_from; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned int v30; // ecx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int16 v35; // ax
  __int64 v36; // rdi
  __int64 byte; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 func; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+10h] [rbp-58h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  __int64 v53; // [rsp+28h] [rbp-40h]

  v6 = *(_WORD *)(a3 + 24);
  if ( v6 != 46 && v6 != 4 || *(_BYTE *)(a3 + 41) != 7 )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v9 = *(_QWORD *)(a3 + 56) + 16LL * *(_QWORD *)a3;
  if ( v9 != v8 )
  {
    v8 &= v9;
    if ( v9 == -1 )
      v8 = -1;
  }
  v10 = 5;
  while ( 1 )
  {
    if ( (unsigned __int8)sub_6B410(v8) )
      goto LABEL_10;
    first_fcref_from = get_first_fcref_from(v8);
    if ( (unsigned __int8)sub_6B410(first_fcref_from) )
      goto LABEL_10;
    if ( (unsigned __int8)sub_6B540(v8, &unk_8E490, 5, 2) || (unsigned __int8)sub_6B540(v8, &unk_8E470, 5, 2) )
    {
LABEL_35:
      if ( (get_flags_ex(v8, 4) & 0x4000) == 0 )
        set_name(v8, "__rt_switch8", 6144);
LABEL_10:
      v46 = 3;
      LOWORD(v11) = 1;
      v12 = 0;
      v13 = 1;
      goto LABEL_11;
    }
    v28 = v8;
    v53 = v8 + 28;
    while ( 1 )
    {
      v47 = v28;
      if ( (unsigned int)get_dword(v28) != *(_DWORD *)((char *)&unk_8E450 + v28 - v8) )
        break;
      v28 = v47 + 4;
      if ( v53 == v47 + 4 )
        goto LABEL_35;
    }
    v29 = v8;
    while ( 1 )
    {
      v48 = v29;
      if ( (unsigned __int16)get_word(v29) != *(_WORD *)((char *)&unk_8E430 + v29 - v8) )
        break;
      v29 = v48 + 2;
      if ( v8 + 22 == v48 + 2 )
        goto LABEL_35;
    }
    v33 = v8;
    while ( 1 )
    {
      v49 = v33;
      if ( (unsigned __int16)get_word(v33) != *(_WORD *)((char *)&unk_8E410 + v33 - v8) )
        break;
      v33 = v49 + 2;
      if ( v53 == v49 + 2 )
        goto LABEL_35;
    }
    v41 = v8;
    while ( 1 )
    {
      v50 = v41;
      if ( (unsigned __int16)get_word(v41) != *(_WORD *)((char *)&unk_8E3F0 + v41 - v8) )
        break;
      v41 = v50 + 2;
      if ( v50 + 2 == v8 + 26 )
        goto LABEL_35;
    }
    v42 = sub_6B290(v8, &off_A44A0, 4);
    if ( v42 != -1 )
      break;
    func = get_func(v8);
    if ( !func )
      return 0;
    v44 = calc_thunk_func_target(func, 0);
    if ( v44 == -1 )
      return 0;
    if ( v8 == v44 )
      return 0;
    if ( !--v10 )
      return 0;
    v8 = v44;
  }
  v46 = 0;
  v45 = 4LL * v42;
  v13 = *((_DWORD *)&off_A44A0 + 2 * v45 + 5);
  v12 = LODWORD((&off_A44A0)[v45 + 3]);
  v11 = *((_DWORD *)&off_A44A0 + 2 * v45 + 7);
LABEL_11:
  si128 = _mm_load_si128((const __m128i *)&xmmword_89610);
  v15 = *(_QWORD *)(a3 + 16);
  *(_BYTE *)(a2 + 68) = 0;
  v16 = *(_QWORD *)(a2 + 96);
  *(_WORD *)(a2 + 4) = 0;
  v17 = 0x800000;
  *(__m128i *)(a2 + 8) = si128;
  v18 = v15 + 4;
  *(_DWORD *)a2 = 0x800000;
  *(_DWORD *)(a2 + 40) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 64) = -1;
  *(_QWORD *)(a2 + 72) = 0;
  *(_DWORD *)(a2 + 80) = 2;
  *(_QWORD *)(a2 + 88) = -1;
  *(_OWORD *)(a2 + 24) = -1;
  if ( v16 )
  {
    *(_QWORD *)(a2 + 104) = 0;
    v51 = v15;
    qfree();
    v17 = *(_DWORD *)a2;
    v12 = (unsigned int)v12;
    v15 = v51;
  }
  *(_QWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 104) = 0;
  if ( (_DWORD)v12 )
    v17 |= 0x2000u;
  v19 = v17 & 0xFFFFFBFB;
  *(_DWORD *)a2 = v19;
  if ( v13 == 4 )
  {
    *(_QWORD *)(a2 + 8) = v15 + 8;
    *(_DWORD *)a2 = ((_WORD)v11 << 7) & 0x180 | v17 & 0xFFFFFA7B | 4;
    v39 = get_dword(v18) + 1;
    *(_WORD *)(a2 + 4) = v39;
    *(_QWORD *)(a2 + 24) = v18 + ((__int64)(int)get_dword(v18 + ((4 * v39) & 0x3FFFC)) << v11);
    v40 = *(_QWORD *)(a3 + 16);
    *(_DWORD *)a2 |= 0x200u;
    *(_QWORD *)(a2 + 32) = v40;
    *(_QWORD *)(a2 + 56) = v18;
    *(_DWORD *)(a2 + 64) = v46;
    *(_BYTE *)(a2 + 68) = 2;
    if ( !*(_DWORD *)(a1 + 212) )
    {
      sub_6B5D0(v18 + 4 * *(unsigned __int16 *)(a2 + 4) + 4, 1);
      goto LABEL_25;
    }
    v24 = *(_QWORD *)(a3 + 16);
    v25 = 4;
    goto LABEL_23;
  }
  if ( v13 > 4 )
  {
    if ( v13 != 8 )
      goto LABEL_71;
    *(_QWORD *)(a2 + 24) = v18;
    v30 = ((_WORD)v11 << 7) & 0x180 | v17 & 0xFFFFFE7F;
    v31 = v30 | 0x604;
    *(_DWORD *)a2 = v30 | 0x404;
    *(_QWORD *)(a2 + 8) = v15 + 12;
    *(_WORD *)(a2 + 4) = 1;
    v32 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 56) = v18;
    *(_QWORD *)(a2 + 32) = v32;
    *(_DWORD *)a2 = v31;
    if ( !*(_DWORD *)(a1 + 212) )
    {
      sub_6B5D0(v15 + 20, 1);
      goto LABEL_25;
    }
    v24 = *(_QWORD *)(a3 + 16);
    v25 = 8;
LABEL_23:
    sreg = get_sreg(v24, 20);
    sub_6B5D0(v18 + v25 + v13 * *(unsigned __int16 *)(a2 + 4), (unsigned __int64)(sreg - 1) <= 0xFFFFFFFFFFFFFFFDLL);
    if ( v13 != 1 )
    {
      if ( v13 != 2 )
      {
LABEL_25:
        create_data(v18, 0x20000000, 4, -1);
        return 1;
      }
LABEL_47:
      create_data(v18, 0x10000000, 2, -1);
      return 1;
    }
LABEL_55:
    create_data(v18, 0, 1, -1);
    return 1;
  }
  if ( v13 == 1 )
  {
    *(_QWORD *)(a2 + 8) = v15 + 5;
    v34 = ((_WORD)v11 << 7) & 0x180 | v17 & 0xFFFFFA7B;
    BYTE1(v34) |= 4u;
    *(_DWORD *)a2 = v34;
    v35 = (unsigned __int8)get_byte(v18) + 1;
    *(_WORD *)(a2 + 4) = v35;
    v36 = v35 + v18;
    if ( (_DWORD)v12 )
      byte = (char)get_byte(v36);
    else
      byte = (unsigned __int8)get_byte(v36);
    *(_QWORD *)(a2 + 24) = v18 + (byte << v11);
    v38 = *(_QWORD *)(a3 + 16);
    *(_DWORD *)a2 |= 0x200u;
    *(_QWORD *)(a2 + 32) = v38;
    *(_QWORD *)(a2 + 56) = v18;
    *(_DWORD *)(a2 + 64) = v46;
    *(_BYTE *)(a2 + 68) = 0;
    if ( !*(_DWORD *)(a1 + 212) )
    {
      sub_6B5D0(v18 + *(unsigned __int16 *)(a2 + 4) + 1, 1);
      goto LABEL_55;
    }
    v24 = *(_QWORD *)(a3 + 16);
    v25 = 1;
    goto LABEL_23;
  }
  if ( v13 == 2 )
  {
    *(_DWORD *)a2 = ((_WORD)v11 << 7) & 0x180 | v17 & 0xFFFFFA7B;
    *(_QWORD *)(a2 + 8) = v15 + 6;
    v52 = v15 + 6;
    v20 = get_word(v18) + 1;
    *(_WORD *)(a2 + 4) = v20;
    v21 = ((2 * v20) & 0x1FFFE) + v18;
    if ( (_DWORD)v12 )
      word = (__int16)get_word(v21);
    else
      word = (unsigned __int16)get_word(v21);
    *(_QWORD *)(a2 + 24) = v18 + (word << v11);
    v23 = *(_QWORD *)(a3 + 16);
    *(_DWORD *)a2 |= 0x200u;
    *(_QWORD *)(a2 + 32) = v23;
    *(_QWORD *)(a2 + 56) = v18;
    *(_DWORD *)(a2 + 64) = v46;
    *(_BYTE *)(a2 + 68) = 1;
    if ( !*(_DWORD *)(a1 + 212) )
    {
      sub_6B5D0(v52 + 2 * *(unsigned __int16 *)(a2 + 4), 1);
      goto LABEL_47;
    }
    v24 = *(_QWORD *)(a3 + 16);
    v25 = 2;
    goto LABEL_23;
  }
LABEL_71:
  sub_6B6A0(v19, v12, v15);
  return sub_732C0(v19, v12);
}
