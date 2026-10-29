__int64 __fastcall sub_404E0(_QWORD *a1, int *a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __m128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rax

  v2 = a1[2];
  v3 = *a2;
  if ( !v2 )
  {
    if ( a1 + 1 != (_QWORD *)a1[3] )
    {
      v6 = std::_Rb_tree_decrement();
      if ( *(_DWORD *)(v6 + 32) >= v3 )
        return v6;
    }
    goto LABEL_9;
  }
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 32);
    v5 = *(_QWORD *)(v2 + 24);
    if ( v3 < v4 )
      v5 = *(_QWORD *)(v2 + 16);
    if ( !v5 )
      break;
    v2 = v5;
  }
  v6 = v2;
  if ( v3 >= v4 )
    goto LABEL_8;
  if ( a1[3] != v2 )
  {
    v12 = std::_Rb_tree_decrement();
    v4 = *(_DWORD *)(v12 + 32);
    v6 = v12;
LABEL_8:
    if ( v3 <= v4 )
      return v6;
  }
LABEL_9:
  v6 = operator new(0x58u);
  *(_DWORD *)(v6 + 32) = *a2;
  v7 = *((_QWORD *)a2 + 3);
  if ( v7 )
  {
    v8 = _mm_loadh_ps((const double *)a2 + 4);
    *(_DWORD *)(v6 + 48) = a2[4];
    v9 = *((_QWORD *)a2 + 5);
    *(__m128 *)(v6 + 56) = v8;
    *(_QWORD *)(v6 + 72) = v9;
    *(_QWORD *)(v7 + 8) = v6 + 48;
    v10 = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 3) = 0;
    *(_QWORD *)(v6 + 80) = v10;
    *((_QWORD *)a2 + 4) = a2 + 4;
    *((_QWORD *)a2 + 5) = a2 + 4;
    *((_QWORD *)a2 + 6) = 0;
  }
  else
  {
    *(_DWORD *)(v6 + 48) = 0;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = v6 + 48;
    *(_QWORD *)(v6 + 72) = v6 + 48;
    *(_QWORD *)(v6 + 80) = 0;
  }
  std::_Rb_tree_insert_and_rebalance();
  ++a1[5];
  return v6;
}

