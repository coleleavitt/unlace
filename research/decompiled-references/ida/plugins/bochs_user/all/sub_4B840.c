_QWORD *__fastcall sub_4B840(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = *(_QWORD **)(a1 + 160);
  v3 = (_QWORD *)(a1 + 152);
  if ( result )
  {
    v4 = (_QWORD *)(a1 + 152);
    do
    {
      while ( 1 )
      {
        v5 = result[2];
        v6 = result[3];
        if ( result[4] >= a2 )
          break;
        result = (_QWORD *)result[3];
        if ( !v6 )
          goto LABEL_6;
      }
      v4 = result;
      result = (_QWORD *)result[2];
    }
    while ( v5 );
LABEL_6:
    if ( v3 != v4 && a2 >= v4[4] )
      return (_QWORD *)v4[5];
  }
  return result;
}

