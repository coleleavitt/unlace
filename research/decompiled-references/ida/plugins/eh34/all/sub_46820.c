__int64 __fastcall sub_46820(__int64 a1, __m128i *a2)
{
  __int64 v2; // r12
  __int64 v4; // r15
  __int64 i; // rbp
  int v6; // r14d
  __int64 v7; // rax
  __int64 *v8; // rcx
  int *v9; // r12
  int *j; // rbp
  int v11; // r14d
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm2
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // r15
  _QWORD **v19; // rbp
  void *v20; // rdi
  _QWORD *v21; // rbp
  _QWORD *v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // rdi
  __m128i *k; // rbp
  __m128i *v30; // rdi
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rbp
  __int64 v35; // r14
  __int64 v36; // rdi
  __m128i v37; // xmm4
  bool v38; // zf
  __int64 v39; // rdi
  int *v40; // rax
  int *v41; // rsi
  int v42; // edx
  __m128i v43; // xmm0
  __m128i v44; // xmm3
  __int64 v45; // rbp
  __int64 v46; // r12
  __int64 v47; // r14
  __int64 v48; // rdi
  __m128i v50; // [rsp+10h] [rbp-198h] BYREF
  __m128i v51; // [rsp+20h] [rbp-188h] BYREF
  __int64 v52; // [rsp+30h] [rbp-178h]
  __int64 v53; // [rsp+40h] [rbp-168h] BYREF
  __m128i v54; // [rsp+48h] [rbp-160h] BYREF
  char v55; // [rsp+58h] [rbp-150h]
  char v56[8]; // [rsp+60h] [rbp-148h] BYREF
  __m128i v57; // [rsp+68h] [rbp-140h]
  __int64 v58; // [rsp+78h] [rbp-130h]
  __int64 v59; // [rsp+80h] [rbp-128h]
  __int128 v60; // [rsp+88h] [rbp-120h]
  __int64 v61; // [rsp+98h] [rbp-110h]
  __int128 v62; // [rsp+A0h] [rbp-108h]
  __int64 v63; // [rsp+B0h] [rbp-F8h]
  __int128 v64; // [rsp+B8h] [rbp-F0h]
  void *v65; // [rsp+C8h] [rbp-E0h]
  int v66; // [rsp+D0h] [rbp-D8h]
  __int64 v67; // [rsp+D8h] [rbp-D0h]
  int v68; // [rsp+E0h] [rbp-C8h]
  __int64 v69; // [rsp+E8h] [rbp-C0h]
  int v70; // [rsp+F8h] [rbp-B0h] BYREF
  void *v71; // [rsp+100h] [rbp-A8h]
  int *v72; // [rsp+108h] [rbp-A0h]
  int *v73; // [rsp+110h] [rbp-98h]
  __int64 v74; // [rsp+118h] [rbp-90h]
  int v75; // [rsp+128h] [rbp-80h] BYREF
  void *v76; // [rsp+130h] [rbp-78h]
  int *v77; // [rsp+138h] [rbp-70h]
  int *v78; // [rsp+140h] [rbp-68h]
  __int64 v79; // [rsp+148h] [rbp-60h]
  __int128 v80; // [rsp+150h] [rbp-58h]
  __int64 v81; // [rsp+160h] [rbp-48h]
  unsigned __int64 v82; // [rsp+168h] [rbp-40h]

  v2 = a2[6].m128i_i64[1];
  v82 = __readfsqword(0x28u);
  v52 = 0;
  v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v51, (__m128i)(unsigned __int64)&v51);
  if ( (unsigned __int64 *)v2 != &a2[5].m128i_u64[1] )
  {
    do
    {
      v4 = *(_QWORD *)(v2 + 40);
      for ( i = v4 + 40LL * *(_QWORD *)(v2 + 48); i != v4; ++v52 )
      {
        v6 = *(_DWORD *)(v4 + 32);
        v7 = qalloc_or_throw(32);
        *(_QWORD *)v7 = &v51;
        v8 = (__int64 *)v51.m128i_i64[1];
        *(_QWORD *)(v7 + 24) = v4;
        v4 += 40;
        *(_QWORD *)(v7 + 8) = v8;
        *(_DWORD *)(v7 + 16) = v6;
        *v8 = v7;
        v51.m128i_i64[1] = v7;
      }
      v2 = std::_Rb_tree_increment(v2);
    }
    while ( &a2[5].m128i_u64[1] != (unsigned __int64 *)v2 );
  }
  v9 = (int *)a2[14].m128i_i64[0];
  for ( j = &v9[a2[14].m128i_i64[1]]; j != v9; ++v52 )
  {
    v11 = *v9;
    v12 = qalloc_or_throw(32);
    *(_QWORD *)v12 = &v51;
    v13 = (__int64 *)v51.m128i_i64[1];
    ++v9;
    *(_DWORD *)(v12 + 16) = v11;
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(v12 + 24) = 0;
    *v13 = v12;
    v51.m128i_i64[1] = v12;
  }
  v14 = a2->m128i_i64[1];
  v56[0] = 0;
  v81 = -1;
  v15 = (__m128i)(unsigned __int64)v14;
  v16 = *(_QWORD *)(v14 + 16);
  v59 = 0;
  v61 = 0;
  v58 = v16;
  v72 = &v70;
  v73 = &v70;
  v77 = &v75;
  v78 = &v75;
  v57 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&a2[3], v15);
  v63 = 0;
  v65 = nullptr;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = nullptr;
  v74 = 0;
  v75 = 0;
  v76 = nullptr;
  v79 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v80 = 0;
  sub_4BC10(&v53, v56, &v51);
  v17 = _mm_loadu_si128(&v54);
  v18 = v53;
  v50 = v17;
  if ( v55 )
  {
    *(_QWORD *)a1 = v53;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v17;
    goto LABEL_9;
  }
  v32 = a2[32].m128i_i64[1];
  v53 = 0;
  v54 = 0;
  if ( v32 )
  {
    v33 = a2[33].m128i_i64[0];
    if ( v33 )
    {
      v34 = 0;
      v35 = 0;
      do
      {
        v36 = v34 + v32;
        ++v35;
        v34 += 56;
        sub_4C1A0(v36);
        v32 = a2[32].m128i_i64[1];
      }
      while ( v33 != v35 );
    }
    a2[33].m128i_i64[0] = 0;
    qfree(v32);
    v37 = _mm_load_si128(&v50);
    v38 = v55 == 0;
    a2[32].m128i_i64[1] = v18;
    v39 = v53;
    a2[33] = v37;
    if ( !v38 )
    {
      if ( !v39 )
        goto LABEL_36;
      goto LABEL_35;
    }
    if ( v39 )
    {
      v45 = v54.m128i_i64[0];
      if ( v54.m128i_i64[0] )
      {
        v46 = 0;
        v47 = 0;
        do
        {
          v48 = v46 + v39;
          ++v47;
          v46 += 56;
          sub_4C1A0(v48);
          v39 = v53;
        }
        while ( v45 != v47 );
      }
LABEL_35:
      v54.m128i_i64[0] = 0;
      qfree(v39);
    }
  }
  else
  {
    v44 = _mm_load_si128(&v50);
    a2[32].m128i_i64[1] = v18;
    a2[33] = v44;
  }
LABEL_36:
  v40 = (int *)a2[15].m128i_i64[1];
  v41 = &v40[4 * a2[16].m128i_i64[0]];
  if ( v41 == v40 )
  {
LABEL_41:
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    while ( 1 )
    {
      v42 = *(_DWORD *)(v63 + 4LL * *v40);
      *v40 = v42;
      if ( v42 == -1 )
        break;
      v40 += 4;
      if ( v41 == v40 )
        goto LABEL_41;
    }
    sub_64B50(
      (unsigned int)&v53,
      a2->m128i_i64[1],
      (unsigned int)"%s state %d: %s was not present in trace",
      (unsigned int)"link",
      0,
      (unsigned int)"entry");
    v43 = _mm_loadu_si128(&v54);
    *(_QWORD *)a1 = v53;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v43;
  }
LABEL_9:
  v19 = (_QWORD **)v76;
  if ( v76 )
  {
    do
    {
      sub_44000(v19[3]);
      v20 = v19;
      v19 = (_QWORD **)v19[2];
      operator delete(v20, 0x28u);
    }
    while ( v19 );
  }
  v21 = v71;
  if ( v71 )
  {
    do
    {
      v22 = v21;
      sub_441D0((_QWORD *)v21[3]);
      v23 = v21[5];
      v21 = (_QWORD *)v21[2];
      if ( v23 )
      {
        v22[6] = 0;
        qfree(v23);
      }
      operator delete(v22, 0x40u);
    }
    while ( v21 );
  }
  if ( v65 )
    operator delete(v65, v69 - (_QWORD)v65);
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  v24 = v59;
  if ( v59 )
  {
    v25 = v60;
    if ( (_QWORD)v60 )
    {
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = v26 + v24;
        ++v27;
        v26 += 56;
        sub_4C1A0(v28);
        v24 = v59;
      }
      while ( v25 != v27 );
    }
    *(_QWORD *)&v60 = 0;
    qfree(v24);
  }
  for ( k = (__m128i *)v51.m128i_i64[0]; k != &v51; --v52 )
  {
    v30 = k;
    k = (__m128i *)k->m128i_i64[0];
    *(_QWORD *)v30->m128i_i64[1] = k;
    k->m128i_i64[1] = v30->m128i_i64[1];
    qfree(v30);
  }
  return a1;
}

