const char *__fastcall sub_1AF1C0(__int64 a1)
{
  __int64 module_data; // rax
  __int64 v2; // r14
  int v3; // edx
  __int64 *v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-58h]
  unsigned __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+18h] [rbp-40h]

  module_data = get_module_data();
  v2 = *(_QWORD *)(module_data + 1024);
  v12 = *(int *)(v2 + 384);
  v3 = *(_DWORD *)(v2 + 384) + 1;
  v4 = (__int64 *)(v2 + 24 * v12 + 144);
  *(_DWORD *)(v2 + 384) = v3;
  if ( v3 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v2 + 24 * v12 + 152) = 0;
  v5 = 0;
  if ( !*(_QWORD *)(a1 + 8) )
    return s1;
  while ( 1 )
  {
    ++v5;
    sub_FA510(v4);
    if ( v5 >= *(_QWORD *)(a1 + 8) )
      break;
    v6 = *(_QWORD *)(v2 + 24 * v12 + 152);
    if ( v6 )
    {
      v7 = v6 + 1;
      v8 = *(_QWORD *)(v2 + 24 * v12 + 152);
      --v6;
      if ( *(_QWORD *)(v2 + 24 * v12 + 160) >= v7 )
        goto LABEL_7;
    }
    else
    {
      v8 = 1;
      v7 = 2;
      if ( *(_QWORD *)(v2 + 24 * v12 + 160) >= 2u )
        goto LABEL_7;
    }
    v14 = v8;
    v13 = v7;
    v10 = qvector_reserve();
    v8 = v14;
    v7 = v13;
    *(_QWORD *)(v2 + 24 * v12 + 144) = v10;
LABEL_7:
    v9 = *v4;
    *(_QWORD *)(v2 + 24 * v12 + 152) = v7;
    *(_BYTE *)(v9 + v6) = 44;
    *(_BYTE *)(*v4 + v8) = 0;
  }
  if ( *(_QWORD *)(v2 + 24 * v12 + 152) )
    return (const char *)*v4;
  return s1;
}

