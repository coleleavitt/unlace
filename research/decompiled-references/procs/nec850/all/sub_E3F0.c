__int64 __fastcall sub_E3F0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v8; // rax
  int v9; // ecx
  unsigned __int16 v10; // di
  __int16 v11; // si
  __int16 v12; // ax

  if ( *(_WORD *)(a2 + 24) != 38 )
    return 0;
  if ( *(_BYTE *)(a2 + 41) != 5
    || *(_QWORD *)(a3 + 16) == -1
    && (int)decode_insn(a3, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), a4) <= 0 )
  {
    return 0;
  }
  v8 = 0;
  v9 = *(unsigned __int16 *)(a3 + 24);
  if ( v9 != dword_23600[0] )
  {
    while ( ++v8 != 11 )
    {
      if ( v9 == dword_23600[v8] )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( (unsigned int)(v8 - 4) > 3 && *(_BYTE *)(a3 + 41) == 1 )
  {
    v10 = *(_WORD *)(a3 + 46);
    v11 = *(_WORD *)(a2 + 86);
    if ( v10 == v11 )
    {
      if ( v10 == *(_WORD *)(a3 + 86) )
      {
        if ( (int)v8 <= 3 )
        {
LABEL_15:
          *(_WORD *)(a2 + 24) = dword_23600[(int)v8 + 4];
          *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a3 + 40));
          *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a3 + 56));
          *(_DWORD *)(a2 + 112) = *(_DWORD *)(a3 + 72);
          *(__m128i *)(a2 + 120) = _mm_loadu_si128((const __m128i *)(a3 + 80));
          *(__m128i *)(a2 + 136) = _mm_loadu_si128((const __m128i *)(a3 + 96));
          *(_DWORD *)(a2 + 152) = *(_DWORD *)(a3 + 112);
          v12 = *(_WORD *)(a2 + 26) + *(_WORD *)(a3 + 26);
LABEL_16:
          *(_WORD *)(a2 + 26) = v12;
          return 1;
        }
      }
      else if ( !(unsigned __int8)sub_DE40(a1, a3, v10, -1) )
      {
        *(_WORD *)(a2 + 24) = *(_WORD *)(a3 + 24);
        *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a3 + 80));
        *(__m128i *)(a2 + 96) = _mm_loadu_si128((const __m128i *)(a3 + 96));
        *(_DWORD *)(a2 + 112) = *(_DWORD *)(a3 + 112);
        v12 = *(_WORD *)(a2 + 26) + *(_WORD *)(a3 + 26);
        goto LABEL_16;
      }
    }
    else if ( (int)v8 <= 3 && v11 == *(_WORD *)(a3 + 86) )
    {
      goto LABEL_15;
    }
  }
  return 0;
}
