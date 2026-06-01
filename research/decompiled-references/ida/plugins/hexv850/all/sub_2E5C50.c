__int64 __fastcall sub_2E5C50(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm2
  __int64 v3; // r14
  int v4; // r15d
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // rax
  __m128i si128; // xmm1
  __int64 result; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm3
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  __m128i v15[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a1 + 48);
  v13 = v2;
  *(_DWORD *)(a1 + 8) = v6;
  v8 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v14 = v8;
    v15[0] = si128;
    qfree();
    si128 = _mm_load_si128(v15);
    v8 = v14;
  }
  *(_QWORD *)(a1 + 16) = v8;
  *(__m128i *)(a1 + 24) = si128;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  result = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 48) = result;
  v11 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 8) = v4;
  if ( v11 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    result = qfree();
  }
  v12 = _mm_load_si128(&v13);
  *(_QWORD *)(a2 + 16) = v3;
  *(_QWORD *)(a2 + 40) = v5;
  *(_QWORD *)(a2 + 48) = v7;
  *(__m128i *)(a2 + 24) = v12;
  return result;
}

