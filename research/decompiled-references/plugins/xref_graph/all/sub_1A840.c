unsigned __int64 __fastcall sub_1A840(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  const char *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v7 = -1;
  netnode_check(&v8, "$ xref graph names", 0, 0);
  if ( v8 != -1 )
  {
    netnode_check(&v7, "$ xref graph names", 0, 1);
    netnode_supdel_all(v7, 83);
    v2 = *(_QWORD *)(a1 + 1760);
    v3 = v2 + 24LL * *(_QWORD *)(a1 + 1768);
    if ( v3 != v2 )
    {
      v4 = 0;
      do
      {
        v5 = s1;
        if ( *(_QWORD *)(v2 + 8) )
          v5 = *(const char **)v2;
        v6 = v4;
        v2 += 24;
        ++v4;
        netnode_supset(v7, v6, v5, 0, 83);
      }
      while ( v3 != v2 );
    }
  }
  return v9 - __readfsqword(0x28u);
}
