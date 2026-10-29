__int64 __fastcall sub_1D2010(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  char *v6; // rdi
  char *v7; // rcx
  char *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 832LL);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(char **)v4;
  v7 = (char *)(*(_QWORD *)v4 + 8 * v5);
  if ( (_BYTE)a3 )
  {
    if ( v6 != v7 )
    {
      v8 = *(char **)v4;
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
    if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v5 + 1) )
    {
      v11 = qvector_reserve();
      v12 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)v4 = v11;
      v7 = (char *)(v11 + 8 * v12);
    }
    *(_QWORD *)v7 = a2;
    v10 = *(_QWORD *)(v4 + 8) + 1LL;
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
      v10 = *(_QWORD *)(v4 + 8) - 1LL;
LABEL_14:
      *(_QWORD *)(v4 + 8) = v10;
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

