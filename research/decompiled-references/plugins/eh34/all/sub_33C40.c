unsigned __int64 __fastcall sub_33C40(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // r12
  int v7; // edx
  int v8; // r12d
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __m128i v14; // xmm1
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 *v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  bool v38; // cf
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 *v41; // rdi
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // [rsp+8h] [rbp-40h] BYREF
  __int64 v47; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v48; // [rsp+18h] [rbp-30h]

  v3 = *(int *)(a1 + 272);
  v4 = *(_QWORD *)(a1 + 616);
  v48 = __readfsqword(0x28u);
  LODWORD(v47) = 0;
  v6 = v3 + 1;
  if ( v3 + 1 >= v4 )
  {
    if ( v4 >= v6 )
      goto LABEL_3;
    v22 = *(_QWORD *)(a1 + 608);
    v23 = *(_QWORD *)(a1 + 624);
    v24 = a1 + 608;
    if ( (unsigned __int64)&v47 < v22 || (unsigned __int64)&v47 >= v22 + 4 * v23 )
    {
      if ( v23 >= v6
        || (v29 = qvector_reserve(v24, v22, v3 + 1, 4),
            v4 = *(_QWORD *)(a1 + 616),
            *(_QWORD *)(a1 + 608) = v29,
            v22 = v29,
            v4 < v6) )
      {
        while ( 1 )
        {
          v25 = v4;
          *(_DWORD *)(v22 + 4 * v4++) = 0;
          if ( v3 == v25 )
            break;
          v22 = *(_QWORD *)(a1 + 608);
        }
      }
    }
    else if ( v23 >= v6
           || (v26 = qvector_reserve(v24, v22, v3 + 1, 4),
               v4 = *(_QWORD *)(a1 + 616),
               *(_QWORD *)(a1 + 608) = v26,
               v22 = v26,
               v4 < v6) )
    {
      while ( 1 )
      {
        v27 = v4;
        *(_DWORD *)(v22 + 4 * v4++) = 0;
        if ( v3 == v27 )
          break;
        v22 = *(_QWORD *)(a1 + 608);
      }
    }
  }
  *(_QWORD *)(a1 + 616) = v6;
LABEL_3:
  v7 = *(_DWORD *)(a1 + 208);
  v8 = *(_DWORD *)(a1 + 212) - v7;
  if ( v8 > 0 )
  {
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = v9 + 1;
      v12 = *a2 + 8LL * ((int)v9 + v7);
      if ( *(_BYTE *)(v12 + 4) )
      {
        v13 = sub_33BB0(a1, *(_DWORD *)v12, (_QWORD *)(*(_QWORD *)(a1 + 584) + 32 * v11));
        v10 += v13;
        *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4 * v11) = v13;
        v9 = v11;
        if ( v11 == v8 )
          goto LABEL_9;
      }
      else
      {
        ++v9;
        if ( v11 == v8 )
          goto LABEL_9;
      }
      v7 = *(_DWORD *)(a1 + 208);
    }
  }
  v10 = 0;
LABEL_9:
  v14 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 528));
  v15 = *(_QWORD *)(a1 + 616);
  *(_DWORD *)(a1 + 644) = v10;
  v16 = *(_QWORD *)(a1 + 704);
  *(_QWORD *)(a1 + 632) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), v14).m128i_u64[0];
  if ( v16 != v15 )
  {
    BYTE4(v46) = 0;
    if ( v15 < v16 )
    {
LABEL_16:
      *(_QWORD *)(a1 + 704) = v15;
      return v48 - __readfsqword(0x28u);
    }
    v17 = *(_QWORD *)(a1 + 696);
    v18 = *(_QWORD *)(a1 + 712);
    v19 = a1 + 696;
    if ( (unsigned __int64)&v46 >= v17 && (unsigned __int64)&v46 < v17 + 8 * v18 )
    {
      v47 = v46;
      if ( v18 < v15 )
      {
        v39 = qvector_reserve(v19, 0, v15, 8);
        v40 = *(_QWORD *)(a1 + 712);
        v41 = *(__int64 **)(a1 + 696);
        *(_QWORD *)(a1 + 712) = v18;
        v42 = v39;
        v43 = *(_QWORD *)(a1 + 704) - 1LL;
        if ( v43 >= 0 )
        {
          v44 = v42;
          do
          {
            v45 = *v41;
            v44 += 8;
            ++v41;
            *(_QWORD *)(v44 - 8) = v45;
            v38 = v43-- == 0;
          }
          while ( !v38 );
          v41 = *(__int64 **)(a1 + 696);
        }
        qfree(v41);
        *(_QWORD *)(a1 + 696) = v42;
        v16 = *(_QWORD *)(a1 + 704);
        *(_QWORD *)(a1 + 712) = v40;
      }
      v20 = v47;
      if ( v16 < v15 )
      {
        do
          *(_QWORD *)(*(_QWORD *)(a1 + 696) + 8 * v16++) = v20;
        while ( v15 != v16 );
      }
      goto LABEL_16;
    }
    if ( v18 < v15 )
    {
      v30 = qvector_reserve(v19, 0, v15, 8);
      v31 = *(_QWORD *)(a1 + 704);
      v32 = *(_QWORD *)(a1 + 712);
      *(_QWORD *)(a1 + 712) = v18;
      v33 = *(__int64 **)(a1 + 696);
      v34 = v30;
      v35 = v31 - 1;
      if ( v35 >= 0 )
      {
        v36 = v30;
        do
        {
          v37 = *v33;
          v36 += 8;
          ++v33;
          *(_QWORD *)(v36 - 8) = v37;
          v38 = v35-- == 0;
        }
        while ( !v38 );
        v33 = *(__int64 **)(a1 + 696);
      }
      qfree(v33);
      *(_QWORD *)(a1 + 696) = v34;
      v16 = *(_QWORD *)(a1 + 704);
      *(_QWORD *)(a1 + 712) = v32;
    }
    v28 = v46;
    if ( v16 >= v15 )
      goto LABEL_16;
    do
      *(_QWORD *)(*(_QWORD *)(a1 + 696) + 8 * v16++) = v28;
    while ( v15 != v16 );
    *(_QWORD *)(a1 + 704) = v15;
  }
  return v48 - __readfsqword(0x28u);
}
