unsigned __int64 __fastcall sub_34250(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 v2; // r13
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  netnode_hashval();
  netnode_hashval();
  *(_BYTE *)(a1 + 12) = 0;
  if ( netnode_qgetblob() <= 0 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v7 + 1) )
    {
      v9 = qvector_reserve();
      *(_QWORD *)(a1 + 16) = v9;
      v8 = v9;
      v7 = *(_QWORD *)(a1 + 24);
    }
    *(_QWORD *)(v8 + 8 * v7) = 0;
    ++*(_QWORD *)(a1 + 24);
  }
  else
  {
    v1 = unpack_dw();
    v2 = v1;
    if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)v1 )
    {
      *(_QWORD *)(a1 + 16) = qvector_reserve();
      *(_QWORD *)(a1 + 24) = v2;
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v1;
      if ( !v1 )
        return v10 - __readfsqword(0x28u);
    }
    v3 = 8 * v2;
    v4 = 0;
    v5 = 0;
    do
    {
      v5 += unpack_dq();
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + v4) = v5;
      v4 += 8;
    }
    while ( v4 != v3 );
  }
  return v10 - __readfsqword(0x28u);
}

