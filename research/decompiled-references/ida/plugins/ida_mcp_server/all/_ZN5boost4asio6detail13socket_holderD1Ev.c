// Alternative name is '_ZN5boost4asio6detail13socket_holderD2Ev'
void __fastcall boost::asio::detail::socket_holder::~socket_holder(boost::asio::detail::socket_holder *this)
{
  int v1; // ebx
  __m128i v2; // xmm0
  char v3; // al
  __m128i v4; // xmm0
  __int32 v5; // esi
  int v6; // eax
  __m128i v7; // [rsp+0h] [rbp-B8h] BYREF
  int v8; // [rsp+1Ch] [rbp-9Ch] BYREF
  __m128i v9; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+30h] [rbp-88h]
  __m128i v11; // [rsp+40h] [rbp-78h]
  __int64 v12; // [rsp+50h] [rbp-68h]
  __m128i v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+70h] [rbp-48h]
  __m128i v15; // [rsp+80h] [rbp-38h] BYREF
  __int64 v16; // [rsp+90h] [rbp-28h]
  unsigned __int64 v17; // [rsp+98h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this != -1 )
  {
    if ( close(v1) )
    {
      boost::asio::detail::socket_ops::get_last_error(&v9);
      v15.m128i_i64[0] = 11;
      v15.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
      v2 = _mm_load_si128(&v15);
      v16 = 3;
      v13 = v2;
      v7 = v2;
      v14 = 3;
      v3 = boost::system::operator==();
      v4 = _mm_load_si128(&v7);
      if ( v3 || (v11 = v4, v12 = 3, (unsigned __int8)boost::system::operator==()) )
      {
        v8 = 0;
        if ( ioctl(v1, 0x5421u, &v8, *(double *)v4.m128i_i64) < 0 )
        {
          boost::asio::detail::socket_ops::get_last_error(&v9);
          v5 = v9.m128i_i32[0];
          if ( v10 == 1 )
            v5 = 1000 * (v9.m128i_i64[1] % 0x1FFFF7uLL) + v9.m128i_i32[0];
          if ( v5 == 25 )
          {
            v6 = fcntl(v1, 3, 0);
            if ( v6 >= 0 )
            {
              BYTE1(v6) &= ~8u;
              fcntl(v1, 4, (unsigned int)v6);
            }
          }
        }
        close(v1);
      }
    }
  }
}

