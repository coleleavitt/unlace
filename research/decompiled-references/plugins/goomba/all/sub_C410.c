void __fastcall sub_C410(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi

  v2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)a1 = &off_4D698;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 24 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = *(_QWORD *)(a1 + 56);
        }
      }
    }
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v2);
  }
  sub_C390(*(void ***)(a1 + 24));
}
