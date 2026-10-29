unsigned __int64 __fastcall sub_120DE0(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  int v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+4h] [rbp-44h]
  int v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_1188E0(a1);
  *(_DWORD *)(a1 + 4) = 2 * a4;
  v9 = 1;
  v6 = (_QWORD *)j__qalloc_or_throw();
  v11 = a2;
  *v6 = 0xFFFFFFFF00000000LL;
  v6[1] = 0;
  v6[2] = 0xFFFFFFFF00000000LL;
  v6[3] = 0;
  *(_BYTE *)a1 = 14;
  *(_QWORD *)(a1 + 8) = v6;
  v10 = a4;
  sub_1188E0((__int64)v6);
  sub_11F580((__int64)v6, (unsigned __int8 *)&v9);
  sub_1188E0((__int64)&v9);
  v7 = *(_QWORD *)(a1 + 8);
  v11 = a3;
  v9 = 1;
  v7 += 16;
  v10 = a4;
  sub_1188E0(v7);
  sub_11F580(v7, (unsigned __int8 *)&v9);
  sub_1188E0((__int64)&v9);
  return v12 - __readfsqword(0x28u);
}

