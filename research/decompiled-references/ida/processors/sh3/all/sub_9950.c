__int64 __fastcall sub_9950(__int64 a1, const void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  _QWORD v16[47]; // [rsp+0h] [rbp-178h] BYREF

  v16[45] = __readfsqword(0x28u);
  qmemcpy(v16, a2, 0x168u);
  if ( decode_prev_insn(v16, v16[2]) == -1 || !(unsigned __int8)has_insn_feature(LOWORD(v16[3]), 0x8000, v2, v3, v4, v5) )
    return 0;
  v11 = has_insn_feature(LOWORD(v16[3]), 2, v7, v8, v9, v10);
  if ( (_BYTE)v11 )
  {
    if ( BYTE1(v16[5]) == 7 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v13 = v16[7] + 16LL * v16[0];
      if ( v13 != v12 )
      {
        v12 &= v13;
        if ( v13 == -1 )
          v12 = -1;
      }
    }
    else
    {
      v15 = netnode_altval(*(_QWORD *)(a1 + 248), v16[2], 323);
      v12 = node2ea(v15);
    }
    return (unsigned int)func_does_return(v12) ^ 1;
  }
  else
  {
    v14 = LOWORD(v16[3]);
    LOBYTE(v11) = LOWORD(v16[3]) != 7;
    LOBYTE(v14) = LOWORD(v16[3]) != 13;
    return v14 & v11;
  }
}

