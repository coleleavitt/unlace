__int64 __fastcall sub_22650(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx

  v4 = *a2;
  if ( *a2 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + (i << 6));
        if ( v7[5] )
        {
          v7[6] = 0;
          qfree();
        }
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        v4 = *a2;
      }
    }
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( (unsigned __int8)sub_22070(a2, a3) )
    return *((unsigned int *)a2 + 2);
  else
    return 0xFFFFFFFFLL;
}

