__int64 __fastcall sub_3CE3C0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 i; // rdx
  __int64 v7; // rsi

  result = sub_3C9230(*(_QWORD *)(a1 + 2016), *(_QWORD *)(a1 + 2016) + 8LL * *(_QWORD *)(a1 + 2024), a2);
  v5 = result;
  for ( i = (v4 - result) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v7 = v5 + 8 * (i >> 1);
      if ( v3 < *(_QWORD *)(*(_QWORD *)v7 + 8LL) )
        break;
      v5 = v7 + 8;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return result;
    }
  }
  return result;
}

