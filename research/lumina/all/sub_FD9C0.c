__int64 __fastcall sub_FD9C0(__int64 a1, int a2, const __m128i **a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  const __m128i *v8; // rdi
  __int64 result; // rax
  __int64 m128i_i64; // rsi
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r15
  int v17; // r13d
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]

  v8 = *a3;
  result = (*a3)[1].m128i_i16[2] & 0x3F;
  if ( byte_1BAD40[result] != 5 )
  {
    result = (unsigned int)a2;
    v20 = a1;
    if ( a2 > 1 )
    {
      m128i_i64 = (__int64)a3[1];
      if ( byte_1BAD40[*(_WORD *)(m128i_i64 + 20) & 0x3F] == 5 )
        return result;
      v12 = *(_QWORD *)(a1 + 24);
      v19 = (unsigned int)(result - 2);
      v13 = 0;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v15 = *(int *)(a1 + 32);
      v16 = 0;
      v18 = *(_QWORD *)(*(_QWORD *)(v12 + 136) + 24 * v15 - 8);
      while ( 1 )
      {
        v17 = v16 + 1;
        if ( (sub_EE420((__int64)v8, m128i_i64, v18, a7) ^ -(v14 != 0)) < 0 )
          v17 = v13;
        if ( v16 == v19 )
          break;
        m128i_i64 = (__int64)a3[v16++ + 2]->m128i_i64;
        result = *(_WORD *)(m128i_i64 + 20) & 0x3F;
        if ( byte_1BAD40[result] == 5 )
          return result;
        v13 = v17;
        v8 = a3[v17];
      }
      a4 = v17;
      v8 = a3[v17];
    }
    return sub_FD650(v20, v8, (__int64)a3, a4, a5, a6);
  }
  return result;
}
