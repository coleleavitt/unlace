// Alternative name is '_ZNSt8__detail9_ExecutorIN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaINS5_9sub_matchISB_EEENS5_12regex_traitsIcEELb0EED2Ev'
void __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::~_Executor(
        __int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  void *v5; // rdi
  __int64 v6; // rsi
  void *v7; // rdi

  v2 = *(void **)(a1 + 120);
  if ( v2 )
    operator delete[](v2);
  v3 = *(_QWORD **)(a1 + 104);
  v4 = *(_QWORD **)(a1 + 96);
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v5 = (void *)v4[1];
        if ( !v5 )
          break;
        v6 = v4[3];
        v4 += 4;
        operator delete(v5, v6 - (_QWORD)v5);
        if ( v3 == v4 )
          goto LABEL_6;
      }
      v4 += 4;
    }
    while ( v3 != v4 );
LABEL_6:
    v4 = *(_QWORD **)(a1 + 96);
  }
  if ( v4 )
    operator delete(v4, *(_QWORD *)(a1 + 112) - (_QWORD)v4);
  v7 = *(void **)(a1 + 72);
  if ( v7 )
    operator delete(v7, *(_QWORD *)(a1 + 88) - (_QWORD)v7);
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
}

