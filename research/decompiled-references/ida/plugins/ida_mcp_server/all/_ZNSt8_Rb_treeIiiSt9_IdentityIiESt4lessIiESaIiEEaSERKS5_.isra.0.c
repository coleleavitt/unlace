unsigned __int64 __fastcall std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v6; // rax
  int *v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v16; // rdi
  _QWORD *v17; // [rsp+0h] [rbp-38h]
  __int64 v18; // [rsp+8h] [rbp-30h]
  __m128i v19; // [rsp+10h] [rbp-28h] BYREF
  _QWORD *v20; // [rsp+20h] [rbp-18h]
  unsigned __int64 v21; // [rsp+28h] [rbp-10h]

  v21 = __readfsqword(0x28u);
  if ( a1 != (_QWORD *)a2 )
  {
    v2 = a1[2];
    v3 = a1[4];
    v20 = a1;
    v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)v3);
    if ( v2 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v2 + 8) = 0;
      if ( v6 )
        v19.m128i_i64[1] = v6;
      a1[2] = 0;
      v7 = *(int **)(a2 + 16);
      v8 = (unsigned __int64)(a1 + 1);
      a1[3] = a1 + 1;
      a1[4] = a1 + 1;
      a1[5] = 0;
      if ( !v7 )
        goto LABEL_12;
    }
    else
    {
      v8 = (unsigned __int64)(a1 + 1);
      a1[2] = 0;
      a1[3] = a1 + 1;
      a1[4] = a1 + 1;
      a1[5] = 0;
      v7 = *(int **)(a2 + 16);
      v19.m128i_i64[1] = 0;
      if ( !v7 )
        return v21 - __readfsqword(0x28u);
    }
    v18 = a2;
    v17 = a1;
    v9 = std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_copy<false,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Reuse_or_alloc_node>(
           v7,
           v8,
           &v19);
    v10 = v9;
    do
    {
      v11 = v9;
      v9 = *(_QWORD *)(v9 + 16);
    }
    while ( v9 );
    v17[3] = v11;
    v12 = v10;
    do
    {
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v12 );
    v14 = *(_QWORD *)(v18 + 40);
    v2 = v19.m128i_i64[0];
    v17[4] = v13;
    v17[2] = v10;
    v17[5] = v14;
    if ( !v2 )
      return v21 - __readfsqword(0x28u);
    do
    {
LABEL_12:
      std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(*(_QWORD **)(v2 + 24));
      v16 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v16, 0x28u);
    }
    while ( v2 );
  }
  return v21 - __readfsqword(0x28u);
}

