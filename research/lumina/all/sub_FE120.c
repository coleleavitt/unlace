__int64 *__fastcall sub_FE120(__int64 a1, _DWORD *a2, double a3)
{
  __int64 *result; // rax
  int v4; // ebx
  __int64 v5; // rax
  _DWORD *v6; // rbp

  result = (__int64 *)(unsigned int)*a2;
  if ( (int)result > 0 )
  {
    v4 = 0;
    do
    {
      v5 = v4++;
      v6 = &a2[6 * v5];
      result = sub_FDE00(a1, *((_QWORD *)v6 + 1), a3);
      *((_QWORD *)v6 + 1) = result;
    }
    while ( v4 < *a2 );
  }
  return result;
}
