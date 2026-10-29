unsigned __int64 __fastcall sub_2A47C0(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  char v21; // [rsp+Ch] [rbp-8Ch]
  __int64 v22; // [rsp+10h] [rbp-88h] BYREF
  __int64 v23; // [rsp+18h] [rbp-80h]
  __int64 v24; // [rsp+20h] [rbp-78h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h]
  _DWORD v26[4]; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v27[4]; // [rsp+40h] [rbp-58h] BYREF
  int v28; // [rsp+50h] [rbp-48h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v7 = *a1;
  v21 = a3;
  v29 = __readfsqword(0x28u);
  LODWORD(v24) = 0;
  HIDWORD(v24) = a3;
  v25 = 0;
  v22 = 6;
  v23 = a2;
  sub_29C3E0((__int64)&v22, v7, a3, a4, a5, a6);
  v26[0] = 0;
  sub_29BAF0((__int64)v26, (unsigned int *)&v22);
  v27[0] = 0;
  sub_29BAF0((__int64)v27, (unsigned int *)&v24);
  v28 = 2;
  sub_2A4690((__int64)a1, (__int64)v26, 0, v8, v9, v10);
  v28 = -1;
  sub_29AFB0((__int64)v27);
  sub_29AFB0((__int64)v26);
  sub_29AFB0((__int64)&v22);
  sub_29AFB0((__int64)&v24);
  if ( *(_DWORD *)(a2 + 8) == 51 && (v21 & 8) != 0 )
  {
    v16 = *a1;
    v25 = 0;
    v24 = 0x1000000000LL;
    v17 = *(_QWORD *)(a2 + 24);
    v22 = 6;
    v23 = v17;
    sub_29C3E0((__int64)&v22, v16, v11, v12, v13, v14);
    v26[0] = 0;
    sub_29BAF0((__int64)v26, (unsigned int *)&v22);
    v27[0] = 0;
    sub_29BAF0((__int64)v27, (unsigned int *)&v24);
    v28 = 2;
    sub_2A4690((__int64)a1, (__int64)v26, 0, v18, v19, v20);
    v28 = -1;
    sub_29AFB0((__int64)v27);
    sub_29AFB0((__int64)v26);
    sub_29AFB0((__int64)&v22);
    sub_29AFB0((__int64)&v24);
  }
  return v29 - __readfsqword(0x28u);
}

