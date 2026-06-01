__int64 __fastcall sub_19800(__int64 a1, __int64 *a2, __m128i a3, double a4, double a5, __m128 a6)
{
  __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r15

  result = *a2;
  for ( i = *a2 + 4; a2[1] >= i; result = sub_CB10((__int64)"bad relative offset at %a\n", *(double *)a3.m128i_i64) )
  {
    while ( 1 )
    {
      result = is_loaded(i - 4);
      if ( !(_BYTE)result )
        return result;
      result = get_dword(i - 4);
      if ( (_DWORD)result )
        break;
LABEL_8:
      i += 4LL;
      if ( a2[1] < i )
        return result;
    }
    v9 = (int)result + i - 4;
    if ( (unsigned __int8)is_loaded(v9) )
    {
      v8 = getseg(v9);
      if ( v8 )
      {
        if ( !(unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v8 + 184)) )
        {
          if ( (*(_BYTE *)(a1 + 240) & 4) == 0 || (result = sub_DDD0(i - 4, *(double *)a3.m128i_i64), (_BYTE)result) )
            result = (__int64)sub_19100(a1, v9, a3, a4, a5, a6);
          goto LABEL_8;
        }
      }
    }
    i += 4LL;
  }
  return result;
}

