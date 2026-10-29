__int64 __fastcall sub_1D5620(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r14
  signed __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  signed __int64 v22; // rbx
  __m128i *v23; // r15
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  bool v27; // sf
  __m128i *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rdx
  __m128i *v32; // rax
  __int64 *v33; // rbp
  unsigned __int64 *v34; // r12
  _QWORD *v35; // r13
  char *v36; // rdi
  char *j; // r9
  char *v38; // rax
  unsigned __int64 v39; // rdx
  char *v40; // r10
  __int64 v41; // r11
  char *v42; // rbx
  unsigned __int64 v43; // rsi
  __m128i *v44; // rbp
  __int64 k; // rax
  __int64 v46; // rcx
  __m128i *v47; // rdx
  signed __int64 v48; // r10
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
  signed __int64 v63; // [rsp+0h] [rbp-98h]
  signed __int64 v64; // [rsp+0h] [rbp-98h]
  char *v65; // [rsp+8h] [rbp-90h]
  char *v66; // [rsp+8h] [rbp-90h]
  __m128i *src; // [rsp+10h] [rbp-88h]
  __int64 v69; // [rsp+28h] [rbp-70h]
  __int64 v70; // [rsp+30h] [rbp-68h] BYREF
  __int128 v71; // [rsp+38h] [rbp-60h]
  __int128 v72; // [rsp+48h] [rbp-50h]
  unsigned __int64 v73; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL);
  v73 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    v69 = *(_QWORD *)(a1 + 64);
    if ( *(_BYTE *)(a1 + 136) )
    {
      v6 = *(int *)(v13 + 92);
      if ( !a3 )
        goto LABEL_20;
    }
    else if ( !a3 )
    {
      goto LABEL_20;
    }
    v10 = *(_QWORD *)(v69 + 112) - a3;
    goto LABEL_12;
  }
  if ( a3 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v69 = v9;
    v10 = *(_QWORD *)(v9 + 112) - a3;
    if ( *(_BYTE *)(a1 + 136) )
    {
      v6 = *(int *)(v9 + 92);
      if ( a3 <= 0 )
      {
LABEL_5:
        v11 = a3;
        goto LABEL_6;
      }
      goto LABEL_13;
    }
    v6 = 0;
LABEL_12:
    if ( a3 <= 0 )
      goto LABEL_5;
LABEL_13:
    *(_QWORD *)&v72 = 0;
    v71 = 0;
    v14 = *(__int64 **)v69;
    *((_QWORD *)&v71 + 1) = a3;
    if ( !v14 )
    {
      if ( !under_debugger )
        sub_37E160(52720);
      goto LABEL_87;
    }
    v10 += a3;
    v11 = a3;
    v15 = &v70;
    v70 = *v14;
    *((_QWORD *)&v72 + 1) = *(_QWORD *)(v69 + 56);
    goto LABEL_15;
  }
  v61 = v6;
  v6 = 0;
  sub_1D0710(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 128), *(_DWORD *)(*(_QWORD *)(a1 + 8) + 64LL), v61);
  v62 = *(_QWORD *)(a1 + 64);
  v69 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(a1 + 136) )
    v6 = *(int *)(v62 + 92);
LABEL_20:
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL) + sub_1CB7F0(*(_QWORD *)(a1 + 8), a2);
  v10 = v6 + *(_QWORD *)(v69 + 112);
  v11 = v10 - v21;
  if ( v10 - v21 <= 0 )
  {
    v10 = v21;
    goto LABEL_6;
  }
  v70 = -1;
  v15 = nullptr;
  v71 = 0;
  v72 = 0;
LABEL_15:
  sub_1D0820(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 128), v11, (__int64)v15, a5, a6);
  sub_311F30(*(_QWORD *)(a1 + 8) + 184LL, v69 + 176);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL) += v11;
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(int *)(a1 + 128);
  v18 = *(int *)(v16 + 64);
  if ( v17 < v18 )
  {
    while ( (unsigned int)v17 < (unsigned int)v18 )
    {
      v19 = (unsigned int)v17++;
      v20 = *(_QWORD *)(*(_QWORD *)(v16 + 528) + 8 * v19);
      *(_QWORD *)(v20 + 328) = *(_QWORD *)(v16 + 152);
      *(_QWORD *)(v20 + 520) = 0;
      v16 = *(_QWORD *)(a1 + 8);
      v18 = *(int *)(v16 + 64);
      if ( v17 >= v18 )
        goto LABEL_6;
    }
    if ( !under_debugger )
      sub_37E160(52719);
LABEL_87:
    BUG();
  }
LABEL_6:
  v12 = *(_QWORD *)(v69 + 304);
  if ( !v12 )
  {
    if ( !under_debugger )
      sub_37E160(52714);
    goto LABEL_87;
  }
  v22 = v12;
  v23 = (__m128i *)qalloc_or_throw();
  src = v23;
  memcpy(v23, *(const void **)(v69 + 296), v22 * 16);
  v26 = v11 == 0;
  v27 = v11 < 0;
  v28 = &v23[v22];
  v29 = v6 & -(__int64)((!v27 && !v26) & (unsigned __int8)(a3 == 0));
  v30 = *(_QWORD *)(a1 + 8);
  v31 = *(_QWORD *)(v30 + 136) - v10 + v29;
  v32 = v23;
  if ( &v23[v22] == v23 )
    goto LABEL_66;
  if ( ((v22 * 16) & 0x10) == 0 || (v23->m128i_i64[1] -= v31, v32 = v23 + 1, v28 != &v23[1]) )
  {
    do
    {
      v32->m128i_i64[1] -= v31;
      v32[1].m128i_i64[1] -= v31;
      v32 += 2;
    }
    while ( v28 != v32 );
  }
  v33 = (__int64 *)v23;
  if ( !*(_QWORD *)(a1 + 48) )
    goto LABEL_27;
  do
  {
    sub_1D48E0(a1, v33, 1);
    v33 += 2;
  }
  while ( v28 != (__m128i *)v33 );
  if ( (v22 * 16) >> 4 )
  {
    _BitScanReverse64(&v52, (v22 * 16) >> 4);
    sub_1CFC50(v23, (unsigned __int64 *)v28, 2LL * (int)v52);
    if ( v22 > 16 )
    {
      v53 = v23 + 16;
      sub_1CF730(v23, v23 + 16);
      do
      {
        v54 = v53->m128i_i64[0];
        v55 = v53->m128i_i64[1];
        i = v53;
        if ( v53->m128i_i64[0] < (unsigned __int64)v53[-1].m128i_i64[0] )
        {
          for ( i = v53 - 1; ; --i )
          {
            i[1] = _mm_loadu_si128(i);
            if ( v54 >= i[-1].m128i_i64[0] )
              break;
          }
        }
        ++v53;
        i->m128i_i64[0] = v54;
        i->m128i_i64[1] = v55;
      }
      while ( v28 != v53 );
      goto LABEL_27;
    }
  }
  else
  {
    sub_1CFC50(v23, (unsigned __int64 *)&v23[v22], -2);
  }
  sub_1CF730(v23, v28);
LABEL_27:
  v34 = (unsigned __int64 *)v23;
  v35 = *(_QWORD **)(a1 + 8);
  v36 = (char *)v35[149];
  for ( j = v36; ; j = (char *)v35[149] )
  {
    v38 = (char *)sub_1CF980(v36, (__int64)&j[16 * v35[150]], *v34);
    v42 = v38;
    if ( v38 == v40 )
      break;
    v43 = *(_QWORD *)v38;
    if ( *(_QWORD *)v38 < v39 )
    {
      if ( !under_debugger )
        sub_37E160(52715);
      goto LABEL_87;
    }
    if ( v39 == v43 )
    {
      memmove(v38, v38 + 16, v40 - v38 - 16);
      --v35[150];
      v43 = *(_QWORD *)v42;
    }
    v44 = (__m128i *)v34;
    for ( k = ((char *)v28 - (char *)v34) >> 4; k > 0; k = k - 1 - v46 )
    {
      while ( 1 )
      {
        v46 = k >> 1;
        v47 = &v44[k >> 1];
        if ( v47->m128i_i64[0] < v43 )
          break;
        k >>= 1;
        if ( v46 <= 0 )
          goto LABEL_36;
      }
      v44 = v47 + 1;
    }
LABEL_36:
    if ( v44 == v28 )
      goto LABEL_58;
    if ( v43 >= v44->m128i_i64[0] )
    {
      if ( !under_debugger )
        sub_37E160(52716);
      goto LABEL_87;
    }
    if ( v44 != src )
    {
LABEL_58:
      v57 = v44[-1].m128i_u64[0];
      if ( v43 < v57 )
      {
        if ( !under_debugger )
          sub_37E160(52717);
        goto LABEL_87;
      }
      if ( v57 == v43 )
      {
        if ( (unsigned __int8)sub_32D8E0(v69, v43) )
        {
          if ( !under_debugger )
            sub_37E160(52718);
          goto LABEL_87;
        }
        --v44;
      }
    }
    v48 = (char *)v44 - (char *)v34;
    v24 = ((char *)v44 - (char *)v34) >> 4;
    v25 = v24;
    if ( !v24 )
    {
      v34 = (unsigned __int64 *)v44;
      goto LABEL_46;
    }
    v25 = v35[149];
    v41 = v35[150];
    v49 = ((char *)v44 - (char *)v34) >> 4;
LABEL_41:
    v50 = &v42[-v25];
    if ( v35[151] < (unsigned __int64)(v49 + v41) )
    {
      v64 = v48;
      v66 = &v42[-v25];
      v58 = qvector_reserve();
      v50 = v66;
      v48 = v64;
      v35[149] = v58;
      v41 = v35[150];
      v42 = &v66[v58];
    }
    v65 = v50;
    v63 = v48;
    memmove(&v42[v48], v42, 16 * v41 - (_QWORD)v50);
    v51 = 0;
    v25 = v63;
    LODWORD(v24) = (_DWORD)v65;
    if ( v44 != (__m128i *)v34 )
    {
      do
      {
        *(__m128i *)&v42[v51] = _mm_loadu_si128((const __m128i *)&v34[v51 / 8]);
        v51 += 16LL;
      }
      while ( v51 != (char *)v44 - (char *)v34 );
    }
    v35[150] += v49;
    v34 = (unsigned __int64 *)v44;
    v42 = &v65[v35[149]];
LABEL_46:
    v36 = &v42[v25];
    if ( v28 == v44 )
      goto LABEL_65;
  }
  v48 = (char *)v28 - (char *)v34;
  v24 = ((char *)v28 - (char *)v34) >> 4;
  v49 = v24;
  if ( v24 )
  {
    v44 = v28;
    goto LABEL_41;
  }
LABEL_65:
  v30 = *(_QWORD *)(a1 + 8);
LABEL_66:
  v59 = sub_339220(*(_QWORD *)(v30 + 1496), 1, v30, (int)v30 + 1192, v24, v25);
  if ( src )
    qfree();
  return v59;
}

