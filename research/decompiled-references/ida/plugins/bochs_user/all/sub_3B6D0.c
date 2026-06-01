_QWORD *__fastcall sub_3B6D0(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rdi

  v5 = *(_QWORD *)(a1 + 56);
  v6 = v5 + 8LL * *(_QWORD *)(a1 + 64);
  if ( v5 == v6 )
    return nullptr;
  while ( 1 )
  {
    v7 = *(_QWORD **)v5;
    if ( a5 )
    {
      while ( 1 )
      {
        if ( a2 >= v7[4] )
        {
          if ( a2 < v7[5] )
            goto LABEL_11;
          if ( a2 == v7[4] )
            goto LABEL_15;
        }
        v5 += 8;
        if ( v5 == v6 )
          return nullptr;
        v7 = *(_QWORD **)v5;
      }
    }
    if ( v7[4] != a2 )
      goto LABEL_4;
LABEL_15:
    if ( !a3 || v7[3] == a3 )
      break;
LABEL_4:
    v5 += 8;
    if ( v5 == v6 )
      return nullptr;
  }
LABEL_11:
  if ( v6 == v5 )
    return nullptr;
  if ( a4 )
    *a4 = v5;
  return *(_QWORD **)v5;
}

