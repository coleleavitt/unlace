__int64 __fastcall sub_BCF0(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  const void *v3; // r12
  void *v4; // rdi
  __int64 v6; // rax

  if ( !a1[3] )
    return 0;
  v2 = a1[13];
  if ( v2 <= 1 )
    return sub_FF50(a1[5], a2, a1[7]);
  if ( a2 && a2 != a1 + 12 )
  {
    v3 = (const void *)a1[12];
    v4 = (void *)*a2;
    if ( a2[2] < v2 )
    {
      v6 = qvector_reserve();
      *a2 = v6;
      v4 = (void *)v6;
    }
    a2[1] = v2;
    memmove(v4, v3, v2 - 1);
    *(_BYTE *)(*a2 + v2 - 1) = 0;
  }
  return 1;
}
