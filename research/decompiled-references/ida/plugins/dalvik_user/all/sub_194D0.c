__int64 __fastcall sub_194D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r13
  __int64 i; // rcx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdi
  __m128i *v11; // r15
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __m128i v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // r13
  __int64 v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // rax
  __m128i v25; // xmm1
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rdi
  __m128i si128; // xmm1
  __int64 v33; // rdi
  __m128i v34; // xmm1
  __int64 v35; // rdi
  __m128i v36; // xmm1
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 result; // rax
  __m128i *v40; // r12
  __int64 v41; // r15
  __m128i v42; // xmm0
  __int64 v43; // r15
  __m128i v44; // xmm0
  __int64 v45; // r15
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // r15
  __m128i v51; // xmm0
  __int64 v52; // r15
  __m128i v53; // xmm0
  __int64 v54; // r15
  __m128i v55; // xmm0
  __m128i v56; // [rsp+0h] [rbp-138h] BYREF
  __m128i v57; // [rsp+10h] [rbp-128h] BYREF
  __int64 v58; // [rsp+20h] [rbp-118h]
  __int64 v59; // [rsp+28h] [rbp-110h]
  __int64 v60; // [rsp+30h] [rbp-108h]
  __int64 v61; // [rsp+38h] [rbp-100h]
  __int64 v62; // [rsp+40h] [rbp-F8h]
  char v63; // [rsp+4Eh] [rbp-EAh]
  unsigned __int8 v64; // [rsp+4Fh] [rbp-E9h]
  __m128i v65; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v66; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v67[7]; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v68[5]; // [rsp+E0h] [rbp-58h] BYREF

  v5 = (a3 - 1) / 2;
  v58 = a2;
  v59 = a3;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = a1 + 240 * (i + 1);
      v18 = v9 - 120;
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 != *(_QWORD *)(v9 - 120) )
        break;
      if ( *(_DWORD *)(v9 + 84) < *(_DWORD *)(v18 + 84) )
        goto LABEL_4;
LABEL_5:
      v11 = (__m128i *)(a1 + 120 * i);
      v11->m128i_i64[0] = v10;
      v12 = *(_QWORD *)(v9 + 8);
      v13 = _mm_loadu_si128((const __m128i *)(v9 + 16));
      *(_QWORD *)(v9 + 8) = 0;
      *(_OWORD *)(v9 + 16) = 0;
      if ( v11->m128i_i64[1] )
      {
        v11[1].m128i_i64[0] = 0;
        v56.m128i_i64[0] = v12;
        v57 = v13;
        qfree();
        v13 = _mm_load_si128(&v57);
        v12 = v56.m128i_i64[0];
      }
      v11->m128i_i64[1] = v12;
      v11[1] = v13;
      v14 = *(_QWORD *)(v9 + 32);
      v15 = _mm_loadu_si128((const __m128i *)(v9 + 40));
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 40) = 0;
      if ( v11[2].m128i_i64[0] )
      {
        v11[2].m128i_i64[1] = 0;
        v56.m128i_i64[0] = v14;
        v57 = v15;
        qfree();
        v15 = _mm_load_si128(&v57);
        v14 = v56.m128i_i64[0];
      }
      v11[2].m128i_i64[0] = v14;
      *(__m128i *)((char *)v11 + 40) = v15;
      v16 = *(_QWORD *)(v9 + 56);
      v17 = _mm_loadu_si128((const __m128i *)(v9 + 64));
      *(_QWORD *)(v9 + 56) = 0;
      *(_OWORD *)(v9 + 64) = 0;
      if ( v11[3].m128i_i64[1] )
      {
        v11[4].m128i_i64[0] = 0;
        v56.m128i_i64[0] = v16;
        v57 = v17;
        qfree();
        v17 = _mm_load_si128(&v57);
        v16 = v56.m128i_i64[0];
      }
      v11[3].m128i_i64[1] = v16;
      v11[4] = v17;
      v11[5].m128i_i32[0] = *(_DWORD *)(v9 + 80);
      v11[5].m128i_i32[1] = *(_DWORD *)(v9 + 84);
      v11[5].m128i_i8[8] = *(_BYTE *)(v9 + 88);
      v11[6] = _mm_loadu_si128((const __m128i *)(v9 + 96));
      v11[7].m128i_i8[0] = *(_BYTE *)(v9 + 112);
      if ( v8 >= v5 )
        goto LABEL_17;
    }
    if ( v10 >= *(_QWORD *)v18 )
      goto LABEL_5;
LABEL_4:
    --v8;
    v9 = a1 + 120 * v8;
    v10 = *(_QWORD *)v9;
    goto LABEL_5;
  }
  v8 = v58;
  v9 = a1 + 120 * v58;
LABEL_17:
  if ( (v59 & 1) == 0 && (v59 - 2) / 2 == v8 )
  {
    v47 = v8 + 1;
    v48 = 2 * (v8 + 1);
    v49 = a1 + 8 * (32 * v47 - v48) - 120;
    *(_QWORD *)v9 = *(_QWORD *)v49;
    v50 = *(_QWORD *)(v49 + 8);
    v51 = _mm_loadu_si128((const __m128i *)(v49 + 16));
    *(_QWORD *)(v49 + 8) = 0;
    *(_OWORD *)(v49 + 16) = 0;
    if ( *(_QWORD *)(v9 + 8) )
    {
      *(_QWORD *)(v9 + 16) = 0;
      v56 = v51;
      qfree();
      v51 = _mm_load_si128(&v56);
    }
    *(_QWORD *)(v9 + 8) = v50;
    *(__m128i *)(v9 + 16) = v51;
    v52 = *(_QWORD *)(v49 + 32);
    v53 = _mm_loadu_si128((const __m128i *)(v49 + 40));
    *(_QWORD *)(v49 + 32) = 0;
    *(_OWORD *)(v49 + 40) = 0;
    if ( *(_QWORD *)(v9 + 32) )
    {
      *(_QWORD *)(v9 + 40) = 0;
      v56 = v53;
      qfree();
      v53 = _mm_load_si128(&v56);
    }
    *(_QWORD *)(v9 + 32) = v52;
    *(__m128i *)(v9 + 40) = v53;
    v54 = *(_QWORD *)(v49 + 56);
    v55 = _mm_loadu_si128((const __m128i *)(v49 + 64));
    *(_QWORD *)(v49 + 56) = 0;
    *(_OWORD *)(v49 + 64) = 0;
    if ( *(_QWORD *)(v9 + 56) )
    {
      *(_QWORD *)(v9 + 64) = 0;
      v56 = v55;
      qfree();
      v55 = _mm_load_si128(&v56);
    }
    *(_QWORD *)(v9 + 56) = v54;
    v8 = v48 - 1;
    *(__m128i *)(v9 + 64) = v55;
    *(_DWORD *)(v9 + 80) = *(_DWORD *)(v49 + 80);
    *(_DWORD *)(v9 + 84) = *(_DWORD *)(v49 + 84);
    *(_BYTE *)(v9 + 88) = *(_BYTE *)(v49 + 88);
    *(__m128i *)(v9 + 96) = _mm_loadu_si128((const __m128i *)(v49 + 96));
    *(_BYTE *)(v9 + 112) = *(_BYTE *)(v49 + 112);
    v9 = a1 + 120 * v8;
  }
  v19 = a4[1];
  v20 = _mm_loadu_si128((const __m128i *)a4 + 1);
  *((_OWORD *)a4 + 1) = 0;
  v21 = *a4;
  v60 = v19;
  v22 = a4[4];
  v67[0] = v20;
  v23 = _mm_loadu_si128((const __m128i *)(a4 + 5));
  v61 = v22;
  v24 = a4[7];
  v66 = v23;
  v25 = _mm_loadu_si128((const __m128i *)a4 + 4);
  v62 = v24;
  v26 = a4[10];
  *(_OWORD *)(a4 + 5) = 0;
  v59 = v26;
  LOBYTE(v26) = *((_BYTE *)a4 + 88);
  *((_OWORD *)a4 + 4) = 0;
  v27 = _mm_loadu_si128((const __m128i *)a4 + 6);
  v63 = v26;
  LOBYTE(v26) = *((_BYTE *)a4 + 112);
  v65 = v25;
  v28 = _mm_cvtsi32_si128(HIDWORD(v59));
  v64 = v26;
  v29 = v58;
  a4[1] = 0;
  a4[4] = 0;
  a4[7] = 0;
  v30 = (v8 - 1) / 2;
  v57.m128i_i32[0] = _mm_cvtsi128_si32(v28);
  v68[0] = v27;
  if ( v8 > v29 )
  {
    while ( 1 )
    {
      v9 = a1 + 120 * v30;
      if ( *(_QWORD *)v9 == v21 )
      {
        if ( *(_DWORD *)(v9 + 84) >= v57.m128i_i32[0] )
        {
LABEL_22:
          v9 = a1 + 120 * v8;
          break;
        }
      }
      else if ( *(_QWORD *)v9 >= v21 )
      {
        goto LABEL_22;
      }
      v40 = (__m128i *)(a1 + 120 * v8);
      v40->m128i_i64[0] = *(_QWORD *)v9;
      v41 = *(_QWORD *)(v9 + 8);
      v42 = _mm_loadu_si128((const __m128i *)(v9 + 16));
      *(_QWORD *)(v9 + 8) = 0;
      *(_OWORD *)(v9 + 16) = 0;
      if ( v40->m128i_i64[1] )
      {
        v40[1].m128i_i64[0] = 0;
        v56 = v42;
        qfree();
        v42 = _mm_load_si128(&v56);
      }
      v40->m128i_i64[1] = v41;
      v40[1] = v42;
      v43 = *(_QWORD *)(v9 + 32);
      v44 = _mm_loadu_si128((const __m128i *)(v9 + 40));
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 40) = 0;
      if ( v40[2].m128i_i64[0] )
      {
        v40[2].m128i_i64[1] = 0;
        v56 = v44;
        qfree();
        v44 = _mm_load_si128(&v56);
      }
      v40[2].m128i_i64[0] = v43;
      *(__m128i *)((char *)v40 + 40) = v44;
      v45 = *(_QWORD *)(v9 + 56);
      v46 = _mm_loadu_si128((const __m128i *)(v9 + 64));
      *(_QWORD *)(v9 + 56) = 0;
      *(_OWORD *)(v9 + 64) = 0;
      if ( v40[3].m128i_i64[1] )
      {
        v40[4].m128i_i64[0] = 0;
        v56 = v46;
        qfree();
        v46 = _mm_load_si128(&v56);
      }
      v40[3].m128i_i64[1] = v45;
      v40[4] = v46;
      v40[5].m128i_i32[0] = *(_DWORD *)(v9 + 80);
      v40[5].m128i_i32[1] = *(_DWORD *)(v9 + 84);
      v40[5].m128i_i8[8] = *(_BYTE *)(v9 + 88);
      v40[6] = _mm_loadu_si128((const __m128i *)(v9 + 96));
      v40[7].m128i_i8[0] = *(_BYTE *)(v9 + 112);
      v8 = v30;
      if ( v58 >= v30 )
        break;
      v30 = (v30 - 1) / 2;
    }
  }
  v31 = *(_QWORD *)(v9 + 8);
  *(_QWORD *)v9 = v21;
  if ( v31 )
  {
    *(_QWORD *)(v9 + 16) = 0;
    qfree();
  }
  si128 = _mm_load_si128(v67);
  v33 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 8) = v60;
  *(__m128i *)(v9 + 16) = si128;
  if ( v33 )
  {
    *(_QWORD *)(v9 + 40) = 0;
    qfree();
  }
  v34 = _mm_load_si128(&v66);
  v35 = *(_QWORD *)(v9 + 56);
  *(_QWORD *)(v9 + 32) = v61;
  *(__m128i *)(v9 + 40) = v34;
  if ( v35 )
  {
    *(_QWORD *)(v9 + 64) = 0;
    qfree();
  }
  v36 = _mm_load_si128(&v65);
  v37 = _mm_load_si128(v68);
  *(_QWORD *)(v9 + 56) = v62;
  v38 = v59;
  *(__m128i *)(v9 + 64) = v36;
  *(_QWORD *)(v9 + 80) = v38;
  LOBYTE(v38) = v63;
  *(__m128i *)(v9 + 96) = v37;
  *(_BYTE *)(v9 + 88) = v38;
  result = v64;
  *(_BYTE *)(v9 + 112) = v64;
  return result;
}

