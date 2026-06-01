__int64 __fastcall sub_191CF0(unsigned __int64 *a1, unsigned __int8 *a2, __int64 a3, char a4, __m128i a5)
{
  __int64 result; // rax

  if ( a4 )
    result = sub_127290((int *)a2, a1, a3, 0, *(double *)a5.m128i_i64);
  else
    result = sub_1274C0(a2, a1, a3, 0, a5);
  if ( !(_BYTE)result )
  {
    if ( !under_debugger )
      sub_383060(0xCCABu, *(double *)a5.m128i_i64);
    BUG();
  }
  return result;
}

