_QWORD *__fastcall sub_DCFC0(__int64 *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  if ( a2 )
  {
    a2[2] = a3;
    a2[3] = a4;
    if ( a5 )
      a2[1] = sub_DCB40(*a1, *(const void **)a5, *(unsigned int *)(a5 + 8));
    return a2;
  }
  else
  {
    sub_D7AB0(a1, a3, a4);
    return nullptr;
  }
}
