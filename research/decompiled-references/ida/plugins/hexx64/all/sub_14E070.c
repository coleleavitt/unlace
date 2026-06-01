__int64 __fastcall sub_14E070(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128i a7,
        __m128 a8)
{
  __int64 result; // rax
  _DWORD *v11; // rdx

  result = 0;
  if ( *(_BYTE *)a4 == 4 )
  {
    v11 = *(_DWORD **)(a4 + 8);
    if ( a6 == *v11 )
    {
      result = sub_12EA80(a1, a2, a3, a5, a3, (__int64)(v11 + 8), a7, a8, 0);
      if ( !(_BYTE)result )
        return sub_12EA80(a1, a2, a3, a5, a3, *(_QWORD *)(a4 + 8) + 48LL, a7, a8, 0);
    }
  }
  return result;
}

