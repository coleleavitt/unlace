__int64 __fastcall sub_58EB0(__int64 *a1)
{
  __int64 module_data; // rax
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // rax

  module_data = get_module_data();
  v2 = *a1;
  v3 = module_data;
  v4 = a1[2];
  if ( *(_WORD *)(*(_QWORD *)(v3 + 24) + 4LL) == 1 )
  {
    if ( v4 <= 0x46 )
    {
      v8 = qvector_reserve();
      *a1 = v8;
      v2 = v8;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_77F90);
    a1[1] = 71;
    *(__m128i *)v2 = si128;
    *(__m128i *)(v2 + 16) = _mm_load_si128((const __m128i *)&xmmword_77FA0);
    *(__m128i *)(v2 + 32) = _mm_load_si128((const __m128i *)&xmmword_77FB0);
    *(__m128i *)(v2 + 48) = _mm_load_si128((const __m128i *)&xmmword_77FC0);
    *(_QWORD *)(v2 + 62) = 0xC02464646467830LL;
    result = *a1;
    *(_BYTE *)(*a1 + 70) = 0;
  }
  else
  {
    if ( v4 <= 9 )
    {
      v6 = qvector_reserve();
      *a1 = v6;
      v2 = v6;
    }
    a1[1] = 10;
    *(_QWORD *)v2 = 0x261684073252001LL;
    *(_BYTE *)(v2 + 8) = 32;
    result = *a1;
    *(_BYTE *)(*a1 + 9) = 0;
  }
  return result;
}

