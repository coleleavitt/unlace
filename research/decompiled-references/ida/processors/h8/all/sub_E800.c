unsigned __int64 __fastcall sub_E800(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _WORD *v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r12
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // r13
  const __m128i *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // r13
  const __m128i *v38; // rdi
  __int64 v39; // rdx
  __m128i v40; // xmm0
  _BYTE v41[24]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v42; // [rsp+18h] [rbp-70h]
  __int64 v43; // [rsp+20h] [rbp-68h]
  __m128i v44; // [rsp+30h] [rbp-58h] BYREF
  __m128i v45; // [rsp+40h] [rbp-48h] BYREF
  __int64 v46; // [rsp+50h] [rbp-38h]
  unsigned __int64 v47; // [rsp+58h] [rbp-30h]

  v47 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = off_1DBA0;
  v6 = (_WORD *)(a1 + 56);
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
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
    v10 = a4 + 1;
    if ( a4 == -1 )
      return v47 - __readfsqword(0x28u);
    memset(v41, 0, sizeof(v41));
    v12 = 0;
    v9 = 0;
    v42 = 0;
    v13 = *(_QWORD *)(a1 + 880);
    LODWORD(v43) = 0;
    goto LABEL_12;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_182E0);
  v8 = *(_QWORD *)(a2 + 96);
  v9 = 0;
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
  if ( v8 )
  {
    *(_QWORD *)(a2 + 104) = 0;
    qfree();
    v9 = *(_QWORD *)(a1 + 872);
  }
  *(_QWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 104) = 0;
  v10 = a4 + 1;
  if ( v10 != v9 )
  {
    memset(v41, 0, sizeof(v41));
    v42 = 0;
    LODWORD(v43) = 0;
    if ( a4 + 1 < v9 )
    {
LABEL_8:
      *(_QWORD *)(a1 + 872) = v10;
      return v47 - __readfsqword(0x28u);
    }
    v12 = *(_QWORD *)(a1 + 864);
    v13 = *(_QWORD *)(a1 + 880);
    if ( (unsigned __int64)v41 < v12 )
    {
LABEL_19:
      if ( v13 < v10 )
      {
        v25 = qvector_reserve();
        v26 = *(_QWORD *)(a1 + 872);
        v27 = *(_QWORD *)(a1 + 880);
        v28 = v25;
        *(_QWORD *)(a1 + 880) = v13;
        v29 = *(const __m128i **)(a1 + 864);
        v30 = v26 - 1;
        if ( v30 >= 0 )
        {
          v31 = v25;
          do
          {
            v32 = _mm_loadu_si128(v29);
            v31 += 40;
            v29 = (const __m128i *)((char *)v29 + 40);
            *(__m128i *)(v31 - 40) = v32;
            *(__m128i *)(v31 - 24) = _mm_loadu_si128((const __m128i *)((char *)v29 - 24));
            *(_QWORD *)(v31 - 8) = v29[-1].m128i_i64[1];
            v33 = v30-- == 0;
          }
          while ( !v33 );
        }
        qfree();
        *(_QWORD *)(a1 + 864) = v28;
        v9 = *(_QWORD *)(a1 + 872);
        *(_QWORD *)(a1 + 880) = v27;
      }
      if ( v9 < v10 )
      {
        v20 = _mm_load_si128((const __m128i *)v41);
        v21 = _mm_load_si128((const __m128i *)&v41[16]);
        v22 = v43;
        v23 = 40 * v9;
        do
        {
          v24 = *(_QWORD *)(a1 + 864);
          ++v9;
          *(_QWORD *)(v24 + v23 + 32) = v22;
          *(__m128i *)(v24 + v23) = v20;
          *(__m128i *)(v24 + v23 + 16) = v21;
          v23 += 40;
        }
        while ( v9 != v10 );
      }
      goto LABEL_8;
    }
LABEL_12:
    if ( (unsigned __int64)v41 < v12 + 40 * v13 )
    {
      v44 = _mm_load_si128((const __m128i *)v41);
      v14 = _mm_load_si128((const __m128i *)&v41[16]);
      v46 = v43;
      v45 = v14;
      if ( v13 < v10 )
      {
        v34 = qvector_reserve();
        v35 = *(_QWORD *)(a1 + 872);
        v36 = *(_QWORD *)(a1 + 880);
        v37 = v34;
        *(_QWORD *)(a1 + 880) = v13;
        v38 = *(const __m128i **)(a1 + 864);
        v39 = v35 - 1;
        if ( v39 >= 0 )
        {
          do
          {
            v40 = _mm_loadu_si128(v38);
            v34 += 40;
            v38 = (const __m128i *)((char *)v38 + 40);
            *(__m128i *)(v34 - 40) = v40;
            *(__m128i *)(v34 - 24) = _mm_loadu_si128((const __m128i *)((char *)v38 - 24));
            *(_QWORD *)(v34 - 8) = v38[-1].m128i_i64[1];
            v33 = v39-- == 0;
          }
          while ( !v33 );
        }
        qfree();
        *(_QWORD *)(a1 + 864) = v37;
        v9 = *(_QWORD *)(a1 + 872);
        *(_QWORD *)(a1 + 880) = v36;
      }
      if ( v9 < v10 )
      {
        v15 = _mm_load_si128(&v44);
        v16 = _mm_load_si128(&v45);
        v17 = v46;
        v18 = 40 * v9;
        do
        {
          v19 = *(_QWORD *)(a1 + 864);
          ++v9;
          *(_QWORD *)(v19 + v18 + 32) = v17;
          *(__m128i *)(v19 + v18) = v15;
          *(__m128i *)(v19 + v18 + 16) = v16;
          v18 += 40;
        }
        while ( v9 != v10 );
      }
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  return v47 - __readfsqword(0x28u);
}

