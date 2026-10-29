ssize_t __fastcall boost::asio::detail::socket_ops::sync_send(
        unsigned int fd,
        char a2,
        struct iovec *a3,
        int a4,
        int a5,
        char a6,
        __m128i *a7)
{
  int v8; // r8d
  size_t v9; // r14
  ssize_t result; // rax
  int *v11; // rax
  int v12; // edx
  int *v13; // r13
  __m128i v14; // xmm0
  unsigned int v15; // eax
  __m128i v16; // xmm0
  int flags; // [rsp+Ch] [rbp-BCh]
  __m128i v18; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-A8h]
  struct msghdr message; // [rsp+30h] [rbp-98h] BYREF
  __m128i v21; // [rsp+70h] [rbp-58h] BYREF
  __int64 v22; // [rsp+80h] [rbp-48h]
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( fd == -1 )
  {
    boost::asio::error::make_error_code();
    *a7 = _mm_loadu_si128(&v18);
    a7[1].m128i_i64[0] = v19;
    return 0;
  }
  else
  {
    if ( a6 && (a2 & 0x10) != 0 )
    {
      a7[1].m128i_i64[0] = 0;
      *a7 = 0;
      return 0;
    }
    v8 = a5 | 0x4000;
    v9 = a4;
    flags = v8;
    if ( (a2 & 1) == 0 )
    {
      while ( 1 )
      {
        message.msg_iov = a3;
        message.msg_iovlen = v9;
        *(_OWORD *)&message.msg_name = 0;
        memset(&message.msg_control, 0, 24);
        result = sendmsg(fd, &message, flags);
        if ( result >= 0 )
          goto LABEL_5;
        v11 = __errno_location();
        v12 = *v11;
        v13 = v11;
        v21.m128i_i64[0] = (unsigned int)*v11;
        v21.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
        v14 = _mm_load_si128(&v21);
        v22 = 2 - ((v12 == 0) - 1LL);
        a7[1].m128i_i64[0] = v22;
        *a7 = v14;
        if ( v12 != 11 )
          return 0;
        message.msg_name = (void *)(fd | 0x400000000LL);
        if ( poll((struct pollfd *)&message, 1u, -1) < 0 )
        {
          v15 = *v13;
          v21.m128i_i64[0] = (unsigned int)*v13;
          v21.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
          goto LABEL_11;
        }
        a7[1].m128i_i64[0] = 0;
        *a7 = 0;
      }
    }
    message.msg_iov = a3;
    message.msg_iovlen = a4;
    *(_OWORD *)&message.msg_name = 0;
    memset(&message.msg_control, 0, 24);
    result = sendmsg(fd, &message, v8);
    if ( result >= 0 )
    {
LABEL_5:
      a7[1].m128i_i64[0] = 0;
      *a7 = 0;
      return result;
    }
    v15 = *__errno_location();
    v21.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
    v21.m128i_i64[0] = v15;
LABEL_11:
    v16 = _mm_load_si128(&v21);
    v22 = 2 - ((v15 == 0) - 1LL);
    a7[1].m128i_i64[0] = v22;
    *a7 = v16;
    return 0;
  }
}

