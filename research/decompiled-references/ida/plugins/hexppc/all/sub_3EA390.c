unsigned __int64 __fastcall sub_3EA390(__int64 a1, int a2, int a3, int a4)
{
  int v6; // [rsp+0h] [rbp-58h] BYREF
  int dtype_size; // [rsp+4h] [rbp-54h]
  int v8; // [rsp+8h] [rbp-50h]
  _DWORD v9[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v8 = a3;
  v6 = 1;
  dtype_size = get_dtype_size();
  v9[0] = 1;
  v9[2] = a4;
  v9[1] = dtype_size / 2;
  sub_1D2850(a1, a2, (unsigned __int8 *)&v6, nullptr, (unsigned __int8 *)v9);
  sub_119360((__int64)v9);
  sub_119360((__int64)&v6);
  return v10 - __readfsqword(0x28u);
}

