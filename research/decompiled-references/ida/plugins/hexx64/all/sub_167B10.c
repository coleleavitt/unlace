unsigned __int8 *__fastcall sub_167B10(
        unsigned __int64 *a1,
        __int64 a2,
        signed int a3,
        unsigned __int8 *a4,
        __m128i a5,
        __m128 a6)
{
  unsigned __int8 *result; // rax
  bool v9; // zf
  _DWORD *v10; // rdx

  result = (unsigned __int8 *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 36) < a3 )
  {
    if ( *(_BYTE *)(a2 + 32) == 4 && (v10 = *(_DWORD **)(a2 + 40), *v10 == 11) && a3 <= v10[9] )
    {
      return (unsigned __int8 *)(v10 + 8);
    }
    else
    {
      sub_125180(a4, (unsigned __int8 *)(a2 + 32));
      v9 = sub_131780((__int64)a4, a1, a3, 1u, 0, a5, a6) == 0;
      result = nullptr;
      if ( !v9 )
        return a4;
    }
  }
  return result;
}

