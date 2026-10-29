unsigned __int64 __fastcall sub_61450(__int64 a1)
{
  int v1; // ebx
  __m128i *src; // [rsp+0h] [rbp-80h]
  void *v4; // [rsp+28h] [rbp-58h]
  unsigned __int64 v5; // [rsp+58h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 56) = &off_AA340;
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_89710);
  strcpy(src[1].m128i_i8, "ic");
  v4 = (void *)qalloc_or_throw();
  memcpy(v4, src, 0x13u);
  if ( src )
    qfree();
  v1 = 0;
  if ( *(int *)(a1 + 28) > 0 )
  {
    while ( 1 )
    {
      switch_dbctx();
      netnode_check();
      if ( src != (__m128i *)-1LL )
        break;
      if ( *(_DWORD *)(a1 + 28) <= ++v1 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    qword_AA6A0 -= 3;
  }
  create_std_modmerge_handlers();
  create_nodeval_merge_handlers();
  if ( v4 )
    qfree();
  return v5 - __readfsqword(0x28u);
}

