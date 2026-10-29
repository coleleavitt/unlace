__int64 sub_1BF210()
{
  __int64 v0; // rax
  __int64 v1; // r12
  __int64 i; // rbx
  _QWORD *v4; // [rsp+8h] [rbp-60h]

  v0 = qalloc_or_throw();
  *(_QWORD *)v0 = 0;
  *(_OWORD *)(v0 + 8) = 0;
  v4 = (_QWORD *)v0;
  for_all_arglocs();
  if ( v4 )
  {
    if ( *v4 )
    {
      v1 = v4[1];
      if ( v1 )
      {
        for ( i = 0; i != v1; ++i )
          cleanup_argloc();
      }
      v4[1] = 0;
      qfree();
    }
    qfree();
  }
  return 0;
}

