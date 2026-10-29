__int64 __fastcall sub_9C80(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // rdi
  bool v13; // zf
  bool v14; // cc
  char *v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // ebx
  const __m128i *v19; // rdx
  unsigned __int64 v20; // rbx
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 j; // rax
  const __m128i *v25; // rdx
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __int64 v29; // rcx
  __int64 i; // rax
  const __m128i *v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r15
  const __m128i *v36; // r14
  const __m128i *v37; // rdi
  __int64 v38; // rcx
  __m128i v39; // xmm0
  bool v40; // cf
  __int64 v41; // rax
  __int64 v42; // r15
  const __m128i *v43; // r14
  const __m128i *v44; // rdi
  __int64 v45; // rdx
  __m128i v46; // xmm0
  _BYTE v47[24]; // [rsp+0h] [rbp-438h] BYREF
  __int64 v48; // [rsp+18h] [rbp-420h]
  __int64 v49; // [rsp+20h] [rbp-418h]
  __m128i si128; // [rsp+30h] [rbp-408h] BYREF
  __m128i v51; // [rsp+40h] [rbp-3F8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-3E8h]
  __int64 (__fastcall **v53)(); // [rsp+60h] [rbp-3D8h] BYREF
  char v54; // [rsp+68h] [rbp-3D0h]
  _BYTE v55[360]; // [rsp+70h] [rbp-3C8h] BYREF
  _QWORD v56[19]; // [rsp+1D8h] [rbp-260h] BYREF
  int v57; // [rsp+270h] [rbp-1C8h]
  char v58; // [rsp+379h] [rbp-BFh]
  void *v59; // [rsp+388h] [rbp-B0h]
  __int64 v60; // [rsp+390h] [rbp-A8h]
  __int128 v61; // [rsp+398h] [rbp-A0h]
  __int64 v62; // [rsp+3A8h] [rbp-90h]
  __int128 v63; // [rsp+3B0h] [rbp-88h]
  const __m128i *v64; // [rsp+3C0h] [rbp-78h] BYREF
  __int128 v65; // [rsp+3C8h] [rbp-70h]
  __int64 v66; // [rsp+3D8h] [rbp-60h]
  __int128 v67; // [rsp+3E0h] [rbp-58h]
  int v68; // [rsp+3F0h] [rbp-48h]
  char v69; // [rsp+3F4h] [rbp-44h]
  unsigned __int64 v70; // [rsp+3F8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v53 = off_14C60;
  v9 = &v55[40];
  v54 = 1;
  *(_QWORD *)&v55[24] = 0;
  *(_QWORD *)&v55[32] = 0;
  memset(v55, 255, 24);
  v10.m128i_i64[0] = 0;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( v56 != v9 );
  v56[0] = a1;
  v57 = -1;
  v58 = 0;
  v59 = &unk_11D70;
  v60 = 0;
  v62 = 0;
  v64 = nullptr;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  if ( !a1 )
  {
    memset(v47, 0, sizeof(v47));
    v19 = nullptr;
    v20 = *((_QWORD *)&v65 + 1);
    v48 = 0;
    LODWORD(v49) = 0;
LABEL_24:
    if ( v47 < &v19->m128i_i8[40 * v20] )
    {
      si128 = _mm_load_si128((const __m128i *)v47);
      v26 = _mm_load_si128((const __m128i *)&v47[16]);
      v52 = v49;
      v51 = v26;
      if ( v20 <= 1 )
      {
        v41 = qvector_reserve(&v64, 0, 2, 40, a5, a6, *(_QWORD *)v47, *(_QWORD *)&v47[8], *(_QWORD *)&v47[16], v48);
        v42 = *((_QWORD *)&v65 + 1);
        v43 = (const __m128i *)v41;
        *((_QWORD *)&v65 + 1) = v20;
        v44 = v64;
        v45 = v65 - 1;
        if ( (__int64)v65 - 1 >= 0 )
        {
          do
          {
            v46 = _mm_loadu_si128(v44);
            v41 += 40;
            v44 = (const __m128i *)((char *)v44 + 40);
            *(__m128i *)(v41 - 40) = v46;
            v26 = _mm_loadu_si128((const __m128i *)((char *)v44 - 24));
            *(__m128i *)(v41 - 24) = v26;
            *(_QWORD *)(v41 - 8) = v44[-1].m128i_i64[1];
            v40 = v45-- == 0;
          }
          while ( !v40 );
          v44 = v64;
        }
        qfree(v44, 0, v45, *(double *)v26.m128i_i64);
        v64 = v43;
        *((_QWORD *)&v65 + 1) = v42;
      }
      if ( (unsigned __int64)v65 <= 1 )
      {
        v27 = _mm_load_si128(&si128);
        v28 = _mm_load_si128(&v51);
        v29 = v52;
        for ( i = 40 * v65; ; i = 40 )
        {
          v31 = v64;
          v64[2].m128i_i64[(unsigned __int64)i / 8] = v29;
          *(__m128i *)((char *)v31 + i) = v27;
          *(__m128i *)((char *)v31 + i + 16) = v28;
          if ( i )
            break;
        }
      }
      goto LABEL_22;
    }
LABEL_17:
    if ( v20 <= 1 )
    {
      v32 = 0;
      v33 = qvector_reserve(&v64, 0, 2, 40, a5, a6, *(_QWORD *)v47, *(_QWORD *)&v47[8], *(_QWORD *)&v47[16], v48);
      v35 = *((_QWORD *)&v65 + 1);
      v36 = (const __m128i *)v33;
      *((_QWORD *)&v65 + 1) = v20;
      v37 = v64;
      v38 = v65 - 1;
      if ( (__int64)v65 - 1 >= 0 )
      {
        v34 = v33;
        do
        {
          v39 = _mm_loadu_si128(v37);
          v34 += 40;
          v37 = (const __m128i *)((char *)v37 + 40);
          *(__m128i *)(v34 - 40) = v39;
          v10 = _mm_loadu_si128((const __m128i *)((char *)v37 - 24));
          *(__m128i *)(v34 - 24) = v10;
          v32 = v37[-1].m128i_i64[1];
          *(_QWORD *)(v34 - 8) = v32;
          v40 = v38-- == 0;
        }
        while ( !v40 );
        v37 = v64;
      }
      qfree(v37, v32, v34, *(double *)v10.m128i_i64);
      v64 = v36;
      *((_QWORD *)&v65 + 1) = v35;
    }
    if ( (unsigned __int64)v65 <= 1 )
    {
      v21 = _mm_load_si128((const __m128i *)v47);
      v22 = _mm_load_si128((const __m128i *)&v47[16]);
      v23 = v49;
      for ( j = 40 * v65; ; j = 40 )
      {
        v25 = v64;
        v64[2].m128i_i64[(unsigned __int64)j / 8] = v23;
        *(__m128i *)((char *)v25 + j) = v21;
        *(__m128i *)((char *)v25 + j + 16) = v22;
        if ( j )
          break;
      }
    }
LABEL_22:
    *(_QWORD *)&v65 = 2;
    goto LABEL_6;
  }
  v11 = _mm_load_si128((const __m128i *)&xmmword_11DE0);
  v12 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)a1 = 0x800000;
  *(_WORD *)(a1 + 4) = 0;
  *(__m128i *)(a1 + 8) = v11;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_BYTE *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 2;
  *(_QWORD *)(a1 + 88) = -1;
  *(_OWORD *)(a1 + 24) = -1;
  if ( !v12 )
  {
    *(_QWORD *)v47 = 0;
    v48 = 0;
    LODWORD(v49) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v47[8] = 0;
    goto LABEL_16;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree(v12, a2, v56, 0.0);
  v10.m128i_i64[0] = 0;
  v13 = (_QWORD)v65 == 2;
  v14 = (unsigned __int64)v65 <= 2;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v13 )
    goto LABEL_6;
  memset(v47, 0, sizeof(v47));
  v48 = 0;
  LODWORD(v49) = 0;
  if ( v14 )
  {
LABEL_16:
    v19 = v64;
    v20 = *((_QWORD *)&v65 + 1);
    if ( v47 < (_BYTE *)v64 )
      goto LABEL_17;
    goto LABEL_24;
  }
  *(_QWORD *)&v65 = 2;
LABEL_6:
  v66 = a3;
  v53 = off_141B8;
  v68 = -1;
  v69 = 10;
  v54 = 0;
  v67 = -1;
  *(_DWORD *)v56[0] |= 0x40000u;
  qmemcpy(v55, a2, sizeof(v55));
  v15 = a2 + 360;
  v57 = 0;
  v17 = 0;
  if ( (unsigned __int8)match_jpt(&v53) )
  {
    sub_9BD0((__int64)&v53);
    v17 = 1;
  }
  v53 = off_14C60;
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64, v15, v16, NAN);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, v15, v16, NAN);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60, v15, v16, NAN);
  }
  return v17;
}
