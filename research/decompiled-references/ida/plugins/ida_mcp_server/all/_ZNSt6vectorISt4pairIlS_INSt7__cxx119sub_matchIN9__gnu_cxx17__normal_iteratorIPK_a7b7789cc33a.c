// Alternative name is '_ZNSt6vectorISt4pairIlS_INSt7__cxx119sub_matchIN9__gnu_cxx17__normal_iteratorIPKcNS1_12basic_stringIcSt11char_traitsIcESaIcEEEEEEESaISD_EEESaISG_EED1Ev'
void __fastcall std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::~vector(
        __int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  void *v4; // rdi
  __int64 v5; // rsi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      while ( 1 )
      {
        v4 = (void *)v3[1];
        if ( !v4 )
          break;
        v5 = v3[3];
        v3 += 4;
        operator delete(v4, v5 - (_QWORD)v4);
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(_QWORD **)a1;
  }
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
}

