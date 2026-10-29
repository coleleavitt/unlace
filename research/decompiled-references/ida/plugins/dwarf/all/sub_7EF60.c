unsigned __int64 __fastcall sub_7EF60(unsigned __int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // r8
  unsigned __int64 v6; // rdi
  __int64 v7; // r10
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // r11
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int8 v13; // al

  result = a1;
  v4 = a2;
  if ( a2 )
  {
    v5 = (char *)a2 + a3;
    v6 = (unsigned __int64)a2 + a3 - 8;
    if ( v6 >= (unsigned __int64)a2 )
    {
      v7 = 0;
      do
      {
        v8 = *a2++ ^ v7;
        v9 = qword_CABE0[(unsigned __int8)(v8 >> 35)]
           ^ __ROR8__(
               qword_CABE0[(unsigned __int8)(v8 >> 28)]
             ^ __ROR8__(
                 qword_CABE0[(unsigned __int8)(v8 >> 21)]
               ^ __ROR8__(
                   qword_CABE0[(unsigned __int8)(v8 >> 14)]
                 ^ __ROR8__(
                     qword_CABE0[(unsigned __int8)(v8 >> 7)] ^ __ROR8__(qword_CABE0[(unsigned __int8)v8] ^ result, 11),
                     11),
                   11),
                 11),
               11);
        v10 = v8;
        v8 >>= 49;
        v11 = qword_CABE0[(unsigned __int8)__ROR2__(v8, 5)]
            ^ __ROR8__(
                qword_CABE0[(unsigned __int8)v8]
              ^ __ROR8__(qword_CABE0[(unsigned __int8)(v10 >> 42)] ^ __ROR8__(v9, 11), 11),
                11);
        LOWORD(v10) = __ROL2__(v8, 6);
        v7 = (unsigned __int16)v10;
        result = __ROR8__(qword_CABE0[(unsigned __int8)v10 & 0xDF] ^ __ROR8__(v11, 11), 11);
      }
      while ( v6 >= (unsigned __int64)a2 );
      v4 += ((a3 - 8) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    if ( v4 < v5 )
    {
      do
      {
        v12 = result;
        v13 = *v4++ ^ result;
        result = qword_CABE0[v13] ^ (v12 >> 8);
      }
      while ( v5 != v4 );
    }
  }
  return result;
}

