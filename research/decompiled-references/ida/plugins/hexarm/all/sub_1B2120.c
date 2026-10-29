const char *__fastcall sub_1B2120(unsigned __int64 a1)
{
  __int64 module_data; // rax
  __int64 v2; // rcx
  int v3; // edx
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  const char *v6; // rdx
  __m128 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  module_data = get_module_data();
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(_DWORD *)(v2 + 384) + 1;
  v4 = v2 + 24LL * *(int *)(v2 + 384) + 144;
  *(_DWORD *)(v2 + 384) = v3;
  if ( v3 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v4 + 8) = 0;
  v9 = 0;
  v8 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
  sub_1B07A0(a1, (char *)v4, (__int64)&v8, 6u);
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 > 1 )
  {
    tag_remove();
    v5 = *(_QWORD *)(v4 + 8);
  }
  v6 = s1;
  if ( v5 )
    return *(const char **)v4;
  return v6;
}

