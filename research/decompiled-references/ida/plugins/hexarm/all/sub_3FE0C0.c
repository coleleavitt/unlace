__int64 __fastcall sub_3FE0C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5, __int64 a6, int a7, int *a8)
{
  int *v8; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm1
  __m128 v14; // xmm0
  __int64 v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rsi
  __int16 v18; // r12
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int8 v25; // [rsp+23h] [rbp-65h]
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-50h] BYREF
  __m128i v29; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v8 = a8;
  v27 = 0;
  v25 = sub_3FDEB0(&v27, a2);
  if ( v25 )
  {
    *(_BYTE *)a1 = 15;
    copy_tinfo_t();
    *(_DWORD *)(a1 + 4) = get_tinfo_size();
    v28 = 0;
    v29 = 0;
    v10 = qvector_reserve();
    v28 = v10;
    v29.m128i_i64[0] = 4;
    *(_WORD *)v10 = 24950;
    *(_BYTE *)(v10 + 2) = 108;
    *(_BYTE *)(v28 + 3) = 0;
    v11 = qalloc_or_throw();
    *(_DWORD *)v11 = 0;
    v12 = v27;
    *(_QWORD *)(v11 + 8) = 0;
    v13 = _mm_loadu_si128(&v29);
    *(_QWORD *)(v11 + 48) = v12;
    v14 = _mm_loadh_ps((const double *)&v28);
    *(__m128i *)(v11 + 32) = v13;
    *(__m128 *)(v11 + 16) = v14;
    *(_QWORD *)(a1 + 8) = v11;
    v28 = 0;
    v27 = 0;
    v29 = 0;
    v15 = qalloc_or_throw();
    *(_QWORD *)v15 = 0;
    v16 = (__int64 *)v15;
    *(_OWORD *)(v15 + 8) = 0;
    if ( a7 > 0 )
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      while ( 1 )
      {
        if ( v19 < v20 + 1 )
        {
          v23 = qvector_reserve();
          *v16 = v23;
          v17 = v23;
          v20 = v16[1];
        }
        v21 = v17 + 24 * v20;
        *(_QWORD *)v21 = 0;
        *(_DWORD *)(v21 + 16) = 0xFFFF;
        *(_QWORD *)(v21 + 8) = 0;
        ++v16[1];
        *(_WORD *)(v21 + 16) = v18;
        *(_WORD *)(v21 + 18) = a5;
        v22 = *v8;
        cleanup_argloc();
        *(_DWORD *)v21 = 3;
        v18 += a5;
        ++v8;
        *(_DWORD *)(v21 + 8) = v22;
        if ( &a8[a7] == v8 )
          break;
        v20 = v16[1];
        v19 = v16[2];
        v17 = *v16;
      }
    }
    v24 = *(_QWORD *)(a1 + 8);
    cleanup_argloc();
    if ( v16 )
    {
      *(_DWORD *)v24 = 2;
      *(_QWORD *)(v24 + 8) = v16;
    }
    if ( v28 )
    {
      v29.m128i_i64[0] = 0;
      qfree();
    }
  }
  clear_tinfo_t();
  return v25;
}

