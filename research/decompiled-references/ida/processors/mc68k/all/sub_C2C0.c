unsigned __int64 __fastcall sub_C2C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _WORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i si128; // xmm0
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // r13
  const __m128i *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __m128i v35; // xmm0
  bool v36; // cf
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // r13
  const __m128i *v41; // rdi
  __int64 v42; // rdx
  __m128i v43; // xmm0
  _BYTE v44[24]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v45; // [rsp+18h] [rbp-70h]
  __int64 v46; // [rsp+20h] [rbp-68h]
  __m128i v47; // [rsp+30h] [rbp-58h] BYREF
  __m128i v48; // [rsp+40h] [rbp-48h] BYREF
  __int64 v49; // [rsp+50h] [rbp-38h]
  unsigned __int64 v50; // [rsp+58h] [rbp-30h]

  v50 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = off_1CB88;
  v6 = (_WORD *)(a1 + 56);
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    v7 = 0;
    v8 = 0;
    *v6 = 0;
    v6 += 20;
    *(v6 - 19) = 0;
    *(v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *(v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( (_WORD *)(a1 + 376) != v6 );
  *(_QWORD *)(a1 + 376) = a2;
  *(_DWORD *)(a1 + 528) = -1;
  *(_BYTE *)(a1 + 793) = 0;
  *(_QWORD *)(a1 + 808) = a3;
  *(_QWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 864) = 0;
  *(_OWORD *)(a1 + 824) = 0;
  *(_OWORD *)(a1 + 848) = 0;
  *(_OWORD *)(a1 + 872) = 0;
  if ( !a2 )
  {
    v12 = a4 + 1;
    if ( a4 == -1 )
      return v50 - __readfsqword(0x28u);
    memset(v44, 0, sizeof(v44));
    v14 = 0;
    v11 = 0;
    v45 = 0;
    v15 = *(_QWORD *)(a1 + 880);
    v16 = a1 + 864;
    LODWORD(v46) = 0;
    goto LABEL_12;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_16E80);
  v10 = *(_QWORD *)(a2 + 96);
  v11 = 0;
  *(_DWORD *)a2 = 0x800000;
  *(__m128i *)(a2 + 8) = si128;
  *(_WORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 64) = -1;
  *(_BYTE *)(a2 + 68) = 0;
  *(_QWORD *)(a2 + 72) = 0;
  *(_DWORD *)(a2 + 80) = 2;
  *(_QWORD *)(a2 + 88) = -1;
  *(_OWORD *)(a2 + 24) = -1;
  if ( v10 )
  {
    *(_QWORD *)(a2 + 104) = 0;
    ((void (*)(void))qfree)();
    v11 = *(_QWORD *)(a1 + 872);
  }
  *(_QWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 104) = 0;
  v12 = a4 + 1;
  if ( v12 != v11 )
  {
    memset(v44, 0, sizeof(v44));
    v45 = 0;
    LODWORD(v46) = 0;
    if ( a4 + 1 < v11 )
    {
LABEL_8:
      *(_QWORD *)(a1 + 872) = v12;
      return v50 - __readfsqword(0x28u);
    }
    v14 = *(_QWORD *)(a1 + 864);
    v15 = *(_QWORD *)(a1 + 880);
    v16 = a1 + 864;
    if ( (unsigned __int64)v44 < v14 )
    {
LABEL_19:
      if ( v15 < v12 )
      {
        v28 = qvector_reserve(v16, 0, v12, 40, v7, v8, *(_QWORD *)v44, *(_QWORD *)&v44[8], *(_QWORD *)&v44[16], v45);
        v29 = *(_QWORD *)(a1 + 872);
        v30 = *(_QWORD *)(a1 + 880);
        v31 = v28;
        *(_QWORD *)(a1 + 880) = v15;
        v32 = *(const __m128i **)(a1 + 864);
        v33 = v29 - 1;
        if ( v33 >= 0 )
        {
          v34 = v28;
          do
          {
            v35 = _mm_loadu_si128(v32);
            v34 += 40;
            v32 = (const __m128i *)((char *)v32 + 40);
            *(__m128i *)(v34 - 40) = v35;
            *(__m128i *)(v34 - 24) = _mm_loadu_si128((const __m128i *)((char *)v32 - 24));
            *(_QWORD *)(v34 - 8) = v32[-1].m128i_i64[1];
            v36 = v33-- == 0;
          }
          while ( !v36 );
          v32 = *(const __m128i **)(a1 + 864);
        }
        qfree(v32);
        *(_QWORD *)(a1 + 864) = v31;
        v11 = *(_QWORD *)(a1 + 872);
        *(_QWORD *)(a1 + 880) = v30;
      }
      if ( v11 < v12 )
      {
        v23 = _mm_load_si128((const __m128i *)v44);
        v24 = _mm_load_si128((const __m128i *)&v44[16]);
        v25 = v46;
        v26 = 40 * v11;
        do
        {
          v27 = *(_QWORD *)(a1 + 864);
          ++v11;
          *(_QWORD *)(v27 + v26 + 32) = v25;
          *(__m128i *)(v27 + v26) = v23;
          *(__m128i *)(v27 + v26 + 16) = v24;
          v26 += 40;
        }
        while ( v11 != v12 );
      }
      goto LABEL_8;
    }
LABEL_12:
    if ( (unsigned __int64)v44 < v14 + 40 * v15 )
    {
      v47 = _mm_load_si128((const __m128i *)v44);
      v17 = _mm_load_si128((const __m128i *)&v44[16]);
      v49 = v46;
      v48 = v17;
      if ( v15 < v12 )
      {
        v37 = qvector_reserve(v16, 0, v12, 40, v7, v8, *(_QWORD *)v44, *(_QWORD *)&v44[8], *(_QWORD *)&v44[16], v45);
        v38 = *(_QWORD *)(a1 + 872);
        v39 = *(_QWORD *)(a1 + 880);
        v40 = v37;
        *(_QWORD *)(a1 + 880) = v15;
        v41 = *(const __m128i **)(a1 + 864);
        v42 = v38 - 1;
        if ( v42 >= 0 )
        {
          do
          {
            v43 = _mm_loadu_si128(v41);
            v37 += 40;
            v41 = (const __m128i *)((char *)v41 + 40);
            *(__m128i *)(v37 - 40) = v43;
            *(__m128i *)(v37 - 24) = _mm_loadu_si128((const __m128i *)((char *)v41 - 24));
            *(_QWORD *)(v37 - 8) = v41[-1].m128i_i64[1];
            v36 = v42-- == 0;
          }
          while ( !v36 );
          v41 = *(const __m128i **)(a1 + 864);
        }
        qfree(v41);
        *(_QWORD *)(a1 + 864) = v40;
        v11 = *(_QWORD *)(a1 + 872);
        *(_QWORD *)(a1 + 880) = v39;
      }
      if ( v11 < v12 )
      {
        v18 = _mm_load_si128(&v47);
        v19 = _mm_load_si128(&v48);
        v20 = v49;
        v21 = 40 * v11;
        do
        {
          v22 = *(_QWORD *)(a1 + 864);
          ++v11;
          *(_QWORD *)(v22 + v21 + 32) = v20;
          *(__m128i *)(v22 + v21) = v18;
          *(__m128i *)(v22 + v21 + 16) = v19;
          v21 += 40;
        }
        while ( v11 != v12 );
      }
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  return v50 - __readfsqword(0x28u);
}

