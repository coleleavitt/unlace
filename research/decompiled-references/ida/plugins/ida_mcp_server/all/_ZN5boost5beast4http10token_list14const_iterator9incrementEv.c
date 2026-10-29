unsigned __int8 *__fastcall boost::beast::http::token_list::const_iterator::increment(__m128i *this)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v2; // rcx
  bool v3; // zf
  bool v4; // r9
  __m128i v5; // xmm0
  unsigned __int8 v6; // dl
  unsigned __int8 *v7; // rdx
  __int64 v8; // r9
  unsigned __int8 *v9; // r8

  result = *((unsigned __int8 **)this + 2);
  v2 = *((unsigned __int8 **)this + 4);
  this->m128i_i64[0] = 0;
  v3 = *((_QWORD *)this + 3) == (_QWORD)result;
  this->m128i_i64[1] = 0;
  *((_QWORD *)this + 3) = result;
  v4 = !v3;
  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
  while ( 1 )
  {
    if ( v2 == result )
      goto LABEL_6;
    while ( 1 )
    {
      v6 = *result;
      if ( *result != 9 && v6 != 32 )
        break;
      *((_QWORD *)this + 2) = ++result;
      if ( v2 == result )
        goto LABEL_6;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[v6] )
      break;
    if ( v6 != 44 )
      goto LABEL_6;
    ++result;
    v4 = 0;
    *((_QWORD *)this + 2) = result;
  }
  if ( v4 )
  {
LABEL_6:
    *(this + 1) = v5;
    return result;
  }
  v7 = (unsigned __int8 *)(*((_QWORD *)this + 2) + 1LL);
  do
  {
    *((_QWORD *)this + 2) = v7;
    v9 = v7;
    if ( v2 == v7 )
      break;
    v8 = *v7++;
  }
  while ( boost::beast::http::detail::is_token_char(char)::tab[v8] );
  this->m128i_i64[0] = (__int64)result;
  this->m128i_i64[1] = v9 - result;
  return result;
}

