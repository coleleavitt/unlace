void __fastcall sub_20100(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
  void *v6; // rdi
  __int64 v7; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 != -1 && !_InterlockedSub(v1, 1u) )
    {
      v2 = *a1;
      if ( *a1 )
      {
        v3 = *((_QWORD *)v2 + 4);
        if ( v3 )
        {
          v4 = v3 + 144LL * *(_QWORD *)(v3 - 8);
          if ( v3 == v4 )
          {
            v7 = 0;
          }
          else
          {
            do
            {
              v5 = v4;
              v6 = *(void **)(v4 - 16);
              v4 -= 144;
              if ( v6 )
                operator delete[](v6);
            }
            while ( *((_QWORD *)v2 + 4) != v4 );
            v7 = 144LL * *(_QWORD *)(v5 - 152);
          }
          operator delete[]((void *)(v4 - 8), v7 + 8);
        }
        operator delete((void *)v2, 0x28u);
      }
    }
  }
}

