__int64 __fastcall sub_1D9EC0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __m128i *v23; // r15
  bool v24; // zf
  bool v25; // sf
  __m128i *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rdx
  __m128i *v30; // rax
  unsigned __int64 *v31; // rbp
  unsigned __int64 *v32; // r12
  _QWORD *v33; // r13
  _QWORD *v34; // rdi
  _QWORD *j; // r9
  unsigned __int64 *v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // r9
  unsigned __int64 *v39; // r10
  __int64 v40; // r11
  unsigned __int64 *v41; // rbx
  unsigned __int64 v42; // rsi
  __m128i *v43; // rbp
  __int64 k; // rax
  __int64 v45; // rcx
  unsigned __int64 *v46; // rdx
  signed __int64 v47; // r10
  __int64 v48; // r9
  __int64 v49; // r15
  char *v50; // r8
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __m128i *v53; // rbx
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __m128i *i; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // [rsp+0h] [rbp-98h]
  signed __int64 v64; // [rsp+0h] [rbp-98h]
  char *v65; // [rsp+8h] [rbp-90h]
  char *v66; // [rsp+8h] [rbp-90h]
  __m128i *src; // [rsp+10h] [rbp-88h]
  __int64 v69; // [rsp+28h] [rbp-70h]
  __int64 v70; // [rsp+30h] [rbp-68h] BYREF
  __int128 v71; // [rsp+38h] [rbp-60h]
  __int128 v72; // [rsp+48h] [rbp-50h]
  unsigned __int64 v73; // [rsp+58h] [rbp-40h]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL);
  v73 = __readfsqword(0x28u);
  v6 = a3;
  if ( !v5 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    v69 = *(_QWORD *)(a1 + 64);
    if ( *(_BYTE *)(a1 + 136) )
    {
      v5 = *(int *)(v12 + 92);
      if ( !a3 )
        goto LABEL_20;
    }
    else if ( !a3 )
    {
      goto LABEL_20;
    }
    v9 = *(_QWORD *)(v69 + 112) - a3;
    goto LABEL_12;
  }
  if ( a3 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    a2 = *(_QWORD *)(v8 + 112);
    v69 = v8;
    v9 = a2 - a3;
    if ( *(_BYTE *)(a1 + 136) )
    {
      v5 = *(int *)(v8 + 92);
      if ( a3 <= 0 )
      {
LABEL_5:
        v10 = a3;
        goto LABEL_6;
      }
      goto LABEL_13;
    }
    v5 = 0;
LABEL_12:
    if ( a3 <= 0 )
      goto LABEL_5;
LABEL_13:
    a5.m128i_i64[0] = 0;
    *(_QWORD *)&v72 = 0;
    v71 = 0;
    v13 = *(__int64 **)v69;
    *((_QWORD *)&v71 + 1) = a3;
    if ( !v13 )
    {
      if ( !under_debugger )
        sub_383060(0xCDF0u, 0.0);
      goto LABEL_87;
    }
    v9 += a3;
    v10 = a3;
    v14 = &v70;
    v70 = *v13;
    *((_QWORD *)&v72 + 1) = *(_QWORD *)(v69 + 56);
    goto LABEL_15;
  }
  v61 = v5;
  v5 = 0;
  sub_1D4A90(
    *(_QWORD *)(a1 + 8),
    *(_DWORD *)(a1 + 128),
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    v61,
    *(double *)a5.m128i_i64);
  v62 = *(_QWORD *)(a1 + 64);
  v69 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(a1 + 136) )
    v5 = *(int *)(v62 + 92);
LABEL_20:
  v20 = sub_1CFBB0(*(_QWORD *)(a1 + 8), a2, *(double *)a5.m128i_i64);
  a3 = *(_QWORD *)(a1 + 56);
  v21 = *(_QWORD *)(a3 + 16) + v20;
  v9 = v5 + *(_QWORD *)(v69 + 112);
  v10 = v9 - v21;
  if ( v9 - v21 <= 0 )
  {
    v9 = v21;
    goto LABEL_6;
  }
  v70 = -1;
  a5.m128i_i64[0] = 0;
  v14 = nullptr;
  v71 = 0;
  v72 = 0;
LABEL_15:
  sub_1D4BA0(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 128), v10, v14);
  sub_316CB0((__int64 *)(*(_QWORD *)(a1 + 8) + 184LL), (__int64 **)(v69 + 176), v15, v16);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL) += v10;
  a3 = *(_QWORD *)(a1 + 8);
  v17 = *(int *)(a1 + 128);
  a2 = *(int *)(a3 + 64);
  a4 = a2;
  if ( v17 < a2 )
  {
    while ( (unsigned int)v17 < (unsigned int)a4 )
    {
      v18 = (unsigned int)v17++;
      v19 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v18);
      *(_QWORD *)(v19 + 328) = *(_QWORD *)(a3 + 152);
      *(_QWORD *)(v19 + 520) = 0;
      a3 = *(_QWORD *)(a1 + 8);
      a2 = *(int *)(a3 + 64);
      a4 = a2;
      if ( v17 >= a2 )
        goto LABEL_6;
    }
    if ( !under_debugger )
      sub_383060(0xCDEFu, 0.0);
LABEL_87:
    BUG();
  }
LABEL_6:
  v11 = *(_QWORD *)(v69 + 304);
  if ( !v11 )
  {
    if ( !under_debugger )
      sub_383060(0xCDEAu, *(double *)a5.m128i_i64);
    goto LABEL_87;
  }
  v22 = 16 * v11;
  v23 = (__m128i *)qalloc_or_throw(v22, a2, a3, a4);
  src = v23;
  memcpy(v23, *(const void **)(v69 + 296), v22);
  v24 = v10 == 0;
  v25 = v10 < 0;
  v26 = &v23[(unsigned __int64)v22 / 0x10];
  v27 = v5 & -(__int64)((!v25 && !v24) & (unsigned __int8)(v6 == 0));
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *(_QWORD *)(v28 + 136) - v9 + v27;
  v30 = v23;
  if ( &v23[(unsigned __int64)v22 / 0x10] == v23 )
    goto LABEL_66;
  if ( (v22 & 0x10) == 0 || (v23->m128i_i64[1] -= v29, v30 = v23 + 1, v26 != &v23[1]) )
  {
    do
    {
      v30->m128i_i64[1] -= v29;
      v30[1].m128i_i64[1] -= v29;
      v30 += 2;
    }
    while ( v26 != v30 );
  }
  v31 = (unsigned __int64 *)v23;
  if ( !*(_QWORD *)(a1 + 48) )
    goto LABEL_27;
  do
  {
    sub_1D9190(a1, v31, 1);
    v31 += 2;
  }
  while ( v26 != (__m128i *)v31 );
  if ( v22 >> 4 )
  {
    _BitScanReverse64(&v52, v22 >> 4);
    sub_1D3FD0(v23, v26->m128i_i8, 2LL * (int)v52);
    if ( v22 > 256 )
    {
      v53 = v23 + 16;
      sub_1D3AB0(v23, v23 + 16);
      do
      {
        v54 = v53->m128i_i64[0];
        v55 = v53->m128i_i64[1];
        i = v53;
        if ( v53->m128i_i64[0] < (unsigned __int64)v53[-1].m128i_i64[0] )
        {
          for ( i = v53 - 1; ; --i )
          {
            a5 = _mm_loadu_si128(i);
            i[1] = a5;
            if ( v54 >= i[-1].m128i_i64[0] )
              break;
          }
        }
        ++v53;
        i->m128i_i64[0] = v54;
        i->m128i_i64[1] = v55;
      }
      while ( v26 != v53 );
      goto LABEL_27;
    }
  }
  else
  {
    sub_1D3FD0(v23, v23[(unsigned __int64)v22 / 0x10].m128i_i8, -2);
  }
  sub_1D3AB0(v23, v26);
LABEL_27:
  v32 = (unsigned __int64 *)v23;
  v33 = *(_QWORD **)(a1 + 8);
  v34 = (_QWORD *)v33[149];
  for ( j = v34; ; j = (_QWORD *)v33[149] )
  {
    v36 = sub_1D3D00(v34, (__int64)&j[2 * v33[150]], *v32);
    v41 = v36;
    if ( v36 == v39 )
      break;
    v42 = *v36;
    if ( *v36 < v37 )
    {
      if ( !under_debugger )
        sub_383060(0xCDEBu, *(double *)a5.m128i_i64);
      goto LABEL_87;
    }
    if ( v37 == v42 )
    {
      memmove(v36, v36 + 2, (char *)v39 - (char *)v36 - 16);
      --v33[150];
      v42 = *v41;
    }
    v43 = (__m128i *)v32;
    for ( k = ((char *)v26 - (char *)v32) >> 4; k > 0; k = k - 1 - v45 )
    {
      while ( 1 )
      {
        v45 = k >> 1;
        v46 = (unsigned __int64 *)&v43[k >> 1];
        if ( *v46 < v42 )
          break;
        k >>= 1;
        if ( v45 <= 0 )
          goto LABEL_36;
      }
      v43 = (__m128i *)(v46 + 2);
    }
LABEL_36:
    if ( v43 == v26 )
      goto LABEL_58;
    if ( v42 >= v43->m128i_i64[0] )
    {
      if ( !under_debugger )
        sub_383060(0xCDECu, *(double *)a5.m128i_i64);
      goto LABEL_87;
    }
    if ( v43 != src )
    {
LABEL_58:
      v57 = v43[-1].m128i_u64[0];
      if ( v42 < v57 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEDu, *(double *)a5.m128i_i64);
        goto LABEL_87;
      }
      if ( v57 == v42 )
      {
        if ( (unsigned __int8)sub_332920(v69, v42) )
        {
          if ( !under_debugger )
            sub_383060(0xCDEEu, *(double *)a5.m128i_i64);
          goto LABEL_87;
        }
        --v43;
      }
    }
    v47 = (char *)v43 - (char *)v32;
    v48 = ((char *)v43 - (char *)v32) >> 4;
    if ( !v48 )
    {
      v32 = (unsigned __int64 *)v43;
      goto LABEL_46;
    }
    v38 = v33[149];
    v40 = v33[150];
    v49 = ((char *)v43 - (char *)v32) >> 4;
LABEL_41:
    v50 = (char *)v41 - v38;
    if ( v33[151] < (unsigned __int64)(v49 + v40) )
    {
      v64 = v47;
      v66 = (char *)v41 - v38;
      v58 = qvector_reserve((__int64)(v33 + 149), v38, v49 + v40, 16);
      v50 = v66;
      v47 = v64;
      v33[149] = v58;
      v40 = v33[150];
      v41 = (unsigned __int64 *)&v66[v58];
    }
    v65 = v50;
    v63 = v47;
    memmove((char *)v41 + v47, v41, 16 * v40 - (_QWORD)v50);
    v51 = 0;
    v48 = v63;
    if ( v43 != (__m128i *)v32 )
    {
      do
      {
        a5 = _mm_loadu_si128((const __m128i *)&v32[v51 / 8]);
        *(__m128i *)&v41[v51 / 8] = a5;
        v51 += 16LL;
      }
      while ( v51 != (char *)v43 - (char *)v32 );
    }
    v33[150] += v49;
    v32 = (unsigned __int64 *)v43;
    v41 = (unsigned __int64 *)&v65[v33[149]];
LABEL_46:
    v34 = (unsigned __int64 *)((char *)v41 + v48);
    if ( v26 == v43 )
      goto LABEL_65;
  }
  v47 = (char *)v26 - (char *)v32;
  v49 = ((char *)v26 - (char *)v32) >> 4;
  if ( v49 )
  {
    v43 = v26;
    goto LABEL_41;
  }
LABEL_65:
  v28 = *(_QWORD *)(a1 + 8);
LABEL_66:
  v59 = sub_33E140(*(_QWORD *)(v28 + 1496), 1u, v28, v28 + 1192);
  if ( src )
    qfree((__int64)src);
  return v59;
}

