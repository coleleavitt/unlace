unsigned __int64 __fastcall boost::asio::detail::scheduler::capture_current_exception(
        boost::asio::detail::scheduler *this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rax
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  void (__fastcall **v10)(boost::asio::multiple_exceptions *__hidden); // rdx
  __int64 v11; // rax
  _QWORD *exception; // [rsp+0h] [rbp-68h]
  __int64 v13; // [rsp+18h] [rbp-50h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  void (__fastcall **v16)(boost::asio::multiple_exceptions *__hidden); // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v1 = *(_QWORD *)__tls_get_addr();
  if ( v1 )
  {
    while ( this != *(boost::asio::detail::scheduler **)v1 )
    {
      v1 = *(_QWORD *)(v1 + 16);
      if ( !v1 )
        return v18 - __readfsqword(0x28u);
    }
    v2 = *(_QWORD *)(v1 + 8);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 96);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v4 = *(_QWORD *)(v2 + 104);
          *(_DWORD *)(v2 + 96) = 2;
          v14 = v4;
          if ( v4 )
          {
            std::__exception_ptr::exception_ptr::_M_addref((std::__exception_ptr::exception_ptr *)&v14);
            v4 = v14;
          }
          v17 = v4;
          v14 = 0;
          v16 = off_4445E8;
          exception = __cxa_allocate_exception(0x10u);
          __cxa_init_primary_exception();
          v5 = exception;
          v6 = v17;
          *exception = off_4445E8;
          exception[1] = v6;
          if ( v6 )
          {
            std::__exception_ptr::exception_ptr::_M_addref((std::__exception_ptr::exception_ptr *)(exception + 1));
            v5 = exception;
          }
          std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&v13, v5);
          v7 = v13;
          v8 = *(_QWORD *)(v2 + 104);
          v13 = 0;
          v15 = v8;
          *(_QWORD *)(v2 + 104) = v7;
          if ( v8 )
          {
            std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)&v15);
            if ( v13 )
              std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)&v13);
          }
          v16 = off_4445E8;
          if ( v17 )
            std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)&v17);
          std::exception::~exception((std::exception *)&v16);
          if ( v14 )
            std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)&v14);
        }
      }
      else
      {
        *(_DWORD *)(v2 + 96) = 1;
        std::current_exception();
        v10 = v16;
        v16 = nullptr;
        v15 = *(_QWORD *)(v2 + 104);
        v11 = v15;
        *(_QWORD *)(v2 + 104) = v10;
        if ( v11 )
        {
          std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)&v15);
          if ( v16 )
            std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)&v16);
        }
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}

