// Alternative name is '_ZNSt11_Deque_baseIlSaIlEED1Ev'
void __fastcall std::_Deque_base<long>::~_Deque_base(__int64 a1)
{
  void *v1; // rax
  void **v3; // rbx
  unsigned __int64 v4; // rbp
  void *v5; // rdi

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(void ***)(a1 + 40);
    v4 = *(_QWORD *)(a1 + 72) + 8LL;
    if ( (unsigned __int64)v3 < v4 )
    {
      do
      {
        v5 = *v3++;
        operator delete(v5, 0x200u);
      }
      while ( (unsigned __int64)v3 < v4 );
      v1 = *(void **)a1;
    }
    operator delete(v1, 8LL * *(_QWORD *)(a1 + 8));
  }
}

