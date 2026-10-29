unsigned __int64 __fastcall sub_120A10(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v8; // rsi
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18[3]; // [rsp+8h] [rbp-30h] BYREF

  v8 = (unsigned int)a4;
  v11 = sub_32ABC0(a3, a4, 0);
  v12 = (__m128i)(unsigned __int64)v11;
  if ( *(_BYTE *)a1 == 2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = v11;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v11;
    **(_QWORD **)(a1 + 8) = a5;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a6;
    *(_WORD *)(a1 + 2) = 0;
  }
  else
  {
    v18[0].m128i_i64[0] = v11;
    sub_11CDA0(a1);
    *(_BYTE *)a1 = 2;
    v16 = j__qalloc_or_throw(32, v8, v14, v15);
    v17 = _mm_loadl_epi64(v18);
    *(_QWORD *)v16 = a5;
    v12 = _mm_unpacklo_epi64(v17, v17);
    *(_DWORD *)(v16 + 8) = a6;
    *(__m128i *)(v16 + 16) = v12;
    *(_QWORD *)(a1 + 8) = v16;
  }
  result = a4;
  if ( (unsigned __int64)a4 > 8 )
  {
    *(_DWORD *)(a1 + 4) = 8;
    if ( a5 == -1 )
    {
      if ( !under_debugger )
        sub_383060(0xC9A1u, *(double *)v12.m128i_i64);
      BUG();
    }
    return sub_1207E0((char *)a1, a2, 8, a5, a4, v12);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = a4;
  }
  return result;
}

