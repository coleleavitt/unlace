__int64 __fastcall sub_3C4810(__m128i *a1)
{
  __m128i *v1; // rbp
  unsigned __int64 i; // rbx
  __int64 dest; // [rsp+48h] [rbp-80h]
  void *dest_8[2]; // [rsp+50h] [rbp-78h]
  unsigned __int64 v6; // [rsp+88h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  free_idcv();
  dest = 0;
  *(_OWORD *)dest_8 = 0;
  idcv_object();
  v1 = sub_2581E0(a1);
  for ( i = 0; i < v1->m128i_i64[1]; ++i )
  {
    tag_remove();
    dest_8[0] = nullptr;
    qsnprintf();
    set_idcv_attr();
  }
  free_idcv();
  return 0;
}

