__int64 __fastcall sub_3EE330(double a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v9; // r14
  int v10; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // r13d
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r10
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-60h]
  int v21; // [rsp+14h] [rbp-54h]
  __int64 v22; // [rsp+18h] [rbp-50h]

  v6 = *(unsigned __int8 *)(a2 + 3800);
  if ( !(_BYTE)v6 )
    return 0;
  if ( *(_BYTE *)a5 != 8 )
  {
    if ( *(_BYTE *)a5 == 1 )
    {
      v12 = *(_DWORD *)(a5 + 8);
      v13 = *(_DWORD *)(a2 + 444);
      if ( v12 == v13 || v12 == v13 + 1 )
      {
        sub_63E80(a3, *(_DWORD *)(a2 + 688), 3, a1);
      }
      else if ( v12 == *(_DWORD *)(a2 + 524) )
      {
        sub_63E80(a3, 0, 5, a1);
      }
    }
    return 0;
  }
  if ( (a6 & 0x800) != 0 )
    return 0;
  v9 = *(_QWORD *)(a5 + 8);
  v10 = *(_DWORD *)(v9 + 284);
  if ( v10 == 39 )
  {
    v21 = 4;
    v14 = 32;
  }
  else
  {
    if ( v10 != 40 )
      return 0;
    v21 = 8;
    v14 = 64;
  }
  v15 = v14 << 16;
  v20 = *(_QWORD *)(*(_QWORD *)(a4 + 64) + 920LL);
  if ( *(_QWORD *)(v9 + 32) != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xCD65u, a1);
    BUG();
  }
  sub_123EA0(a4, a3, *(_QWORD *)(v9 + 24), a6, 0xFFFF0000, a1);
  v16 = *(_QWORD *)(v9 + 24);
  v17 = v16 + 80;
  if ( *(_BYTE *)(v16 + 80) == 1 )
  {
    v18 = *(_DWORD *)(v16 + 88) + v21;
    v22 = v16 + 80;
    sub_3EBA80(v20 + 128, v18);
    v17 = v22;
    if ( v19 )
    {
      *(_DWORD *)(operator new(0x28u) + 32) = v18;
      std::_Rb_tree_insert_and_rebalance();
      v17 = v22;
      ++*(_QWORD *)(v20 + 168);
    }
  }
  sub_123EA0(a4, a3, v17, a6, v15, a1);
  return v6;
}

