unsigned __int64 __fastcall boost::beast::http::detail::basic_parser_base::parse_chunk_extensions(
        unsigned __int8 **a1,
        unsigned __int8 *a2,
        __m128i *a3)
{
  unsigned __int8 *v4; // rdx
  unsigned __int8 v5; // cl
  unsigned __int8 *v6; // rax
  __int64 v7; // rdx
  unsigned __int8 *v8; // rax
  __int64 v9; // r8
  char v10; // cl
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int8 *v14; // rax
  char v15; // cl
  bool v16; // r8
  unsigned __int8 *v17; // rax
  __int64 v18; // rdx
  unsigned __int8 *v19; // rax
  __int64 v20; // rcx
  unsigned __int8 *v21; // rdx
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h]
  __m128i v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-38h]
  __m128i v26; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-18h]
  unsigned __int64 v28; // [rsp+58h] [rbp-10h]

  v28 = __readfsqword(0x28u);
  v4 = *a1;
LABEL_2:
  if ( a2 == v4 )
  {
    boost::beast::http::make_error_code();
    v12 = v25;
    v26 = _mm_load_si128(&v24);
    if ( v25 > 1 )
      v12 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_chunk_extensions(char const*&,char const*,boost::system::error_code &)::loc_bb_
          | v25 & 1;
    goto LABEL_23;
  }
  v5 = *v4;
  if ( *v4 == 32 || v5 == 9 )
  {
    v14 = v4 + 1;
    while ( 1 )
    {
      *a1 = v14;
      v4 = v14;
      if ( v14 == a2 )
        break;
      while ( 1 )
      {
        v15 = *v14++;
        if ( v15 == 32 )
          break;
        if ( v15 != 9 )
        {
          if ( v15 == 59 )
            goto LABEL_6;
          boost::beast::http::make_error_code();
          v12 = v25;
          v26 = _mm_load_si128(&v24);
          if ( v25 > 1 )
            v12 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_chunk_extensions(char const*&,char const*,boost::system::error_code &)::loc_bb_
                | v25 & 1;
          goto LABEL_23;
        }
        *a1 = v14;
        v4 = v14;
        if ( v14 == a2 )
          goto LABEL_29;
      }
    }
LABEL_29:
    boost::beast::http::make_error_code();
    v12 = v25;
    v26 = _mm_load_si128(&v24);
    if ( v25 > 1 )
      v12 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_chunk_extensions(char const*&,char const*,boost::system::error_code &)::loc_bb_
          | v25 & 1;
    goto LABEL_23;
  }
  if ( v5 == 59 )
  {
LABEL_6:
    v6 = v4 + 1;
    *a1 = v4 + 1;
    if ( v4 + 1 == a2 )
    {
LABEL_21:
      boost::beast::http::make_error_code();
      v12 = v25;
      v26 = _mm_load_si128(&v24);
      if ( v25 > 1 )
        v12 = (unsigned __int64)boost::beast::http::detail::basic_parser_base::parse_chunk_extensions(char const*&,char const*,boost::system::error_code &)::loc_bb_
            | v25 & 1;
LABEL_23:
      v13 = _mm_load_si128(&v26);
      v27 = v12;
      a3[1].m128i_i64[0] = v12;
      *a3 = v13;
      return v28 - __readfsqword(0x28u);
    }
    while ( 1 )
    {
      v7 = *v6;
      if ( (_BYTE)v7 != 32 && (_BYTE)v7 != 9 )
        break;
      *a1 = ++v6;
      if ( v6 == a2 )
        goto LABEL_21;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[v7] )
    {
      v8 = v6 + 1;
      while ( 1 )
      {
        *a1 = v8;
        v4 = v8;
        if ( a2 == v8 )
          break;
        v9 = *v8++;
        v10 = v9;
        if ( !boost::beast::http::detail::is_token_char(char)::tab[v9] )
        {
          v16 = (_BYTE)v9 == 9 || (_BYTE)v9 == 32;
          if ( v16 )
          {
            while ( 1 )
            {
              *a1 = v8;
              v4 = v8;
              if ( a2 == v8 )
                break;
              v10 = *v8++;
              v16 = v10 != 9 && v10 != 32;
              if ( v16 )
                goto LABEL_32;
            }
          }
          else
          {
LABEL_32:
            if ( v10 == 59 )
              goto LABEL_6;
            if ( v10 == 61 )
            {
              v17 = v4 + 1;
              *a1 = v4 + 1;
              if ( v4 + 1 != a2 )
              {
                while ( 1 )
                {
                  v18 = *v17;
                  if ( (_BYTE)v18 != 32 && (_BYTE)v18 != 9 )
                    break;
                  *a1 = ++v17;
                  if ( v17 == a2 )
                    goto LABEL_15;
                }
                if ( (_BYTE)v18 == 34 )
                {
                  while ( 1 )
                  {
                    v21 = v17++;
                    *a1 = v17;
                    if ( v17 == a2 )
                      break;
                    if ( *v17 == 34 )
                    {
                      v4 = v21 + 2;
                      *a1 = v4;
                      goto LABEL_2;
                    }
                    if ( *v17 == 92 )
                    {
                      v17 = v21 + 2;
                      *a1 = v21 + 2;
                      if ( v21 + 2 == a2 )
                        goto LABEL_15;
                    }
                  }
                }
                else if ( boost::beast::http::detail::is_token_char(char)::tab[v18] )
                {
                  v19 = v17 + 1;
                  while ( 1 )
                  {
                    *a1 = v19;
                    v4 = v19;
                    if ( a2 == v19 )
                      break;
                    v20 = *v19++;
                    if ( !boost::beast::http::detail::is_token_char(char)::tab[v20] )
                      goto LABEL_2;
                  }
                }
              }
            }
            else if ( !v16 )
            {
              return v28 - __readfsqword(0x28u);
            }
          }
          break;
        }
      }
    }
LABEL_15:
    boost::beast::http::make_error_code();
    *a3 = _mm_loadu_si128(&v22);
    a3[1].m128i_i64[0] = v23;
  }
  return v28 - __readfsqword(0x28u);
}

