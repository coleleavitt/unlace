__int64 __fastcall sub_48970(__int64 a1)
{
  __int64 i; // r12
  __int64 v2; // rax
  __m128i v3; // xmm3
  __m128i v4; // xmm4
  __m128i v5; // xmm5
  unsigned __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  __m128i v11; // xmm6
  __int64 v12; // rdi
  __int64 v13; // rax
  __m128i v14; // xmm7
  __int64 result; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r13
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __m128i v24; // [rsp+0h] [rbp-88h] BYREF
  __m128i v25; // [rsp+10h] [rbp-78h] BYREF
  __m128i v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h]
  unsigned __int16 v28; // [rsp+3Eh] [rbp-4Ah]
  __m128i v29; // [rsp+40h] [rbp-48h] BYREF

  i = a1;
  v2 = *(_QWORD *)(a1 + 64);
  v3 = _mm_loadu_si128((const __m128i *)a1);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  *(_OWORD *)(a1 + 24) = 0;
  v27 = v2;
  v6 = *(_QWORD *)(a1 - 80);
  LOWORD(v2) = *(_WORD *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 16);
  v29 = v3;
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v28 = v2;
  v26 = v4;
  v25 = v5;
  *(_OWORD *)(a1 + 48) = 0;
  if ( v6 >= v3.m128i_i64[0] )
  {
    v9 = v29.m128i_u64[1];
    for ( i = a1 - 80; v3.m128i_i64[0] < v6 || v9 < *(_QWORD *)(i + 8); i -= 80 )
    {
      v16 = _mm_loadu_si128((const __m128i *)i);
      v17 = *(_QWORD *)(i + 96);
      v18 = *(_QWORD *)(i + 16);
      *(_QWORD *)(i + 16) = 0;
      *(__m128i *)(i + 80) = v16;
      v19 = _mm_loadu_si128((const __m128i *)(i + 24));
      *(_OWORD *)(i + 24) = 0;
      if ( v17 )
      {
        *(_QWORD *)(i + 104) = 0;
        v24 = v19;
        qfree();
        v19 = _mm_load_si128(&v24);
      }
      v20 = *(_QWORD *)(i + 120);
      *(_QWORD *)(i + 96) = v18;
      *(__m128i *)(i + 104) = v19;
      v21 = *(_QWORD *)(i + 40);
      v22 = _mm_loadu_si128((const __m128i *)(i + 48));
      *(_QWORD *)(i + 40) = 0;
      *(_OWORD *)(i + 48) = 0;
      if ( v20 )
      {
        *(_QWORD *)(i + 128) = 0;
        v24 = v22;
        qfree();
        v22 = _mm_load_si128(&v24);
      }
      v23 = *(_QWORD *)(i + 64);
      *(_QWORD *)(i + 120) = v21;
      *(__m128i *)(i + 128) = v22;
      *(_QWORD *)(i + 144) = v23;
      *(_BYTE *)(i + 152) = *(_BYTE *)(i + 72);
      *(_BYTE *)(i + 153) = *(_BYTE *)(i + 73);
      v6 = *(_QWORD *)(i - 80);
      if ( v6 < v3.m128i_i64[0] )
        goto LABEL_6;
    }
    i += 80;
LABEL_6:
    v10 = *(_QWORD *)(i + 16);
    *(__m128i *)i = _mm_load_si128(&v29);
    if ( v10 )
    {
      *(_QWORD *)(i + 24) = 0;
      qfree();
    }
  }
  v11 = _mm_load_si128(&v26);
  v12 = *(_QWORD *)(i + 40);
  *(_QWORD *)(i + 16) = v7;
  *(__m128i *)(i + 24) = v11;
  if ( v12 )
  {
    *(_QWORD *)(i + 48) = 0;
    qfree();
  }
  v13 = v27;
  v14 = _mm_load_si128(&v25);
  *(_QWORD *)(i + 40) = v8;
  *(_QWORD *)(i + 64) = v13;
  result = v28;
  *(__m128i *)(i + 48) = v14;
  *(_WORD *)(i + 72) = result;
  return result;
}

