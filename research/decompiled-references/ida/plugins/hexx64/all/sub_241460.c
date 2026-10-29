_DWORD *__fastcall sub_241460(__int64 a1, __int64 a2, int a3, __int64 a4, double a5)
{
  __int64 v7; // rsi
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *result; // rax

  v7 = a4;
  v9 = *(_QWORD **)(a1 + 224);
  if ( v9 )
  {
    a4 = 24;
    v10 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v10 )
    {
LABEL_9:
      a3 = *(_DWORD *)(a4 + 4);
      goto LABEL_7;
    }
LABEL_3:
    if ( (*(_BYTE *)v10 & 2) == 0 )
    {
      while ( 1 )
      {
        a4 = v10 + 24;
        if ( *(_DWORD *)(v10 + 24) > a3 )
        {
          v10 = *(_QWORD *)(v10 + 8);
          goto LABEL_3;
        }
        if ( *(_DWORD *)(v10 + 24) >= a3 )
          break;
        v10 = *(_QWORD *)(v10 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
          goto LABEL_7;
      }
      if ( v9 == (_QWORD *)v10 )
        goto LABEL_7;
      goto LABEL_9;
    }
  }
LABEL_7:
  v11 = sub_2413C0(a2, v7, (__int64)v9, a4, a5);
  *((_DWORD *)v11 + 2) = 81;
  v12 = v11;
  result = (_DWORD *)j__qalloc_or_throw(4, v7, v13, v14);
  v12[3] = (__int64)result;
  *result = a3;
  return result;
}

