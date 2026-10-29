__int64 __fastcall sub_FDB60(const __m128i **a1, __int64 *a2, __int64 a3, __int64 a4, int a5, __int32 a6)
{
  int *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  char v15; // bp
  char v16; // al
  unsigned int v17; // ebx
  int v19; // edx
  const __m128i *v20; // rbp
  const __m128i *v21; // r14
  const __m128i *v22; // rax
  __int32 v23; // r11d
  __int64 v24; // r10
  __m128i *v25; // rax
  __int64 v26; // r9
  const __m128i *v27; // rdx
  const __m128i *v28; // rsi
  __m128i v29; // xmm0
  const __m128i *v30; // r8
  __m128i *v31; // rdx
  __int64 v32; // rax
  const __m128i *v33; // rcx
  const __m128i *v34; // rdx
  const __m128i *v35; // rsi
  const __m128i *v36; // rdi
  __int64 v37; // rcx
  __m128i v38; // xmm0
  bool v39; // cf
  __int64 v40; // rax
  const __m128i *v41; // rdx
  const __m128i *v42; // rcx
  const __m128i *v43; // rdi
  __int8 *v44; // rsi
  __m128i v45; // xmm0
  const __m128i *v47; // [rsp+0h] [rbp-D8h]
  const __m128i *v48; // [rsp+0h] [rbp-D8h]
  __int32 v49; // [rsp+0h] [rbp-D8h]
  const __m128i *v50; // [rsp+0h] [rbp-D8h]
  __int64 v51; // [rsp+8h] [rbp-D0h]
  __int32 v52; // [rsp+8h] [rbp-D0h]
  const __m128i *v53; // [rsp+18h] [rbp-C0h]
  __int64 v54; // [rsp+18h] [rbp-C0h]
  __int64 v55; // [rsp+20h] [rbp-B8h]
  const __m128i *v56; // [rsp+20h] [rbp-B8h]
  __int64 v57; // [rsp+28h] [rbp-B0h]
  const __m128i *v58; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+38h] [rbp-A0h]
  __m128i v60; // [rsp+50h] [rbp-88h] BYREF
  __m128i v61; // [rsp+60h] [rbp-78h] BYREF
  __int64 v62[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v63; // [rsp+80h] [rbp-58h] BYREF
  __int128 v64; // [rsp+88h] [rbp-50h]
  unsigned __int64 v65; // [rsp+98h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v64 = 0;
  v62[0] = 0;
  v62[1] = 0;
  v63 = 0;
  v10 = (int *)(*(_QWORD *)(a3 + 432) + 104LL * a6);
  sub_1C3380((__int64)v10, a3, (__int64)v62, 0);
  v15 = sub_64640(a2, v62, v11, v12, v13, v14);
  v16 = sub_317C60(a2 + 2, (__int64)&v63);
  if ( v15 || v16 )
  {
    v19 = v10[22];
    v58 = nullptr;
    v59 = 0;
    if ( !(unsigned int)sub_1C37C0(v10, (__int64 *)&v58, v19, a4, a5, 1) )
    {
      if ( !under_debugger )
        sub_383060(0xCD93u, 0.0);
      BUG();
    }
    v20 = v58;
    v21 = (const __m128i *)((char *)v58 + 24 * v59);
    if ( v21 != v58 )
    {
      v22 = a1[1];
      do
      {
        v26 = v20[1].m128i_i64[0];
        v27 = *a1;
        v61.m128i_i32[2] = a6;
        v28 = (const __m128i *)&v22->m128i_i8[1];
        v29 = _mm_loadu_si128(v20);
        v30 = a1[2];
        v61.m128i_i64[0] = v26;
        v60 = v29;
        if ( &v60 < v27 || &v60 >= &v27[2 * (_QWORD)v30] )
        {
          if ( v30 < v28 )
          {
            v47 = v30;
            v32 = qvector_reserve((__int64)a1, 0, (__int64)v22->m128i_i64 + 1, 32);
            v33 = a1[1];
            v34 = (const __m128i *)v32;
            v35 = a1[2];
            v36 = *a1;
            a1[2] = v47;
            v37 = (__int64)&v33[-1].m128i_i64[1] + 7;
            if ( v37 >= 0 )
            {
              do
              {
                v38 = _mm_loadu_si128(v36);
                v32 += 32;
                v36 += 2;
                *(__m128i *)(v32 - 32) = v38;
                *(__m128i *)(v32 - 16) = _mm_loadu_si128(v36 - 1);
                v39 = v37-- == 0;
              }
              while ( !v39 );
              v36 = *a1;
            }
            v48 = v34;
            qfree((__int64)v36);
            v27 = v48;
            v22 = a1[1];
            *a1 = v48;
            a1[2] = v35;
          }
          v31 = (__m128i *)&v27[2 * (_QWORD)v22];
          *v31 = _mm_load_si128(&v60);
          v31[1] = _mm_load_si128(&v61);
        }
        else
        {
          v23 = v60.m128i_i32[0];
          v24 = v60.m128i_i64[1];
          if ( v30 < v28 )
          {
            v55 = v26;
            v53 = v30;
            v51 = v60.m128i_i64[1];
            v49 = v60.m128i_i32[0];
            v40 = qvector_reserve((__int64)a1, 0, (__int64)v22->m128i_i64 + 1, 32);
            v41 = (const __m128i *)v40;
            v42 = a1[2];
            v43 = *a1;
            v44 = &a1[1][-1].m128i_i8[15];
            a1[2] = v53;
            if ( (__int64)v44 >= 0 )
            {
              do
              {
                v45 = _mm_loadu_si128(v43);
                v40 += 32;
                v43 += 2;
                *(__m128i *)(v40 - 32) = v45;
                *(__m128i *)(v40 - 16) = _mm_loadu_si128(v43 - 1);
                v39 = v44-- == nullptr;
              }
              while ( !v39 );
              v43 = *a1;
            }
            v57 = v55;
            v56 = v42;
            v54 = v51;
            v52 = v49;
            v50 = v41;
            qfree((__int64)v43);
            v27 = v50;
            v22 = a1[1];
            v26 = v57;
            v24 = v54;
            v23 = v52;
            *a1 = v50;
            a1[2] = v56;
          }
          v25 = (__m128i *)&v27[2 * (_QWORD)v22];
          v25->m128i_i32[0] = v23;
          v25->m128i_i64[1] = v24;
          v25[1].m128i_i64[0] = v26;
          v25[1].m128i_i32[2] = a6;
        }
        v20 = (const __m128i *)((char *)v20 + 24);
        v22 = (const __m128i *)&a1[1]->m128i_i8[1];
        a1[1] = v22;
      }
      while ( v21 != v20 );
      v20 = v58;
    }
    if ( v20 )
    {
      *(_QWORD *)&v59 = 0;
      qfree((__int64)v20);
    }
  }
  v17 = sub_64880(a2);
  if ( (_BYTE)v17 )
    LOBYTE(v17) = a2[3] == 0;
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  qfree(v62[0]);
  return v17;
}

