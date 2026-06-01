__int64 __fastcall sub_54B60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  size_t v4; // rbx
  size_t v5; // r13
  size_t v6; // r13
  void *v8; // [rsp+8h] [rbp-50h]
  void *v9; // [rsp+8h] [rbp-50h]
  void *v10; // [rsp+8h] [rbp-50h]

  v2 = sub_135E0(a1, a2);
  v3 = sub_446D0(v2 + 864);
  idcv_object();
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    v8 = (void *)qalloc_or_throw();
    memcpy(v8, *(const void **)v3, v4);
  }
  set_idcv_attr();
  free_idcv();
  set_idcv_attr();
  free_idcv();
  set_idcv_attr();
  free_idcv();
  v5 = *(_QWORD *)(v3 + 40);
  if ( v5 )
  {
    v10 = (void *)qalloc_or_throw();
    memcpy(v10, *(const void **)(v3 + 32), v5);
  }
  set_idcv_attr();
  free_idcv();
  v6 = *(_QWORD *)(v3 + 64);
  if ( v6 )
  {
    v9 = (void *)qalloc_or_throw();
    memcpy(v9, *(const void **)(v3 + 56), v6);
  }
  set_idcv_attr();
  free_idcv();
  return 0;
}

