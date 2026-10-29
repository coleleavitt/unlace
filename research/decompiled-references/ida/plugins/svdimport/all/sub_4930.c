void __fastcall sub_4930(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 v4; // rax

  v1 = a1[1];
  *a1 = &unk_1BD30;
  if ( v1 )
  {
    v2 = a1[2];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = v1 + 48 * i;
        if ( *(_QWORD *)(v4 + 24) )
        {
          *(_QWORD *)(v4 + 32) = 0;
          qfree();
          v1 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}

