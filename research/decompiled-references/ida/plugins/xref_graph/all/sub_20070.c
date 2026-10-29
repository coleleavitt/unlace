void __fastcall sub_20070(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbp
  __int64 v2; // rbx
  void *v3; // rdi

  if ( *a1 )
  {
    if ( !_InterlockedSub(*a1, 1u) )
    {
      v1 = *a1;
      if ( *a1 )
      {
        v2 = *((_QWORD *)v1 + 3);
        while ( v2 )
        {
          sub_1F160(*(_QWORD **)(v2 + 24));
          v3 = (void *)v2;
          v2 = *(_QWORD *)(v2 + 16);
          operator delete(v3, 0x38u);
        }
        operator delete((void *)v1, 0x38u);
      }
    }
  }
}

