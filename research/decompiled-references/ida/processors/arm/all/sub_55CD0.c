__int64 *__fastcall sub_55CD0(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r14

  v1 = (int)qvsnprintf();
  if ( (_DWORD)v1 )
  {
    v2 = (a1[1] == 0) + a1[1] + (int)v1;
    if ( a1[2] < v2 )
      *a1 = qvector_reserve((__int64)a1, *a1, (a1[1] == 0) + a1[1] + v1, 1);
    a1[1] = v2;
    qvsnprintf();
  }
  return a1;
}
