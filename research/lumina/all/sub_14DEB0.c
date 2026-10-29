__int64 *__fastcall sub_14DEB0(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // rax
  __int64 *result; // rax

  v4 = (_QWORD *)a1[20];
  if ( !v4 )
    v4 = a1;
  result = (__int64 *)v4[22];
  if ( result )
  {
    while ( *result != a2 || *((_DWORD *)result + 6) != a4 )
    {
      result = (__int64 *)result[1];
      if ( !result )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    result = sub_14D8B0((__int64)a1, a2, a3, a4);
    *(_DWORD *)(*a1 + 84LL) = -1;
  }
  return result;
}
