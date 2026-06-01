__int64 __fastcall sub_8280(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int16 v4; // ax
  __m128i v5; // xmm0
  int v6; // eax
  __m128i v7; // xmm0

  result = 0;
  if ( (a3 & 0x8F) == 0 )
  {
    switch ( a2 )
    {
      case 26:
        v4 = 80;
        break;
      case 31:
        v4 = 38;
        break;
      case 10:
        v4 = 1;
        break;
      default:
        return result;
    }
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    *(_WORD *)(a1 + 24) = v4;
    v6 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 28) = 2;
    *(__m128i *)(a1 + 80) = v5;
    v7 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    *(_BYTE *)(a1 + 80) = 1;
    *(_BYTE *)(a1 + 41) = 5;
    *(_BYTE *)(a1 + 45) = 0;
    *(_QWORD *)(a1 + 48) = a3 >> 4;
    *(_DWORD *)(a1 + 112) = v6;
    result = 1;
    *(__m128i *)(a1 + 96) = v7;
  }
  return result;
}

