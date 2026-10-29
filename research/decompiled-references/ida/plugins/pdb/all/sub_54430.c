__int64 __fastcall sub_54430(_QWORD *a1, const char *a2)
{
  unsigned int v2; // ebp
  const void **v3; // rax
  unsigned __int64 v4; // r12
  const void *v6; // r14
  void *v7; // rax

  if ( (unsigned int)sub_54280((__int64)a1, a2) )
    return (unsigned int)-2147467259;
  v2 = 0;
  if ( !(unsigned __int8)sub_79DE0(*(_QWORD *)a2) )
    return (unsigned int)-2147467259;
  v3 = (const void **)a1[1];
  if ( v3 == a1 + 10 )
    return v2;
  v4 = (unsigned __int64)v3[1];
  if ( v4 <= 1 )
  {
    a1[11] = 0;
    return v2;
  }
  v6 = *v3;
  v7 = (void *)a1[10];
  if ( a1[12] < v4 )
  {
    v7 = (void *)qvector_reserve(a1 + 10, a1[10], v4, 1);
    a1[10] = v7;
  }
  a1[11] = v4;
  memmove(v7, v6, v4 - 1);
  *(_BYTE *)(a1[10] + v4 - 1) = 0;
  return 0;
}

