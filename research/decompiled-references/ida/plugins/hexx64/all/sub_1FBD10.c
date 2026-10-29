_QWORD *__fastcall sub_1FBD10(_QWORD **a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rcx

  result = *a1;
  if ( !*a1 )
    return result;
  v3 = (_QWORD *)(*result & 0xFFFFFFFFFFFFFFFCLL);
  if ( !v3 )
    return v3 + 4;
  if ( (*(_BYTE *)(*result & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    return nullptr;
  while ( 1 )
  {
    v4 = v3[3];
    if ( a2 < v4 )
    {
      v3 = (_QWORD *)v3[1];
      goto LABEL_8;
    }
    if ( v4 >= a2 )
      break;
    v3 = (_QWORD *)v3[2];
LABEL_8:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      return nullptr;
  }
  if ( result != v3 )
    return v3 + 4;
  return nullptr;
}

