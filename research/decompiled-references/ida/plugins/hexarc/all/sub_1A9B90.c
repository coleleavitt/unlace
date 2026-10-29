const char *__fastcall sub_1A9B90(__int64 a1)
{
  __int64 v1; // rbp
  __int64 module_data; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  int v5; // edx
  __int64 *v6; // rbx
  const char *result; // rax
  _BYTE *v8; // rax

  v1 = sub_3320F0(a1);
  module_data = get_module_data();
  v3 = *(_QWORD *)(module_data + 1024);
  v4 = *(int *)(v3 + 384);
  v5 = *(_DWORD *)(v3 + 384) + 1;
  v6 = (__int64 *)(v3 + 24 * v4 + 144);
  *(_DWORD *)(v3 + 384) = v5;
  if ( v5 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v3 + 24 * v4 + 152) = 0;
  sub_1C17C0(v1, v3 + 24 * v4 + 144, a1, *(unsigned int *)(v1 + 80));
  if ( *(_QWORD *)(v3 + 24 * v4 + 152) <= 1u )
  {
    if ( *(_QWORD *)(v3 + 24 * v4 + 160) <= 1u )
      *(_QWORD *)(v3 + 24 * v4 + 144) = qvector_reserve();
    v8 = (_BYTE *)*v6;
    *(_QWORD *)(v3 + 24 * v4 + 152) = 2;
    *v8 = 63;
    *(_BYTE *)(*v6 + 1) = 0;
  }
  sub_F4410(v6);
  result = s1;
  if ( *(_QWORD *)(v3 + 24 * v4 + 152) )
    return (const char *)*v6;
  return result;
}

