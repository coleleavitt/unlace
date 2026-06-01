__int64 __fastcall sub_1D5BD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v4; // rbp
  __int64 v5; // rsi
  char *v6; // rdi
  char *v7; // rcx
  char *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  v4 = *(__int64 **)(*(_QWORD *)(a1 + 96) + 832LL);
  v5 = v4[1];
  v6 = (char *)*v4;
  v7 = (char *)(*v4 + 8 * v5);
  if ( (_BYTE)a3 )
  {
    if ( v6 != v7 )
    {
      v8 = (char *)*v4;
      while ( a2 != *(_QWORD *)v8 )
      {
        v8 += 8;
        if ( v8 == v7 )
          goto LABEL_16;
      }
      if ( v7 != v8 )
        return 0;
    }
LABEL_16:
    if ( v4[2] < (unsigned __int64)(v5 + 1) )
    {
      v11 = qvector_reserve((__int64)v4, *v4, v5 + 1, 8);
      v12 = v4[1];
      *v4 = v11;
      v7 = (char *)(v11 + 8 * v12);
    }
    *(_QWORD *)v7 = a2;
    v10 = v4[1] + 1;
    goto LABEL_14;
  }
  if ( !(8 * v5) )
    return 0;
  if ( a2 == *(_QWORD *)v6 )
  {
LABEL_12:
    if ( v6 != v7 )
    {
      memmove(v6, v6 + 8, v7 - v6 - 8);
      v10 = v4[1] - 1;
LABEL_14:
      v4[1] = v10;
      return 1;
    }
  }
  else
  {
    while ( 1 )
    {
      v6 += 8;
      if ( v6 == v7 )
        break;
      if ( a2 == *(_QWORD *)v6 )
        goto LABEL_12;
    }
  }
  return a3;
}

