__int64 __fastcall sub_2DC9F0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __int64 v5; // r15
  int v6; // r13d
  __int64 v7; // r12
  char v8; // r14
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __int64 result; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  __m128i v16; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v17; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-A0h]
  __m128i v19[3]; // [rsp+38h] [rbp-90h] BYREF
  __m128i v20[6]; // [rsp+68h] [rbp-60h] BYREF

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0;
  v19[0] = v2;
  v6 = *(_DWORD *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 32) = 0;
  v8 = *(_BYTE *)(a1 + 48);
  v20[0] = v3;
  v16 = v4;
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v9 = *(_QWORD *)(a2 + 24);
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  *(_QWORD *)(a2 + 24) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  if ( *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = 0;
    v18 = v9;
    v17 = v10;
    qfree();
    v9 = v18;
    v10 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(a1 + 24) = v9;
  *(__m128i *)(a1 + 32) = v10;
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 48);
  *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
  v11 = _mm_loadu_si128(v19);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  result = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 80) = result;
  v13 = *(_QWORD *)(a2 + 24);
  *(__m128i *)(a2 + 8) = v11;
  if ( v13 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    result = qfree();
  }
  v14 = _mm_load_si128(&v16);
  v15 = _mm_loadu_si128(v20);
  *(_QWORD *)(a2 + 24) = v5;
  *(_BYTE *)(a2 + 48) = v8;
  *(_DWORD *)(a2 + 72) = v6;
  *(_QWORD *)(a2 + 80) = v7;
  *(__m128i *)(a2 + 32) = v14;
  *(__m128i *)(a2 + 56) = v15;
  return result;
}

