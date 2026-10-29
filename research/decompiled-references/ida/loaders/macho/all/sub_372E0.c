void __fastcall sub_372E0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r12
  unsigned __int64 *i; // r13
  unsigned __int64 v4; // rbx
  __int64 v5; // rax

  v2 = (unsigned __int64 *)a1[659];
  for ( i = &v2[2 * a1[660]]; i != v2; v2 += 2 )
  {
    v4 = *v2;
    do
    {
      if ( v4 >= v2[1] )
        break;
      if ( (unsigned __int8)callui(27, a2, &callui) )
        return;
      v5 = a1[1710] + 1LL;
      a1[1710] = v5;
      if ( v5 == 10000 )
      {
        sub_19440((__int64)"Creating cfstrings (%a)");
        a1[1710] = 0;
      }
      a2 = v4;
      v4 = sub_36B20((__int64)a1, v4);
    }
    while ( v4 != -1 );
  }
}

