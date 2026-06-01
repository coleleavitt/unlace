__int64 __fastcall sub_1E460(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // r12
  int v5; // esi
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rsi
  __m128i v9; // xmm0
  void *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rax
  void *src; // [rsp+20h] [rbp-A0h]
  size_t n; // [rsp+28h] [rbp-98h]
  __int64 v16; // [rsp+40h] [rbp-80h]
  __int64 v17; // [rsp+48h] [rbp-78h]
  int v18; // [rsp+50h] [rbp-70h]
  void *v19; // [rsp+60h] [rbp-60h] BYREF
  __m128i v20; // [rsp+68h] [rbp-58h] BYREF
  __int64 v21; // [rsp+78h] [rbp-48h]
  __int64 v22; // [rsp+80h] [rbp-40h]
  __int64 v23; // [rsp+88h] [rbp-38h]
  int v24; // [rsp+90h] [rbp-30h]
  unsigned __int64 v25; // [rsp+98h] [rbp-28h]

  v25 = __readfsqword(0x28u);
  create_data();
  src = 0;
  n = 0;
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
  {
    src = (void *)qalloc_or_throw();
    memcpy(src, *(const void **)a3, v4);
    n = v4;
  }
  copy_tinfo_t();
  v16 = *(_QWORD *)(a3 + 32);
  v17 = *(_QWORD *)(a3 + 40);
  v18 = *(_DWORD *)(a3 + 48);
  print_tinfo();
  set_cmt();
  if ( v16 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 4LL) )
      getinf_flag();
    create_data();
    num_flag();
    set_op_type();
    v19 = 0;
    v20 = 0;
    sub_D6A0((__int64 *)&v19);
    set_name();
    set_cmt();
    v5 = *(_DWORD *)(a1 + 48);
    if ( v5 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 2216LL) )
      {
        sub_EC40();
        v5 = *(_DWORD *)(a1 + 48);
      }
      LODWORD(v17) = v17 + v5;
      put_dword();
    }
    if ( v19 )
    {
      v20.m128i_i64[0] = 0;
      qfree();
    }
  }
  v19 = 0;
  v6 = *(__int64 **)(a1 + 32);
  v20 = 0;
  if ( n )
  {
    v19 = (void *)qalloc_or_throw();
    v20.m128i_i64[1] = n;
    memcpy(v19, src, n);
    v20.m128i_i64[0] = n;
  }
  v21 = 0;
  copy_tinfo_t();
  v22 = v16;
  v23 = v17;
  v24 = v18;
  v7 = v6[1];
  v8 = *v6;
  if ( v6[2] < (unsigned __int64)(v7 + 1) )
  {
    v13 = qvector_reserve();
    *v6 = v13;
    v7 = v6[1];
    v8 = v13;
  }
  v9 = _mm_loadu_si128(&v20);
  v10 = v19;
  v19 = 0;
  v11 = v8 + 56 * v7;
  *(__m128i *)(v11 + 8) = v9;
  v20 = 0;
  *(_QWORD *)v11 = v10;
  *(_QWORD *)(v11 + 24) = 0;
  copy_tinfo_t();
  *(_QWORD *)(v11 + 32) = v22;
  *(_QWORD *)(v11 + 40) = v23;
  *(_DWORD *)(v11 + 48) = v24;
  ++v6[1];
  clear_tinfo_t();
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( src )
    qfree();
  return 0;
}
