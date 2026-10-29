__int64 __fastcall sub_2ED3E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __m128i v3; // xmm0
  int v4; // r8d
  __int64 v5; // r10
  int v6; // esi
  __int64 v7; // r9
  __m128i v8; // xmm0
  __int64 v9; // rcx
  __int32 v10; // [rsp+8h] [rbp-38h]

  result = a2;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = v3.m128i_i64[0];
  v10 = v3.m128i_i32[2];
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  *(_QWORD *)(a1 + 8) = v5;
  v9 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(result + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(result + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(result + 32);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(result + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(result + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(result + 56);
  *(_DWORD *)(result + 16) = v10;
  *(_QWORD *)(result + 8) = v7;
  *(_DWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 40) = v8.m128i_i32[2];
  *(_DWORD *)(result + 48) = v6;
  *(_QWORD *)(result + 56) = v9;
  *(_QWORD *)(result + 32) = v8.m128i_i64[0];
  return result;
}

