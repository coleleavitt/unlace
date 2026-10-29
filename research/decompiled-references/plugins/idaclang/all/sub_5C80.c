__int64 __fastcall sub_5C80(__int64 *a1)
{
  __int64 module_data; // rax
  unsigned int v3; // edx
  unsigned __int64 v4; // rbp
  const void *v5; // r12
  void *v6; // rdi
  __int64 v8; // rax

  module_data = get_module_data((unsigned int)dword_29364);
  v3 = 0;
  v4 = *(_QWORD *)(module_data + 160);
  if ( v4 > 1 )
  {
    if ( a1 != (__int64 *)(module_data + 152) )
    {
      v5 = *(const void **)(module_data + 152);
      v6 = (void *)*a1;
      if ( a1[2] < v4 )
      {
        v8 = qvector_reserve(a1, *a1, *(_QWORD *)(module_data + 160), 1);
        *a1 = v8;
        v6 = (void *)v8;
      }
      a1[1] = v4;
      memmove(v6, v5, v4 - 1);
      *(_BYTE *)(*a1 + v4 - 1) = 0;
    }
    return 1;
  }
  return v3;
}
