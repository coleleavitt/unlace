_QWORD *__fastcall sub_1C4C0(_QWORD *a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r10
  _QWORD *result; // rax
  __int64 v10; // r10
  _QWORD *v11; // r11

  v3 = a3[1];
  v4 = *a3;
  if ( v3 )
  {
    v5 = v3 - 1;
    a2 = (unsigned int)a2;
    v6 = (_QWORD *)(v4 + 72 * v3 - 72);
    do
    {
      v7 = v6[5];
      if ( (unsigned int)a2 >= v7 )
      {
        v8 = v7 + v6[6];
        if ( (unsigned int)a2 < v8 )
          goto LABEL_8;
      }
      --v5;
      v6 -= 9;
    }
    while ( v5 != -1 );
  }
  do
  {
    if ( under_debugger )
      goto LABEL_17;
    a1 = (_QWORD *)(&stru_4EA8 + 7);
    v6 = (_QWORD *)interr();
LABEL_8:
    a2 = v6[3] + a2 - v7;
  }
  while ( a2 == -1 );
  if ( v8 == -1 )
  {
    if ( under_debugger )
LABEL_17:
      BUG();
    interr();
    return (_QWORD *)sub_1C580(20144);
  }
  else
  {
    result = sub_1C420(a1, *(_QWORD *)(*a1 + 16LL) & a2);
    if ( result )
    {
      if ( v11 )
        *v11 = v10;
      return (_QWORD *)result[1];
    }
  }
  return result;
}

