__int64 __fastcall sub_20840(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _OWORD *v4; // rsi
  __m128i si128; // xmm0
  __int64 v6; // rax

  result = *(unsigned int *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 13 )
      return (__int64)sub_15ED0(a2);
  }
  else
  {
    v4 = (_OWORD *)*a2;
    if ( (unsigned __int64)a2[2] <= 0x10 )
    {
      v6 = qvector_reserve();
      *a2 = v6;
      v4 = (_OWORD *)v6;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_82360);
    a2[1] = 17;
    *v4 = si128;
    result = *a2;
    *(_BYTE *)(*a2 + 16) = 0;
  }
  return result;
}

