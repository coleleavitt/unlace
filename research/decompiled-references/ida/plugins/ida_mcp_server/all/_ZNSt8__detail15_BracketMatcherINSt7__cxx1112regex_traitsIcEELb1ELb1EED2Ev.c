// Alternative name is '_ZNSt8__detail15_BracketMatcherINSt7__cxx1112regex_traitsIcEELb1ELb1EED1Ev'
void __fastcall std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::~_BracketMatcher(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 88) - (_QWORD)v2);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 != v4 )
  {
    do
    {
      v5 = *(void **)(v4 + 32);
      if ( v5 != (void *)(v4 + 48) )
        operator delete(v5, *(_QWORD *)(v4 + 48) + 1LL);
      if ( *(_QWORD *)v4 != v4 + 16 )
        operator delete(*(void **)v4, *(_QWORD *)(v4 + 16) + 1LL);
      v4 += 64;
    }
    while ( v3 != v4 );
    v4 = *(_QWORD *)(a1 + 48);
  }
  if ( v4 )
    operator delete((void *)v4, *(_QWORD *)(a1 + 64) - v4);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v6 != v7 )
  {
    do
    {
      if ( *(_QWORD *)v7 != v7 + 16 )
        operator delete(*(void **)v7, *(_QWORD *)(v7 + 16) + 1LL);
      v7 += 32;
    }
    while ( v6 != v7 );
    v7 = *(_QWORD *)(a1 + 24);
  }
  if ( v7 )
    operator delete((void *)v7, *(_QWORD *)(a1 + 40) - v7);
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
}

