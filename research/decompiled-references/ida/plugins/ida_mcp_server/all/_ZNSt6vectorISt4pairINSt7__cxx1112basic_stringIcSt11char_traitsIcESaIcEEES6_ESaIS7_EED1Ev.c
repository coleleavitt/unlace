// Alternative name is '_ZNSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_ESaIS7_EED2Ev'
void __fastcall std::vector<std::pair<std::string,std::string>>::~vector(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 != *a1 )
  {
    do
    {
      v4 = *(void **)(v3 + 32);
      if ( v4 != (void *)(v3 + 48) )
        operator delete(v4, *(_QWORD *)(v3 + 48) + 1LL);
      if ( *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
      v3 += 64;
    }
    while ( v2 != v3 );
    v3 = *a1;
  }
  if ( v3 )
    operator delete((void *)v3, a1[2] - v3);
}

