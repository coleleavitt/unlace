__int64 __fastcall sub_FD5A0(unsigned __int64 *a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5, __int32 a6)
{
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  char v15; // bp
  char v16; // al
  unsigned int v17; // ebx
  __int64 v19; // rdx
  const __m128i *v20; // rbp
  const __m128i *v21; // r14
  __int64 v22; // rax
  __int32 v23; // r11d
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  __m128i v29; // xmm0
  unsigned __int64 v30; // r8
  __m128i *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  const __m128i *v36; // rdi
  __int64 v37; // rcx
  __m128i v38; // xmm0
  bool v39; // cf
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  const __m128i *v43; // rdi
  __int64 v44; // rsi
  __m128i v45; // xmm0
  unsigned __int64 v47; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v48; // [rsp+0h] [rbp-D8h]
  __int32 v49; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v50; // [rsp+0h] [rbp-D8h]
  __int64 v51; // [rsp+8h] [rbp-D0h]
  __int32 v52; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v53; // [rsp+18h] [rbp-C0h]
  __int64 v54; // [rsp+18h] [rbp-C0h]
  __int64 v55; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v56; // [rsp+20h] [rbp-B8h]
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
  v10 = *(_QWORD *)(a3 + 432) + 104LL * a6;
  sub_1C2DC0(v10, a3, v62, 0);
  v15 = sub_64040(a2, v62, v11, v12, v13, v14);
  v16 = sub_318020(a2 + 2, &v63);
  if ( v15 || v16 )
  {
    v19 = *(unsigned int *)(v10 + 88);
    v58 = nullptr;
    v59 = 0;
    if ( !(unsigned int)sub_1C3200(v10, &v58, v19, a4, a5, 1) )
    {
      if ( !under_debugger )
        sub_3835A0(52627);
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
        v28 = v22 + 1;
        v29 = _mm_loadu_si128(v20);
        v30 = a1[2];
        v61.m128i_i64[0] = v26;
        v60 = v29;
        if ( (unsigned __int64)&v60 < v27 || (unsigned __int64)&v60 >= v27 + 32 * v30 )
        {
          if ( v30 < v28 )
          {
            v47 = v30;
            v32 = qvector_reserve();
            v33 = a1[1];
            v34 = v32;
            v35 = a1[2];
            v36 = (const __m128i *)*a1;
            a1[2] = v47;
            v37 = v33 - 1;
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
            }
            v48 = v34;
            qfree();
            v27 = v48;
            v22 = a1[1];
            *a1 = v48;
            a1[2] = v35;
          }
          v31 = (__m128i *)(32 * v22 + v27);
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
            v40 = qvector_reserve();
            v41 = v40;
            v42 = a1[2];
            v43 = (const __m128i *)*a1;
            v44 = a1[1] - 1;
            a1[2] = v53;
            if ( v44 >= 0 )
            {
              do
              {
                v45 = _mm_loadu_si128(v43);
                v40 += 32;
                v43 += 2;
                *(__m128i *)(v40 - 32) = v45;
                *(__m128i *)(v40 - 16) = _mm_loadu_si128(v43 - 1);
                v39 = v44-- == 0;
              }
              while ( !v39 );
            }
            v57 = v55;
            v56 = v42;
            v54 = v51;
            v52 = v49;
            v50 = v41;
            qfree();
            v27 = v50;
            v22 = a1[1];
            v26 = v57;
            v24 = v54;
            v23 = v52;
            *a1 = v50;
            a1[2] = v56;
          }
          v25 = v27 + 32 * v22;
          *(_DWORD *)v25 = v23;
          *(_QWORD *)(v25 + 8) = v24;
          *(_QWORD *)(v25 + 16) = v26;
          *(_DWORD *)(v25 + 24) = a6;
        }
        v20 = (const __m128i *)((char *)v20 + 24);
        v22 = a1[1] + 1;
        a1[1] = v22;
      }
      while ( v21 != v20 );
      v20 = v58;
    }
    if ( v20 )
    {
      *(_QWORD *)&v59 = 0;
      qfree();
    }
  }
  v17 = sub_64280(a2);
  if ( (_BYTE)v17 )
    LOBYTE(v17) = a2[3] == 0;
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  qfree();
  return v17;
}

