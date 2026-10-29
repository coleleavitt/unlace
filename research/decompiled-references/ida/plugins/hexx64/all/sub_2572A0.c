__int64 **__fastcall sub_2572A0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12

  if ( a2 )
  {
    v4 = (__int64 *)j__qalloc_or_throw(224, a2, a3, a4);
    sub_256FC0(v4, a2);
    *a1 = v4;
  }
  else
  {
    *a1 = nullptr;
  }
  return a1;
}

