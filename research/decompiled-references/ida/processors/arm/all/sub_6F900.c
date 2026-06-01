unsigned __int64 __fastcall sub_6F900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _WORD *v9; // rax
  unsigned __int64 v10; // rax
  __m128i si128; // xmm0
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // r14
  const __m128i *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __m128i v36; // xmm0
  bool v37; // cf
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // r14
  const __m128i *v42; // rdi
  __int64 v43; // rdx
  __m128i v44; // xmm0
  _BYTE v45[24]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v46; // [rsp+18h] [rbp-80h]
  __int64 v47; // [rsp+20h] [rbp-78h]
  __m128i v48; // [rsp+30h] [rbp-68h] BYREF
  __m128i v49; // [rsp+40h] [rbp-58h] BYREF
  __int64 v50; // [rsp+50h] [rbp-48h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = off_A4B78;
  v9 = (_WORD *)(a1 + 56);
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    *v9 = 0;
    v9 += 20;
    *(v9 - 19) = 0;
    *(v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *(v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *((_QWORD *)v9 - 2) = 0;
  }
  while ( (_WORD *)(a1 + 376) != v9 );
  *(_QWORD *)(a1 + 376) = a3;
  v10 = 0;
  *(_DWORD *)(a1 + 528) = -1;
  *(_BYTE *)(a1 + 793) = 0;
  *(_QWORD *)(a1 + 808) = a4;
  *(_QWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 864) = 0;
  *(_OWORD *)(a1 + 824) = 0;
  *(_OWORD *)(a1 + 848) = 0;
  *(_OWORD *)(a1 + 872) = 0;
  if ( a3 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_89610);
    v12 = *(_QWORD *)(a3 + 96);
    *(_DWORD *)a3 = 0x800000;
    *(_WORD *)(a3 + 4) = 0;
    *(__m128i *)(a3 + 8) = si128;
    *(_DWORD *)(a3 + 40) = 0;
    *(_QWORD *)(a3 + 48) = 0;
    *(_QWORD *)(a3 + 56) = 0;
    *(_DWORD *)(a3 + 64) = -1;
    *(_BYTE *)(a3 + 68) = 0;
    *(_QWORD *)(a3 + 72) = 0;
    *(_DWORD *)(a3 + 80) = 2;
    *(_QWORD *)(a3 + 88) = -1;
    *(_OWORD *)(a3 + 24) = -1;
    if ( v12 )
    {
      *(_QWORD *)(a3 + 104) = 0;
      qfree(v12);
    }
    *(_QWORD *)(a3 + 96) = 0;
    *(_OWORD *)(a3 + 104) = 0;
    v10 = *(_QWORD *)(a1 + 872);
  }
  v13 = a5 + 1;
  if ( v13 != v10 )
  {
    memset(v45, 0, sizeof(v45));
    v46 = 0;
    LODWORD(v47) = 0;
    if ( v13 < v10 )
    {
LABEL_15:
      *(_QWORD *)(a1 + 872) = v13;
      goto LABEL_16;
    }
    v14 = *(_QWORD *)(a1 + 864);
    v15 = *(_QWORD *)(a1 + 880);
    v16 = a1 + 864;
    if ( (unsigned __int64)v45 >= v14 && (unsigned __int64)v45 < v14 + 40 * v15 )
    {
      v48 = _mm_load_si128((const __m128i *)v45);
      v17 = _mm_load_si128((const __m128i *)&v45[16]);
      v50 = v47;
      v49 = v17;
      if ( v15 < v13 )
      {
        v38 = qvector_reserve(v16, 0, v13, 40);
        v39 = *(_QWORD *)(a1 + 872);
        v40 = *(_QWORD *)(a1 + 880);
        v41 = v38;
        *(_QWORD *)(a1 + 880) = v15;
        v42 = *(const __m128i **)(a1 + 864);
        v43 = v39 - 1;
        if ( v43 >= 0 )
        {
          do
          {
            v44 = _mm_loadu_si128(v42);
            v38 += 40;
            v42 = (const __m128i *)((char *)v42 + 40);
            *(__m128i *)(v38 - 40) = v44;
            *(__m128i *)(v38 - 24) = _mm_loadu_si128((const __m128i *)((char *)v42 - 24));
            *(_QWORD *)(v38 - 8) = v42[-1].m128i_i64[1];
            v37 = v43-- == 0;
          }
          while ( !v37 );
          v42 = *(const __m128i **)(a1 + 864);
        }
        qfree((__int64)v42);
        *(_QWORD *)(a1 + 864) = v41;
        v10 = *(_QWORD *)(a1 + 872);
        *(_QWORD *)(a1 + 880) = v40;
      }
      if ( v10 < v13 )
      {
        v18 = _mm_load_si128(&v48);
        v19 = _mm_load_si128(&v49);
        v20 = v50;
        v21 = 40 * v10;
        do
        {
          v22 = *(_QWORD *)(a1 + 864);
          ++v10;
          *(_QWORD *)(v22 + v21 + 32) = v20;
          *(__m128i *)(v22 + v21) = v18;
          *(__m128i *)(v22 + v21 + 16) = v19;
          v21 += 40;
        }
        while ( v13 != v10 );
      }
      goto LABEL_15;
    }
    if ( v15 < v13 )
    {
      v29 = qvector_reserve(v16, 0, v13, 40);
      v30 = *(_QWORD *)(a1 + 872);
      v31 = *(_QWORD *)(a1 + 880);
      v32 = v29;
      *(_QWORD *)(a1 + 880) = v15;
      v33 = *(const __m128i **)(a1 + 864);
      v34 = v30 - 1;
      if ( v34 >= 0 )
      {
        v35 = v29;
        do
        {
          v36 = _mm_loadu_si128(v33);
          v35 += 40;
          v33 = (const __m128i *)((char *)v33 + 40);
          *(__m128i *)(v35 - 40) = v36;
          *(__m128i *)(v35 - 24) = _mm_loadu_si128((const __m128i *)((char *)v33 - 24));
          *(_QWORD *)(v35 - 8) = v33[-1].m128i_i64[1];
          v37 = v34-- == 0;
        }
        while ( !v37 );
        v33 = *(const __m128i **)(a1 + 864);
      }
      qfree((__int64)v33);
      *(_QWORD *)(a1 + 864) = v32;
      v10 = *(_QWORD *)(a1 + 872);
      *(_QWORD *)(a1 + 880) = v31;
    }
    if ( v10 >= v13 )
      goto LABEL_15;
    v24 = _mm_load_si128((const __m128i *)v45);
    v25 = _mm_load_si128((const __m128i *)&v45[16]);
    v26 = v47;
    v27 = 40 * v10;
    do
    {
      v28 = *(_QWORD *)(a1 + 864);
      ++v10;
      *(_QWORD *)(v28 + v27 + 32) = v26;
      *(__m128i *)(v28 + v27) = v24;
      *(__m128i *)(v28 + v27 + 16) = v25;
      v27 += 40;
    }
    while ( v13 != v10 );
    *(_QWORD *)(a1 + 872) = v13;
  }
LABEL_16:
  *(_QWORD *)(a1 + 888) = a2;
  *(_QWORD *)a1 = off_A4C48;
  **(_DWORD **)(a1 + 376) |= 0x1000u;
  return v51 - __readfsqword(0x28u);
}
