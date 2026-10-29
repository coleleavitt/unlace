unsigned __int64 __fastcall boost::asio::detail::eventfd_select_interrupter::open_descriptors(
        boost::asio::detail::eventfd_select_interrupter *this,
        char a2)
{
  int *v3; // rax
  unsigned int v4; // eax
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int pipedes[2]; // [rsp+18h] [rbp-70h] BYREF
  int v10; // [rsp+20h] [rbp-68h]
  int v11; // [rsp+24h] [rbp-64h]
  __int64 (__fastcall ***v12)(boost::system::detail::system_error_category *__hidden); // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+30h] [rbp-58h]
  _QWORD v14[5]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( a2 )
  {
    v4 = eventfd(0, 526336);
    *(_QWORD *)this = _mm_shuffle_epi32(_mm_cvtsi32_si128(v4), 224).m128i_u64[0];
    if ( v4 != -1 )
      return v15 - __readfsqword(0x28u);
    if ( *__errno_location() == 22 )
    {
      v8 = eventfd(0, 0);
      *(_QWORD *)this = _mm_shuffle_epi32(_mm_cvtsi32_si128(v8), 224).m128i_u64[0];
      if ( v8 != -1 )
      {
        fcntl(v8, 4, 2048);
        fcntl(*(_DWORD *)this, 2, 1);
        if ( *(_DWORD *)this != -1 )
          return v15 - __readfsqword(0x28u);
      }
    }
  }
  else
  {
    *(_QWORD *)this = -1;
  }
  if ( pipe(pipedes) )
  {
    v3 = __errno_location();
    v11 = 0;
    v10 = *v3;
    v13 = 2 - ((v10 == 0) - 1LL);
    v12 = &boost::system::detail::system_cat_holder<void>::instance;
    if ( v10 )
    {
      boost::system::system_error::system_error();
      boost::throw_exception<boost::system::system_error>((std::runtime_error *)v14);
    }
  }
  else
  {
    v6 = pipedes[0];
    *(_DWORD *)this = pipedes[0];
    fcntl(v6, 4, 2048);
    fcntl(*(_DWORD *)this, 2, 1);
    v7 = pipedes[1];
    *((_DWORD *)this + 1) = pipedes[1];
    fcntl(v7, 4, 2048);
    fcntl(*((_DWORD *)this + 1), 2, 1);
  }
  return v15 - __readfsqword(0x28u);
}

