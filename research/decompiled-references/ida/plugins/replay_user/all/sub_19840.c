__int64 __fastcall sub_19840(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v4; // r12d
  size_t v6; // rax
  int v7; // edx
  __int64 v8; // rax
  struct tm tp; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v10; // [rsp+78h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( a2 && (*(_BYTE *)a2 != 48 || *(_BYTE *)(a2 + 1)) )
  {
    if ( (unsigned int)qsscanf() == 6 || (unsigned int)qsscanf() == 3 )
    {
      v6 = strlen((const char *)a2);
      v7 = a3 & 1;
      if ( !v6 || (v4 = 0, v7) && v6 == 1 && *(_BYTE *)a2 == 90 )
      {
        memset(&tp.tm_wday, 0, 32);
        tp.tm_isdst = -1;
        *(_QWORD *)&tp.tm_mon = _mm_add_epi32(
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(0), _mm_cvtsi32_si128(0)),
                                  _mm_loadl_epi64((const __m128i *)&qword_1B148)).m128i_u64[0];
        *(__m128i *)&tp.tm_sec = _mm_unpacklo_epi64(
                                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(0), _mm_cvtsi32_si128(0)),
                                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(0), _mm_cvtsi32_si128(0)));
        if ( v7 )
          v8 = qtimegm();
        else
          v8 = mktime(&tp);
        v4 = 1;
        *a1 = v8 << 32;
      }
    }
    else
    {
      v4 = 0;
      tp.tm_sec = 0;
      if ( (unsigned int)qsscanf() == 3 )
        strlen((const char *)a2);
    }
  }
  else
  {
    *a1 = 0;
    return 1;
  }
  return v4;
}

