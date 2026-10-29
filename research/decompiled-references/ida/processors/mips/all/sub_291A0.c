__int64 __fastcall sub_291A0(__int64 a1)
{
  __int64 result; // rax
  __int16 v2; // dx
  __m128i *v3; // rax

  result = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 888) + 260LL) != 2 )
  {
    v2 = *(_WORD *)(a1 + 40);
    if ( v2 == 116 || v2 == 547 )
    {
      v3 = *(__m128i **)(a1 + 864);
      *v3 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      v3[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
      v3[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
      *(_BYTE *)(a1 + 904) = *(_WORD *)(a1 + 62) == 25;
      return 1;
    }
  }
  return result;
}

