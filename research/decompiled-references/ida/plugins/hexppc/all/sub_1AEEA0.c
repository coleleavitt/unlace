const char *__fastcall sub_1AEEA0(unsigned __int64 a1)
{
  __int64 module_data; // rax
  __int64 v2; // r13
  __int64 v3; // r14
  int v4; // edx
  char *v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  const char *v11; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+0h] [rbp-68h]
  __int64 v15; // [rsp+8h] [rbp-60h]
  __m128 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  module_data = get_module_data();
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(int *)(v2 + 384);
  v4 = *(_DWORD *)(v2 + 384) + 1;
  v5 = (char *)(v2 + 24 * v3 + 144);
  *(_DWORD *)(v2 + 384) = v4;
  if ( v4 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v2 + 24 * v3 + 152) = 0;
  v17 = 0;
  v16 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
  sub_1AADB0((__int64 *)(v2 + 24 * v3 + 144), (__int64)&v16, a1 + 24, (__int64 *)(a1 + 32));
  v6 = *(_QWORD *)(v2 + 24 * v3 + 152);
  if ( v6 )
  {
    v7 = v6 + 1;
    v8 = *(_QWORD *)(v2 + 24 * v3 + 152);
    --v6;
    if ( *(_QWORD *)(v2 + 24 * v3 + 160) >= v7 )
      goto LABEL_5;
  }
  else
  {
    v8 = 1;
    v7 = 2;
    if ( *(_QWORD *)(v2 + 24 * v3 + 160) >= 2u )
      goto LABEL_5;
  }
  v14 = v7;
  v15 = v8;
  v13 = qvector_reserve();
  v8 = v15;
  v7 = v14;
  *(_QWORD *)(v2 + 24 * v3 + 144) = v13;
LABEL_5:
  v9 = *(_QWORD *)v5;
  *(_QWORD *)(v2 + 24 * v3 + 152) = v7;
  *(_BYTE *)(v9 + v6) = 32;
  *(_BYTE *)(*(_QWORD *)v5 + v8) = 0;
  sub_1AD320(a1, v5, (__int64)&v16, 6u);
  v10 = *(_QWORD *)(v2 + 24 * v3 + 152);
  if ( v10 > 1 )
  {
    tag_remove();
    v10 = *(_QWORD *)(v2 + 24 * v3 + 152);
  }
  v11 = s1;
  if ( v10 )
    return *(const char **)v5;
  return v11;
}

