void __fastcall sub_42640(__int64 a1)
{
  void **v2; // rax
  void **v3; // rbx
  void **v4; // r12
  void *v5; // rdi
  __int64 v6; // rsi

  if ( *(_BYTE *)(a1 + 16) )
  {
    v2 = *(void ***)a1;
    if ( *(_QWORD *)a1 )
    {
      v3 = &v2[4 * (_QWORD)*(v2 - 1)];
      if ( v2 == v3 )
      {
        v6 = 0;
      }
      else
      {
        do
        {
          v4 = v3;
          v5 = *(v3 - 2);
          v3 -= 4;
          if ( v5 )
            operator delete[](v5);
          if ( *v3 )
            operator delete[](*v3);
        }
        while ( *(void ***)a1 != v3 );
        v6 = 32LL * (_QWORD)*(v4 - 5);
      }
      operator delete[](v3 - 1, v6 + 8);
    }
  }
}

