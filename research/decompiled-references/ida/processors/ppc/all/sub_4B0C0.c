unsigned __int64 __fastcall sub_4B0C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  bool v4; // zf
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 288) == 3;
  v12 = __readfsqword(0x28u);
  if ( v4 )
  {
    invalidate_regfinder_cache(-1, -1, 0);
    v9 = getinf(20);
    v10 = getinf(19);
    auto_mark_range(v10, v9, 40);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) == a2 )
    v3 = -1;
  *(_QWORD *)(a1 + 432) = v3;
  if ( a3 )
  {
    v7 = ea2node(v3);
    v8 = *(_QWORD *)(a1 + 120);
    v11 = v7 + 1;
    netnode_supset(v8, -5, &v11, 8, 65);
  }
  return v12 - __readfsqword(0x28u);
}

