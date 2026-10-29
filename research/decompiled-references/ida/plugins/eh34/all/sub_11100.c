__int64 __fastcall sub_11100(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r15d
  __m128i v10; // xmm0
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  _BOOL8 v18; // rdi
  __int64 v20; // rax
  int v21; // ecx
  int v22; // [rsp+Ch] [rbp-3Ch]

  v5 = operator new(0x58u);
  v9 = *(_DWORD *)a3;
  v10 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  v11 = v5;
  v12 = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 32) = 0;
  *(_DWORD *)(v5 + 32) = v9;
  v13 = *(_QWORD *)(a3 + 8);
  *(__m128i *)(v11 + 72) = v10;
  *(_QWORD *)(v11 + 40) = v13;
  v14 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(a3 + 40) = 0;
  *(_QWORD *)(v11 + 48) = v14;
  LOWORD(v14) = *(_WORD *)(a3 + 24);
  v15 = a2;
  *(_QWORD *)(v11 + 64) = v12;
  *(_WORD *)(v11 + 56) = v14;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v6 = a1[4];
      v15 = 0;
      if ( *(_DWORD *)(v6 + 32) < v9 )
        goto LABEL_6;
    }
LABEL_5:
    v15 = sub_C900((__int64)a1, (unsigned int)v9, v6, v7, v8);
    goto LABEL_6;
  }
  v16 = *(unsigned int *)(a2 + 32);
  if ( (int)v16 > v9 )
  {
    v6 = a2;
    if ( a1[3] == a2 )
      goto LABEL_6;
    v17 = std::_Rb_tree_decrement(a2, a2, a2, v16, v8);
    v6 = v17;
    if ( *(_DWORD *)(v17 + 32) >= v9 )
      goto LABEL_5;
    if ( *(_QWORD *)(v17 + 24) )
      v6 = a2;
    else
      v15 = 0;
LABEL_6:
    if ( v6 )
    {
      if ( a1 + 1 == (_QWORD *)v6 || v15 )
      {
        v18 = 1;
LABEL_10:
        v15 = v11;
        std::_Rb_tree_insert_and_rebalance(v18, v11, v6, a1 + 1);
        ++a1[5];
        return v15;
      }
      goto LABEL_27;
    }
    goto LABEL_12;
  }
  v22 = *(_DWORD *)(a2 + 32);
  if ( (int)v16 >= v9 )
    goto LABEL_12;
  if ( a1[4] != a2 )
  {
    v20 = std::_Rb_tree_increment(a2);
    v6 = v20;
    if ( *(_DWORD *)(v20 + 32) > v9 )
    {
      v21 = v22;
      if ( !*(_QWORD *)(a2 + 24) )
      {
        v6 = a2;
        if ( a2 )
          goto LABEL_28;
        goto LABEL_12;
      }
      v15 = v20;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v6 = a2;
  if ( a2 )
  {
LABEL_27:
    v21 = *(_DWORD *)(v6 + 32);
LABEL_28:
    v18 = v9 < v21;
    goto LABEL_10;
  }
LABEL_12:
  if ( v11 )
  {
    if ( v12 )
    {
      *(_QWORD *)(v11 + 72) = 0;
      qfree(v12);
    }
    operator delete((void *)v11, 0x58u);
  }
  return v15;
}

