__int64 __fastcall sub_12E4F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned int a6,
        double a7,
        __m128 a8)
{
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned int *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  unsigned int *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // [rsp+0h] [rbp-B4h]
  unsigned __int8 v54[16]; // [rsp+1Ch] [rbp-98h] BYREF
  __int64 v55; // [rsp+2Ch] [rbp-88h] BYREF
  __int128 v56; // [rsp+34h] [rbp-80h]
  __int128 v57; // [rsp+4Ch] [rbp-68h] BYREF
  __m128i v58; // [rsp+5Ch] [rbp-58h]
  unsigned __int64 v59; // [rsp+74h] [rbp-40h]

  v10 = a2;
  v59 = __readfsqword(0x28u);
  v56 = 0;
  v55 = 0;
  v55 = qvector_reserve((__int64)&v55, 0, 2, 16);
  v14 = v55;
  v51 = (unsigned __int8)a6;
  if ( a2 == a3 )
  {
    sub_123A40((__int64)v54, a4, v12, v13);
    v46 = v56;
    v47 = v55;
    v48 = v56 + 1;
    if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
    {
      v55 = qvector_reserve((__int64)&v55, v55, v48, 16);
      v47 = v55;
      v46 = v56;
    }
    sub_123A40(v47 + 16 * v46, v54, v48, v45);
    *(_QWORD *)&v56 = v56 + 1;
    sub_11CDA0((__int64)v54);
    sub_123A40((__int64)v54, a5, v49, v50);
    v29 = v56;
    v30 = v55;
    v31 = v56 + 1;
    if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
    {
      v55 = qvector_reserve((__int64)&v55, v55, v31, 16);
      v30 = v55;
      v29 = v56;
    }
LABEL_24:
    sub_123A40(v30 + 16 * v29, v54, v31, v28);
    *(_QWORD *)&v56 = v56 + 1;
    sub_11CDA0((__int64)v54);
    goto LABEL_25;
  }
  LOBYTE(a6) = a2 != 0 && a3 != 0;
  if ( !(_BYTE)a6 )
    goto LABEL_3;
  v19 = *(_QWORD *)(a3 + 8);
  if ( !v19 )
  {
LABEL_12:
    v20 = *(_QWORD *)(a2 + 8);
    if ( !v20 )
    {
LABEL_15:
      a6 = 0;
      goto LABEL_3;
    }
    while ( a3 != v20 )
    {
      v20 = *(_QWORD *)(v20 + 8);
      if ( !v20 )
        goto LABEL_15;
    }
    sub_123A40((__int64)v54, a5, v12, v13);
    v22 = v56;
    v23 = v55;
    v24 = v56 + 1;
    if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
    {
      v55 = qvector_reserve((__int64)&v55, v55, v24, 16);
      v23 = v55;
      v22 = v56;
    }
    sub_123A40(v23 + 16 * v22, v54, v24, v21);
    *(_QWORD *)&v56 = v56 + 1;
    sub_11CDA0((__int64)v54);
    v25 = *(unsigned int **)(a3 + 16);
    v58 = 0u;
    v57 = 0;
    a6 = sub_12BAA0(&v55, a1, v25, (unsigned int *)v10, v51, (__int64)&v57, 0.0, a8);
    if ( v58.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v58.m128i_i64[0])(&v57, &v57, 3);
    if ( !(_BYTE)a6 )
      goto LABEL_21;
    sub_123A40((__int64)v54, a4, v26, v27);
    v29 = v56;
    v30 = v55;
    v31 = v56 + 1;
    if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
    {
      v55 = qvector_reserve((__int64)&v55, v55, v31, 16);
      v30 = v55;
      v29 = v56;
    }
    goto LABEL_24;
  }
  while ( a2 != v19 )
  {
    v19 = *(_QWORD *)(v19 + 8);
    if ( !v19 )
      goto LABEL_12;
  }
  sub_123A40((__int64)v54, a4, v12, v13);
  v35 = v56;
  v36 = v55;
  v37 = v56 + 1;
  if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
  {
    v55 = qvector_reserve((__int64)&v55, v55, v37, 16);
    v36 = v55;
    v35 = v56;
  }
  sub_123A40(v36 + 16 * v35, v54, v37, v34);
  *(_QWORD *)&v56 = v56 + 1;
  sub_11CDA0((__int64)v54);
  v38 = *(unsigned int **)(v10 + 16);
  v58 = 0u;
  v57 = 0;
  a6 = sub_12BAA0(&v55, a1, v38, (unsigned int *)a3, v51, (__int64)&v57, 0.0, a8);
  if ( v58.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v58.m128i_i64[0])(&v57, &v57, 3);
  if ( !(_BYTE)a6 )
    goto LABEL_21;
  sub_123A40((__int64)v54, a5, v39, v40);
  v42 = v56;
  v43 = v55;
  v44 = v56 + 1;
  if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
  {
    v55 = qvector_reserve((__int64)&v55, v55, v44, 16);
    v43 = v55;
    v42 = v56;
  }
  sub_123A40(v43 + 16 * v42, v54, v44, v41);
  *(_QWORD *)&v56 = v56 + 1;
  v10 = a3;
  sub_11CDA0((__int64)v54);
LABEL_25:
  v32 = *(unsigned int **)(v10 + 16);
  v33 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  DWORD2(v57) = v51;
  *(_QWORD *)&v57 = v33;
  v58 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4DD9C0), (__m128i)(unsigned __int64)sub_125FF0);
  a6 = sub_12BAA0(
         &v55,
         a1,
         v32,
         nullptr,
         v51,
         (__int64)&v57,
         *(double *)v58.m128i_i64,
         (__m128)(unsigned __int64)sub_125FF0);
  if ( !v58.m128i_i64[0] )
  {
LABEL_21:
    v14 = v55;
    goto LABEL_3;
  }
  ((void (__fastcall *)(__int128 *, __int128 *, __int64))v58.m128i_i64[0])(&v57, &v57, 3);
  v14 = v55;
LABEL_3:
  if ( v14 )
  {
    v15 = v56;
    if ( (_QWORD)v56 )
    {
      v16 = 0;
      do
      {
        v17 = v16++;
        sub_11CDA0(16 * v17 + v14);
        v14 = v55;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v56 = 0;
    qfree(v14);
  }
  return a6;
}

