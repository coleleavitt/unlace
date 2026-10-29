__int64 __fastcall sub_3F7230(__int64 a1, int a2, unsigned int a3, __m128i a4, __m128 a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi

  result = sub_3F7170(a1, a4, a5, (__int64)"read", a2, nullptr, a3, a6);
  if ( *(_WORD *)(a1 + 48) == 126 )
  {
    v8 = *(unsigned __int8 *)(a1 + 69);
    v9 = *(unsigned __int8 *)(a1 + 109);
    if ( (_BYTE)v8 != (_BYTE)v9 )
      return sub_1D6840(a1, v9, v8, a3, a3, 0, a4, a5, a6);
  }
  return result;
}

