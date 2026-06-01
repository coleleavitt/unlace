__int64 __fastcall sub_3E8E80(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  char v7; // al
  unsigned __int16 v9; // ax
  int v10; // eax
  unsigned __int8 v11; // si
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // r12d
  char v24; // [rsp+Fh] [rbp-69h]
  __int64 v25; // [rsp+10h] [rbp-68h] BYREF
  int v26; // [rsp+18h] [rbp-60h]
  _QWORD v27[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(_BYTE *)(a1 + 384);
  v27[3] = __readfsqword(0x28u);
  v24 = v7;
  if ( a2 )
  {
    sub_3E8DC0((_QWORD *)(a1 + 24), (char *)(a1 + 424));
    *(_BYTE *)(a1 + 384) = netnode_charval();
  }
  v9 = *(_WORD *)(a1 + 48);
  if ( v9 <= 4u
    || v9 == 43
    || (v10 = *(_DWORD *)(a1 + 52),
        v11 = v10 & 0x1F,
        a3 = (v10 & 0x1Fu) - 1,
        (unsigned __int8)((*(_BYTE *)(a1 + 52) & 0x1F) - 1) > 0xEu) )
  {
    v22 = sub_3E7480(a1, 0, a6, a3, a4, a5);
    if ( !a2 )
      return v22;
LABEL_11:
    sub_3E8DC0((_QWORD *)(a1 + 24), (char *)(a1 + 424));
    *(_BYTE *)(a1 + 384) = v24;
    return v22;
  }
  if ( (v10 & 0x10) != 0 )
    v11 = 16;
  v12 = sub_3E6620(a1, v11, 1);
  v13 = *(_QWORD *)(a1 + 40);
  v14 = *(_QWORD *)(a1 + 8);
  v25 = 0x100000001LL;
  v26 = v12;
  v15 = sub_61A50(v14, v13, 2);
  v16 = sub_61A50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 440), 2);
  v17 = *(_DWORD *)(v16 + 72);
  v27[0] = 0xFFFFFFFF00000007LL;
  v27[1] = v17;
  sub_1CF350(a1, 42, (unsigned __int8 *)&v25, nullptr, (unsigned __int8 *)v27);
  *(_QWORD *)(a1 + 16) = v15;
  *(_DWORD *)(v15 + 24) |= 0x4000u;
  v21 = sub_3E7480(a1, 0, a6, v18, v19, v20);
  *(_QWORD *)(a1 + 16) = v16;
  v22 = v21;
  sub_1166E0((__int64)v27);
  sub_1166E0((__int64)&v25);
  if ( a2 )
    goto LABEL_11;
  return v22;
}

