void __fastcall sub_3E590(__m128i *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  struct _Unwind_Exception *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rbp
  __int64 v27; // rax
  _QWORD *v28; // r15
  _QWORD *v29; // r13
  __int64 v30; // rax
  __m128i v31; // xmm3
  __m128i v32; // xmm0
  __int64 v33; // rdx
  void *v34; // rbx
  _QWORD *v35; // r13
  _QWORD *v36; // rbp
  QT::QTextFormat *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __m128i v41; // xmm0
  _QWORD *v42; // r12
  __int64 v43; // rbp
  __m128i v44; // xmm7
  __int64 v45; // rdx
  __m128i v46; // xmm7
  __m128i v47; // xmm7
  __m128i v48; // [rsp+0h] [rbp-78h] BYREF
  __m128i *v49; // [rsp+18h] [rbp-60h]
  __m128i v50; // [rsp+20h] [rbp-58h] BYREF
  __int64 v51; // [rsp+30h] [rbp-48h]
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v8 = a2;
  v52 = __readfsqword(0x28u);
  if ( a2 || a4 )
  {
    v11 = a1->m128i_i64[0];
    v12 = a1[1].m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v13 = *(_QWORD *)(v11 + 8);
      v15 = a1->m128i_i64[1];
      v16 = v11 + 31;
      v19 = a1[1].m128i_i64[0];
      if ( v13 >= v12 )
        v19 = *(_QWORD *)(v11 + 8);
      v17 = a3 + v19;
      v20 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1->m128i_i64[1] - ((v11 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3);
      if ( (_DWORD)v8 )
      {
        v18 = v17 - v20;
        goto LABEL_15;
      }
LABEL_9:
      v18 = v17 + v12 - v13 - 0x5555555555555555LL * ((__int64)(v15 - (v16 & 0xFFFFFFFFFFFFFFF0LL)) >> 3);
LABEL_15:
      v21 = v13;
      if ( v18 >= v13 )
        v21 = v18;
      if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
        v18 = v21;
      goto LABEL_19;
    }
  }
  else
  {
    v10 = a1->m128i_i64[0];
    if ( v10 )
    {
      v11 = v10;
      if ( *(int *)v10 <= 1 && a3 > 0 )
      {
        v39 = QT::QArrayData::reallocateUnaligned(
                v10,
                a1->m128i_i64[1],
                24,
                0xAAAAAAAAAAAAAAABLL * ((__int64)(a1->m128i_i64[1] - ((v10 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3)
              + a1[1].m128i_i64[0]
              + a3,
                0);
        v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)v40);
        if ( v40 )
        {
          *a1 = v41;
          return;
        }
        v22 = (struct _Unwind_Exception *)QT::qBadAlloc();
        goto LABEL_69;
      }
      v12 = a1[1].m128i_i64[0];
      v13 = *(_QWORD *)(v10 + 8);
      v14 = v12;
      v15 = a1->m128i_i64[1];
      v16 = v10 + 31;
      if ( v13 >= v12 )
        v14 = *(_QWORD *)(v10 + 8);
      v17 = a3 + v14;
      goto LABEL_9;
    }
    v12 = a1[1].m128i_i64[0];
  }
  v38 = 0;
  if ( v12 >= 0 )
    v38 = v12;
  v13 = 0;
  v18 = a3 + v38;
LABEL_19:
  v49 = &v50;
  v22 = (struct _Unwind_Exception *)QT::QArrayData::allocate(&v50, 24, 16, v18, v18 <= v13, a6);
  v23 = v50.m128i_i64[0];
  if ( !v22 || !v50.m128i_i64[0] )
  {
LABEL_26:
    v48 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v22);
    if ( a3 > 0 )
    {
      if ( v22 )
        goto LABEL_28;
      QT::qBadAlloc();
      v8 = 0;
LABEL_69:
      v47 = _mm_load_si128(&v48);
      v51 = v8;
      v50 = v47;
      sub_3E530((__int64)v49);
      _Unwind_Resume(v22);
    }
LABEL_52:
    v26 = a1[1].m128i_i64[0];
    if ( v26 )
    {
      v26 += a3;
      goto LABEL_29;
    }
LABEL_53:
    v28 = (_QWORD *)a1->m128i_i64[1];
    v30 = 0;
LABEL_37:
    v31 = _mm_load_si128(&v48);
    v32 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v26;
    *a1 = v31;
    if ( a4 )
    {
      v33 = *(_QWORD *)(a4 + 16);
      *(_QWORD *)(a4 + 16) = v30;
      v34 = *(void **)a4;
      v35 = *(_QWORD **)(a4 + 8);
      *(__m128i *)a4 = _mm_unpacklo_epi64(v32, (__m128i)(unsigned __int64)v28);
    }
    else
    {
      v33 = v30;
      v35 = v28;
      v34 = (void *)v32.m128i_i64[0];
    }
    goto LABEL_39;
  }
  v24 = a1->m128i_i64[0];
  if ( (_DWORD)v8 == 1 )
  {
    v45 = (*(_QWORD *)(v50.m128i_i64[0] + 8) - a3 - a1[1].m128i_i64[0]) / 2;
    if ( v45 < 0 )
      v45 = 0;
    v22 = (struct _Unwind_Exception *)((char *)v22 + 24 * a3 + 24 * v45);
    v25 = 0;
    if ( !v24 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( v24 )
  {
    v22 = (struct _Unwind_Exception *)((char *)v22 + a1->m128i_i64[1] - ((v24 + 31) & 0xFFFFFFFFFFFFFFF0LL));
LABEL_24:
    v25 = *(_DWORD *)(v24 + 4);
LABEL_25:
    *(_DWORD *)(v50.m128i_i64[0] + 4) = v25;
    goto LABEL_26;
  }
  *(_DWORD *)(v50.m128i_i64[0] + 4) = 0;
  v48 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v22);
  if ( a3 <= 0 )
    goto LABEL_52;
LABEL_28:
  v26 = a1[1].m128i_i64[0];
  if ( !v26 )
    goto LABEL_53;
LABEL_29:
  v27 = 3 * v26;
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 || a4 )
  {
    v28 = (_QWORD *)a1->m128i_i64[1];
    v29 = &v28[v27];
    if ( &v28[v27] == v28 )
    {
      v30 = a1[1].m128i_i64[0];
      v26 = 0;
    }
    else
    {
      v26 = 0;
      if ( v28 < v29 )
      {
        do
        {
          *(_QWORD *)&v22->exception_class = *v28;
          QT::QTextFormat::QTextFormat((QT::QTextFormat *)&v22->exception_cleanup, (const QT::QTextFormat *)(v28 + 1));
          v28 += 3;
          ++v26;
          v22 = (struct _Unwind_Exception *)((char *)v22 + 24);
        }
        while ( v28 < v29 );
        v28 = (_QWORD *)a1->m128i_i64[1];
      }
      v30 = a1[1].m128i_i64[0];
    }
    goto LABEL_37;
  }
  v35 = (_QWORD *)a1->m128i_i64[1];
  if ( v27 * 8 && (v42 = &v35[v27], v35 < &v35[v27]) )
  {
    v43 = 0;
    do
    {
      *(_QWORD *)&v22->exception_class = *v35;
      QT::QTextFormat::QTextFormat((QT::QTextFormat *)&v22->exception_cleanup, (const QT::QTextFormat *)(v35 + 1));
      v35 += 3;
      ++v43;
      v22 = (struct _Unwind_Exception *)((char *)v22 + 24);
    }
    while ( v35 < v42 );
    v44 = _mm_load_si128(&v48);
    v35 = (_QWORD *)a1->m128i_i64[1];
    v33 = a1[1].m128i_i64[0];
    v34 = (void *)a1->m128i_i64[0];
    a1[1].m128i_i64[0] = v43;
    *a1 = v44;
  }
  else
  {
    v46 = _mm_load_si128(&v48);
    v34 = (void *)a1->m128i_i64[0];
    v33 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = 0;
    *a1 = v46;
  }
LABEL_39:
  if ( v34 && !_InterlockedSub((volatile signed __int32 *)v34, 1u) )
  {
    v36 = &v35[3 * v33];
    while ( v36 != v35 )
    {
      v37 = (QT::QTextFormat *)(v35 + 1);
      v35 += 3;
      QT::QTextFormat::~QTextFormat(v37);
    }
    free(v34);
  }
}

