void __fastcall sub_644F0(__int64 *a1, int a2, double a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  int v6; // r12d
  _QWORD *v7; // rax
  unsigned __int64 v8; // rsi

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC48Du, a3);
    BUG();
  }
  if ( a2 )
  {
    v4 = a2;
    v5 = a1[1];
    if ( v4 < v5 )
    {
      if ( (a2 & 0x3F) != 0 )
      {
        v6 = 0;
        do
        {
          if ( (v4 & 0x80000000) == 0LL && (int)v4 < v5 && (*(_QWORD *)(*a1 + 8LL * ((int)v4 >> 6)) & (1LL << v4)) != 0 )
          {
            sub_63DE0(a1, v6, a3);
            v7 = (_QWORD *)(*a1 + 8LL * (v6 >> 6));
            if ( (*v7 & (1LL << v6)) == 0 )
              *v7 |= 1LL << v6;
          }
          else
          {
            sub_64340(a1, v6, a3);
          }
          v5 = a1[1];
          ++v4;
          ++v6;
        }
        while ( v4 < v5 );
        sub_643C0(a1, v5 - a2, a3);
      }
      else
      {
        v8 = v5 - v4;
        a1[1] = v8;
        memmove((void *)*a1, (const void *)(*a1 + 8LL * (a2 >> 6)), 8 * (v8 >> 6));
      }
    }
    else
    {
      a1[1] = 0;
    }
  }
}

