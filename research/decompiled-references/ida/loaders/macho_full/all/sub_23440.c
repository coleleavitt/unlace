void __fastcall sub_23440(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r12
  unsigned __int64 *v4; // r14
  unsigned __int64 max_strlit_length; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rax

  v3 = (unsigned __int64 *)a1[654];
  v4 = &v3[2 * a1[655]];
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v6 = *v3;
      if ( *v3 < v3[1] )
        break;
LABEL_10:
      v3 += 2;
      if ( v4 == v3 )
        return;
    }
    if ( !(unsigned __int8)callui(27, a2, a3) )
    {
      while ( 1 )
      {
        v7 = a1[1710] + 1LL;
        a1[1710] = v7;
        if ( v7 == 10000 )
        {
          sub_19440((__int64)"Creating string literals (%a)");
          a1[1710] = 0;
        }
        a2 = 0;
        max_strlit_length = get_max_strlit_length();
        if ( max_strlit_length )
          goto LABEL_5;
        if ( (v6 & 3) == 0 && !(unsigned __int8)get_byte() )
          break;
        ++v6;
LABEL_18:
        if ( v6 >= v3[1] )
          goto LABEL_10;
        if ( (unsigned __int8)callui(27, a2, a3) )
          return;
      }
      max_strlit_length = 1;
LABEL_5:
      if ( v3[1] < max_strlit_length + v6 )
        max_strlit_length = v3[1] - v6;
      a2 = max_strlit_length;
      if ( !(unsigned __int8)create_strlit()
        || max_strlit_length == -1
        || *(_QWORD *)(a1[1] + 16LL) - v6 < max_strlit_length )
      {
        goto LABEL_10;
      }
      v6 += max_strlit_length;
      goto LABEL_18;
    }
  }
}

