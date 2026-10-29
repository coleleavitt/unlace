__int64 __fastcall sub_3E4320(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rdx
  _BYTE *v7; // r15
  __int64 v8; // rax
  char *v10; // rbx
  __m128i si128; // xmm1
  __m128i *v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // r12d
  int i; // r8d
  __int64 v16; // rax
  __int64 v17; // r15
  _QWORD *v18; // r13
  int v19; // eax
  _QWORD *v20; // r12
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rdi
  _QWORD *v23; // rsi
  _QWORD *v24; // r11
  unsigned __int64 v25; // rax
  _QWORD *v26; // rdx
  bool v27; // al
  int v28; // eax
  __m128i v29; // xmm0
  _QWORD *v30; // rax
  _QWORD *v31; // r10
  _QWORD *v32; // r9
  void *v33; // rax
  __int64 v34; // rsi
  unsigned int v35; // r13d
  __int64 v36; // rax
  unsigned int dtype_size; // [rsp+8h] [rbp-2D8h]
  __int64 v40; // [rsp+8h] [rbp-2D8h]
  char v41; // [rsp+8h] [rbp-2D8h]
  unsigned int v42; // [rsp+8h] [rbp-2D8h]
  __int64 v43; // [rsp+10h] [rbp-2D0h]
  char *v44; // [rsp+18h] [rbp-2C8h]
  int v45; // [rsp+30h] [rbp-2B0h]
  __int64 v46; // [rsp+30h] [rbp-2B0h]
  __int64 v47; // [rsp+38h] [rbp-2A8h]
  __int64 v48; // [rsp+48h] [rbp-298h] BYREF
  _BYTE v49[12]; // [rsp+50h] [rbp-290h] BYREF
  __int64 v50[2]; // [rsp+60h] [rbp-280h] BYREF
  __int64 *v51; // [rsp+70h] [rbp-270h] BYREF
  __int128 v52; // [rsp+78h] [rbp-268h]
  __int64 v53; // [rsp+90h] [rbp-250h]
  __int64 v54; // [rsp+98h] [rbp-248h]
  __int64 *v55; // [rsp+A0h] [rbp-240h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-238h]
  _BYTE v57[24]; // [rsp+C0h] [rbp-220h] BYREF
  _BYTE v58[24]; // [rsp+110h] [rbp-1D0h] BYREF
  char v59; // [rsp+2A0h] [rbp-40h] BYREF
  unsigned __int64 v60; // [rsp+2A8h] [rbp-38h]

  v6 = *(unsigned __int16 *)(a1 + 48);
  v60 = __readfsqword(0x28u);
  switch ( (_WORD)v6 )
  {
    case 2:
      v8 = 0;
      break;
    case 4:
      v8 = 1;
      break;
    case 5:
      v8 = 2;
      break;
    case 0x28:
      v8 = 3;
      break;
    default:
      LODWORD(v7) = 0;
      v8 = 4;
      if ( (_WORD)v6 != 33 )
        return (unsigned int)v7;
      break;
  }
  v10 = &v59;
  v43 = v8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
  v7 = v57;
  v44 = (&off_4B6200)[2 * v8];
  v12 = (__m128i *)v57;
  do
  {
    v12->m128i_i32[1] = -1;
    v12 += 5;
    v12[-5].m128i_i16[0] = 0;
    v12[-5].m128i_i16[1] = 0;
    v12[-5].m128i_i64[1] = 0;
    v12[-4] = si128;
    v12[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v12[-3] + 8) = 0;
    v12[-2].m128i_i32[2] = 0;
    v12[-1].m128i_i64[0] = 0;
    v12[-1].m128i_i32[2] = 0;
  }
  while ( v12 != (__m128i *)&v59 );
  v50[0] = 0;
  v50[1] = 0;
  v51 = nullptr;
  v53 = 0;
  v54 = 0;
  v55 = nullptr;
  v48 = 0;
  v52 = 0;
  v56 = 0;
  switch ( v6 )
  {
    case 2LL:
      v41 = 1;
      goto LABEL_66;
    case 4LL:
      v13 = *(_QWORD *)(a1 + 832);
      dtype_size = get_dtype_size();
      sub_324F00((__int64 *)v49, v13, dtype_size, 2);
      sub_327B90((__int64)v57, a3, dtype_size);
      clear_tinfo_t();
      v40 = *(_QWORD *)(a1 + 832);
      v14 = get_dtype_size();
      sub_324F00((__int64 *)v49, v40, v14, 2);
      sub_327B90((__int64)v58, a4, v14);
      clear_tinfo_t();
      *(_QWORD *)v49 = 39;
      copy_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)v49 = 39;
      copy_tinfo_t();
      clear_tinfo_t();
      goto LABEL_12;
    case 5LL:
      v34 = *(_QWORD *)(a1 + 832);
      v42 = get_dtype_size();
      sub_324F00((__int64 *)v49, v34, v42, 2);
      sub_327B90((__int64)v57, a3, v42);
      clear_tinfo_t();
      *(_QWORD *)v49 = 39;
      copy_tinfo_t();
      clear_tinfo_t();
      goto LABEL_12;
    case 33LL:
LABEL_12:
      v41 = 1;
      a3 = a2;
      v45 = 0;
      break;
    case 40LL:
      v41 = 0;
LABEL_66:
      v46 = *(_QWORD *)(a1 + 832);
      v35 = get_dtype_size();
      sub_324F00((__int64 *)v49, v46, v35, 2);
      sub_327B90((__int64)v57, a4, v35);
      clear_tinfo_t();
      v36 = 7;
      if ( *(_WORD *)(a1 + 48) == 2 )
        v36 = 39;
      *(_QWORD *)v49 = v36;
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      v45 = 1;
      break;
  }
  if ( !v44 )
    goto LABEL_31;
  for ( i = 0; i != 6; ++i )
  {
    if ( !*v7 )
      break;
    v7 += 80;
  }
  v16 = sub_32E2F0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v44, &v48, i, (__int64)v57, v45);
  v17 = *(_QWORD *)(v16 + 72);
  v18 = (_QWORD *)v16;
  v19 = *(_DWORD *)(v17 + 280);
  *(_DWORD *)(v17 + 280) = v19 | 4;
  if ( *((_BYTE *)&off_4B6200 + 16 * v43 + 10) )
    *(_DWORD *)(v17 + 280) = v19 | 0x14;
  sub_5DD00((__int64 *)(v17 + 136), v50);
  sub_30F930((__int64 *)(v17 + 152), &v51);
  sub_30F930((__int64 *)(v17 + 216), &v51);
  sub_30F930((__int64 *)(v17 + 216), &v55);
  if ( v41 )
  {
    v28 = *((_DWORD *)v18 + 1) | 0x80000;
    *((_DWORD *)v18 + 1) = v28;
    if ( !v45 )
    {
LABEL_41:
      *((_DWORD *)v18 + 1) = v28 | 0x20000;
      goto LABEL_21;
    }
LABEL_42:
    v29 = _mm_cvtsi32_si128(*((_DWORD *)v18 + 17));
    *(_DWORD *)v49 = 1;
    *(_QWORD *)&v49[4] = _mm_unpacklo_epi32(v29, _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v18 = sub_11EBA0((__int64)v18, v49);
    sub_1166E0((__int64)v49);
    if ( !v41 )
      goto LABEL_21;
    v28 = *((_DWORD *)v18 + 1);
    goto LABEL_41;
  }
  if ( v45 )
    goto LABEL_42;
LABEL_21:
  sub_AEBD0(*(_QWORD **)(a1 + 16), (__int64)v18);
  v20 = *(_QWORD **)(a1 + 8);
  v21 = *(_QWORD *)(a1 + 40);
  v22 = (_QWORD *)v20[127];
  v7 = v20 + 126;
  v23 = v20 + 126;
  if ( v22 )
  {
    v24 = (_QWORD *)v20[127];
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = v24[4];
        if ( v25 >= v21 )
          break;
        v24 = (_QWORD *)v24[3];
        if ( !v24 )
          goto LABEL_27;
      }
      v26 = (_QWORD *)v24[2];
      if ( v21 >= v25 )
        break;
      v23 = v24;
      v24 = (_QWORD *)v24[2];
      if ( !v26 )
      {
LABEL_27:
        v27 = v7 == (_BYTE *)v23;
        goto LABEL_28;
      }
    }
    v30 = (_QWORD *)v24[3];
    v31 = v24;
    while ( v30 )
    {
      if ( v21 < v30[4] )
      {
        v23 = v30;
        v30 = (_QWORD *)v30[2];
      }
      else
      {
        v30 = (_QWORD *)v30[3];
      }
    }
    if ( v26 )
    {
      v32 = v24;
      do
      {
        if ( v26[4] >= v21 )
        {
          v32 = v26;
          v26 = (_QWORD *)v26[2];
        }
        else
        {
          v26 = (_QWORD *)v26[3];
        }
      }
      while ( v26 );
      v31 = v32;
    }
    if ( (_QWORD *)v20[128] != v31 || v23 != (_QWORD *)v7 )
    {
      if ( v31 != v23 )
      {
        do
        {
          v47 = std::_Rb_tree_increment();
          v33 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v33, 0x28u);
          --v20[130];
        }
        while ( v23 != (_QWORD *)v47 );
        v10 = &v59;
      }
      goto LABEL_31;
    }
  }
  else
  {
    v27 = 1;
LABEL_28:
    if ( (_QWORD *)v20[128] != v23 || !v27 )
      goto LABEL_31;
  }
  sub_3E3A90(v22);
  v20[128] = v7;
  v20[127] = 0;
  v20[129] = v7;
  v20[130] = 0;
LABEL_31:
  LOBYTE(v7) = v44 != nullptr;
  clear_tinfo_t();
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  qfree();
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
  do
  {
    v10 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v10 + 4) )
    {
      *((_QWORD *)v10 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_1166E0((__int64)v10);
  }
  while ( v10 != v57 );
  return (unsigned int)v7;
}

