__int64 __fastcall sub_73D00(_QWORD *a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // esi
  __int64 result; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 *v11; // rax
  __int32 v12; // r15d
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // ecx
  __m128i *v17; // rax
  int v18; // edx
  bool v19; // r8
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  const __m128i *v23; // rdi
  __int64 v24; // r11
  __int64 v25; // rcx
  const __m128i *v26; // rax
  __m128i v27; // xmm0
  bool v28; // cf
  unsigned __int64 v29; // r8
  _QWORD *v30; // r9
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  const __m128i *v33; // rbp
  const __m128i *v34; // rdi
  const __m128i *v35; // rcx
  const __m128i *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // r13
  __int64 v40; // rax
  char v41; // al
  __int64 v42; // r13
  unsigned __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r15
  const __m128i *v48; // r8
  __int64 v49; // rcx
  const __m128i *i; // r13
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rsi
  const __m128i *v56; // rdi
  __int64 v57; // rdx
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rsi
  const __m128i *v61; // rax
  __int64 v62; // rsi
  __m128i *v63; // rdx
  signed __int64 v64; // rsi
  __m128i v65; // xmm0
  bool v66; // [rsp+8h] [rbp-90h]
  unsigned int v67; // [rsp+8h] [rbp-90h]
  __int64 v68; // [rsp+8h] [rbp-90h]
  __int64 v69; // [rsp+10h] [rbp-88h]
  __int64 v70; // [rsp+10h] [rbp-88h]
  __int64 v71; // [rsp+18h] [rbp-80h]
  unsigned int v72; // [rsp+20h] [rbp-78h] BYREF
  int v73; // [rsp+24h] [rbp-74h]
  int v74; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int16 v75; // [rsp+2Ch] [rbp-6Ch]
  char v76; // [rsp+2Eh] [rbp-6Ah]
  int v77; // [rsp+30h] [rbp-68h]
  unsigned int v78; // [rsp+34h] [rbp-64h] BYREF
  int v79; // [rsp+38h] [rbp-60h]
  const __m128i *v80; // [rsp+40h] [rbp-58h] BYREF
  __int128 v81; // [rsp+48h] [rbp-50h]
  unsigned __int64 v82; // [rsp+58h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  if ( *a2 != 242 )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)*a3 + 48LL))(*a3, &v74, 12) )
    return 0xFFFFFFFFLL;
  v5 = a1[2];
  if ( v75 )
  {
    if ( *(_QWORD *)(v5 + 640) < (unsigned __int64)v75 )
      return 0;
    v6 = *(_DWORD *)(*(_QWORD *)(v5 + 632) + 40LL * (v75 - 1) + 12);
    if ( v6 == -1 )
      return 0;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 608) + 16LL))(*(_QWORD *)(v5 + 608));
    if ( v6 )
      return 0;
    v5 = a1[2];
  }
  v8 = (unsigned int)sub_64340((_QWORD *)v5, v74 + v6);
  v9 = *(_QWORD *)(a1[2] + 536LL);
  if ( v9 != -1 )
  {
    v8 += v9;
    if ( v8 == -1 )
      return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *, __int64))(*(_QWORD *)*a3 + 48LL))(*a3, &v78, 12) )
    return 0xFFFFFFFFLL;
  v10 = (_QWORD *)a1[3];
  if ( v10[3] )
  {
    v29 = v10[1];
    v30 = *(_QWORD **)(*v10 + 8 * (v78 % v29));
    if ( v30 )
    {
      v31 = (_QWORD *)*v30;
      if ( v78 != *(_DWORD *)(*v30 + 8LL) )
      {
        do
        {
          v32 = (_QWORD *)*v31;
          if ( !*v31 )
            return 0;
          v30 = v31;
          if ( v78 % v29 != *((unsigned int *)v32 + 2) % v29 )
            return 0;
          v31 = (_QWORD *)*v31;
        }
        while ( v78 != *((_DWORD *)v32 + 2) );
      }
      if ( v30 )
      {
        v11 = (__int64 *)*v30;
        if ( *v30 )
          goto LABEL_18;
      }
    }
    return 0;
  }
  v11 = (__int64 *)v10[2];
  if ( !v11 )
    return 0;
  while ( v78 != *((_DWORD *)v11 + 2) )
  {
    v11 = (__int64 *)*v11;
    if ( !v11 )
      return 0;
  }
LABEL_18:
  v12 = *((_DWORD *)v11 + 3);
  v13 = 0;
  v81 = 0;
  v14 = 0;
  v80 = nullptr;
  if ( v79 <= 0 )
    goto LABEL_53;
  do
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *, __int64))(*(_QWORD *)*a3 + 48LL))(*a3, &v72, 8) )
    {
      v33 = v80;
      result = 0xFFFFFFFFLL;
      goto LABEL_38;
    }
    v19 = (v73 & 0xFFFFFF) == 15732480 || (v73 & 0xFFFFFF) == 16707566;
    v20 = v81;
    if ( *((_QWORD *)&v81 + 1) >= (unsigned __int64)(v81 + 1) )
    {
      v15 = (__int64)v80;
    }
    else
    {
      v69 = *((_QWORD *)&v81 + 1);
      v66 = (v73 & 0xFFFFFF) == 15732480 || (v73 & 0xFFFFFF) == 16707566;
      v21 = qvector_reserve(&v80, 0, v81 + 1, 40);
      v22 = v21;
      v23 = v80;
      v24 = *((_QWORD *)&v81 + 1);
      v25 = v81 - 1;
      *((_QWORD *)&v81 + 1) = v69;
      v26 = v80;
      if ( (__int64)v81 - 1 >= 0 )
      {
        do
        {
          v27 = _mm_loadu_si128(v26);
          v22 += 40;
          v26 = (const __m128i *)((char *)v26 + 40);
          *(__m128i *)(v22 - 40) = v27;
          *(__m128i *)(v22 - 24) = _mm_loadu_si128((const __m128i *)((char *)v26 - 24));
          *(_QWORD *)(v22 - 8) = v26[-1].m128i_i64[1];
          v28 = v25-- == 0;
        }
        while ( !v28 );
      }
      v71 = v21;
      v70 = v24;
      qfree(v23);
      v15 = v71;
      v19 = v66;
      v20 = v81;
      v80 = (const __m128i *)v71;
      *((_QWORD *)&v81 + 1) = v70;
    }
    v16 = 0;
    v17 = (__m128i *)(v15 + 40 * v20);
    *v17 = _mm_load_si128((const __m128i *)&xmmword_94030);
    v17[1].m128i_i64[1] = 0;
    *(_QWORD *)&v81 = v81 + 1;
    v17->m128i_i64[0] = v8 + v72;
    v18 = v73 & 0xFFFFFF;
    v17[1].m128i_i32[0] = v73 & 0xFFFFFF;
    if ( !v19 )
      v16 = v18 + (HIBYTE(v73) & 0x7F);
    v17[1].m128i_i32[1] = v16;
    ++v13;
    v17[2].m128i_i32[0] = v12;
    v17[2].m128i_i8[4] = HIBYTE(v73) >> 7;
  }
  while ( v79 > v13 );
  v14 = v81;
  v34 = v80;
  v35 = (const __m128i *)((char *)v80 + 40 * v81);
  if ( v80 != v35 )
  {
    v36 = v80;
    do
    {
      v36 = (const __m128i *)((char *)v36 + 40);
      v38 = v36[-3].m128i_i64[1];
      if ( v35 == v36 )
        v37 = v8 + v77 - v38;
      else
        v37 = v36->m128i_i64[0] - v38;
      v36[-2].m128i_i64[0] = v37;
      v14 = v81;
      v35 = (const __m128i *)((char *)v34 + 40 * v81);
    }
    while ( v36 != v35 );
  }
  if ( (v76 & 1) != 0 && v79 > 0 )
  {
    v39 = 0;
    do
    {
      v41 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64))(*(_QWORD *)*a3 + 48LL))(*a3, &v72, 4);
      v33 = v80;
      if ( !v41 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_38;
      }
      v40 = 5 * v39++;
      v80[1].m128i_i64[v40 + 1] = _mm_unpacklo_epi16(_mm_cvtsi32_si128(v72), (__m128i)0LL).m128i_u64[0];
    }
    while ( v79 > (int)v39 );
    v14 = v81;
  }
  else
  {
LABEL_53:
    v33 = v80;
  }
  v42 = 40 * v14;
  v43 = 0xCCCCCCCCCCCCCCCDLL * ((40 * v14) >> 3);
  result = 0;
  if ( v43 )
  {
    v44 = a1[1];
    v45 = *(_QWORD *)(v44 + 8);
    v46 = v45 - 0x3333333333333333LL * ((40 * v14) >> 3);
    v47 = 40 * v45;
    if ( *(_QWORD *)(v44 + 16) < v45 + v43 )
    {
      v68 = *(_QWORD *)(v44 + 16);
      v52 = qvector_reserve(v44, 0, v46, 40);
      v53 = *(_QWORD *)(v44 + 8);
      v54 = v52;
      v55 = *(_QWORD *)(v44 + 16);
      v56 = *(const __m128i **)v44;
      *(_QWORD *)(v44 + 16) = v68;
      v57 = v53 - 1;
      if ( v57 >= 0 )
      {
        do
        {
          v58 = _mm_loadu_si128(v56);
          v52 += 40;
          v56 = (const __m128i *)((char *)v56 + 40);
          *(__m128i *)(v52 - 40) = v58;
          *(__m128i *)(v52 - 24) = _mm_loadu_si128((const __m128i *)((char *)v56 - 24));
          *(_QWORD *)(v52 - 8) = v56[-1].m128i_i64[1];
          v28 = v57-- == 0;
        }
        while ( !v28 );
        v56 = *(const __m128i **)v44;
      }
      qfree(v56);
      v59 = *(_QWORD *)(v44 + 8);
      v49 = v54 + v47;
      *(_QWORD *)v44 = v54;
      v48 = v80;
      *(_QWORD *)(v44 + 16) = v55;
      v60 = 40 * v59;
      v61 = (const __m128i *)(v54 + 40 * v59);
      v62 = v60 - v47;
      v63 = (__m128i *)(v54 + v47 + v42 + v62);
      v64 = 0xCCCCCCCCCCCCCCCDLL * (v62 >> 3) - 1;
      if ( v64 >= 0 )
      {
        do
        {
          v65 = _mm_loadu_si128((const __m128i *)((char *)v61 - 40));
          v61 = (const __m128i *)((char *)v61 - 40);
          v63 = (__m128i *)((char *)v63 - 40);
          *v63 = v65;
          v63[1] = _mm_loadu_si128(v61 + 1);
          v63[2].m128i_i64[0] = v61[2].m128i_i64[0];
          v28 = v64-- == 0;
        }
        while ( !v28 );
      }
    }
    else
    {
      v48 = v33;
      v49 = v47 + *(_QWORD *)v44;
    }
    for ( i = (const __m128i *)((char *)v33 + v42); i != v33; *(_QWORD *)(v49 - 8) = v33[-1].m128i_i64[1] )
    {
      v51 = _mm_loadu_si128(v33);
      v33 = (const __m128i *)((char *)v33 + 40);
      v49 += 40;
      *(__m128i *)(v49 - 40) = v51;
      *(__m128i *)(v49 - 24) = _mm_loadu_si128((const __m128i *)((char *)v33 - 24));
    }
    *(_QWORD *)(v44 + 8) += v43;
    v33 = v48;
    result = 0;
  }
LABEL_38:
  if ( v33 )
  {
    v67 = result;
    *(_QWORD *)&v81 = 0;
    qfree(v33);
    return v67;
  }
  return result;
}

