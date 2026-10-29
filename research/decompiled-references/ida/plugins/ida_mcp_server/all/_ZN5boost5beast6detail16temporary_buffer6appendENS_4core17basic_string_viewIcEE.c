void *__fastcall boost::beast::detail::temporary_buffer::append(_QWORD *a1, const void *a2, size_t a3)
{
  size_t v5; // r14
  char *v6; // rdi
  void *result; // rax
  unsigned __int64 v8; // r13
  void *v9; // rax
  char *v10; // rax
  _QWORD *v11; // [rsp+8h] [rbp-30h]

  v5 = a1[514];
  if ( a1[513] - v5 < a3 )
  {
    v8 = 2 * (a3 + v5);
    v9 = (void *)operator new[](v8);
    v11 = (_QWORD *)a1[512];
    v10 = (char *)memcpy(v9, v11, v5);
    a1[512] = v10;
    v6 = v10;
    if ( a1 != v11 && v11 )
    {
      operator delete[](v11);
      v6 = (char *)a1[512];
      v5 = a1[514];
    }
    a1[513] = v8;
  }
  else
  {
    v6 = (char *)a1[512];
  }
  result = memcpy(&v6[v5], a2, a3);
  a1[514] += a3;
  return result;
}

