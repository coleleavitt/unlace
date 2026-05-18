_BYTE *__fastcall sub_5C990(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  unsigned int v3; // edi
  _BYTE *v4; // rbp
  _BYTE *v5; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rbp
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  void *v12; // rdi
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v15; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v2 = (_BYTE *)sub_19DB40();
  v3 = (char)*v2;
  v4 = v2;
  v5 = v2;
  if ( *v2 )
  {
    do
    {
      if ( v3 <= 0x7F && isspace(v3) )
      {
        if ( v4 >= v5 )
          return v5;
        goto LABEL_8;
      }
      v3 = (char)*++v5;
    }
    while ( (_BYTE)v3 );
    if ( v4 >= v5 )
      return v5;
LABEL_8:
    v7 = nullptr;
    ptr = nullptr;
    v15 = 0;
    if ( v5 - v4 != -1 )
    {
      ptr = (void *)sub_1987B0(&ptr, 0, v5 - v4 + 1, 1);
      v7 = ptr;
    }
    v15.m128i_i64[0] = v5 - v4 + 1;
    memmove(v7, v4, v5 - v4);
    *((_BYTE *)ptr + v5 - v4) = 0;
    v8 = *(void **)a2;
    v9 = ptr;
    v10 = _mm_loadu_si128(&v15);
    v15 = 0;
    ptr = nullptr;
    if ( v8 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v13 = v10;
      j__free(v8);
      v11 = _mm_load_si128(&v13);
      v12 = ptr;
      *(_QWORD *)a2 = v9;
      *(__m128i *)(a2 + 8) = v11;
      if ( v12 )
      {
        v15.m128i_i64[0] = 0;
        j__free(v12);
      }
    }
    else
    {
      *(_QWORD *)a2 = v9;
      *(__m128i *)(a2 + 8) = v10;
    }
  }
  return v5;
}
