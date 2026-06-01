__int64 __fastcall sub_3B8CD0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __m128i v4; // xmm3
  __int64 v5; // r13
  __m128i si128; // xmm1
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r14
  __m128i v10; // xmm2
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm4
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __m128i v16; // [rsp+10h] [rbp-48h] BYREF
  __m128i v17[3]; // [rsp+20h] [rbp-38h] BYREF

  v17[1].m128i_i64[1] = v2;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  si128 = _mm_loadu_si128((const __m128i *)a1);
  v7 = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v8 = *a2;
  v15 = v4;
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = a2[1];
  v9 = a2[2];
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  a2[2] = 0;
  *(_OWORD *)(a2 + 3) = 0;
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v17[0] = si128;
    v16 = v10;
    qfree(v11);
    si128 = _mm_load_si128(v17);
    v10 = _mm_load_si128(&v16);
  }
  *(_QWORD *)(a1 + 16) = v9;
  *(__m128i *)(a1 + 24) = v10;
  result = *((unsigned int *)a2 + 10);
  *(_DWORD *)(a1 + 40) = result;
  v13 = a2[2];
  *(__m128i *)a2 = si128;
  if ( v13 )
  {
    a2[3] = 0;
    result = qfree(v13);
  }
  v14 = _mm_load_si128(&v15);
  a2[2] = v5;
  *((_DWORD *)a2 + 10) = v7;
  *(__m128i *)(a2 + 3) = v14;
  return result;
}

