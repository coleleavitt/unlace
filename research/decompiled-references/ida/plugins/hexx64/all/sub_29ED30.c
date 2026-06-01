__int64 __fastcall sub_29ED30(__int64 *a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = v5++;
        v7 = v3 + 32 * v6;
        clear_tinfo_t();
        sub_29EC30(v7, a2);
        v3 = *a1;
      }
      while ( v4 != v5 );
    }
    a1[1] = 0;
    return qfree(v3);
  }
  return result;
}

