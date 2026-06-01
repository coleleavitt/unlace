unsigned __int64 __fastcall sub_58880(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v7[1] = __readfsqword(0x28u);
  v3 = netnode_altval(v2, 1, 83);
  if ( !v3 )
  {
    if ( !under_debugger )
      interr(30586);
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v3 | 0x8000000000000000LL;
  v7[0] = v3 - 1;
  netnode_supset(v4, 1, v7, 8, 83);
  return v5;
}
