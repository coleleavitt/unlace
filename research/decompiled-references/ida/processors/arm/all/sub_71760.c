__int64 __fastcall sub_71760(const __m128i *a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = sub_71380(a1, a2, a3);
  if ( !(_BYTE)result )
  {
    v4 = a1[54].m128i_i64[0];
    if ( *(_BYTE *)(v4 + 41) )
    {
      if ( a1[2].m128i_i16[4] != 278 && (a1[3].m128i_i8[0] & 0xF) == ((*(_QWORD *)(v4 + 48) >> 2) & 0xF) )
        *(_QWORD *)(v4 + 48) |= 0x3CuLL;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
