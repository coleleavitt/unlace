__int64 __fastcall sub_2530C0(_QWORD **a1, _QWORD **a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = *a2;
  v3 = *a1;
  if ( *a2 == a2 || a1 == v3 )
  {
LABEL_8:
    result = a2 == v2;
    if ( a1 == v3 )
      return (unsigned int)-(a2 != v2);
  }
  else
  {
    while ( 1 )
    {
      result = sub_252320((__int64)(v3 + 2), (__int64)(v2 + 2));
      if ( (_DWORD)result )
        break;
      v3 = (_QWORD *)*v3;
      v2 = (_QWORD *)*v2;
      if ( a1 == v3 || a2 == v2 )
        goto LABEL_8;
    }
  }
  return result;
}

