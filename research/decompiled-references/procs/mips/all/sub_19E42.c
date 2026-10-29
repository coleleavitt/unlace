__int64 __fastcall sub_19E42(__int64 *a1)
{
  __int64 v2; // r12
  __int64 i; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax

  if ( *a1 )
  {
    v2 = a1[1];
    for ( i = 0; ; ++i )
    {
      v4 = *a1;
      if ( v2 == i )
        break;
      v5 = 24 * i;
      cleanup_argloc(v5 + v4);
    }
    a1[1] = 0;
    qfree(v4);
  }
  return qfree(a1);
}
