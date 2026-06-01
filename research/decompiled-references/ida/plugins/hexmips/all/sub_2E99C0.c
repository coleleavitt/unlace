__int64 __fastcall sub_2E99C0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm2
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rdx
  __m128i si128; // xmm1
  __int64 v11; // rdi
  __m128i v12; // xmm3
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  __m128i v16[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  result = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a1 + 48);
  v13 = v2;
  v8 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 8) = v6;
  v9 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v15 = v9;
    v14 = result;
    v16[0] = si128;
    qfree();
    si128 = _mm_load_si128(v16);
    v9 = v15;
    result = v14;
  }
  *(_QWORD *)(a1 + 16) = v9;
  *(__m128i *)(a1 + 24) = si128;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  v11 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = result;
  if ( v11 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    result = qfree();
  }
  v12 = _mm_load_si128(&v13);
  *(_QWORD *)(a2 + 16) = v3;
  *(_QWORD *)(a2 + 40) = v5;
  *(_DWORD *)(a2 + 48) = v7;
  *(_QWORD *)(a2 + 56) = v8;
  *(__m128i *)(a2 + 24) = v12;
  return result;
}

