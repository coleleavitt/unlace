__int64 __fastcall sub_33B40(__int64 a1, int a2, int a3, __int32 a4, int a5, __int64 a6, __int64 a7, char *s)
{
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 range; // rax
  __int64 *v14; // r13
  size_t v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  void *v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // rax
  int v22; // r13d
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  void *v29; // r14
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // [rsp+0h] [rbp-68h] BYREF
  void *v40; // [rsp+10h] [rbp-58h] BYREF
  __m128i v41; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v10 = *(_QWORD **)(a1 + 40);
  v42 = __readfsqword(0x28u);
  v11 = v10[30];
  if ( *(_QWORD *)(v10[1] + 16LL) != v11 && v11 != -1 )
  {
    if ( !v10[23] )
      return 0;
    v39.m128i_i32[0] = a4;
    range = rangeset_t_find_range();
    LOBYTE(a4) = v39.m128i_i8[0];
    if ( !range )
      return 0;
  }
  if ( (unsigned __int8)(a4 - 102) > 1u )
  {
    if ( a6 )
    {
      if ( ((a6 + 1) & 0xFFFFFFFFFFFFFEFFLL) != 0 )
      {
LABEL_9:
        v14 = *(__int64 **)(a1 + 56);
        if ( **(_DWORD **)(a1 + 80) != v14[1] )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        v40 = nullptr;
        v41 = 0;
        if ( s )
        {
          v15 = strlen(s);
          v39.m128i_i64[0] = v15 + 1;
          v40 = (void *)qvector_reserve();
          v41.m128i_i64[0] = v15 + 1;
          memmove(v40, s, v15);
          *((_BYTE *)v40 + v15) = 0;
        }
        v16 = *v14;
        v17 = v14[2];
        if ( (unsigned __int64)&v40 >= *v14 && (unsigned __int64)&v40 < v16 + 24 * v17 )
        {
          v29 = v40;
          v30 = _mm_loadl_epi64(&v41);
          v40 = nullptr;
          v31 = _mm_loadl_epi64((const __m128i *)&v41.m128i_u64[1]);
          v41 = 0;
          v32 = v14[1];
          v33 = *v14;
          if ( v14[2] < (unsigned __int64)(v32 + 1) )
          {
            v39.m128i_i64[1] = v31.m128i_i64[0];
            v39.m128i_i64[0] = v30.m128i_i64[0];
            v38 = qvector_reserve();
            *v14 = v38;
            v32 = v14[1];
            v33 = v38;
            v31 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
            v30 = _mm_loadl_epi64(&v39);
          }
          v34 = v33 + 24 * v32;
          *(_QWORD *)v34 = v29;
          *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v30, v31);
          v35 = v40;
          ++v14[1];
          if ( v35 )
          {
            v41.m128i_i64[0] = 0;
            qfree();
          }
        }
        else
        {
          v18 = v14[1];
          if ( v17 < v18 + 1 )
          {
            v37 = qvector_reserve();
            *v14 = v37;
            v16 = v37;
            v18 = v14[1];
          }
          v19 = v40;
          v20 = v16 + 24 * v18;
          *(__m128i *)(v20 + 8) = _mm_loadu_si128(&v41);
          *(_QWORD *)v20 = v19;
          v41 = 0;
          ++v14[1];
        }
        v21 = *(_DWORD **)(a1 + 80);
        v22 = (*v21)++;
        if ( !a6
          || a6 == 254
          || (v23 = 6120, a6 != 255) && (v23 = 0, a6 >= 0) && *(_QWORD *)(a1 + 72) >= (unsigned __int64)a6 )
        {
          v23 = 24 * a6;
        }
        v24 = (__int64 *)(**(_QWORD **)(a1 + 48) + v23);
        LODWORD(v40) = v22;
        v25 = v24;
        v26 = *v24;
        v27 = v24[2];
        v28 = v24[1];
        if ( v27 < v28 + 1 )
        {
          v36 = qvector_reserve();
          *v25 = v36;
          v26 = v36;
          v28 = v25[1];
        }
        *(_DWORD *)(v26 + 4 * v28) = v22;
        ++v25[1];
        return 0;
      }
      a6 = 255;
    }
    if ( sub_33950(*(_QWORD *)(a1 + 64), s, 0, 0) != -1 )
      return 0;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 13689LL) & 8) == 0 && a7 != get_qword() )
    patch_qword();
  return 0;
}

