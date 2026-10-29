__int64 __fastcall sub_463C0(__int64 a1, __m128i **a2)
{
  __m128i *v3; // rdx
  __m128i *v4; // rcx
  __int64 v5; // rax
  __m128i *v6; // r14
  __m128i *v7; // r13
  const __m128i *v8; // rbx
  __m128i *v9; // rbp
  __m128i v10; // xmm0
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  __int64 (*v14)(); // rax
  __m128i v15; // xmm0
  int v16; // r15d
  int v17; // ebx
  __m128i *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __m128i *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned int v25; // ebp
  __m128i *v26; // r13
  __m128i *i; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdi
  __m128i *v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rcx
  size_t v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rdi
  __m128i v42; // xmm0
  __int64 v43; // rdi
  void *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v51; // rax
  __m128i v52; // [rsp+8h] [rbp-A8h] BYREF
  __int64 *v53; // [rsp+18h] [rbp-98h]
  __int64 v54; // [rsp+20h] [rbp-90h]
  __int64 v55; // [rsp+28h] [rbp-88h]
  __m128i *v56; // [rsp+30h] [rbp-80h]
  __int64 tinfo_size; // [rsp+38h] [rbp-78h]
  __m128i *v58; // [rsp+40h] [rbp-70h]
  __int64 v59; // [rsp+48h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+50h] [rbp-60h] BYREF
  __int64 v61; // [rsp+58h] [rbp-58h] BYREF
  __int128 v62; // [rsp+60h] [rbp-50h]
  unsigned __int64 v63; // [rsp+70h] [rbp-40h]

  v55 = a1;
  v63 = __readfsqword(0x28u);
  v62 = 0;
  v61 = 0;
  v53 = &v61;
  v3 = a2[1];
  v4 = *a2;
  v5 = 8LL * (_QWORD)v3;
  v6 = *a2;
  v7 = &(*a2)[9 * (_QWORD)v3];
  v8 = v7;
  v9 = v7;
  while ( 1 )
  {
    if ( v6 != &v4[(_QWORD)((_QWORD)v3 + v5)] )
    {
      v13 = v55;
      if ( (unsigned __int8)sub_333E0(v55, (__m128i *)v6[4].m128i_i64)
        && (v14 = *(__int64 (**)())(*(_QWORD *)v13 + 80LL), v14 != sub_23FF0) )
      {
        ((void (__fastcall *)(__int64, __m128i **, __int64 *, __m128i *))v14)(v55, a2, &v61, &v6[1]);
        if ( v9 == v8 )
          goto LABEL_66;
      }
      else if ( v9 == v8 )
      {
        goto LABEL_66;
      }
      v15 = _mm_loadu_si128(v8);
      v11 = v6->m128i_i64[0];
      v12 = _mm_add_epi64(v15, _mm_srli_si128(v15, 8)).m128i_u64[0];
      if ( v6->m128i_i64[0] < v12 )
      {
        if ( v9 == v7 )
        {
          v7 = (__m128i *)v8;
          if ( (v8[8].m128i_i8[4] & 0x20) != 0 )
            v7 = v9;
        }
LABEL_5:
        if ( v12 < v6->m128i_i64[1] + v11 )
          v8 = v6;
        goto LABEL_7;
      }
    }
    if ( v9 == v7 )
    {
      if ( v9 == v6 )
        goto LABEL_67;
      if ( v9 == v8 )
      {
LABEL_66:
        v9 = (__m128i *)v8;
        v8 = v6;
        goto LABEL_7;
      }
      v10 = _mm_loadu_si128(v8);
      v11 = v6->m128i_i64[0];
      v12 = _mm_add_epi64(v10, _mm_srli_si128(v10, 8)).m128i_u64[0];
      goto LABEL_5;
    }
    v16 = 954437177 * (v7 - *a2);
    v54 = v7->m128i_i64[0];
    v17 = v16;
    if ( v7 == v6 )
      goto LABEL_79;
    v18 = v7;
    while ( (v18[4].m128i_i8[0] & 0xF) != 0xE )
    {
      v18 += 9;
      if ( v6 == v18 )
        goto LABEL_79;
    }
    tinfo_size = get_tinfo_size(0, v18[4].m128i_i64[0], 0);
    v52.m128i_i32[0] = tinfo_size;
    if ( !(_DWORD)tinfo_size )
    {
LABEL_79:
      v56 = v7;
      v22 = v6;
      goto LABEL_42;
    }
    if ( v16 > 0 )
    {
      do
      {
        if ( (v7[-5].m128i_i8[0] & 0xF) != 0xE )
          break;
        v19 = get_tinfo_size(0, v7[-5].m128i_i64[0], 0);
        if ( v52.m128i_i32[0] != v19 )
          break;
        v20 = v7[-9].m128i_i64[0];
        v7 -= 9;
        v54 = v20;
        --v17;
      }
      while ( v17 );
      v56 = v7;
      if ( v7 == v6 )
      {
        if ( v9 == v6 )
          goto LABEL_82;
        goto LABEL_77;
      }
    }
    else
    {
      v56 = v7;
    }
    v21 = 0;
    do
    {
      if ( (v7[4].m128i_i8[0] & 0xF) == 0xE )
        v21 += v7[8].m128i_u32[3] + v7->m128i_i64[1];
      v7 += 9;
    }
    while ( v6 != v7 );
    v22 = (__m128i *)((char *)v56 + (((char *)&v6[-9] - (char *)v56) & 0xFFFFFFFFFFFFFFF0LL) + 144);
    if ( v9 == v6 )
    {
LABEL_82:
      v22 = v6;
      goto LABEL_42;
    }
    if ( (v6[4].m128i_i8[0] & 0xF) == 0xE
      || !v21
      || v21 >= 8 * (int)tinfo_size
      || &v6[9] == v9
      || v6->m128i_i64[0] != v6[9].m128i_i64[0]
      || (v23 = v6[13].m128i_i64[0], (v6[13].m128i_i8[0] & 0xF) != 0xE)
      || v6[17].m128i_u32[3] < v21
      || (v58 = v6 + 9, v51 = get_tinfo_size(0, v23, 0), (int)tinfo_size != v51) )
    {
      if ( v9 == v22 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v7 = v56;
    v6 = v58;
LABEL_77:
    v56 = v7;
    v22 = v6;
    do
    {
LABEL_41:
      if ( (v22[4].m128i_i8[0] & 0xF) != 0xE )
        break;
      v24 = get_tinfo_size(0, v22[4].m128i_i64[0], 0);
      if ( v52.m128i_i32[0] != v24 )
        break;
      v22 += 9;
    }
    while ( v9 != v22 );
LABEL_42:
    v59 = 0;
    v25 = sub_46240(v55, (__int64)&v59, &v60, v56, v22);
    if ( v25 != 1 )
      break;
    v26 = v56 + 9;
    for ( i = v56 + 9; v22 != i; i += 9 )
    {
      clear_tinfo_t(&i[4]);
      v28 = i[2].m128i_i64[1];
      if ( v28 )
      {
        i[3].m128i_i64[0] = 0;
        qfree(v28);
      }
      v29 = i[1].m128i_i64[0];
      if ( v29 )
      {
        i[1].m128i_i64[1] = 0;
        qfree(v29);
      }
    }
    memmove(v26, v22, (char *)&(*a2)[9 * (_QWORD)a2[1]] - (char *)v22);
    v30 = *a2;
    v31 = (unsigned __int64)a2[1] + 0x71C71C71C71C71C7LL * (v22 - v26);
    a2[1] = (__m128i *)v31;
    v32 = 144 * v31;
    v9 = &v30[9 * v31];
    v33 = 144LL * v17;
    v6 = &v30[(unsigned __int64)v33 / 0x10];
    v6->m128i_i64[0] = v54 & 0xFFFFFFFFFFFFFFF8LL;
    v6->m128i_i64[1] = 8 * v60;
    v34 = v62;
    if ( (_QWORD)v62 )
    {
      v35 = v61;
      v36 = v61 + 24 * v62 - 24;
      v37 = 0;
      v38 = *(_QWORD *)(v36 + 8);
      if ( v38 )
      {
        v43 = *(_QWORD *)(v36 + 8);
        v52.m128i_i64[0] = v61 + 24 * v62 - 24;
        v44 = (void *)qalloc_or_throw(v43);
        v37 = (__int64)memcpy(v44, *(const void **)v52.m128i_i64[0], v38);
        v34 = v62;
        if ( (_QWORD)v62 )
        {
          v35 = v61;
          goto LABEL_54;
        }
      }
      else
      {
LABEL_54:
        *(_QWORD *)&v62 = v34 - 1;
        v39 = (__int64 *)(v35 + 24 * (v34 - 1));
        v40 = *v39;
        if ( *v39 )
        {
          v39[1] = 0;
          v52.m128i_i64[0] = v37;
          qfree(v40);
          v37 = v52.m128i_i64[0];
        }
      }
      v41 = v6[1].m128i_i64[0];
      v42 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
      if ( v41 )
      {
        v6[1].m128i_i64[1] = 0;
        v54 = v37;
        v52 = v42;
        qfree(v41);
        v37 = v54;
        v42 = _mm_load_si128(&v52);
      }
      v6[1].m128i_i64[0] = v37;
      *(__m128i *)((char *)v6 + 24) = v42;
      goto LABEL_51;
    }
    sub_37FD0(v6[1].m128i_i64, (__int64)"___u%d", v17);
LABEL_51:
    copy_tinfo_t(&v6[4], &v59);
    clear_tinfo_t(&v59);
    if ( v33 == v32 )
    {
LABEL_67:
      v25 = 1;
      goto LABEL_68;
    }
    v8 = v6;
    v7 = v9;
LABEL_7:
    v3 = a2[1];
    v4 = *a2;
    v6 += 9;
    v5 = 8LL * (_QWORD)v3;
  }
  clear_tinfo_t(&v59);
LABEL_68:
  v45 = v61;
  if ( v61 )
  {
    v46 = v62;
    if ( (_QWORD)v62 )
    {
      v47 = 0;
      do
      {
        v48 = (__int64 *)(v45 + 24 * v47);
        v49 = *v48;
        if ( *v48 )
        {
          v48[1] = 0;
          qfree(v49);
          v45 = v61;
        }
        ++v47;
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v62 = 0;
    qfree(v45);
  }
  return v25;
}

