__int64 __fastcall sub_3BF590(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  unsigned __int64 i; // rbx

  free_idcv();
  idcv_object();
  v2 = sub_2535E0(a1, 0, v1);
  for ( i = 0; i < *(_QWORD *)(v2 + 8); ++i )
  {
    tag_remove();
    qsnprintf();
    set_idcv_attr();
  }
  free_idcv();
  return 0;
}

