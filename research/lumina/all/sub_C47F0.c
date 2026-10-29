__int64 __fastcall sub_C47F0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r9
  __int16 *v6; // rdx
  __int64 v7; // rsi
  __int16 *v8; // r9
  int v9; // ecx

  v1 = -1;
  result = (unsigned int)*(unsigned __int16 *)(a1 + 96) - 1;
  if ( *(_WORD *)(a1 + 96) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 2LL * (int)result;
    v5 = v3 + v4 - 2;
    v6 = (__int16 *)(v3 + v4);
    v7 = 0;
    v8 = (__int16 *)(v5 - 2LL * (unsigned int)result);
    do
    {
      v9 = *v6;
      result = *v6;
      if ( v9 >= 0 )
      {
        result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 16 * result;
        if ( (*(_BYTE *)(result + 14) & 0x20) == 0 )
        {
          result = v7;
          v7 |= 1LL << v9;
          if ( v9 >= 63 )
            v7 = result;
        }
      }
      --v6;
    }
    while ( v6 != v8 );
    v1 = ~v7;
  }
  *(_QWORD *)(a1 + 104) = v1;
  return result;
}
