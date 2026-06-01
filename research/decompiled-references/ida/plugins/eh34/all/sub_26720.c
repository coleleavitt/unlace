__int64 __fastcall sub_26720(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 *v6; // rdi
  int v7; // r12d
  int v9; // eax
  int v10; // r9d
  _QWORD *v11; // rax
  unsigned __int64 i; // rbx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm0
  int v25; // [rsp+Ch] [rbp-6Ch]
  _BOOL4 v26; // [rsp+Ch] [rbp-6Ch]
  __int64 v27; // [rsp+10h] [rbp-68h]
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  __m128i v29; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v6 = *(__int64 **)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 112);
  v30 = __readfsqword(0x28u);
  v9 = sub_1DEC0(v6, a3);
  if ( v9 != v7 )
  {
    if ( !a4 )
    {
      if ( !*(_BYTE *)(a2 + 432) )
      {
        sub_64B50(
          (unsigned int)&v28,
          *(_QWORD *)a2,
          (unsigned int)"precompute_states: expected minimum state %d != actual %d",
          v7,
          v9,
          v10);
        v23 = v28;
        v24 = _mm_loadu_si128(&v29);
        *(_BYTE *)(a1 + 24) = 1;
        *(_QWORD *)a1 = v23;
        *(__m128i *)(a1 + 8) = v24;
        return a1;
      }
      *(_BYTE *)(a2 + 433) = 1;
    }
    v7 = *(_DWORD *)(a2 + 116);
  }
  v11 = *(_QWORD **)(a2 + 8);
  for ( i = 0; i < v11[1]; ++i )
  {
    while ( !*(_QWORD *)(a2 + 32) )
    {
      if ( ++i >= v11[1] )
        goto LABEL_11;
    }
    v13 = 16 * i + *v11;
    if ( rangeset_t_find_range(a2 + 24) )
    {
      v17 = *(unsigned int *)(v13 + 8);
      if ( (int)v17 > v7 )
      {
        v25 = *(_DWORD *)(v13 + 8);
        v19 = sub_25960(a2 + 64, v17, v14, v15, v16);
        v21 = v25;
        if ( v20 )
        {
          v26 = 1;
          if ( !v19 && v20 != a2 + 72 )
            v26 = v21 < *(_DWORD *)(v20 + 32);
          v27 = v20;
          v22 = operator new(0x28u);
          *(_DWORD *)(v22 + 32) = *(_DWORD *)(v13 + 8);
          std::_Rb_tree_insert_and_rebalance(v26, v22, v27, a2 + 72);
          ++*(_QWORD *)(a2 + 104);
        }
      }
    }
    v11 = *(_QWORD **)(a2 + 8);
  }
LABEL_11:
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

