__int64 __fastcall sub_36AC0(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h]
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 72);
  v20[1] = __readfsqword(0x28u);
  if ( (_BYTE)v1 )
  {
    if ( !*(_BYTE *)(a1 + 73) )
    {
      sub_36960(a1, (_QWORD *)a1, "$ dex_meta", 0);
      sub_36960(a1, (_QWORD *)(a1 + 40), "$ dex_cmn", 0);
      *(_BYTE *)(a1 + 73) = 1;
      return 1;
    }
    if ( under_debugger )
LABEL_23:
      BUG();
    interr();
LABEL_21:
    if ( !under_debugger )
      interr();
    goto LABEL_23;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( !(unsigned __int8)sub_36960(a1, (_QWORD *)a1, "$ dex_meta", 0) )
    return v1;
  sub_34250(a1);
  if ( !*(_QWORD *)(a1 + 24) )
    goto LABEL_21;
  if ( !(unsigned __int8)sub_36960(a1, (_QWORD *)(a1 + 40), "$ dex_cmn", 0) )
    return v1;
  v4 = 1;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    return 1;
  while ( 1 )
  {
    v20[0] = -1;
    if ( !(unsigned __int8)sub_36960(a1, v20, "$ dex_var", v4) )
      break;
    v7 = *(_QWORD *)(a1 + 56);
    v8 = v20[0];
    if ( *(_QWORD *)(a1 + 64) >= (unsigned __int64)(v7 + 1) )
    {
      v6 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 64);
      v9 = qvector_reserve();
      v10 = *(_QWORD *)(a1 + 64);
      v11 = v9;
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(__int64 **)(a1 + 48);
      *(_QWORD *)(a1 + 64) = v18;
      v14 = v12 - 1;
      if ( v14 >= 0 )
      {
        v15 = v11;
        do
        {
          v16 = *v13;
          v15 += 8;
          ++v13;
          *(_QWORD *)(v15 - 8) = v16;
        }
        while ( v14-- != 0 );
      }
      v19 = v11;
      qfree();
      v6 = v19;
      v7 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = v19;
      *(_QWORD *)(a1 + 64) = v10;
    }
    ++v4;
    *(_QWORD *)(v6 + 8 * v7) = v8;
    ++*(_QWORD *)(a1 + 56);
    if ( v5 < v4 )
      return 1;
  }
  return v1;
}

