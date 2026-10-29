__int64 __fastcall sub_323C0(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // edx
  const __m128i *v3; // rax
  __m128i *v4; // rdx

  v1 = *(_WORD *)(a1 + 40);
  v2 = 0;
  if ( v1 != 293 )
  {
    if ( v1 != 292 || *(_DWORD *)(a1 + 900) != 280 )
      return v2;
LABEL_4:
    v3 = (const __m128i *)(a1 + 56);
    if ( *(_BYTE *)(a1 + 97) )
      v3 = (const __m128i *)(a1 + 96);
    v4 = *(__m128i **)(a1 + 864);
    *v4 = _mm_loadu_si128(v3);
    v4[1] = _mm_loadu_si128(v3 + 1);
    v4[2].m128i_i32[0] = v3[2].m128i_i32[0];
    return 1;
  }
  if ( *(_DWORD *)(a1 + 900) == 281 )
    goto LABEL_4;
  return 0;
}

