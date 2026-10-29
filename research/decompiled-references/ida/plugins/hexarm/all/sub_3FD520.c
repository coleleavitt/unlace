__int64 __fastcall sub_3FD520(__int64 a1, int a2, double a3)
{
  int v3; // ecx
  int v4; // r8d
  char v5; // r9
  int v6; // ebp
  char v7; // r13
  unsigned __int64 *v8; // rcx
  unsigned int v9; // ebx
  int dtype_size; // [rsp+8h] [rbp-70h]
  _DWORD v12[4]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !sub_3EB280(*(unsigned __int16 *)(a1 + 48)) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC359u, a3);
    BUG();
  }
  v6 = v4;
  v7 = v5;
  v12[2] = v3;
  v12[0] = 1;
  dtype_size = get_dtype_size();
  v12[1] = dtype_size;
  v13 = 0xFFFFFFFF00000000LL;
  v14 = 0;
  if ( v6 == -1 )
  {
    v8 = nullptr;
  }
  else
  {
    sub_11C7E0((__int64)&v13);
    LOBYTE(v13) = 1;
    v8 = &v13;
    LODWORD(v14) = v6;
    HIDWORD(v13) = dtype_size;
  }
  v9 = sub_3FD2B0(a1, a2, (__int64)v12, (__int64)v8, v7, nullptr, a3);
  sub_11C7E0((__int64)&v13);
  sub_11C7E0((__int64)v12);
  return v9;
}

