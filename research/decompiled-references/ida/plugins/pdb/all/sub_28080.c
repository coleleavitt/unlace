unsigned __int64 __fastcall sub_28080(_QWORD *a1, _QWORD *a2, double a3, __m128i a4)
{
  unsigned __int64 v4; // rax
  __int64 v8; // rax
  const __m128i *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r12
  const __m128i *v13; // rax
  __int64 v14; // rcx
  __m128i v15; // xmm0
  bool v16; // cf
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int8 *v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rax
  signed int v27; // ecx
  __m128i v28; // xmm2
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  void *v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r8
  _BOOL8 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // r10
  __m128i v43; // xmm0
  __m128i v44; // xmm3
  __m128i v45; // xmm1
  __int64 v46; // r9
  char v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  const __m128i *v53; // rdi
  __int64 v54; // rsi
  __m128i v55; // xmm2
  __m128i v56; // xmm0
  __m128i v57; // xmm3
  __m128i v58; // xmm1
  __m128i v59; // xmm4
  __m128i v60; // xmm1
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // [rsp+0h] [rbp-98h]
  int v65; // [rsp+8h] [rbp-90h]
  _QWORD *v66; // [rsp+8h] [rbp-90h]
  unsigned int v67; // [rsp+8h] [rbp-90h]
  int v68; // [rsp+8h] [rbp-90h]
  void *v69; // [rsp+10h] [rbp-88h]
  __int64 v70; // [rsp+10h] [rbp-88h]
  __int64 v71; // [rsp+10h] [rbp-88h]
  void *v72; // [rsp+10h] [rbp-88h]
  __int64 v73; // [rsp+18h] [rbp-80h]
  void *v74; // [rsp+18h] [rbp-80h]
  __int64 v75; // [rsp+28h] [rbp-70h]
  __int64 v76; // [rsp+30h] [rbp-68h]
  __int64 v77; // [rsp+30h] [rbp-68h]
  __int64 v78; // [rsp+38h] [rbp-60h]
  const __m128i *v79; // [rsp+40h] [rbp-58h] BYREF
  __int128 v80; // [rsp+48h] [rbp-50h]
  unsigned __int64 v81; // [rsp+58h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v4 = a2[1];
  v64 = v4;
  if ( !v4 )
    return v81 - __readfsqword(0x28u);
  v80 = 0;
  v79 = nullptr;
  v8 = qvector_reserve(&v79, 0, v4, 40);
  v9 = v79;
  v10 = v8;
  v11 = v8;
  v12 = *((_QWORD *)&v80 + 1);
  *((_QWORD *)&v80 + 1) = 0;
  v13 = v79;
  v14 = v80 - 1;
  if ( (__int64)v80 - 1 >= 0 )
  {
    do
    {
      v15 = _mm_loadu_si128(v13);
      v11 += 40;
      v13 = (const __m128i *)((char *)v13 + 40);
      *(__m128i *)(v11 - 40) = v15;
      *(__m128i *)(v11 - 24) = _mm_loadu_si128((const __m128i *)((char *)v13 - 24));
      *(_QWORD *)(v11 - 8) = v13[-1].m128i_i64[1];
      v16 = v14-- == 0;
    }
    while ( !v16 );
  }
  qfree(v9);
  v79 = (const __m128i *)v10;
  *((_QWORD *)&v80 + 1) = v12;
  if ( (unsigned __int64)v80 < v64 )
  {
    v17 = v80 + 1;
    v18 = 40 * v80;
    v19 = 40 * v80 + v10;
    *(_QWORD *)v19 = -1;
    *(_QWORD *)(v19 + 24) = 0xFFFFFFFF00000000LL;
    *(_BYTE *)(v19 + 32) = 0;
    *(_OWORD *)(v19 + 8) = 0;
    if ( v17 < v64 )
    {
      v20 = v18 + 40;
      do
      {
        ++v17;
        v21 = &v79->m128i_i8[v20];
        v20 += 40;
        *(_QWORD *)v21 = -1;
        *((_QWORD *)v21 + 3) = 0xFFFFFFFF00000000LL;
        v21[32] = 0;
        *(_OWORD *)(v21 + 8) = 0;
      }
      while ( v64 != v17 );
    }
  }
  v22 = 0;
  v23 = a1 + 1;
  *(_QWORD *)&v80 = v64;
  do
  {
    v24 = a1 + 1;
    v25 = *a2 + 40 * v22;
    v26 = a1[2];
    v27 = *(_DWORD *)(v25 + 20);
    v28 = _mm_cvtsi32_si128(v27);
    if ( !v26 )
      goto LABEL_41;
    do
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)(v26 + 16);
        v30 = *(_QWORD *)(v26 + 24);
        if ( v27 > *(_DWORD *)(v26 + 32) )
          break;
        v24 = (_QWORD *)v26;
        v26 = *(_QWORD *)(v26 + 16);
        if ( !v29 )
          goto LABEL_15;
      }
      v26 = *(_QWORD *)(v26 + 24);
    }
    while ( v30 );
LABEL_15:
    if ( v24 == v23 )
    {
LABEL_41:
      v67 = *(_DWORD *)(v25 + 20);
      v61 = operator new(0x40u);
      v34 = v67;
      *(_QWORD *)(v61 + 40) = 0;
      v35 = (void *)v61;
      *(_OWORD *)(v61 + 48) = 0;
      *(_DWORD *)(v61 + 32) = v67;
      if ( !a1[5] )
        goto LABEL_43;
      v37 = a1[4];
      v24 = nullptr;
      if ( (signed int)v67 <= *(_DWORD *)(v37 + 32) )
        goto LABEL_43;
    }
    else
    {
      v65 = *(_DWORD *)(v25 + 20);
      if ( v27 >= *((_DWORD *)v24 + 8) )
        goto LABEL_28;
      v31 = operator new(0x40u);
      LODWORD(v34) = v65;
      *(_QWORD *)(v31 + 40) = 0;
      v35 = (void *)v31;
      *(_OWORD *)(v31 + 48) = 0;
      *(_DWORD *)(v31 + 32) = v65;
      v36 = *((unsigned int *)v24 + 8);
      if ( v65 >= (int)v36 )
      {
        if ( v65 <= (int)v36 )
          goto LABEL_39;
        if ( v24 == (_QWORD *)a1[4] )
        {
          v37 = (__int64)v24;
          if ( !v24 )
            goto LABEL_39;
LABEL_49:
          LODWORD(v36) = *(_DWORD *)(v37 + 32);
LABEL_50:
          v40 = (int)v34 < (int)v36;
          goto LABEL_26;
        }
        v74 = (void *)v31;
        v63 = std::_Rb_tree_increment(
                v24,
                v36,
                v32,
                (unsigned int)v65,
                v33,
                v31,
                0.0,
                *(double *)a4.m128i_i64,
                *(double *)v28.m128i_i64);
        v34 = (unsigned int)v65;
        v35 = v74;
        v37 = v63;
        if ( v65 >= *(_DWORD *)(v63 + 32) )
          goto LABEL_43;
        if ( !v24[3] )
        {
          v37 = (__int64)v24;
          if ( !v24 )
          {
LABEL_39:
            if ( v35 )
              operator delete(v35, 0x40u);
            goto LABEL_27;
          }
          goto LABEL_50;
        }
        v24 = (_QWORD *)v63;
      }
      else
      {
        v37 = (__int64)v24;
        if ( v24 == (_QWORD *)a1[3] )
          goto LABEL_22;
        v69 = (void *)v31;
        v38 = std::_Rb_tree_decrement(v24, v36, v24, (unsigned int)v65, v33);
        v34 = (unsigned int)v65;
        v35 = v69;
        v37 = v38;
        if ( v65 <= *(_DWORD *)(v38 + 32) )
        {
LABEL_43:
          v72 = v35;
          v68 = v34;
          v62 = sub_24B40((__int64)a1, (unsigned int)v34, v37, v34, v39);
          LODWORD(v34) = v68;
          v35 = v72;
          v24 = (_QWORD *)v62;
          goto LABEL_22;
        }
        if ( *(_QWORD *)(v38 + 24) )
          v37 = (__int64)v24;
        else
          v24 = nullptr;
      }
    }
LABEL_22:
    if ( !v37 )
      goto LABEL_39;
    if ( v23 != (_QWORD *)v37 && !v24 )
      goto LABEL_49;
    v40 = 1;
LABEL_26:
    v66 = v35;
    std::_Rb_tree_insert_and_rebalance(v40, v35, v37, a1 + 1, 0.0, *(double *)a4.m128i_i64, *(double *)v28.m128i_i64);
    ++a1[5];
    v24 = v66;
LABEL_27:
    v28 = _mm_cvtsi32_si128(*(_DWORD *)(v25 + 20));
LABEL_28:
    v41 = v24[6];
    v42 = *(_QWORD *)v25;
    v43 = _mm_cvtsi32_si128(*(_DWORD *)(v25 + 8));
    v44 = _mm_cvtsi32_si128(*(_DWORD *)(v25 + 12));
    v45 = _mm_cvtsi32_si128(*(_DWORD *)(v25 + 16));
    v46 = *(_QWORD *)(v25 + 24);
    v47 = *(_BYTE *)(v25 + 32);
    if ( v24[7] < (unsigned __int64)(v41 + 1) )
    {
      v76 = v46;
      v75 = v24[7];
      v70 = v42;
      v50 = qvector_reserve(v24 + 5, 0, v41 + 1, 40);
      v51 = v50;
      v52 = v24[7];
      v53 = (const __m128i *)v24[5];
      v54 = v24[6] - 1LL;
      v24[7] = v75;
      v55 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v28));
      v56 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v43));
      v57 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v44));
      v58 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v45));
      if ( v54 >= 0 )
      {
        v59 = v58;
        do
        {
          v60 = _mm_loadu_si128(v53);
          v50 += 40;
          v53 = (const __m128i *)((char *)v53 + 40);
          *(__m128i *)(v50 - 40) = v60;
          *(__m128i *)(v50 - 24) = _mm_loadu_si128((const __m128i *)((char *)v53 - 24));
          *(_QWORD *)(v50 - 8) = v53[-1].m128i_i64[1];
          v16 = v54-- == 0;
        }
        while ( !v16 );
        v53 = (const __m128i *)v24[5];
        v58 = v59;
      }
      v78 = v76;
      v77 = v52;
      v73 = v70;
      v71 = v51;
      qfree(v53);
      v48 = v71;
      v41 = v24[6];
      v46 = v78;
      v45 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v58));
      v44 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v57));
      v24[5] = v71;
      v43 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v56));
      v42 = v73;
      v24[7] = v77;
      v28 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v55));
    }
    else
    {
      v48 = v24[5];
    }
    a4 = _mm_unpacklo_epi32(v45, v28);
    ++v22;
    v49 = v48 + 40 * v41;
    *(_QWORD *)v49 = v42;
    *(_QWORD *)(v49 + 24) = v46;
    *(_BYTE *)(v49 + 32) = v47;
    *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v43, v44), a4);
    ++v24[6];
  }
  while ( v64 != v22 );
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  return v81 - __readfsqword(0x28u);
}

