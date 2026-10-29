_QWORD *__fastcall sub_28F30(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // rsi

  v2 = (unsigned __int64 *)a1[66];
  v4 = &v2[4 * a1[67]];
  if ( v2 == v4 )
  {
LABEL_5:
    v5 = a1[98];
    v6 = v5 + 8LL * a1[99];
    if ( v5 == v6 )
    {
      return nullptr;
    }
    else
    {
      while ( 1 )
      {
        a1 = *(_QWORD **)v5;
        v7 = *(unsigned __int64 **)(*(_QWORD *)v5 + 528LL);
        v8 = &v7[4 * *(_QWORD *)(*(_QWORD *)v5 + 536LL)];
        if ( v7 != v8 )
          break;
LABEL_10:
        v5 += 8;
        if ( v6 == v5 )
          return nullptr;
      }
      while ( a2 < *v7 || a2 >= v7[1] + *v7 )
      {
        v7 += 4;
        if ( v8 == v7 )
          goto LABEL_10;
      }
    }
  }
  else
  {
    while ( a2 < *v2 || a2 >= v2[1] + *v2 )
    {
      v2 += 4;
      if ( v4 == v2 )
        goto LABEL_5;
    }
  }
  return a1;
}

