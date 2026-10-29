const char *__fastcall sub_1B1700(_QWORD *a1)
{
  __int64 module_data; // rax
  __int64 v2; // rcx
  int v3; // edx
  __int64 *v4; // rbx
  const char *result; // rax
  __m128 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  module_data = get_module_data();
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(_DWORD *)(v2 + 384) + 1;
  v4 = (__int64 *)(v2 + 24LL * *(int *)(v2 + 384) + 144);
  *(_DWORD *)(v2 + 384) = v3;
  if ( v3 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v4[1] = 0;
  v7 = 0;
  v6 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
  sub_1AF600(a1, v4, (__int64)&v6);
  result = s1;
  if ( v4[1] )
    return (const char *)*v4;
  return result;
}

