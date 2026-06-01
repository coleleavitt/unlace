__int64 __fastcall sub_27720(_QWORD *a1)
{
  void (__fastcall *hexdsp)(__int64, _QWORD *); // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  _QWORD *v11; // rbx
  __int64 result; // rax

  hexdsp = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp();
  hexdsp(391, a1);
  v3 = a1[91];
  if ( v3 )
  {
    v4 = a1[92];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 40 * i;
        if ( *(_QWORD *)(v6 + 16) )
        {
          *(_QWORD *)(v6 + 24) = 0;
          qfree();
          v3 = a1[91];
        }
      }
    }
    a1[92] = 0;
    qfree();
  }
  if ( a1[62] )
  {
    a1[63] = 0;
    qfree();
  }
  if ( a1[57] )
  {
    a1[58] = 0;
    qfree();
  }
  v7 = a1[54];
  if ( v7 )
  {
    v8 = a1[55];
    if ( v8 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v7 + v9);
        clear_tinfo_t();
        if ( *(_QWORD *)(v7 + v9 + 56) )
        {
          v11[8] = 0;
          qfree();
        }
        if ( v11[4] )
        {
          v11[5] = 0;
          qfree();
        }
        ++v10;
        v9 += 104;
        cleanup_argloc();
        v7 = a1[54];
      }
      while ( v8 != v10 );
    }
    a1[55] = 0;
    qfree();
  }
  if ( a1[51] )
  {
    a1[52] = 0;
    qfree();
  }
  if ( a1[47] )
  {
    a1[48] = 0;
    qfree();
  }
  qfree();
  if ( a1[42] )
  {
    a1[43] = 0;
    qfree();
  }
  clear_tinfo_t();
  qfree();
  if ( a1[34] )
  {
    a1[35] = 0;
    qfree();
  }
  result = qfree();
  if ( a1[29] )
  {
    a1[30] = 0;
    result = qfree();
  }
  if ( a1[26] )
  {
    a1[27] = 0;
    result = qfree();
  }
  if ( a1[23] )
  {
    a1[24] = 0;
    result = qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}
