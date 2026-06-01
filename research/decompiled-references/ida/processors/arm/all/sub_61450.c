unsigned __int64 __fastcall sub_61450(__int64 a1)
{
  __m128i *v2; // rax
  void *v3; // rdi
  size_t v4; // rbx
  int v5; // ebx
  void *src; // [rsp+0h] [rbp-80h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-78h]
  __int64 v9; // [rsp+20h] [rbp-60h]
  void *v10; // [rsp+28h] [rbp-58h]
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-40h]
  int v13; // [rsp+48h] [rbp-38h]
  unsigned __int64 v14; // [rsp+58h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  *(_QWORD *)(a1 + 56) = &off_AA340;
  v2 = (__m128i *)qvector_reserve((__int64)&src, 0, 19, 1);
  src = v2;
  n[0] = 19;
  *v2 = _mm_load_si128((const __m128i *)&xmmword_89710);
  v2[1].m128i_i16[0] = 25449;
  v3 = src;
  v9 = a1;
  *((_BYTE *)src + 18) = 0;
  v4 = n[0];
  v10 = 0;
  v11 = 0;
  if ( n[0] )
  {
    v10 = (void *)qalloc_or_throw();
    *((_QWORD *)&v11 + 1) = v4;
    memcpy(v10, src, v4);
    *(_QWORD *)&v11 = v4;
    v3 = src;
  }
  v13 = 3;
  v12 = 0x2FFFFFFFFLL;
  if ( v3 )
  {
    n[0] = 0;
    qfree((__int64)v3);
  }
  v5 = 0;
  if ( *(int *)(v9 + 28) > 0 )
  {
    while ( 1 )
    {
      switch_dbctx();
      netnode_check();
      if ( src != (void *)-1LL )
        break;
      if ( *(_DWORD *)(v9 + 28) <= ++v5 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    qword_AA6A0 -= 3;
  }
  create_std_modmerge_handlers();
  HIDWORD(v12) = -1;
  create_nodeval_merge_handlers();
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree((__int64)v10);
  }
  return v14 - __readfsqword(0x28u);
}
