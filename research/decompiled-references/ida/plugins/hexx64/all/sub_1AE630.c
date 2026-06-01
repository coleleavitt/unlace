const char *__fastcall sub_1AE630(_QWORD *a1, double a2)
{
  __int64 module_data; // rax
  __int64 v3; // rcx
  int v4; // edx
  __int64 *v5; // rbx
  const char *result; // rax

  module_data = get_module_data();
  v3 = *(_QWORD *)(module_data + 1024);
  v4 = *(_DWORD *)(v3 + 384) + 1;
  v5 = (__int64 *)(v3 + 24LL * *(int *)(v3 + 384) + 144);
  *(_DWORD *)(v3 + 384) = v4;
  if ( v4 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v5[1] = 0;
  sub_106AE0(a1, v5, a2);
  result = s1;
  if ( v5[1] )
    return (const char *)*v5;
  return result;
}

