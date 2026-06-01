__int64 __fastcall sub_13A00(__m128i *a1, const void *a2)
{
  __m128i *v2; // rbx
  __m128i **v3; // rax
  __m128i si128; // xmm1
  __int64 v5; // rdi
  bool v6; // zf
  bool v7; // cc
  unsigned __int8 matched; // al
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // r13
  const __m128i *v19; // rdi
  __int64 v20; // rdx
  __m128i v21; // xmm0
  bool v22; // cf
  __int64 v23; // rax
  __int64 v24; // r13
  const __m128i *v25; // rdi
  __int64 v26; // rdx
  __m128i v27; // xmm0
  _BYTE v28[24]; // [rsp+0h] [rbp-408h] BYREF
  __int64 v29; // [rsp+18h] [rbp-3F0h]
  __int64 v30; // [rsp+20h] [rbp-3E8h]
  __m128i v31; // [rsp+30h] [rbp-3D8h] BYREF
  __m128i v32; // [rsp+40h] [rbp-3C8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-3B8h]
  __int64 (__fastcall **v34)(); // [rsp+60h] [rbp-3A8h]
  char v35; // [rsp+68h] [rbp-3A0h]
  _BYTE v36[360]; // [rsp+70h] [rbp-398h] BYREF
  __m128i *v37; // [rsp+1D8h] [rbp-230h] BYREF
  int v38; // [rsp+270h] [rbp-198h]
  char v39; // [rsp+379h] [rbp-8Fh]
  __int64 *v40; // [rsp+388h] [rbp-80h]
  __int64 v41; // [rsp+390h] [rbp-78h]
  __int128 v42; // [rsp+398h] [rbp-70h]
  __int64 v43; // [rsp+3A8h] [rbp-60h]
  __int128 v44; // [rsp+3B0h] [rbp-58h]
  const __m128i *v45; // [rsp+3C0h] [rbp-48h]
  __int128 v46; // [rsp+3C8h] [rbp-40h]
  unsigned __int64 v47; // [rsp+3D8h] [rbp-30h]

  v2 = a1;
  v47 = __readfsqword(0x28u);
  v34 = off_2BC60;
  v3 = (__m128i **)&v36[40];
  v35 = 1;
  *(_QWORD *)&v36[24] = 0;
  *(_QWORD *)&v36[32] = 0;
  memset(v36, 255, 24);
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = nullptr;
  }
  while ( &v37 != v3 );
  v37 = a1;
  v38 = -1;
  v39 = 0;
  v40 = qword_1BA20;
  v41 = 0;
  v43 = 0;
  v45 = nullptr;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  if ( !a1 )
  {
    v11 = *((_QWORD *)&v46 + 1);
    memset(v28, 0, sizeof(v28));
    v29 = 0;
    LODWORD(v30) = 0;
    goto LABEL_19;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1BA40);
  v5 = a1[6].m128i_i64[0];
  v2[4].m128i_i8[4] = 0;
  v2->m128i_i32[0] = 0x800000;
  *(__m128i *)((char *)v2 + 8) = si128;
  v2->m128i_i16[2] = 0;
  v2[2].m128i_i32[2] = 0;
  v2[3].m128i_i64[0] = 0;
  v2[3].m128i_i64[1] = 0;
  v2[4].m128i_i32[0] = -1;
  v2[4].m128i_i64[1] = 0;
  v2[5].m128i_i32[0] = 2;
  v2[5].m128i_i64[1] = -1;
  *(__m128i *)((char *)&v2[1] + 8) = (__m128i)-1LL;
  if ( !v5 )
  {
    *(_QWORD *)v28 = 0;
    v29 = 0;
    LODWORD(v30) = 0;
    *(__m128i *)((char *)&v2[6] + 8) = 0;
    *(_OWORD *)&v28[8] = 0;
    goto LABEL_14;
  }
  v2[6].m128i_i64[1] = 0;
  qfree();
  v6 = (_QWORD)v46 == 1;
  v7 = (unsigned __int64)v46 <= 1;
  v2[6].m128i_i64[0] = 0;
  *(__m128i *)((char *)&v2[6] + 8) = 0;
  if ( v6 )
    goto LABEL_6;
  memset(v28, 0, sizeof(v28));
  v29 = 0;
  LODWORD(v30) = 0;
  if ( v7 )
  {
LABEL_14:
    v2 = (__m128i *)v45;
    v11 = *((_QWORD *)&v46 + 1);
    if ( v28 < (_BYTE *)v45 )
    {
LABEL_15:
      if ( v11 )
        goto LABEL_16;
      v17 = qvector_reserve();
      v18 = *((_QWORD *)&v46 + 1);
      v2 = (__m128i *)v17;
      *((_QWORD *)&v46 + 1) = 0;
      v19 = v45;
      v20 = v46 - 1;
      if ( (__int64)v46 - 1 >= 0 )
      {
        do
        {
          v21 = _mm_loadu_si128(v19);
          v17 += 40;
          v19 = (const __m128i *)((char *)v19 + 40);
          *(__m128i *)(v17 - 40) = v21;
          *(__m128i *)(v17 - 24) = _mm_loadu_si128((const __m128i *)((char *)v19 - 24));
          *(_QWORD *)(v17 - 8) = v19[-1].m128i_i64[1];
          v22 = v20-- == 0;
        }
        while ( !v22 );
      }
      qfree();
      v45 = v2;
      *((_QWORD *)&v46 + 1) = v18;
      if ( !(_QWORD)v46 )
      {
LABEL_16:
        v12 = v30;
        *v2 = _mm_load_si128((const __m128i *)v28);
        v13 = _mm_load_si128((const __m128i *)&v28[16]);
        v2[2].m128i_i64[0] = v12;
        v2[1] = v13;
      }
      goto LABEL_17;
    }
LABEL_19:
    if ( v28 < &v2->m128i_i8[40 * v11] )
    {
      v31 = _mm_load_si128((const __m128i *)v28);
      v14 = _mm_load_si128((const __m128i *)&v28[16]);
      v33 = v30;
      v32 = v14;
      if ( v11 )
        goto LABEL_21;
      v23 = qvector_reserve();
      v24 = *((_QWORD *)&v46 + 1);
      v2 = (__m128i *)v23;
      *((_QWORD *)&v46 + 1) = 0;
      v25 = v45;
      v26 = v46 - 1;
      if ( (__int64)v46 - 1 >= 0 )
      {
        do
        {
          v27 = _mm_loadu_si128(v25);
          v23 += 40;
          v25 = (const __m128i *)((char *)v25 + 40);
          *(__m128i *)(v23 - 40) = v27;
          *(__m128i *)(v23 - 24) = _mm_loadu_si128((const __m128i *)((char *)v25 - 24));
          *(_QWORD *)(v23 - 8) = v25[-1].m128i_i64[1];
          v22 = v26-- == 0;
        }
        while ( !v22 );
      }
      qfree();
      v45 = v2;
      *((_QWORD *)&v46 + 1) = v24;
      if ( !(_QWORD)v46 )
      {
LABEL_21:
        v15 = v33;
        *v2 = _mm_load_si128(&v31);
        v16 = _mm_load_si128(&v32);
        v2[2].m128i_i64[0] = v15;
        v2[1] = v16;
      }
      goto LABEL_17;
    }
    goto LABEL_15;
  }
LABEL_17:
  *(_QWORD *)&v46 = 1;
LABEL_6:
  qmemcpy(v36, a2, sizeof(v36));
  v35 = 0;
  v34 = off_2A820;
  v38 = 0;
  matched = match_jpt();
  v34 = off_2BC60;
  v9 = matched;
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  return v9;
}

