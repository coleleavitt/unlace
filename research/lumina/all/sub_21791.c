__int64 __fastcall sub_21791(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  char v5; // al
  unsigned int v6; // r12d
  unsigned __int8 v7; // al
  char v8; // al
  unsigned int v9; // r15d
  unsigned __int8 v10; // al
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-38h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    v4 = sub_E2050();
  v5 = *(_BYTE *)(a1 + 31);
  if ( v5 )
  {
    v7 = v5 - 1;
    *(_BYTE *)(a1 + 31) = v7;
    v6 = *(_DWORD *)(a1 + 4LL * v7 + 216);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v6;
  }
  sub_E1710(v4, 71, 0, v6, 0);
  if ( (int)v3 <= 2 )
  {
    sub_E1710(v4, 12, a2, (unsigned int)(*(_DWORD *)(v4 + 144) + 2), 0);
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 31);
    if ( v8 )
    {
      v10 = v8 - 1;
      *(_BYTE *)(a1 + 31) = v10;
      v9 = *(_DWORD *)(a1 + 4LL * v10 + 216);
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 56) + 1;
      *(_DWORD *)(a1 + 56) = v9;
    }
    v11 = sub_E1710(v4, 117, 0, v9, 0);
    sub_DCC50(v4, v11, "", 0xFFFFFFFFLL);
    sub_E1710(v4, 57, v9, (unsigned int)(*(_DWORD *)(v4 + 144) + 2), a2);
    v12 = *(int *)(v4 + 144);
    if ( (int)v12 > 0 )
      *(_WORD *)(*(_QWORD *)(v4 + 136) + 24 * v12 - 22) = 83;
  }
  sub_E1710(v4, dword_1BAC80[v3], v6, (unsigned int)(*(_DWORD *)(v4 + 144) + 2), a2);
  v13 = *(int *)(v4 + 144);
  if ( (int)v13 > 0 )
    *(_WORD *)(*(_QWORD *)(v4 + 136) + 24 * v13 - 22) = 67;
  v14 = *(_QWORD *)(a1 + 160);
  if ( !v14 )
    v14 = a1;
  *(_BYTE *)(v14 + 33) = 1;
  sub_E1710(v4, 70, 1, 2, 0);
  sub_D04B0(v4, off_23A860[v3], 0xFFFFFFFFLL);
  if ( v6 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))sub_CEFE0)(a1, v6);
  else
    return v16;
}
