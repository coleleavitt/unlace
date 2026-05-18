__int64 __fastcall sub_F5590(__int64 a1, __int64 a2, char ***a3)
{
  __int64 v4; // r14
  int v5; // r13d
  signed int v6; // ebp
  size_t v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbx
  int v14; // eax
  __int64 v15; // r9
  int v17; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v5 = sub_CD0F0(*a3);
  v6 = (v5 + 1) & 0xFFFFFFFE;
  v17 = sub_CD0F0(a3[1]);
  v7 = 8 * v6 + 48;
  v8 = sub_DC1C0(v4, v7);
  if ( !v8 )
    return sub_E1560(a1, v7, v9, v10, v11, v12);
  *v8 = v4;
  v13 = v8;
  v14 = sub_CD0F0(a3[2]);
  *((_DWORD *)v13 + 3) = 0;
  *((_DWORD *)v13 + 2) = v14;
  *((_DWORD *)v13 + 4) = sub_CD0F0(a3[3]);
  *((_DWORD *)v13 + 5) = v5;
  *((_BYTE *)v13 + 28) = 0;
  *((_DWORD *)v13 + 6) = v17;
  v13[5] = (__int64)(v13 + 6);
  v13[4] = (__int64)v13 + 4 * v6 + 48;
  return sub_F48B0(a1, v13, 48, 0, (__int64 (__fastcall *)(__int64))sub_C9B90, v15);
}
