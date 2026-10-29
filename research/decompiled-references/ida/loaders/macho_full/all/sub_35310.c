__int64 __fastcall sub_35310(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 40 * i;
        if ( *(_BYTE *)(v5 + 32) )
        {
          v6 = *(_QWORD *)(v5 + 24);
          if ( v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        }
        if ( *(_QWORD *)v5 )
        {
          *(_QWORD *)(v5 + 8) = 0;
          qfree();
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

