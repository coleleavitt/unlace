__m128i *__fastcall sub_F0590(__int64 a1, __int64 a2, int a3, __int32 a4)
{
  __int16 v4; // bp
  __int64 v5; // rbx
  __int64 v6; // rdi
  __m128i *result; // rax
  __int64 v8; // rax

  v4 = a3;
  v5 = a2;
  if ( *(_BYTE *)a2 == 0x8A )
  {
    result = (__m128i *)sub_F04A0((__int64 *)a1, 178, 0, 0);
    if ( result )
    {
      result[2].m128i_i32[3] = a4;
      result[3].m128i_i16[0] = v4;
      result[1].m128i_i64[0] = a2;
    }
  }
  else if ( *(_BYTE *)a2 == 0xB1
         && (v8 = *(_QWORD *)(a2 + 32) + 24LL * a3, v5 = *(_QWORD *)(v8 + 8), *(_BYTE *)(a1 + 292) > 1u) )
  {
    *(_QWORD *)(v8 + 8) = 0;
    return (__m128i *)v5;
  }
  else
  {
    v6 = *(_QWORD *)a1;
    if ( v5 )
      return sub_DD6E0(v6, v5, 0, nullptr);
    else
      return nullptr;
  }
  return result;
}
