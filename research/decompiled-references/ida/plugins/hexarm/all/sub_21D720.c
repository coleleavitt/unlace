__int64 __fastcall sub_21D720(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-58h]
  _QWORD v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x2F) != 0xD )
    return 1;
  v7 = (__int64 *)sub_21CE20((__int64 *)(a1 + 96), *(_QWORD *)(a1 + 16), a2);
  v8 = *v7;
  v9 = *v7 + 8 * v7[1];
  if ( v9 == *v7 )
    return 1;
  v18 = a4;
  while ( 1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
    v11 = *(_QWORD *)v8 + 24LL;
    if ( sub_11C4C0(*(_DWORD *)(v10 + 4)) || (unsigned int)(**(_DWORD **)(v11 + 40) - 56) <= 1 && !*(_BYTE *)(v11 + 52) )
      goto LABEL_16;
    v12 = sub_334E80(0, a3, *(_QWORD *)(v11 + 16) + v18, *(int *)(v10 + 4), 1);
    if ( (_BYTE)v12 )
      goto LABEL_16;
    v13 = *(_QWORD *)(v11 + 40);
    if ( *(_DWORD *)v13 != 4 && (*(_DWORD *)v13 != 67 || *(_DWORD *)(v13 + 36) != *(_DWORD *)(v13 + 68)) )
      return v12;
    v14 = v13 + 64;
    if ( *(_BYTE *)(v11 + 52) )
      v14 = v13 + 32;
    v15 = *(_QWORD *)(v13 + 24);
    v16 = *(_QWORD *)(a1 + 16);
    v19[0] = 0;
    if ( !(unsigned __int8)sub_242B30(v16, v15, v14, v19, 0) )
      break;
    clear_tinfo_t();
LABEL_16:
    v8 += 8;
    if ( v9 == v8 )
      return 1;
  }
  clear_tinfo_t();
  return 0;
}

