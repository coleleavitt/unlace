void __fastcall sub_C2E0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  void *v5; // rdi
  __int64 v6; // rsi

  if ( *((_BYTE *)a1 + 16) )
  {
    v2 = *a1;
    if ( *a1 )
    {
      v3 = v2 + 16LL * *(_QWORD *)(v2 - 8);
      if ( v2 == v3 )
      {
        v6 = 0;
      }
      else
      {
        do
        {
          v4 = v3;
          v5 = *(void **)(v3 - 16);
          v3 -= 16;
          if ( v5 )
            operator delete[](v5);
        }
        while ( *a1 != v3 );
        v6 = 16LL * *(_QWORD *)(v4 - 24);
      }
      operator delete[]((void *)(v3 - 8), v6 + 8);
    }
  }
}

