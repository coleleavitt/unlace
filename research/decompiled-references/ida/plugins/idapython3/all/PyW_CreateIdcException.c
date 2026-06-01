__int64 __fastcall PyW_CreateIdcException(__int64 a1, const char *a2)
{
  size_t v2; // r13
  unsigned int v3; // ebx
  void *v5; // [rsp+8h] [rbp-50h]

  find_idc_class();
  idcv_object();
  free_idcv();
  if ( a2 )
  {
    v2 = strlen(a2);
    if ( v2 )
    {
      v5 = (void *)qvector_reserve();
      memmove(v5, a2, v2);
      *((_BYTE *)v5 + v2) = 0;
    }
  }
  set_idcv_attr();
  v3 = set_qerrno();
  free_idcv();
  return v3;
}

