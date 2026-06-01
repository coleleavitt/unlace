__int64 __fastcall sub_51606(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 i; // r12
  _QWORD *v3; // rbx

  if ( *a1 )
  {
    v1 = a1[1];
    for ( i = 0; v1 != i; ++i )
    {
      v3 = (_QWORD *)(*a1 + 80 * i);
      clear_tinfo_t();
      if ( v3[5] )
      {
        v3[6] = 0;
        qfree();
      }
      if ( v3[2] )
      {
        v3[3] = 0;
        qfree();
      }
      cleanup_argloc();
    }
    a1[1] = 0;
    qfree();
  }
  return qfree();
}

