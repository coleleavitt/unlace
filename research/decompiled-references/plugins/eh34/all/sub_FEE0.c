unsigned __int64 __fastcall sub_FEE0(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v7; // rsi
  unsigned int v10; // r15d
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 i; // r12
  size_t v26; // rbp
  __int64 v27; // rdi
  size_t v28; // rbp
  void *v29; // r12
  void *v30; // r13
  bool v31; // zf
  __m128i v32; // xmm0
  void *v33; // rax
  const void *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __m128i v37; // [rsp+0h] [rbp-B8h] BYREF
  int v38; // [rsp+1Ch] [rbp-9Ch] BYREF
  void *v39; // [rsp+20h] [rbp-98h] BYREF
  size_t v40[2]; // [rsp+28h] [rbp-90h] BYREF
  char v41; // [rsp+38h] [rbp-80h]
  __m128i src; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v43; // [rsp+50h] [rbp-68h]
  __int64 *v44; // [rsp+58h] [rbp-60h] BYREF
  __int64 *v45; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  unsigned __int64 v47; // [rsp+78h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v10 = *(_DWORD *)(v7 + 64);
    if ( v10 == a6 )
    {
      sub_60880(a1, v7);
      v12 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)(a1 + 188) )
        JUMPOUT(0x60510);
      v13 = *(_QWORD *)(a1 + 216);
      v14 = *(_QWORD *)(a1 + 176);
      v37.m128i_i64[0] = *(_QWORD *)(v13 + 16);
      src.m128i_i32[2] = a3 + 1;
      v15 = v10 + sub_61040(a1, v12, v14, v13, a1 + 1152);
      v16 = *(__int64 **)(a1 + 216);
      src.m128i_i64[0] = v37.m128i_i64[0];
      v45 = v16;
      src.m128i_i8[12] = 1;
      v43 = (_QWORD *)__PAIR64__(v10, a5);
      LODWORD(v44) = v15;
      BYTE4(v44) = 1;
      sub_FC00((const __m128i **)(a1 + 1080), &src);
      sub_62C60(&src, a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 216), a5, v15);
      v17 = sub_26300(*(_QWORD *)(a1 + 216));
      sub_269C0(&v39, *(_QWORD *)(a1 + 216), &src, v17);
      if ( v41 )
      {
        v28 = v40[0];
        v29 = nullptr;
        if ( v40[0] )
        {
          v29 = (void *)qalloc_or_throw(v40[0]);
          memcpy(v29, v39, v28);
        }
        v30 = v39;
        v31 = *(_BYTE *)(a1 + 168) == 0;
        v39 = nullptr;
        v32 = (__m128i)_mm_loadh_ps((const double *)&v40[1]);
        *(_OWORD *)v40 = 0;
        if ( !v31 )
        {
          v36 = *(_QWORD *)(a1 + 144);
          *(_BYTE *)(a1 + 168) = 0;
          if ( v36 )
          {
            *(_QWORD *)(a1 + 152) = 0;
            v37 = v32;
            qfree(v36);
            v32 = _mm_load_si128(&v37);
          }
        }
        *(_QWORD *)(a1 + 144) = v30;
        *(_BYTE *)(a1 + 168) = 1;
        *(__m128i *)(a1 + 152) = v32;
        if ( v29 )
          qfree(v29);
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 216);
        sub_DD60(*(_QWORD **)(v18 + 80));
        *(_QWORD *)(v18 + 80) = 0;
        *(_QWORD *)(v18 + 88) = v18 + 72;
        *(_QWORD *)(v18 + 96) = v18 + 72;
        *(_QWORD *)(v18 + 104) = 0;
        v21 = v43;
        if ( v43 )
        {
          *(_DWORD *)(v18 + 72) = src.m128i_i32[2];
          *(__m128 *)(v18 + 80) = _mm_loadh_ps((const double *)&v44);
          v19 = (__int64)v45;
          *(_QWORD *)(v18 + 96) = v45;
          v21[1] = v18 + 72;
          *(_QWORD *)(v18 + 104) = v46;
          v43 = nullptr;
          v44 = &src.m128i_i64[1];
          v45 = &src.m128i_i64[1];
          v46 = 0;
        }
        v22 = *(_QWORD *)(a1 + 216);
        v23 = *(_QWORD *)(v22 + 88);
        for ( i = v22 + 72; i != v23; v23 = std::_Rb_tree_increment(v23) )
        {
          v38 = *(_DWORD *)(v23 + 32);
          sub_FDC0((_QWORD *)(a1 + 656), &v38, (__int64)v21, v19, v20);
        }
      }
      if ( v41 && v39 )
      {
        v40[0] = 0;
        qfree(v39);
      }
      sub_DD60(v43);
    }
    else
    {
      sub_64B50(
        (unsigned int)&src,
        *(_QWORD *)(a1 + 32),
        (unsigned int)"inlined_func: range [%d,%d] is not at the end of the mba (qty %d)",
        a5,
        a6,
        v10);
      if ( *(_BYTE *)(a1 + 168) )
      {
        v35 = *(_QWORD *)(a1 + 144);
        *(_BYTE *)(a1 + 168) = 0;
        if ( v35 )
        {
          *(_QWORD *)(a1 + 152) = 0;
          qfree(v35);
        }
      }
      v26 = src.m128i_u64[1];
      *(_QWORD *)(a1 + 144) = 0;
      *(_OWORD *)(a1 + 152) = 0;
      if ( v26 )
      {
        v33 = (void *)qalloc_or_throw(v26);
        *(_QWORD *)(a1 + 144) = v33;
        v34 = (const void *)src.m128i_i64[0];
        *(_QWORD *)(a1 + 160) = v26;
        memcpy(v33, v34, v26);
        *(_QWORD *)(a1 + 152) = v26;
      }
      v27 = src.m128i_i64[0];
      *(_BYTE *)(a1 + 168) = 1;
      if ( v27 )
      {
        src.m128i_i64[1] = 0;
        qfree(v27);
      }
    }
  }
  return v47 - __readfsqword(0x28u);
}
