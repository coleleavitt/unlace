__int64 __fastcall boost::system::operator==(int *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r8d
  int v5; // r10d
  __int64 (__fastcall ***v7)(boost::system::detail::system_error_category *__hidden); // rdx
  __int64 (__fastcall ***v8)(boost::system::detail::system_error_category *__hidden); // rcx
  __int64 (__fastcall **v9)(boost::system::detail::system_error_category *__hidden); // rax

  v2 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = 0;
  if ( (v2 == 1) == (v3 == 1) )
  {
    if ( v2 == 1 )
    {
      if ( *(_QWORD *)(a2 + 8) == *((_QWORD *)a1 + 1) )
        LOBYTE(v4) = *a1 == *(_DWORD *)a2;
    }
    else
    {
      v5 = *a1;
      if ( v3 == 1 )
      {
        if ( v5 != *(_DWORD *)a2 + 1000 * (*(_QWORD *)(a2 + 8) % 0x1FFFF7uLL) )
          return v4;
        v7 = &boost::system::detail::interop_cat_holder<void>::instance;
      }
      else
      {
        if ( *(_DWORD *)a2 != v5 )
          return v4;
        if ( v3 )
          v7 = *(__int64 (__fastcall ****)(boost::system::detail::system_error_category *__hidden))(a2 + 8);
        else
          v7 = &boost::system::detail::system_cat_holder<void>::instance;
      }
      if ( v2 )
        v8 = *((__int64 (__fastcall ****)(boost::system::detail::system_error_category *__hidden))a1 + 1);
      else
        v8 = &boost::system::detail::system_cat_holder<void>::instance;
      v9 = v7[1];
      if ( v9 )
        LOBYTE(v4) = v8[1] == v9;
      else
        LOBYTE(v4) = v8 == v7;
    }
  }
  return v4;
}

