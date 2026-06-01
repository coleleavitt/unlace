__int64 __fastcall sub_9180(__int64 a1, __int64 *a2)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  const char *v6; // rsi
  __m128i *v7; // rsi
  __m128i si128; // xmm0
  __int64 v9; // rax

  v3 = sub_8FD0(a1);
  if ( (_BYTE)v3 )
  {
    if ( (debug & 0x20) != 0 )
    {
      if ( *(_QWORD *)(a1 + 8) )
        sub_7AF0((__int64)"IDAPython: found preloaded Python library: \"%s\"\n", *(const char **)a1);
      else
        sub_7AF0((__int64)"IDAPython: found preloaded Python library: \"%s\"\n", src);
    }
    return 1;
  }
  v5 = v3;
  if ( (unsigned __int8)reg_str_get() && (unsigned __int8)sub_8F00(a1) )
  {
    if ( (debug & 0x20) != 0 )
    {
      v6 = src;
      if ( *(_QWORD *)(a1 + 8) )
        v6 = *(const char **)a1;
      sub_7AF0((__int64)"IDAPython: loaded registry-specified Python library: \"%s\"\n", v6);
    }
    return 1;
  }
  if ( a2 )
  {
    v7 = (__m128i *)*a2;
    if ( (unsigned __int64)a2[2] <= 0x74 )
    {
      v9 = qvector_reserve();
      *a2 = v9;
      v7 = (__m128i *)v9;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D8A0);
    a2[1] = 117;
    v7[7].m128i_i32[0] = 778857569;
    *v7 = si128;
    v7[1] = _mm_load_si128((const __m128i *)&xmmword_1D8B0);
    v7[2] = _mm_load_si128((const __m128i *)&xmmword_1D8C0);
    v7[3] = _mm_load_si128((const __m128i *)&xmmword_1D8D0);
    v7[4] = _mm_load_si128((const __m128i *)&xmmword_1D8E0);
    v7[5] = _mm_load_si128((const __m128i *)&xmmword_1D8F0);
    v7[6] = _mm_load_si128((const __m128i *)&xmmword_1D900);
    *(_BYTE *)(*a2 + 116) = 0;
  }
  sub_7F30(
    (__int64)"WARNING: %s\n",
    "Python 3 is not configured (Python3TargetDLL value is not set).\n"
    "Please run idapyswitch to select a Python 3 install.");
  return v5;
}

