__int64 __fastcall sub_1C940(__int64 a1, _QWORD *a2, __int64 a3)
{
  const char *v5; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 i; // rax
  const char *v12; // rdx
  const char *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  const char *v22; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 2798) = 0;
  *(_QWORD *)(a1 + 2784) = -1;
  netnode_check(&v22, "$ dwarf mappings lut", 0, 0);
  v5 = v22;
  *(_QWORD *)(a1 + 2776) = v22;
  if ( v5 != (const char *)-1LL )
  {
    v7 = ea2node(a2[1]);
    v8 = ea2node(*a2);
    v9 = *(_QWORD *)(a1 + 2776);
    v10 = v8;
    v23 = 0;
    v22 = nullptr;
    for ( i = netnode_qhashfirst(v9, &v22, 72); i >= 0; i = netnode_qhashnext(*(_QWORD *)(a1 + 2776), &v22, v12, 72) )
    {
      v13 = src;
      if ( (_QWORD)v23 )
        v13 = v22;
      v14 = netnode_hashval_long(*(_QWORD *)(a1 + 2776), v13, 72);
      if ( v14 < v7 && v14 >= v10 )
      {
        v15 = a3 + v14;
        v16 = src;
        if ( (_QWORD)v23 )
          v16 = v22;
        v17 = *(_QWORD *)(a1 + 2776);
        v20 = v15;
        netnode_hashset(v17, v16, &v20, 8, 72);
      }
      v12 = src;
      if ( (_QWORD)v23 )
        v12 = v22;
    }
    v18 = netnode_altval(*(_QWORD *)(a1 + 2776), 1, 65);
    if ( v18 < v7 && v18 >= v10 )
    {
      v19 = *(_QWORD *)(a1 + 2776);
      v21 = v18 + a3;
      netnode_supset(v19, 1, &v21, 8, 65);
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
      if ( *(_QWORD *)(a1 + 144) != -1 )
        return netnode_check(a1 + 144, *(_QWORD *)(a1 + 120), 0, 1);
      return v24 - __readfsqword(0x28u);
    }
  }
  if ( *(_QWORD *)(a1 + 144) == -1 )
    return v24 - __readfsqword(0x28u);
  return netnode_check(a1 + 144, *(_QWORD *)(a1 + 120), 0, 1);
}

