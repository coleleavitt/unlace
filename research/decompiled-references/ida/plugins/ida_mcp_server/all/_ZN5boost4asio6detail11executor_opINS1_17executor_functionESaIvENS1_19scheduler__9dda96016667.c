unsigned __int64 __fastcall boost::asio::detail::executor_op<boost::asio::detail::executor_function,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete(
        __int64 a1,
        _BYTE *a2)
{
  void (__fastcall **v2)(_QWORD, __int64); // rbx
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  char v7; // [rsp+Fh] [rbp-39h] BYREF
  char *v8; // [rsp+10h] [rbp-38h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v2 = *((void (__fastcall ***)(_QWORD, __int64))a2 + 3);
  v9 = __readfsqword(0x28u);
  v8 = &v7;
  v3 = *(_QWORD *)__tls_get_addr();
  if ( !v3 )
    goto LABEL_5;
  v4 = *(_QWORD **)(v3 + 8);
  if ( !v4 )
    goto LABEL_5;
  if ( *v4 )
  {
    v5 = 1;
    if ( v4[1] )
    {
LABEL_5:
      free(a2);
      goto LABEL_6;
    }
  }
  else
  {
    v5 = 0;
  }
  *a2 = a2[40];
  v4[v5] = a2;
LABEL_6:
  if ( a1 )
  {
    if ( v2 )
      (*v2)(v2, 1);
  }
  else if ( v2 )
  {
    (*v2)(v2, 0);
  }
  return v9 - __readfsqword(0x28u);
}

