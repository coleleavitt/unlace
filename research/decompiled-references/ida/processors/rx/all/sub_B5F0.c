__int64 __fastcall sub_B5F0(__int64 a1)
{
  __int64 result; // rax
  __m128i *v2; // rax

  result = 0;
  if ( *(_WORD *)(a1 + 40) == 61 && *(_BYTE *)(a1 + 57) == 1 )
  {
    v2 = *(__m128i **)(a1 + 864);
    *v2 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v2[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
    v2[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
    return 1;
  }
  return result;
}

