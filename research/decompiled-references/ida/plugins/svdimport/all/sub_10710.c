__int64 __fastcall sub_10710(__int64 a1)
{
  __int64 result; // rax
  __m128i *v2; // r12
  __int64 v3; // rbx
  __m128i *v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i *v7; // rbx
  const __m128i *v8; // rdi

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    v2 = *(__m128i **)(a1 + 8);
    v3 = 48 * result;
    v4 = &v2[3 * result];
    if ( v2 != v4 )
    {
      v5 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 4);
      if ( v5 )
      {
        _BitScanReverse64(&v6, v5);
        sub_FD10(*(__m128i **)(a1 + 8), v4, 2LL * (int)v6);
        if ( v3 > 768 )
        {
          v7 = v2 + 48;
          sub_F010(v2, v2 + 48);
          do
          {
            v8 = v7;
            v7 += 3;
            result = sub_EF10(v8);
          }
          while ( v4 != v7 );
          return result;
        }
      }
      else
      {
        sub_FD10(*(__m128i **)(a1 + 8), v4, -2);
      }
      return sub_F010(v2, v4);
    }
  }
  return result;
}

