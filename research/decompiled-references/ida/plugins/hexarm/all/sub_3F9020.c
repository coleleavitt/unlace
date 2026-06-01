unsigned __int64 __fastcall sub_3F9020(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  char v6; // bp
  __int64 v8; // rax
  unsigned __int8 v9; // si
  int v10; // r13d
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, int); // rax
  int v16; // ecx
  unsigned __int8 v17; // si

  v6 = a5;
  v8 = *(_QWORD *)(a1 + 832);
  v9 = 2;
  v10 = *(_DWORD *)(v8 + 620);
  v11 = *(_DWORD *)(v8 + 624);
  if ( (a5 & 3) != 0 )
  {
    v9 = 1;
    if ( (a5 & 2) != 0 )
      a4 += 2;
  }
  v12 = (a5 >> 5) & 1;
  sub_3F8F20(a1, v9, 7u, a4, v10, (a5 & 0x20) != 0);
  v13 = *(_QWORD *)(a1 + 832);
  v14 = *(unsigned __int16 *)(a1 + 190);
  v15 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v13 + 168LL);
  if ( v15 == sub_3EA010 )
    v16 = sub_3EA010(v13, v14);
  else
    v16 = v15(v13, v14);
  v17 = 2;
  if ( (v6 & 0xC) != 0 )
  {
    v17 = 1;
    if ( (v6 & 8) != 0 )
      v16 += 2;
  }
  sub_3F8F20(a1, v17, 7u, v16, v11, v12);
  sub_3F56D0(a1, 0xEu, 7, v10, v11, v10, 0);
  return sub_3F8830(a1, v10, a2, a3, v6);
}

