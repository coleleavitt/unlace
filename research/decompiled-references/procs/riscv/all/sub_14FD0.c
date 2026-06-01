__int64 __fastcall sub_14FD0(__int64 a1)
{
  __int16 v1; // ax
  __m128i *v3; // rax
  __int16 v4; // cx
  __int16 v5; // ax

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 != 141 )
  {
    if ( v1 == 4
      && *(_BYTE *)(a1 + 57) == 1
      && !*(_WORD *)(a1 + 62)
      && *(_BYTE *)(a1 + 97) == 4
      && !*(_QWORD *)(a1 + 112) )
    {
      v4 = *(_WORD *)(a1 + 102);
      v5 = *(_WORD *)(a1 + 50) & 4;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v4;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v5 == 0 ? 2 : 7;
      return 1;
    }
    return 0;
  }
  if ( *(_BYTE *)(a1 + 57) != 1 )
    return 0;
  v3 = *(__m128i **)(a1 + 864);
  *v3 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v3[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v3[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
  return 1;
}
