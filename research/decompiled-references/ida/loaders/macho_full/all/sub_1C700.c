__int64 __fastcall sub_1C700(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rbp
  __int64 v4; // r12
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  struct _Unwind_Exception *v20; // rbx
  __int64 v21; // [rsp-18h] [rbp-18h]
  void *v22; // [rsp-10h] [rbp-10h]
  __int64 v23; // [rsp-8h] [rbp-8h]

  if ( *(int *)(a1 + 536) <= 0 )
    return 0;
  v23 = v4;
  v22 = v3;
  v21 = v2;
  if ( a2 >= *(_QWORD *)(a1 + 632) )
  {
    if ( !under_debugger )
    {
      v20 = (struct _Unwind_Exception *)interr();
      operator delete(v3, 0x30u);
      _Unwind_Resume(v20);
    }
    BUG();
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * (int)a2);
  if ( !sub_1C420((_QWORD *)a1, v6 & *(_QWORD *)(*(_QWORD *)a1 + 16LL)) )
    return 0;
  v7 = operator new(0x30u);
  v11 = *(_QWORD *)(a1 + 536);
  v12 = v7;
  v13 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v12 = off_63F38;
  v14 = *(_QWORD *)(a1 + 528);
  *(_QWORD *)(v12 + 24) = v13;
  v15 = v14 + 32 * v11;
  if ( v14 == v15 )
    goto LABEL_13;
  v16 = v14;
  while ( 1 )
  {
    v8 = ~(unsigned __int8)*(_DWORD *)(v16 + 24) & 5;
    if ( (~(unsigned __int8)*(_DWORD *)(v16 + 24) & 5) == 0 )
      break;
    v16 += 32;
    if ( v15 == v16 )
      goto LABEL_13;
  }
  if ( !v16 )
  {
LABEL_13:
    sub_112F0((__int64)"Read/execute region not found in the cache", v11, v8, v15, v9, v10, v21, v22, v23);
    *(_QWORD *)(v12 + 8) = 0;
    *(_OWORD *)(v12 + 32) = 0;
  }
  else
  {
    v17 = *(unsigned int *)(a1 + 768);
    *(_QWORD *)(v12 + 40) = *(_QWORD *)(v16 + 16) + v6 - *(_QWORD *)v16;
    v18 = _mm_loadu_si128((const __m128i *)(v14 + 32LL * ((int)v11 - 1) + 8));
    *(_QWORD *)(v12 + 32) = v17;
    *(_QWORD *)(v12 + 8) = _mm_add_epi64(v18, _mm_srli_si128(v18, 8)).m128i_u64[0];
    if ( !v17 )
      *(_QWORD *)(v12 + 32) = *(_QWORD *)(v16 + 8);
  }
  *(_DWORD *)(v12 + 16) = 0;
  return create_generic_linput();
}

