__int64 __fastcall sub_4F800(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *func; // rax
  _QWORD *v8; // rbx
  unsigned __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 120);
  v10 = __readfsqword(0x28u);
  v9 = a3 & *(_QWORD *)(v3 + 16);
  netnode_supset(v4, a2, &v9, 8, 839);
  if ( a3 > 0xFFFFFFFFFFFFFFFCLL )
    return v10 - __readfsqword(0x28u);
  func = (_QWORD *)get_func(a2);
  v8 = func;
  if ( !func )
    return v10 - __readfsqword(0x28u);
  invalidate_regfinder_cache(*func, -1, 0);
  return auto_mark_range(*v8, v8[1], 40);
}

