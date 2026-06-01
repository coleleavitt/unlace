__int64 __fastcall sub_E29C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = v2 + 80 * v4;
        cleanup_argloc();
        if ( *(_QWORD *)(v5 + 32) )
        {
          *(_QWORD *)(v5 + 40) = 0;
          qfree();
        }
        ++v4;
        clear_tinfo_t();
        sub_1166E0(v5);
        v2 = *a1;
      }
      while ( v3 != v4 );
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

