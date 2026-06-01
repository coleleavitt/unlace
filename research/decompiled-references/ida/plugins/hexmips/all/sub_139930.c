_QWORD *__fastcall sub_139930(_QWORD **a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = (_QWORD *)get_func();
  if ( !result )
    return result;
  if ( *result != a2 )
    return nullptr;
  result = *a1;
  if ( !*a1 )
    return result;
  v3 = *result & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v3 )
    return (_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(*result & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    return nullptr;
  while ( 1 )
  {
    v4 = *(_QWORD *)(v3 + 24);
    if ( a2 < v4 )
    {
      v3 = *(_QWORD *)(v3 + 8);
      goto LABEL_10;
    }
    if ( v4 >= a2 )
      break;
    v3 = *(_QWORD *)(v3 + 16);
LABEL_10:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      return nullptr;
  }
  if ( (_QWORD *)v3 != result )
    return (_QWORD *)(v3 + 32);
  return nullptr;
}

