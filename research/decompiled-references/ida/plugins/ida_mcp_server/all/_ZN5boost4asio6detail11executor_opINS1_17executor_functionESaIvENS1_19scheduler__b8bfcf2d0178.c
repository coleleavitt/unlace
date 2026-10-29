void __fastcall boost::asio::detail::executor_op<boost::asio::detail::executor_function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset(
        __int64 a1)
{
  __int64 v1; // rax
  void (__fastcall **v2)(_QWORD, _QWORD); // rax
  _BYTE *v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(void (__fastcall ***)(_QWORD, _QWORD))(v1 + 24);
    if ( v2 )
      (*v2)(v2, 0);
    *(_QWORD *)(a1 + 16) = 0;
  }
  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 )
  {
    v4 = *(_QWORD *)__tls_get_addr();
    if ( !v4 )
      goto LABEL_10;
    v5 = *(_QWORD **)(v4 + 8);
    if ( !v5 )
      goto LABEL_10;
    if ( *v5 )
    {
      v6 = 1;
      if ( v5[1] )
      {
LABEL_10:
        free(v3);
LABEL_11:
        *(_QWORD *)(a1 + 8) = 0;
        return;
      }
    }
    else
    {
      v6 = 0;
    }
    *v3 = v3[40];
    v5[v6] = v3;
    goto LABEL_11;
  }
}

