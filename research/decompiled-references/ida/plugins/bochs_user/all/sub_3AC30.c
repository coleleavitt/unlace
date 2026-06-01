__int64 __fastcall sub_3AC30(_QWORD *a1)
{
  void *v2; // rbx
  __int64 (__fastcall *v3)(void *); // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  _QWORD **v6; // rbp
  __int64 result; // rax
  _QWORD *v8; // rbx

  v2 = (void *)a1[1];
  *a1 = &off_71C68;
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v2 + 32LL);
    if ( v3 == sub_3AD30 )
    {
      sub_3AC30(v2);
      operator delete(v2, 0x50u);
    }
    else
    {
      v3(v2);
    }
  }
  v4 = a1[8];
  v5 = a1[7];
  v6 = (_QWORD **)a1[7];
  result = 8LL * a1[8];
  if ( result )
  {
    do
    {
      v8 = *v6;
      if ( *v6 )
      {
        if ( v8[9] )
        {
          v8[10] = 0;
          qfree();
        }
        if ( v8[6] )
        {
          v8[7] = 0;
          qfree();
        }
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
        }
        operator delete(v8, 0x78u);
        v5 = a1[7];
        v4 = a1[8];
      }
      ++v6;
      result = v5 + 8 * v4;
    }
    while ( v6 != (_QWORD **)result );
  }
  if ( v5 )
  {
    a1[8] = 0;
    return qfree();
  }
  return result;
}

