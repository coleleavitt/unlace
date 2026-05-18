__int64 *__fastcall sub_E0F20(__int64 *a1, int *a2, __int64 a3)
{
  __int64 v3; // rax
  int *v4; // rax

  if ( !a2 )
    return sub_DEBF0(a1, a3);
  v3 = *a2;
  if ( a2[1] < (int)v3 + 1 )
    return sub_E0E70(*a1, (__int64)a2, a3);
  *a2 = v3 + 1;
  v4 = &a2[6 * v3];
  *(_OWORD *)(v4 + 2) = 0;
  *((_QWORD *)v4 + 3) = 0;
  *((_QWORD *)v4 + 1) = a3;
  return (__int64 *)a2;
}
