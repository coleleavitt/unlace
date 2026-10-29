__int64 __fastcall sub_3F9150(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r14
  int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, int); // rax
  int v17; // r15d
  __int64 v19; // [rsp+0h] [rbp-58h]
  int v20; // [rsp+1Ch] [rbp-3Ch]

  v6 = a2;
  v7 = (int)a4;
  v8 = a3;
  v10 = *(_QWORD *)(a1 + 832);
  v11 = a5 & 3;
  v12 = *(int *)(v10 + 620);
  v20 = *(_DWORD *)(v10 + 624);
  if ( (_DWORD)v11 )
  {
    if ( (a5 & 2) != 0 )
      LODWORD(v8) = a3 + 2;
    v13 = v8;
    v8 = (int)v12;
    sub_3F8F20(a1, 1u, 2u, v13, v12, 1u);
  }
  if ( (a5 & 0xC) != 0 )
  {
    if ( (a5 & 8) != 0 )
      LODWORD(v7) = v7 + 2;
    sub_3F8F20(a1, 1u, 2u, v7, v20, 1u);
    v7 = v20;
  }
  if ( (a5 & 0x10) != 0 )
  {
    if ( *(_BYTE *)(a1 + 185) )
      v14 = *(unsigned __int16 *)(a1 + 190);
    else
      v14 = *(unsigned __int16 *)(a1 + 150);
    v15 = *(_QWORD *)(a1 + 832);
    v16 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v15 + 168LL);
    if ( v16 == sub_3EA010 )
      v17 = sub_3EA010(v15, v14);
    else
      v17 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64, int), __int64, __int64))v16)(
              v15,
              v14,
              sub_3EA010,
              a4,
              v11);
    sub_3F56D0(a1, 0xEu, 2, v8, v7, v12, 0);
    return sub_3F56D0(a1, 0xCu, 2, v12, v17, v6, 0);
  }
  else
  {
    sub_3F56D0(a1, 0xEu, 2, v8, v7, a2, 0);
    return v19;
  }
}

