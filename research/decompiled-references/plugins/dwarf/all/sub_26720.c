__int64 __fastcall sub_26720(__m128i *a1)
{
  size_t v2; // rax
  int v3; // eax
  int v4; // ebp
  __int64 ph; // rax
  void *v7; // rdi
  size_t v8; // rbp
  size_t v9; // r13
  __int64 v10; // rax
  char v11[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v12; // [rsp+1008h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  getinf_buf(97, v11, 4096);
  v2 = strlen(v11);
  if ( v2 )
  {
    v7 = (void *)a1->m128i_i64[0];
    v8 = v2;
    v9 = v2 + 1;
    if ( a1[1].m128i_i64[0] < v2 + 1 )
    {
      v10 = qvector_reserve(a1, a1->m128i_i64[0], v2 + 1, 1);
      a1->m128i_i64[0] = v10;
      v7 = (void *)v10;
    }
    a1->m128i_i64[1] = v9;
    memmove(v7, v11, v8);
    *(_BYTE *)(a1->m128i_i64[0] + v8) = 0;
  }
  else
  {
    a1->m128i_i64[1] = 0;
  }
  v3 = getinf(5);
  a1[1].m128i_i32[2] = v3;
  v4 = v3;
  ph = get_ph();
  sub_1B0D0((__int64)&a1[1].m128i_i64[1] + 4, ph, v4);
  return sub_26600(a1);
}
