unsigned __int64 __fastcall sub_3FA3B0(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5)
{
  int dtype_size; // eax
  __int64 v9; // r8
  __int64 v10; // rsi
  _DWORD v12[4]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  dtype_size = get_dtype_size();
  v12[2] = a3;
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 832);
  v12[0] = 1;
  v12[1] = dtype_size;
  v13[0] = 0xFFFFFFFF00000000LL;
  v13[1] = 0;
  sub_120450((__int64)v13, v10, 0, dtype_size, v9, 0);
  v15 = a5;
  v14 = 0x100000001LL;
  sub_3F86E0(a1, a2, (unsigned __int8 *)v12, (unsigned __int8 *)v13, (__int64)&v14);
  sub_11C7E0((__int64)&v14);
  sub_11C7E0((__int64)v13);
  sub_11C7E0((__int64)v12);
  return v16 - __readfsqword(0x28u);
}

