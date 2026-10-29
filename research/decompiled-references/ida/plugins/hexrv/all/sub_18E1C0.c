__int64 __fastcall sub_18E1C0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  char v11; // dl
  char v12; // cl
  char v13; // dl
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // [rsp+0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+8h] [rbp-50h]
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD **)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 136);
  v24 = __readfsqword(0x28u);
  v9 = &v6[v7];
  if ( v6 != v9 )
  {
    while ( a2[1] != *v6 )
    {
      if ( v9 == ++v6 )
        goto LABEL_6;
    }
    if ( v9 != v6 )
    {
      if ( !under_debugger )
        sub_37DDE0(51537);
LABEL_27:
      BUG();
    }
  }
LABEL_6:
  sub_18D880((_QWORD *)(a1 + 16), a2);
  v10 = sub_18DDF0(a1 + 16, a2[1], nullptr);
  v12 = v11;
  v13 = *(_BYTE *)(a3 + 8);
  if ( v13 == v12 && *(_QWORD *)a3 == v10 )
  {
    sub_18D5E0(a1, a2, a3, a4);
    return 1;
  }
  if ( a4 != -1 )
    return 0;
  v15 = a2[1];
  if ( *(_DWORD *)v15 != 12 )
  {
    if ( !under_debugger )
      sub_37DDE0(51667);
    goto LABEL_27;
  }
  v16 = *(_BYTE *)(v15 + 32);
  if ( v16 == 1 )
  {
    v17 = *(int *)(v15 + 40);
  }
  else
  {
    if ( v16 == 5 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 8LL);
      if ( v13 != 5 )
        goto LABEL_14;
LABEL_20:
      v18 = v15 + 32;
      if ( v17 == *(_QWORD *)a3 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v16 = 0;
    v17 = -1;
  }
  if ( v13 == v16 )
    goto LABEL_20;
LABEL_14:
  v18 = v15 + 48;
LABEL_15:
  v23 = 0;
  v22 = 0xFFFFFFFF00000000LL;
  v19 = j__qalloc_or_throw();
  v20 = *(_QWORD *)(a2[1] + 24);
  *(_QWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 56) = 0;
  *(_QWORD *)(v19 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 72) = 0;
  sub_32B5A0(v19, v20);
  LOBYTE(v22) = 4;
  v23 = v19;
  *(_DWORD *)v19 = 13;
  sub_120CC0(v19 + 32, (unsigned __int8 *)v18);
  sub_120CC0(v19 + 48, (unsigned __int8 *)(a1 + 192));
  v21 = *(_DWORD *)(v18 + 4);
  *(_DWORD *)(v19 + 68) = v21;
  HIDWORD(v22) = v21;
  sub_118550((char *)v18, (char *)&v22);
  sub_1188E0((__int64)&v22);
  return 1;
}

