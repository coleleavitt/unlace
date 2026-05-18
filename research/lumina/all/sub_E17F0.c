__int64 __fastcall sub_E17F0(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        int a8)
{
  char v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx

  v10 = a6;
  v11 = sub_DBF10(*a1, 8 * a6 + 48);
  if ( v11 )
  {
    *v11 = 0;
    v12 = (__int64)v11;
    v11[3] = 0;
    *((_DWORD *)v11 + 9) = 0;
    *((_BYTE *)v11 + 42) = v10;
    v11[1] = a7;
    *((_DWORD *)v11 + 8) = *(_DWORD *)(a2 + 144);
    v13 = sub_E1710(a2, (a8 == 0) + 65, a3, a4, a5);
    sub_DCC50(a2, v13, v12, 4294967281LL, v14, v15);
    v16 = *(int *)(a2 + 144);
    if ( (int)v16 > 0 )
      *(_WORD *)(*(_QWORD *)(a2 + 136) + 24 * v16 - 22) = a8 & 0x2E;
  }
  else
  {
    v13 = 0;
    if ( (*(_BYTE *)(a7 + 4) & 0x10) != 0 )
      sub_C9250(*a1, (_QWORD *)a7);
  }
  return v13;
}
