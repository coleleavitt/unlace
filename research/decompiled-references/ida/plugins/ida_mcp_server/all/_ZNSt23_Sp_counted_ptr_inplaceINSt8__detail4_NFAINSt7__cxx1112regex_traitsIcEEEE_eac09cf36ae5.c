void __fastcall std::_Sp_counted_ptr_inplace<std::__detail::_NFA<std::regex_traits<char>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::_M_dispose(
        _QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  void (__fastcall *v4)(char *, char *, __int64); // rax
  char *v5; // rdi
  void *v6; // rdi

  std::locale::~locale((std::locale *)(a1 + 12));
  v2 = (_QWORD *)a1[10];
  v3 = (_QWORD *)a1[9];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        if ( *(_DWORD *)v3 == 11 )
        {
          v4 = (void (__fastcall *)(char *, char *, __int64))v3[4];
          if ( v4 )
            break;
        }
        v3 += 6;
        if ( v2 == v3 )
          goto LABEL_7;
      }
      v5 = (char *)(v3 + 2);
      v3 += 6;
      v4(v5, v5, 3);
    }
    while ( v2 != v3 );
LABEL_7:
    v3 = (_QWORD *)a1[9];
  }
  if ( v3 )
    operator delete(v3, a1[11] - (_QWORD)v3);
  v6 = (void *)a1[2];
  if ( v6 )
    operator delete(v6, a1[4] - (_QWORD)v6);
}

