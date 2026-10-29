__int64 __fastcall sub_CCA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8)
{
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  char v38; // al
  void *v39; // r12
  void *v40; // rax
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  __int64 v43; // r15
  unsigned __int64 v44; // r13
  __int64 v45; // r14
  char *v46; // r13
  void *v47; // rdi
  char *v48; // rdi
  void *v49; // rax
  size_t v50; // rdx
  unsigned __int64 v51; // r15
  __int64 v52; // r8
  size_t v53; // r15
  size_t v54; // r14
  _BYTE *v55; // rsi
  __int128 v56; // [rsp+20h] [rbp-100h]
  __int64 v57; // [rsp+20h] [rbp-100h]
  unsigned __int8 na; // [rsp+28h] [rbp-F8h]
  unsigned __int64 n; // [rsp+28h] [rbp-F8h]
  __int128 v60; // [rsp+30h] [rbp-F0h] BYREF
  __m128i v61; // [rsp+40h] [rbp-E0h] BYREF
  void *v62; // [rsp+50h] [rbp-D0h] BYREF
  __m128i v63; // [rsp+58h] [rbp-C8h] BYREF
  void *src; // [rsp+70h] [rbp-B0h] BYREF
  __int128 v65; // [rsp+78h] [rbp-A8h]
  void *v66; // [rsp+90h] [rbp-90h] BYREF
  __int128 v67; // [rsp+98h] [rbp-88h]
  void *v68; // [rsp+B0h] [rbp-70h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-68h]
  char *v70; // [rsp+D0h] [rbp-50h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v72; // [rsp+E8h] [rbp-38h]

  v72 = __readfsqword(0x28u);
  v9 = sub_BB20();
  v10 = a7.m128i_i32[0];
  if ( !(unsigned int)sub_A1A0(v9, a7.m128i_u32[0], v11, v12, v13, v14, v56, v60) )
    return 0;
  v16 = sub_BB20();
  if ( (unsigned int)sub_AB00(
                       v16,
                       v10,
                       v17,
                       v18,
                       v19,
                       v20,
                       (__int128)_mm_loadu_si128(&a7),
                       _mm_loadu_si128(&a8).m128i_i64[0]) )
    return 0;
  sub_C340((__int64)&v62, v10, v21, v22, v23, v24, (__int128)_mm_loadu_si128(&a7), (__int128)_mm_loadu_si128(&a8));
  if ( v63.m128i_i64[0] > 1uLL )
  {
    do
    {
      v25 = sub_BB20();
      v26 = v25;
      sub_B370((__int64)&v60, v25, v27, v28);
      a7 = _mm_loadu_si128((const __m128i *)&v60);
      a8 = _mm_loadu_si128(&v61);
      v29 = sub_BB20();
    }
    while ( (unsigned int)sub_AB00(
                            v29,
                            v26,
                            v30,
                            v31,
                            v32,
                            v33,
                            (__int128)_mm_loadu_si128(&a7),
                            _mm_loadu_si128(&a8).m128i_i64[0]) );
    src = nullptr;
    v65 = 0;
    v38 = sub_CCA0(
            (unsigned int)&src,
            v26,
            v34,
            v35,
            v36,
            v37,
            (__int128)_mm_loadu_si128(&a7),
            (__int128)_mm_loadu_si128(&a8));
    v39 = src;
    if ( !v38 )
    {
      v40 = *(void **)a1;
      v41 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v42 = _mm_loadu_si128(&v63);
      *(_QWORD *)a1 = v62;
      v62 = v40;
      *(__m128i *)(a1 + 8) = v42;
      v63 = v41;
LABEL_9:
      if ( v39 )
        qfree(v39);
      result = 1;
      goto LABEL_12;
    }
    v43 = v65;
    v66 = nullptr;
    v67 = 0;
    n = v65;
    v66 = (void *)qvector_reserve(&v66, 0, 3, 1);
    *(_QWORD *)&v67 = 3;
    strcpy((char *)v66, "::");
    v68 = nullptr;
    v69 = 0;
    if ( v43 )
    {
      v49 = (void *)qalloc_or_throw(n);
      *((_QWORD *)&v69 + 1) = n;
      v68 = v49;
      memcpy(v49, v39, n);
      *(_QWORD *)&v69 = n;
      if ( !(_QWORD)v67 || (v54 = v67 - 1, (_QWORD)v67 == 1) )
      {
        v70 = nullptr;
        v71 = 0;
LABEL_30:
        v70 = (char *)qalloc_or_throw(n);
        *((_QWORD *)&v71 + 1) = n;
        memcpy(v70, v68, n);
        *(_QWORD *)&v71 = n;
        v45 = *((_QWORD *)&v71 + 1);
        v46 = v70;
        if ( !v63.m128i_i64[0] )
          goto LABEL_21;
        v50 = v63.m128i_i64[0] - 1;
        if ( v63.m128i_i64[0] == 1 )
          goto LABEL_21;
        v51 = n - 1;
        v52 = v50 + n - 1;
        n += v50;
        if ( *((_QWORD *)&v71 + 1) >= n )
          goto LABEL_33;
        v45 = v63.m128i_i64[0] - 1;
LABEL_43:
        v57 = v52;
        v70 = (char *)qvector_reserve(&v70, v46, n, 1);
        v52 = v57;
        v46 = v70;
        v50 = v45;
LABEL_33:
        *(_QWORD *)&v71 = n;
        v46[v52] = 0;
        memcpy(&v70[v51], v62, v50);
        v46 = v70;
        v45 = *((_QWORD *)&v71 + 1);
        n = v71;
        goto LABEL_21;
      }
      v53 = v54 + --n;
      v44 = v67 + n;
    }
    else
    {
      v44 = v67;
      if ( !(_QWORD)v67 || (v53 = v67 - 1, (_QWORD)v67 == 1) )
      {
        v70 = nullptr;
        v71 = 0;
        goto LABEL_18;
      }
      v54 = v67 - 1;
    }
    v55 = v68;
    if ( *((_QWORD *)&v69 + 1) < v44 )
    {
      v68 = (void *)qvector_reserve(&v68, v68, v44, 1);
      v55 = v68;
    }
    *(_QWORD *)&v69 = v44;
    v55[v53] = 0;
    memcpy((char *)v68 + n, v66, v54);
    v70 = nullptr;
    v71 = 0;
    n = v69;
    if ( (_QWORD)v69 )
      goto LABEL_30;
LABEL_18:
    n = v63.m128i_i64[0];
    if ( !v63.m128i_i64[0] )
    {
      v45 = 0;
      v46 = nullptr;
      goto LABEL_21;
    }
    v45 = v63.m128i_i64[0] - 1;
    if ( v63.m128i_i64[0] == 1 )
    {
      n = 0;
      v46 = nullptr;
LABEL_21:
      v47 = *(void **)a1;
      v70 = nullptr;
      v71 = 0;
      if ( v47 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v47);
        v48 = v70;
        *(_QWORD *)a1 = v46;
        *(_QWORD *)(a1 + 16) = v45;
        *(_QWORD *)(a1 + 8) = n;
        if ( v48 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v48);
        }
      }
      else
      {
        *(_QWORD *)a1 = v46;
        *(_QWORD *)(a1 + 16) = v45;
        *(_QWORD *)(a1 + 8) = n;
      }
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      if ( v66 )
      {
        *(_QWORD *)&v67 = 0;
        qfree(v66);
      }
      goto LABEL_9;
    }
    v52 = v63.m128i_i64[0] - 1;
    v51 = 0;
    v46 = nullptr;
    goto LABEL_43;
  }
  result = 0;
LABEL_12:
  if ( v62 )
  {
    na = result;
    v63.m128i_i64[0] = 0;
    qfree(v62);
    return na;
  }
  return result;
}

