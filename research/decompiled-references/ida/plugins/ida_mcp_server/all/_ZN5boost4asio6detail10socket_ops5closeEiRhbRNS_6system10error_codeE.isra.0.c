unsigned __int64 __fastcall boost::asio::detail::socket_ops::close(int fd, char *a2, char a3, __m128i *a4)
{
  __m128i v6; // xmm0
  char v7; // al
  __m128i v8; // xmm0
  int v9; // eax
  char v10; // cl
  __int32 v11; // eax
  __m128i v12; // [rsp+0h] [rbp-98h] BYREF
  __int64 optval; // [rsp+18h] [rbp-80h] BYREF
  __m128i v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  __m128i v16; // [rsp+40h] [rbp-58h]
  __int64 v17; // [rsp+50h] [rbp-48h]
  __m128i v18; // [rsp+60h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp-28h]
  unsigned __int64 v20; // [rsp+78h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( fd != -1 )
  {
    if ( a3 && (*a2 & 8) != 0 )
    {
      *a2 |= 8u;
      optval = 0;
      setsockopt(fd, 1, 13, &optval, 8u);
      if ( !close(fd) )
        goto LABEL_5;
    }
    else if ( !close(fd) )
    {
LABEL_5:
      a4[1].m128i_i64[0] = 0;
      *a4 = 0;
      return v20 - __readfsqword(0x28u);
    }
    boost::asio::detail::socket_ops::get_last_error(a4);
    v18.m128i_i64[0] = 11;
    v18.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
    v6 = _mm_load_si128(&v18);
    v19 = 3;
    v16 = v6;
    v12 = v6;
    v17 = 3;
    v7 = boost::system::operator==();
    v8 = _mm_load_si128(&v12);
    if ( v7 || (v14 = v8, v15 = 3, (unsigned __int8)boost::system::operator==()) )
    {
      LODWORD(optval) = 0;
      if ( (*a2 & 0x40) != 0 )
        goto LABEL_9;
      if ( ioctl(fd, 0x5421u, &optval, *(double *)v8.m128i_i64) >= 0 )
      {
        v8.m128i_i64[0] = 0;
        a4[1].m128i_i64[0] = 0;
        *a4 = 0;
      }
      else
      {
        boost::asio::detail::socket_ops::get_last_error(a4);
      }
      v10 = *a2;
      if ( (*a2 & 0x40) != 0
        || (a4[1].m128i_i64[0] == 1
          ? (v11 = a4->m128i_i32[0] + 1000 * (a4->m128i_i64[1] % 0x1FFFF7uLL))
          : (v11 = a4->m128i_i32[0]),
            v11 == 25) )
      {
LABEL_9:
        v9 = fcntl(fd, 3, 0, *(double *)v8.m128i_i64);
        if ( v9 >= 0 )
        {
          BYTE1(v9) &= ~8u;
          fcntl(fd, 4, (unsigned int)v9);
        }
        v10 = *a2;
      }
      *a2 = v10 & 0xFC;
      if ( close(fd) )
      {
        boost::asio::detail::socket_ops::get_last_error(a4);
        return v20 - __readfsqword(0x28u);
      }
      goto LABEL_5;
    }
  }
  return v20 - __readfsqword(0x28u);
}

