__int64 __fastcall sub_8620(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __m128i *v5; // rax
  __int16 v7; // dx

  v1 = *(_WORD *)(a1 + 40);
  v2 = 0;
  if ( v1 == 35 )
  {
    if ( *(_BYTE *)(a1 + 57) == 3 && !*(_BYTE *)(a1 + 88) )
    {
      v7 = *(_WORD *)(a1 + 62);
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v7;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
      return 1;
    }
  }
  else if ( v1 == 9 && *(_BYTE *)(a1 + 57) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 376);
    *(_DWORD *)v4 |= 0x200u;
    *(_QWORD *)(v4 + 56) = v3 + 4;
    v5 = *(__m128i **)(a1 + 864);
    *v5 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v5[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
    v5[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 513) = 1;
    return 1;
  }
  return v2;
}

