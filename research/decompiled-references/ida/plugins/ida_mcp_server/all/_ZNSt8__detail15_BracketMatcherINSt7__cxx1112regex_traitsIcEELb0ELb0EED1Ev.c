// Alternative name is '_ZNSt8__detail15_BracketMatcherINSt7__cxx1112regex_traitsIcEELb0ELb0EED2Ev'
void __fastcall std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::~_BracketMatcher(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 88) - (_QWORD)v2);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 64) - (_QWORD)v3);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v4 != v5 )
  {
    do
    {
      if ( *(_QWORD *)v5 != v5 + 16 )
        operator delete(*(void **)v5, *(_QWORD *)(v5 + 16) + 1LL);
      v5 += 32;
    }
    while ( v4 != v5 );
    v5 = *(_QWORD *)(a1 + 24);
  }
  if ( v5 )
    operator delete((void *)v5, *(_QWORD *)(a1 + 40) - v5);
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
}

