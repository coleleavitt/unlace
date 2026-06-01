char __fastcall sub_14DC70(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  v2 = *a1;
  if ( *a1 > 0x29 )
    return 1;
  if ( v2 <= 4 )
  {
    if ( v2 )
    {
      if ( v2 != 4 )
        return 1;
      v6 = (__int64)(a1 + 8);
      return sub_14DB70(v6, a2);
    }
    return 0;
  }
  if ( ((1LL << v2) & 0x3FFFFEFC3A0LL) != 0 )
    return 0;
  if ( ((1LL << v2) & 0x3000) != 0 )
  {
    if ( sub_14DB70((__int64)(a1 + 8), a2) )
      return 1;
    v6 = (__int64)(a1 + 12);
    return sub_14DB70(v6, a2);
  }
  if ( v2 != 20 )
    return 1;
  v4 = sub_1186A0((__int64)a1, v10);
  v5 = v4;
  if ( !v4 )
    return 0;
  v7 = 0;
  v8 = 1;
  v9 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL), *(unsigned int *)(v4 + 4), 0);
  while ( sub_325C90(~v8, *(unsigned int *)(v5 + 4), 0) != v9 )
  {
    v8 |= 1LL << ++v7;
    if ( v7 == 3 )
      return 0;
  }
  return sub_14DB70(v10[0], a2);
}

