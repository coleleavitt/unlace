unsigned __int64 __fastcall sub_2A040(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _WORD *v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // r13
  const __m128i *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __m128i v33; // xmm0
  bool v34; // cf
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // r13
  const __m128i *v39; // rdi
  __int64 v40; // rdx
  __m128i v41; // xmm0
  _BYTE v42[24]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v43; // [rsp+18h] [rbp-70h]
  __int64 v44; // [rsp+20h] [rbp-68h]
  __m128i v45; // [rsp+30h] [rbp-58h] BYREF
  __m128i v46; // [rsp+40h] [rbp-48h] BYREF
  __int64 v47; // [rsp+50h] [rbp-38h]
  unsigned __int64 v48; // [rsp+58h] [rbp-30h]

  v48 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = off_74B80;
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
      return v48 - __readfsqword(0x28u);
    memset(v42, 0, sizeof(v42));
    v12 = 0;
    v9 = 0;
    v43 = 0;
    v13 = *(_QWORD *)(a1 + 880);
    v14 = a1 + 864;
    LODWORD(v44) = 0;
    goto LABEL_12;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_595E0);
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
    qfree(v8);
    v9 = *(_QWORD *)(a1 + 872);
  }
  *(_QWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 104) = 0;
  v10 = a4 + 1;
  if ( v10 != v9 )
  {
    memset(v42, 0, sizeof(v42));
    v43 = 0;
    LODWORD(v44) = 0;
    if ( a4 + 1 < v9 )
    {
LABEL_8:
      *(_QWORD *)(a1 + 872) = v10;
      return v48 - __readfsqword(0x28u);
    }
    v12 = *(_QWORD *)(a1 + 864);
    v13 = *(_QWORD *)(a1 + 880);
    v14 = a1 + 864;
    if ( (unsigned __int64)v42 < v12 )
    {
LABEL_19:
      if ( v13 < v10 )
      {
        v26 = qvector_reserve(v14, 0, v10, 40);
        v27 = *(_QWORD *)(a1 + 872);
        v28 = *(_QWORD *)(a1 + 880);
        v29 = v26;
        *(_QWORD *)(a1 + 880) = v13;
        v30 = *(const __m128i **)(a1 + 864);
        v31 = v27 - 1;
        if ( v31 >= 0 )
        {
          v32 = v26;
          do
          {
            v33 = _mm_loadu_si128(v30);
            v32 += 40;
            v30 = (const __m128i *)((char *)v30 + 40);
            *(__m128i *)(v32 - 40) = v33;
            *(__m128i *)(v32 - 24) = _mm_loadu_si128((const __m128i *)((char *)v30 - 24));
            *(_QWORD *)(v32 - 8) = v30[-1].m128i_i64[1];
            v34 = v31-- == 0;
          }
          while ( !v34 );
          v30 = *(const __m128i **)(a1 + 864);
        }
        qfree(v30);
        *(_QWORD *)(a1 + 864) = v29;
        v9 = *(_QWORD *)(a1 + 872);
        *(_QWORD *)(a1 + 880) = v28;
      }
      if ( v9 < v10 )
      {
        v21 = _mm_load_si128((const __m128i *)v42);
        v22 = _mm_load_si128((const __m128i *)&v42[16]);
        v23 = v44;
        v24 = 40 * v9;
        do
        {
          v25 = *(_QWORD *)(a1 + 864);
          ++v9;
          *(_QWORD *)(v25 + v24 + 32) = v23;
          *(__m128i *)(v25 + v24) = v21;
          *(__m128i *)(v25 + v24 + 16) = v22;
          v24 += 40;
        }
        while ( v9 != v10 );
      }
      goto LABEL_8;
    }
LABEL_12:
    if ( (unsigned __int64)v42 < v12 + 40 * v13 )
    {
      v45 = _mm_load_si128((const __m128i *)v42);
      v15 = _mm_load_si128((const __m128i *)&v42[16]);
      v47 = v44;
      v46 = v15;
      if ( v13 < v10 )
      {
        v35 = qvector_reserve(v14, 0, v10, 40);
        v36 = *(_QWORD *)(a1 + 872);
        v37 = *(_QWORD *)(a1 + 880);
        v38 = v35;
        *(_QWORD *)(a1 + 880) = v13;
        v39 = *(const __m128i **)(a1 + 864);
        v40 = v36 - 1;
        if ( v40 >= 0 )
        {
          do
          {
            v41 = _mm_loadu_si128(v39);
            v35 += 40;
            v39 = (const __m128i *)((char *)v39 + 40);
            *(__m128i *)(v35 - 40) = v41;
            *(__m128i *)(v35 - 24) = _mm_loadu_si128((const __m128i *)((char *)v39 - 24));
            *(_QWORD *)(v35 - 8) = v39[-1].m128i_i64[1];
            v34 = v40-- == 0;
          }
          while ( !v34 );
          v39 = *(const __m128i **)(a1 + 864);
        }
        qfree(v39);
        *(_QWORD *)(a1 + 864) = v38;
        v9 = *(_QWORD *)(a1 + 872);
        *(_QWORD *)(a1 + 880) = v37;
      }
      if ( v9 < v10 )
      {
        v16 = _mm_load_si128(&v45);
        v17 = _mm_load_si128(&v46);
        v18 = v47;
        v19 = 40 * v9;
        do
        {
          v20 = *(_QWORD *)(a1 + 864);
          ++v9;
          *(_QWORD *)(v20 + v19 + 32) = v18;
          *(__m128i *)(v20 + v19) = v16;
          *(__m128i *)(v20 + v19 + 16) = v17;
          v19 += 40;
        }
        while ( v9 != v10 );
      }
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  return v48 - __readfsqword(0x28u);
}
