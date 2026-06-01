int __fastcall sub_25A440(_QWORD **a1, _QWORD **a2, double a3)
{
  _QWORD **v3; // rbp
  _QWORD **v4; // rbx
  int result; // eax

  v3 = (_QWORD **)*a2;
  v4 = (_QWORD **)*a1;
  if ( *a2 == a2 || a1 == v4 )
  {
LABEL_8:
    result = a2 == v3;
    if ( a1 == v4 )
      return -(a2 != v3);
  }
  else
  {
    while ( 1 )
    {
      result = sub_2596A0((__int64)(v4 + 2), (__int64)(v3 + 2), a3);
      if ( result )
        break;
      v4 = (_QWORD **)*v4;
      v3 = (_QWORD **)*v3;
      if ( a1 == v4 || a2 == v3 )
        goto LABEL_8;
    }
  }
  return result;
}

