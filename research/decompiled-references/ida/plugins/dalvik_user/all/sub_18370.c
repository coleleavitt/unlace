__int64 __fastcall sub_18370(__int64 *a1)
{
  __int64 *v1; // r12
  __int64 v2; // rcx
  __int64 v3; // rsi
  __m128i v4; // xmm4
  __m128i v5; // xmm5
  __m128i v6; // xmm6
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rdi
  __m128i si128; // xmm7
  __int64 v14; // rdi
  __m128i v15; // xmm4
  __int64 v16; // rdi
  __m128i v17; // xmm5
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rdi
  __int64 v22; // r13
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // r13
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // r13
  __m128i v29; // xmm0
  int v30; // edx
  __m128i v31; // xmm0
  int v32; // edx
  __m128i v33; // [rsp+0h] [rbp-118h] BYREF
  __int64 v34; // [rsp+18h] [rbp-100h]
  __int64 v35; // [rsp+20h] [rbp-F8h]
  char v36; // [rsp+2Eh] [rbp-EAh]
  unsigned __int8 v37; // [rsp+2Fh] [rbp-E9h]
  __m128i v38; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v39; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v40[7]; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v41[5]; // [rsp+C0h] [rbp-58h] BYREF

  v1 = a1;
  v2 = a1[7];
  v3 = a1[10];
  a1[7] = 0;
  v4 = _mm_loadu_si128((const __m128i *)a1 + 1);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  *((_OWORD *)a1 + 1) = 0;
  v6 = _mm_loadu_si128((const __m128i *)a1 + 4);
  v7 = a1[1];
  v35 = v2;
  v8 = a1[4];
  *(_OWORD *)(a1 + 5) = 0;
  v9 = *a1;
  *((_OWORD *)a1 + 4) = 0;
  a1[1] = 0;
  a1[4] = 0;
  v40[0] = v4;
  v39 = v5;
  v38 = v6;
  v34 = v3;
  LOBYTE(v3) = *((_BYTE *)a1 + 112);
  v36 = *((_BYTE *)a1 + 88);
  v10 = HIDWORD(v34);
  v37 = v3;
  v41[0] = _mm_loadu_si128((const __m128i *)a1 + 6);
  while ( 1 )
  {
    v11 = *(v1 - 15);
    if ( v11 == v9 )
      break;
    if ( v11 <= v9 )
      goto LABEL_4;
LABEL_12:
    v21 = v1[1];
    v22 = *(v1 - 14);
    *v1 = v11;
    *(v1 - 14) = 0;
    v23 = _mm_loadu_si128((const __m128i *)(v1 - 13));
    *(_OWORD *)(v1 - 13) = 0;
    if ( v21 )
    {
      v1[2] = 0;
      v33 = v23;
      qfree();
      v23 = _mm_load_si128(&v33);
    }
    v24 = v1[4];
    v1[1] = v22;
    *((__m128i *)v1 + 1) = v23;
    v25 = *(v1 - 11);
    v26 = _mm_loadu_si128((const __m128i *)v1 - 5);
    *(v1 - 11) = 0;
    *((_OWORD *)v1 - 5) = 0;
    if ( v24 )
    {
      v1[5] = 0;
      v33 = v26;
      qfree();
      v26 = _mm_load_si128(&v33);
    }
    v27 = v1[7];
    v1[4] = v25;
    *(__m128i *)(v1 + 5) = v26;
    v28 = *(v1 - 8);
    v29 = _mm_loadu_si128((const __m128i *)(v1 - 7));
    *(v1 - 8) = 0;
    *(_OWORD *)(v1 - 7) = 0;
    if ( v27 )
    {
      v1[8] = 0;
      v33 = v29;
      qfree();
      v29 = _mm_load_si128(&v33);
    }
    v30 = *((_DWORD *)v1 - 10);
    *((__m128i *)v1 + 4) = v29;
    v31 = _mm_loadu_si128((const __m128i *)(v1 - 3));
    v1 -= 15;
    v1[22] = v28;
    *((_DWORD *)v1 + 50) = v30;
    v32 = *((_DWORD *)v1 + 21);
    *(__m128i *)(v1 + 27) = v31;
    *((_DWORD *)v1 + 51) = v32;
    *((_BYTE *)v1 + 208) = *((_BYTE *)v1 + 88);
    *((_BYTE *)v1 + 232) = *((_BYTE *)v1 + 112);
  }
  if ( *((_DWORD *)v1 - 9) > v10 )
    goto LABEL_12;
LABEL_4:
  v12 = v1[1];
  *v1 = v9;
  if ( v12 )
  {
    v1[2] = 0;
    qfree();
  }
  si128 = _mm_load_si128(v40);
  v14 = v1[4];
  v1[1] = v7;
  *((__m128i *)v1 + 1) = si128;
  if ( v14 )
  {
    v1[5] = 0;
    qfree();
  }
  v15 = _mm_load_si128(&v39);
  v16 = v1[7];
  v1[4] = v8;
  *(__m128i *)(v1 + 5) = v15;
  if ( v16 )
  {
    v1[8] = 0;
    qfree();
  }
  v17 = _mm_load_si128(&v38);
  v18 = _mm_load_si128(v41);
  v1[7] = v35;
  v19 = v34;
  *((__m128i *)v1 + 4) = v17;
  v1[10] = v19;
  LOBYTE(v19) = v36;
  *((__m128i *)v1 + 6) = v18;
  *((_BYTE *)v1 + 88) = v19;
  result = v37;
  *((_BYTE *)v1 + 112) = v37;
  return result;
}

