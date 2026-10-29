__int64 __fastcall sub_79B0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int16 v3; // ax
  __m128i v4; // xmm0
  int v5; // eax
  __m128i v6; // xmm0
  __int64 result; // rax

  if ( a2 == 0xC0 )
  {
    v3 = 62;
    goto LABEL_6;
  }
  if ( a2 <= 0xC0u )
  {
    if ( a2 == 0xA0 )
    {
      v3 = 38;
    }
    else if ( a2 == 0xA1 )
    {
      v3 = 80;
    }
    else
    {
      v3 = 1;
      if ( a2 != 0x80 )
        return 0;
    }
    goto LABEL_6;
  }
  if ( a2 == 0xD0 )
  {
    v3 = 85;
    goto LABEL_6;
  }
  result = 0;
  if ( a2 == 0xE0 )
  {
    v3 = 4;
LABEL_6:
    v4 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    *(_WORD *)(a1 + 24) = v3;
    *(_DWORD *)(a1 + 28) = 1;
    v5 = *(_DWORD *)(a1 + 72);
    *(__m128i *)(a1 + 80) = v4;
    v6 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    *(_BYTE *)(a1 + 80) = 1;
    *(_BYTE *)(a1 + 41) = 5;
    *(_BYTE *)(a1 + 45) = 0;
    *(_QWORD *)(a1 + 48) = a3;
    *(_DWORD *)(a1 + 112) = v5;
    result = 1;
    *(__m128i *)(a1 + 96) = v6;
  }
  return result;
}

