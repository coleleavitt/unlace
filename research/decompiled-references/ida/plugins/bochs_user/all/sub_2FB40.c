__int64 __fastcall sub_2FB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __m128i *v7; // r12
  __int64 v8; // r15
  __m128i v9; // xmm0
  __int64 v10; // r15
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 *v15; // r9
  __int64 v16; // r14
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __m128 v19; // xmm6
  __m128i v20; // xmm7
  __m128i v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rdi
  __m128i v26; // xmm1
  __int64 v27; // rdi
  __m128i si128; // xmm7
  __int64 v29; // rax
  __int64 result; // rax
  __m128i *v31; // r13
  __int64 v32; // r15
  __m128i v33; // xmm0
  __int64 v34; // r15
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // r15
  __m128i v40; // xmm0
  __int64 v41; // r15
  __m128i v42; // xmm0
  __m128i v43; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v44; // [rsp+20h] [rbp-98h] BYREF
  __m128i v45; // [rsp+30h] [rbp-88h] BYREF
  __m128 v46; // [rsp+40h] [rbp-78h] BYREF
  __int64 v47; // [rsp+50h] [rbp-68h]
  __int64 v48; // [rsp+58h] [rbp-60h]
  __int64 v49; // [rsp+60h] [rbp-58h]
  unsigned __int16 v50; // [rsp+6Eh] [rbp-4Ah]
  __m128i v51[4]; // [rsp+70h] [rbp-48h] BYREF

  v45.m128i_i64[0] = a3;
  v43.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v43.m128i_i64[0] )
  {
    v13 = a2;
    v16 = a1 + 80 * a2;
  }
  else
  {
    for ( i = a2; ; i = v13 )
    {
      v13 = 2 * (i + 1);
      v14 = 160 * (i + 1);
      v15 = (unsigned __int64 *)(a1 + v14 - 80);
      v16 = a1 + v14;
      v17 = *(_QWORD *)(a1 + v14);
      if ( *v15 >= v17 && (v17 != *v15 || *(_QWORD *)(v16 + 8) < v15[1]) )
      {
        --v13;
        v16 = a1 + 80 * v13;
      }
      v7 = (__m128i *)(a1 + 80 * i);
      *v7 = _mm_loadu_si128((const __m128i *)v16);
      v8 = *(_QWORD *)(v16 + 16);
      v9 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      if ( v7[1].m128i_i64[0] )
      {
        v7[1].m128i_i64[1] = 0;
        v44 = v9;
        qfree();
        v9 = _mm_load_si128(&v44);
      }
      v7[1].m128i_i64[0] = v8;
      *(__m128i *)((char *)v7 + 24) = v9;
      v10 = *(_QWORD *)(v16 + 40);
      v11 = _mm_loadu_si128((const __m128i *)(v16 + 48));
      *(_QWORD *)(v16 + 40) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      if ( v7[2].m128i_i64[1] )
      {
        v7[3].m128i_i64[0] = 0;
        v44 = v11;
        qfree();
        v11 = _mm_load_si128(&v44);
      }
      v7[2].m128i_i64[1] = v10;
      v12 = v43.m128i_i64[0];
      v7[3] = v11;
      v7[4].m128i_i64[0] = *(_QWORD *)(v16 + 64);
      v7[4].m128i_i8[8] = *(_BYTE *)(v16 + 72);
      v7[4].m128i_i8[9] = *(_BYTE *)(v16 + 73);
      if ( v13 >= v12 )
        break;
    }
  }
  if ( (v45.m128i_i8[0] & 1) == 0 && (v45.m128i_i64[0] - 2) / 2 == v13 )
  {
    v36 = v13 + 1;
    v37 = 2 * (v13 + 1);
    v38 = a1 + 16 * (v37 + 8 * v36) - 80;
    *(__m128i *)v16 = _mm_loadu_si128((const __m128i *)v38);
    v39 = *(_QWORD *)(v38 + 16);
    v40 = _mm_loadu_si128((const __m128i *)(v38 + 24));
    *(_QWORD *)(v38 + 16) = 0;
    *(_OWORD *)(v38 + 24) = 0;
    if ( *(_QWORD *)(v16 + 16) )
    {
      *(_QWORD *)(v16 + 24) = 0;
      v43 = v40;
      qfree();
      v40 = _mm_load_si128(&v43);
    }
    *(_QWORD *)(v16 + 16) = v39;
    *(__m128i *)(v16 + 24) = v40;
    v41 = *(_QWORD *)(v38 + 40);
    v42 = _mm_loadu_si128((const __m128i *)(v38 + 48));
    *(_QWORD *)(v38 + 40) = 0;
    *(_OWORD *)(v38 + 48) = 0;
    if ( *(_QWORD *)(v16 + 40) )
    {
      *(_QWORD *)(v16 + 48) = 0;
      v43 = v42;
      qfree();
      v42 = _mm_load_si128(&v43);
    }
    *(_QWORD *)(v16 + 40) = v41;
    v13 = v37 - 1;
    *(__m128i *)(v16 + 48) = v42;
    *(_QWORD *)(v16 + 64) = *(_QWORD *)(v38 + 64);
    *(_BYTE *)(v16 + 72) = *(_BYTE *)(v38 + 72);
    *(_BYTE *)(v16 + 73) = *(_BYTE *)(v38 + 73);
    v16 = a1 + 80 * v13;
  }
  v18 = *(_QWORD *)(a4 + 16);
  v19 = (__m128)_mm_loadu_si128((const __m128i *)a4);
  v20 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v21 = _mm_loadu_si128((const __m128i *)(a4 + 48));
  *(_QWORD *)(a4 + 16) = 0;
  v47 = v18;
  v22 = *(_QWORD *)(a4 + 40);
  *(_QWORD *)(a4 + 40) = 0;
  v48 = v22;
  v23 = *(_QWORD *)(a4 + 64);
  *(_OWORD *)(a4 + 24) = 0;
  v49 = v23;
  LOWORD(v23) = *(_WORD *)(a4 + 72);
  *(_OWORD *)(a4 + 48) = 0;
  v24 = (v13 - 1) / 2;
  v50 = v23;
  v46 = v19;
  _mm_storeh_ps((double *)v44.m128i_i64, v19);
  v45 = v20;
  v51[0] = v21;
  if ( v13 > a2 )
  {
    while ( 1 )
    {
      v16 = a1 + 80 * v24;
      if ( v19.m128_u64[0] < *(_QWORD *)v16
        || v19.m128_u64[0] == *(_QWORD *)v16 && *(_QWORD *)(v16 + 8) >= v44.m128i_i64[0] )
      {
        break;
      }
      v31 = (__m128i *)(a1 + 80 * v13);
      *v31 = _mm_loadu_si128((const __m128i *)v16);
      v32 = *(_QWORD *)(v16 + 16);
      v33 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      if ( v31[1].m128i_i64[0] )
      {
        v31[1].m128i_i64[1] = 0;
        v43 = v33;
        qfree();
        v33 = _mm_load_si128(&v43);
      }
      v31[1].m128i_i64[0] = v32;
      *(__m128i *)((char *)v31 + 24) = v33;
      v34 = *(_QWORD *)(v16 + 40);
      v35 = _mm_loadu_si128((const __m128i *)(v16 + 48));
      *(_QWORD *)(v16 + 40) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      if ( v31[2].m128i_i64[1] )
      {
        v31[3].m128i_i64[0] = 0;
        v43 = v35;
        qfree();
        v35 = _mm_load_si128(&v43);
      }
      v31[2].m128i_i64[1] = v34;
      v31[3] = v35;
      v31[4].m128i_i64[0] = *(_QWORD *)(v16 + 64);
      v31[4].m128i_i8[8] = *(_BYTE *)(v16 + 72);
      v31[4].m128i_i8[9] = *(_BYTE *)(v16 + 73);
      v13 = v24;
      if ( a2 >= v24 )
        goto LABEL_21;
      v24 = (v24 - 1) / 2;
    }
    v16 = a1 + 80 * v13;
  }
LABEL_21:
  v25 = *(_QWORD *)(v16 + 16);
  *(__m128i *)v16 = _mm_load_si128((const __m128i *)&v46);
  if ( v25 )
  {
    *(_QWORD *)(v16 + 24) = 0;
    qfree();
  }
  v26 = _mm_load_si128(&v45);
  v27 = *(_QWORD *)(v16 + 40);
  *(_QWORD *)(v16 + 16) = v47;
  *(__m128i *)(v16 + 24) = v26;
  if ( v27 )
  {
    *(_QWORD *)(v16 + 48) = 0;
    qfree();
  }
  si128 = _mm_load_si128(v51);
  *(_QWORD *)(v16 + 40) = v48;
  v29 = v49;
  *(__m128i *)(v16 + 48) = si128;
  *(_QWORD *)(v16 + 64) = v29;
  result = v50;
  *(_WORD *)(v16 + 72) = v50;
  return result;
}

