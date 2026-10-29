__int64 *__fastcall sub_30840(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = operator new(0x28u);
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v4 = 15LL * *(int *)(a2 + 40);
  v5 = **(_QWORD **)(a2 + 32);
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)v2 = &off_7D600;
  *a1 = v2;
  *(_QWORD *)(v2 + 32) = v5 + 8 * v4;
  *(__m128i *)(v2 + 16) = v3;
  return a1;
}

