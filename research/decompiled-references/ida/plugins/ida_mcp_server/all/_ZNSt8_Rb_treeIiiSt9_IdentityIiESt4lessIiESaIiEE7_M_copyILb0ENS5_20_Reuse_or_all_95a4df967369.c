__int64 __fastcall std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_copy<false,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Reuse_or_alloc_node>(
        int *a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __m128i si128; // xmm0
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  int *v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24[3]; // [rsp+0h] [rbp-38h] BYREF

  si128 = (__m128i)a2;
  v6 = a3[1];
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    a3[1] = v7;
    if ( v7 )
    {
      if ( v6 == *(_QWORD *)(v7 + 24) )
      {
        v21 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 24) = 0;
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 24);
          a3[1] = v21;
          if ( v22 )
          {
            do
            {
              v21 = v22;
              v22 = *(_QWORD *)(v22 + 24);
            }
            while ( v22 );
            a3[1] = v21;
          }
          v23 = *(_QWORD *)(v21 + 16);
          if ( v23 )
            a3[1] = v23;
        }
      }
      else
      {
        *(_QWORD *)(v7 + 16) = 0;
      }
    }
    else
    {
      *a3 = 0;
    }
    *(_DWORD *)(v6 + 32) = a1[8];
  }
  else
  {
    v24[0] = (__m128i)a2;
    v20 = operator new(0x28u);
    si128 = _mm_load_si128(v24);
    v6 = v20;
    *(_DWORD *)(v20 + 32) = a1[8];
  }
  v8 = *a1;
  *(_QWORD *)(v6 + 24) = 0;
  *(__m128i *)(v6 + 8) = si128;
  v9 = *((_QWORD *)a1 + 3);
  *(_DWORD *)v6 = v8;
  if ( v9 )
    *(_QWORD *)(v6 + 24) = std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_copy<false,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Reuse_or_alloc_node>(
                             v9,
                             v6,
                             a3);
  v10 = *((int **)a1 + 2);
  v11 = v6;
  if ( v10 )
  {
    v12 = a3[1];
    if ( !v12 )
      goto LABEL_18;
LABEL_10:
    v13 = *(_QWORD *)(v12 + 8);
    a3[1] = v13;
    if ( v13 )
    {
      if ( v12 == *(_QWORD *)(v13 + 24) )
      {
        v17 = *(_QWORD *)(v13 + 16);
        *(_QWORD *)(v13 + 24) = 0;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 24);
          a3[1] = v17;
          if ( v18 )
          {
            do
            {
              v17 = v18;
              v18 = *(_QWORD *)(v18 + 24);
            }
            while ( v18 );
            a3[1] = v17;
          }
          v19 = *(_QWORD *)(v17 + 16);
          if ( v19 )
            a3[1] = v19;
        }
      }
      else
      {
        *(_QWORD *)(v13 + 16) = 0;
      }
    }
    else
    {
      *a3 = 0;
    }
    for ( *(_DWORD *)(v12 + 32) = v10[8]; ; *(_DWORD *)(v12 + 32) = v10[8] )
    {
      v14 = *v10;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_DWORD *)v12 = v14;
      *(_QWORD *)(v11 + 16) = v12;
      *(_QWORD *)(v12 + 8) = v11;
      v15 = *((_QWORD *)v10 + 3);
      if ( v15 )
        *(_QWORD *)(v12 + 24) = std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_copy<false,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Reuse_or_alloc_node>(
                                  v15,
                                  v12,
                                  a3);
      v10 = *((int **)v10 + 2);
      if ( !v10 )
        break;
      v11 = v12;
      v12 = a3[1];
      if ( v12 )
        goto LABEL_10;
LABEL_18:
      v12 = operator new(0x28u);
    }
  }
  return v6;
}

