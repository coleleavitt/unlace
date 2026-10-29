void __fastcall sub_3EB3E0(__int64 a1, int a2, int a3, int a4, double a5)
{
  char v5; // al
  int v8; // r15d
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // r14
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // ebp
  __int64 v17; // [rsp+18h] [rbp-40h]

  if ( (*(_BYTE *)(a1 + 52) & 4) == 0 || (v5 = *(_BYTE *)(a1 + 56)) == 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCC0u, a5);
LABEL_27:
    BUG();
  }
  if ( v5 == 100 )
  {
    v8 = 8;
    goto LABEL_6;
  }
  if ( v5 != 115 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCC1u, a5);
    goto LABEL_27;
  }
  v8 = 4;
LABEL_6:
  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(unsigned __int16 *)(a1 + 48) - 178;
  if ( *(_DWORD *)(v9 + 644) > a2 || *(_DWORD *)(v9 + 672) < a2 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCC2u, a5);
    goto LABEL_27;
  }
  v11 = a2;
  if ( (((unsigned __int8)*(_WORD *)(a1 + 48) + 78) & 8) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 4) == 0 )
  {
    sub_3EAB70(a1, 0x1Fu, v8, a3, a4, a2, -1);
    sub_3EAE40((__int64 *)a1, a2, (__int64)"__fp_invalid_operation");
  }
  v12 = dword_415E40[(v10 >> 1) & 3];
  if ( v12 == 3 )
    sub_1D1F50(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, v11, 0);
  else
    sub_3EAB70(a1, v12, v8, a3, a4, v11, -1);
  if ( (v10 & 9) == 1 && (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 4) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 832);
    v14 = *(_QWORD *)(v13 + 760);
    if ( !v14 )
      sub_3E5460(a5);
    v15 = *(int *)(*(_QWORD *)(v13 + 752) + 4 * v14 - 4);
    *(_QWORD *)(v13 + 760) = v14 - 1;
    v16 = v15;
    v17 = v15;
    sub_3EAB70(a1, 0x1Fu, v8, a3, a4, v15, -1);
    sub_1D1F50(a1, 0x13u, 1, v11, v17, v11, 0);
    sub_3E8540(*(_QWORD *)(a1 + 832), v16);
  }
}

