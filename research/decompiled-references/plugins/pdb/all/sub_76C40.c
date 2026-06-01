unsigned __int64 __fastcall sub_76C40(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __m128i v10; // xmm1
  __m128i v12; // xmm2
  __int64 v13; // r14
  __int64 v14; // rbp
  __m128i v15; // xmm3
  int v16; // r15d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // r14
  unsigned __int64 v27; // rbp
  __int128 v28; // xmm1
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rdi
  bool v34; // cf
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int128 v40; // xmm1
  __int64 v41; // rsi
  __m128i v42; // xmm0
  __int64 v43; // rsi
  __m128i v44; // xmm0
  __int64 v45; // rdi
  unsigned __int64 v46; // [rsp+8h] [rbp-B0h]
  __int64 v47; // [rsp+8h] [rbp-B0h]
  __m128i v48; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v49; // [rsp+20h] [rbp-98h] BYREF
  __int64 v50; // [rsp+30h] [rbp-88h]
  unsigned __int64 v51; // [rsp+38h] [rbp-80h]
  int v52; // [rsp+40h] [rbp-78h]
  __int64 v53; // [rsp+48h] [rbp-70h]
  __m128i v54; // [rsp+50h] [rbp-68h]
  __int64 v55; // [rsp+60h] [rbp-58h]
  __m128i v56; // [rsp+68h] [rbp-50h]
  unsigned __int64 v57; // [rsp+78h] [rbp-40h]

  v3 = *a1;
  v4 = a1[2];
  v57 = __readfsqword(0x28u);
  if ( a2 >= v3 && a2 < v3 + 56 * v4 )
  {
    v12 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    v13 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    v14 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a2 + 16) = 0;
    v15 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    *(_QWORD *)(a2 + 32) = 0;
    v16 = *(_DWORD *)a2;
    *(_OWORD *)(a2 + 40) = 0;
    v17 = a1[1];
    v18 = a1[2];
    v52 = v16;
    v53 = v13;
    v55 = v14;
    v48 = v12;
    v54 = v12;
    v49 = v15;
    v56 = v15;
    if ( v18 < v17 + 1 )
    {
      v35 = qvector_reserve(a1, 0, v17 + 1, 56);
      v36 = a1[2];
      v37 = *a1;
      v50 = v35;
      a1[2] = v18;
      v51 = v36;
      v38 = a1[1] - 1;
      if ( v38 >= 0 )
      {
        v39 = v35;
        v40 = 0;
        do
        {
          *(_DWORD *)v39 = *(_DWORD *)v37;
          v41 = *(_QWORD *)(v37 + 8);
          *(_QWORD *)(v37 + 8) = 0;
          v42 = _mm_loadu_si128((const __m128i *)(v37 + 16));
          *(_QWORD *)(v39 + 8) = v41;
          *(__m128i *)(v39 + 16) = v42;
          v43 = *(_QWORD *)(v37 + 32);
          v44 = _mm_loadu_si128((const __m128i *)(v37 + 40));
          *(_OWORD *)(v37 + 16) = v40;
          *(_QWORD *)(v39 + 32) = v43;
          *(__m128i *)(v39 + 40) = v44;
          v45 = *(_QWORD *)(v37 + 8);
          *(_QWORD *)(v37 + 32) = 0;
          *(_QWORD *)(v37 + 48) = 0;
          if ( v45 )
          {
            *(_QWORD *)(v37 + 16) = 0;
            v47 = v38;
            qfree(v45);
            v38 = v47;
            v40 = 0;
          }
          v37 += 56LL;
          v39 += 56;
          v34 = v38-- == 0;
        }
        while ( !v34 );
        v37 = *a1;
      }
      qfree(v37);
      *a1 = v50;
      a1[2] = v51;
      v17 = a1[1];
    }
    else
    {
      v50 = *a1;
    }
    v19 = _mm_load_si128(&v48);
    v20 = _mm_load_si128(&v49);
    v21 = v50 + 56 * v17;
    *(_DWORD *)v21 = v16;
    *(_QWORD *)(v21 + 8) = v13;
    *(_QWORD *)(v21 + 32) = v14;
    *(__m128i *)(v21 + 16) = v19;
    *(__m128i *)(v21 + 40) = v20;
  }
  else
  {
    v5 = a1[1];
    if ( v4 < v5 + 1 )
    {
      v22 = qvector_reserve(a1, 0, v5 + 1, 56);
      v23 = a1[1];
      v3 = v22;
      v24 = a1[2];
      a1[2] = v4;
      v25 = *a1;
      v46 = v24;
      v26 = v23 - 1;
      if ( v26 >= 0 )
      {
        v27 = v3;
        v28 = 0;
        do
        {
          *(_DWORD *)v27 = *(_DWORD *)v25;
          v29 = *(_QWORD *)(v25 + 8);
          v30 = _mm_loadu_si128((const __m128i *)(v25 + 16));
          *(_QWORD *)(v25 + 8) = 0;
          *(_QWORD *)(v27 + 8) = v29;
          *(__m128i *)(v27 + 16) = v30;
          v31 = *(_QWORD *)(v25 + 32);
          v32 = _mm_loadu_si128((const __m128i *)(v25 + 40));
          *(_OWORD *)(v25 + 16) = v28;
          *(_QWORD *)(v27 + 32) = v31;
          *(__m128i *)(v27 + 40) = v32;
          v33 = *(_QWORD *)(v25 + 8);
          *(_QWORD *)(v25 + 32) = 0;
          *(_QWORD *)(v25 + 48) = 0;
          if ( v33 )
          {
            *(_QWORD *)(v25 + 16) = 0;
            qfree(v33);
            v28 = 0;
          }
          v25 += 56LL;
          v27 += 56LL;
          v34 = v26-- == 0;
        }
        while ( !v34 );
        v25 = *a1;
      }
      qfree(v25);
      *a1 = v3;
      v5 = a1[1];
      a1[2] = v46;
    }
    v6 = v3 + 56 * v5;
    *(_DWORD *)v6 = *(_DWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    *(_QWORD *)(v6 + 8) = v7;
    *(__m128i *)(v6 + 16) = v8;
    v9 = *(_QWORD *)(a2 + 32);
    v10 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    *(_OWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_QWORD *)(v6 + 32) = v9;
    *(__m128i *)(v6 + 40) = v10;
    *(_OWORD *)(a2 + 40) = 0;
  }
  ++a1[1];
  return v57 - __readfsqword(0x28u);
}
