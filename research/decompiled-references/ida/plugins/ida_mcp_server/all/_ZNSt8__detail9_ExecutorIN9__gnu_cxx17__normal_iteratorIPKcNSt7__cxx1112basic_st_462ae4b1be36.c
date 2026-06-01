// Alternative name is '_ZNSt8__detail9_ExecutorIN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESaINS5_9sub_matchISB_EEENS5_12regex_traitsIcEELb1EED2Ev'
void __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::~_Executor(
        __int64 a1)
{
  void *v2; // rdi
  __int64 v3; // [rsp+0h] [rbp-10h]

  v2 = *(void **)(a1 + 72);
  if ( v2 )
  {
    v3 = a1;
    operator delete(v2, *(_QWORD *)(a1 + 88) - (_QWORD)v2);
    if ( *(_QWORD *)v3 )
      operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) - *(_QWORD *)v3);
  }
  else if ( *(_QWORD *)a1 )
  {
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
  }
}

