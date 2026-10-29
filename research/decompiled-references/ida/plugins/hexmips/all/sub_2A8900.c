__int64 __fastcall sub_2A8900(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  int v3; // edx
  int v4; // eax
  int v5; // edx
  __int64 result; // rax

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v3 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 8) = v2.m128i_i64[0];
  *(_DWORD *)(a2 + 16) = v2.m128i_i32[2];
  v4 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v3;
  v5 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 24) = v4;
  result = *(unsigned int *)(a1 + 48);
  *(_DWORD *)(a1 + 48) = v5;
  *(_DWORD *)(a2 + 48) = result;
  return result;
}

