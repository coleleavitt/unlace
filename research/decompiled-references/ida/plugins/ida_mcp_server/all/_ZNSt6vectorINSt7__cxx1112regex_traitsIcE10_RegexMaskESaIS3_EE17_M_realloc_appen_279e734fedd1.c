void __fastcall std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::_M_realloc_append<std::regex_traits<char>::_RegexMask const&>(
        __int64 a1,
        _DWORD *a2)
{
  char *v2; // rbx
  char *v3; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rdx
  char *v11; // rax
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // [rsp+8h] [rbp-40h]

  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = (__int64)&v2[-*(_QWORD *)a1];
  v5 = v4 >> 2;
  if ( v4 >> 2 == 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v7 = v5 + v6;
  if ( v7 > 0x1FFFFFFFFFFFFFFFLL )
    v7 = 0x1FFFFFFFFFFFFFFFLL;
  v8 = 4 * v7;
  v9 = operator new(v8);
  *(_DWORD *)(v9 + v4) = *a2;
  if ( v2 == v3 )
  {
    v13 = v9;
  }
  else
  {
    v10 = v9;
    v11 = v3;
    do
    {
      v12 = *(_DWORD *)v11;
      v11 += 4;
      v10 += 4;
      *(_DWORD *)(v10 - 4) = v12;
    }
    while ( v2 != v11 );
    v13 = v9 + v2 - v3;
  }
  v14 = v13 + 4;
  if ( v3 )
  {
    v15 = v9;
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
    v9 = v15;
  }
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v8 + v9;
}

