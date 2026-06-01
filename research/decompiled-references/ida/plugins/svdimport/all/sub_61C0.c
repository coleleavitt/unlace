__int64 __fastcall sub_61C0(__int64 a1, __int64 a2, __int64 a3, const char *a4, const char *a5)
{
  size_t v6; // r14
  char *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r14
  size_t v10; // rax
  size_t v11; // r8
  void *v12; // r9
  char *v13; // rsi
  __int64 v15; // [rsp+0h] [rbp-80h]
  void *srca; // [rsp+8h] [rbp-78h]
  size_t v18; // [rsp+10h] [rbp-70h]
  char *v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-50h]

  if ( !a4 )
  {
    v8 = 2;
    v6 = 0;
LABEL_15:
    v15 = v8;
    v19 = (char *)qvector_reserve();
    v8 = v15;
    v7 = v19;
    goto LABEL_5;
  }
  v6 = strlen(a4);
  v19 = (char *)qvector_reserve();
  memmove(v19, a4, v6);
  v19[v6] = 0;
  v7 = v19;
  v8 = v6 + 2;
  if ( v6 == -1 )
  {
    v6 = 0;
    v8 = 2;
  }
  if ( v8 )
    goto LABEL_15;
LABEL_5:
  v20 = v8;
  v7[v6] = 47;
  v19[v6 + 1] = 0;
  if ( a5 )
  {
    v9 = v8;
    v10 = strlen(a5);
    v11 = v10;
    v12 = (void *)v10;
    if ( v20 )
    {
      v9 = v20 - 1;
      v12 = (void *)(v10 + v20 - 1);
    }
    v13 = v19;
    if ( v12 != (void *)-1LL )
    {
      v18 = v10;
      srca = v12;
      v19 = (char *)qvector_reserve();
      v11 = v18;
      v13 = v19;
      v12 = srca;
    }
    *((_BYTE *)v12 + (_QWORD)v13) = 0;
    memmove(&v19[v9], a5, v11);
  }
  dirtree_resolve_path();
  if ( v19 )
    qfree();
  return -1;
}

