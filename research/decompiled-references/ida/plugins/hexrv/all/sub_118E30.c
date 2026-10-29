__m128i *__fastcall sub_118E30(__int64 a1, const __m128i *a2, int a3)
{
  __m128i *v4; // rax
  __m128i *result; // rax

  if ( *(_BYTE *)a1 == 2 )
  {
    v4 = *(__m128i **)(a1 + 8);
    *v4 = _mm_loadu_si128(a2);
    v4[1] = _mm_loadu_si128(a2 + 1);
    *(_WORD *)(a1 + 2) = 0;
    *(_DWORD *)(a1 + 4) = a3;
    return nullptr;
  }
  else
  {
    sub_1188E0(a1);
    *(_BYTE *)a1 = 2;
    result = (__m128i *)j__qalloc_or_throw();
    *result = _mm_loadu_si128(a2);
    result[1] = _mm_loadu_si128(a2 + 1);
    *(_QWORD *)(a1 + 8) = result;
    *(_DWORD *)(a1 + 4) = a3;
  }
  return result;
}

