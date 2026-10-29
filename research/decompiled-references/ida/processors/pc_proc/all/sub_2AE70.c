__int64 __fastcall sub_2AE70(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax

  v4 = *(_QWORD *)(a2 + 16);
  if ( a3 == 81 )
  {
    ++v4;
    if ( (unsigned __int8)equal_bytes() )
    {
      v14 = *(_QWORD *)(a2 + 16);
      v15 = sub_23F00((__int64)a1);
      v16 = a1[1];
      v17 = v15;
      v18 = a1[2];
      if ( a1[3] < (unsigned __int64)(v18 + 1) )
      {
        v20 = qvector_reserve();
        a1[1] = v20;
        v16 = v20;
        v18 = a1[2];
      }
      v19 = 32 * v18 + v16;
      *(_QWORD *)v19 = v14;
      *(_QWORD *)(v19 + 8) = v17;
      *(_QWORD *)(v19 + 16) = 4;
      *(_DWORD *)(v19 + 24) = 0xFFFF;
      ++a1[2];
      goto LABEL_3;
    }
    return 0;
  }
  if ( !(unsigned __int8)equal_bytes() )
    return 0;
LABEL_3:
  sub_2A980((__int64)a1, v4, 12, 1);
  v5 = (int)(8 * get_dword());
  add_auto_stkpnt();
  v6 = *(_QWORD *)(a2 + 16);
  v7 = sub_23F00((__int64)a1);
  v8 = a1[1];
  v9 = v7;
  v10 = a1[2];
  if ( a1[3] < (unsigned __int64)(v10 + 1) )
  {
    v13 = qvector_reserve();
    a1[1] = v13;
    v8 = v13;
    v10 = a1[2];
  }
  v11 = 32 * v10 + v8;
  *(_QWORD *)v11 = v6;
  *(_QWORD *)(v11 + 8) = v9;
  *(_QWORD *)(v11 + 16) = v5;
  *(_DWORD *)(v11 + 24) = 0xFFFF;
  ++a1[2];
  decode_insn();
  return 1;
}

