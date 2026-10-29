__int64 __fastcall sub_1C580(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm0
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // [rsp-18h] [rbp-18h]
  void *v21; // [rsp-10h] [rbp-10h]
  __int64 v22; // [rsp-8h] [rbp-8h]

  if ( *(int *)(a1 + 536) <= 0 )
    return 0;
  v22 = v4;
  v21 = v3;
  v20 = v2;
  if ( a2 >= *(_QWORD *)(a1 + 560) )
  {
    if ( !under_debugger )
    {
      v19 = (struct _Unwind_Exception *)interr();
      operator delete(v3, 0x30u);
      _Unwind_Resume(v19);
    }
    BUG();
  }
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 552) + 32LL * (int)a2);
  v6 = sub_1C420((_QWORD *)a1, *v5 & *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  if ( !v6 )
    return 0;
  v8 = operator new(0x30u);
  v11 = v6[1];
  *(_QWORD *)v8 = off_63F38;
  *(_QWORD *)(v8 + 24) = v11;
  v12 = v6[67];
  v13 = v6[66];
  v14 = v13 + 32 * v12;
  if ( v13 == v14 )
    goto LABEL_13;
  v15 = v6[66];
  while ( 1 )
  {
    v7 = ~(unsigned __int8)*(_DWORD *)(v15 + 24) & 5;
    if ( (~(unsigned __int8)*(_DWORD *)(v15 + 24) & 5) == 0 )
      break;
    v15 += 32;
    if ( v14 == v15 )
      goto LABEL_13;
  }
  if ( !v15 )
  {
LABEL_13:
    sub_112F0((__int64)"Read/execute region not found in the cache", v12, v7, v14, v9, v10, v20, v21, v22);
    *(_QWORD *)(v8 + 8) = 0;
    *(_OWORD *)(v8 + 32) = 0;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = *v5 + *(_QWORD *)(v15 + 16) - *(_QWORD *)v15;
    v16 = *((unsigned int *)v6 + 192);
    v17 = _mm_loadu_si128((const __m128i *)(v13 + 32LL * ((int)v12 - 1) + 8));
    *(_QWORD *)(v8 + 32) = v16;
    *(_QWORD *)(v8 + 8) = _mm_add_epi64(v17, _mm_srli_si128(v17, 8)).m128i_u64[0];
    if ( !v16 )
      *(_QWORD *)(v8 + 32) = *(_QWORD *)(v15 + 8);
  }
  *(_DWORD *)(v8 + 16) = 0;
  return create_generic_linput();
}

