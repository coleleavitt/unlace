unsigned __int64 __fastcall sub_262F0(volatile signed __int32 **a1, unsigned __int64 *a2)
{
  volatile signed __int32 *v2; // r13
  __m128i *v5; // rax
  const __m128i *v6; // rsi
  __m128i *v7; // rdx
  volatile signed __int32 *v8; // rbx
  const __m128i *v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int32 *v13; // r12
  volatile signed __int32 *v15; // rax
  volatile signed __int32 *v16; // rdx
  volatile signed __int32 *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rdi
  void *v20; // rax
  char v21; // [rsp+27h] [rbp-51h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  __m128i v23; // [rsp+30h] [rbp-48h] BYREF
  char *v24; // [rsp+40h] [rbp-38h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v2 = *a1;
  if ( *a1 )
  {
    if ( *v2 == 1 )
    {
      v15 = (volatile signed __int32 *)sub_22C90((__int64)(v2 + 2), a2);
      v17 = v16;
      v18 = (__int64)v15;
      if ( v15 == *((volatile signed __int32 **)v2 + 4) && v16 == v2 + 4 )
      {
        sub_1F160(*((_QWORD **)v2 + 3));
        *((_QWORD *)v2 + 3) = 0;
        *((_QWORD *)v2 + 4) = v17;
        *((_QWORD *)v2 + 5) = v17;
        *((_QWORD *)v2 + 6) = 0;
      }
      else if ( v16 != v15 )
      {
        do
        {
          v19 = v18;
          v18 = std::_Rb_tree_increment(v18);
          v20 = (void *)std::_Rb_tree_rebalance_for_erase(v19, v2 + 4);
          operator delete(v20, 0x38u);
          --*((_QWORD *)v2 + 6);
        }
        while ( v17 != (volatile signed __int32 *)v18 );
      }
    }
    else
    {
      v5 = (__m128i *)operator new(0x38u);
      v6 = (const __m128i *)*a1;
      v23.m128i_i64[1] = (__int64)a2;
      v7 = v5 + 1;
      v5->m128i_i32[0] = 0;
      v8 = (volatile signed __int32 *)v5;
      v5 = (__m128i *)((char *)v5 + 8);
      v5->m128i_i32[2] = 0;
      ++v6;
      v5[1].m128i_i64[0] = 0;
      v5[1].m128i_i64[1] = (__int64)v7;
      v5[2].m128i_i64[0] = (__int64)v7;
      v5[2].m128i_i64[1] = 0;
      v9 = (const __m128i *)v6[1].m128i_i64[0];
      v23.m128i_i64[0] = (__int64)&v22;
      v22 = 0;
      v24 = &v21;
      v10 = _mm_load_si128(&v23);
      sub_26190(v9, v6, v5, v7, v11, v12, v10.m128i_i64[0], (_QWORD *)v10.m128i_i64[1]);
      if ( *a1 )
      {
        if ( !_InterlockedSub(*a1, 1u) )
        {
          v13 = *a1;
          if ( *a1 )
          {
            sub_1F160(*((_QWORD **)v13 + 3));
            operator delete((void *)v13, 0x38u);
          }
        }
      }
      *a1 = v8;
      if ( v8 )
        _InterlockedAdd(v8, 1u);
    }
  }
  return v25 - __readfsqword(0x28u);
}

