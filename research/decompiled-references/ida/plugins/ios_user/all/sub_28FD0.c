_QWORD *__fastcall sub_28FD0(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  _QWORD *result; // rax
  __int64 v16; // r10
  _QWORD *v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v9 = a3[1];
  v10 = *a3;
  if ( v9 )
  {
    v11 = v9 - 1;
    a2 = (unsigned int)a2;
    v12 = (_QWORD *)(v10 + 72 * v9 - 72);
    do
    {
      v13 = v12[5];
      if ( (unsigned int)a2 >= v13 )
      {
        v14 = v13 + v12[6];
        if ( (unsigned int)a2 < v14 )
          goto LABEL_8;
      }
      --v11;
      v12 -= 9;
    }
    while ( v11 != -1 );
  }
  do
  {
    if ( under_debugger )
      goto LABEL_17;
    a1 = (_QWORD *)(&stru_4EA8 + 7);
    v12 = (_QWORD *)interr();
LABEL_8:
    a2 = v12[3] + a2 - v13;
  }
  while ( a2 == -1 );
  if ( v14 == -1 )
  {
    if ( under_debugger )
LABEL_17:
      BUG();
    interr();
    return (_QWORD *)sub_29090(20144, a2, v18, v19, v20, v21, a7, a8, a9);
  }
  else
  {
    result = sub_28F30(a1, *(_QWORD *)(*a1 + 16LL) & a2);
    if ( result )
    {
      if ( v17 )
        *v17 = v16;
      return (_QWORD *)result[1];
    }
  }
  return result;
}

