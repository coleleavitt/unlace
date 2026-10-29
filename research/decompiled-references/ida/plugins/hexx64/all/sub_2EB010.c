__int64 __fastcall sub_2EB010(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm2
  __int64 v4; // r14
  int v5; // r15d
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // r12
  __int64 v9; // rax
  __m128i si128; // xmm1
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm3
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  __m128i v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a1 + 48);
  v15 = v3;
  *(_DWORD *)(a1 + 8) = v7;
  v9 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v16 = v9;
    v17[0] = si128;
    qfree(v11);
    si128 = _mm_load_si128(v17);
    v9 = v16;
  }
  *(_QWORD *)(a1 + 16) = v9;
  *(__m128i *)(a1 + 24) = si128;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  result = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 48) = result;
  v13 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 8) = v5;
  if ( v13 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    result = qfree(v13);
  }
  v14 = _mm_load_si128(&v15);
  *(_QWORD *)(a2 + 16) = v4;
  *(_QWORD *)(a2 + 40) = v6;
  *(_QWORD *)(a2 + 48) = v8;
  *(__m128i *)(a2 + 24) = v14;
  return result;
}

