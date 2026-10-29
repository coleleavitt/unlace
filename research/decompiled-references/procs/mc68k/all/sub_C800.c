__int64 __fastcall sub_C800(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-3B8h] BYREF
  int v7; // [rsp+8h] [rbp-3B0h]
  _QWORD v8[45]; // [rsp+10h] [rbp-3A8h] BYREF
  _DWORD *v9; // [rsp+178h] [rbp-240h]
  int v10; // [rsp+210h] [rbp-1A8h]
  __int64 v11; // [rsp+330h] [rbp-88h]
  __int64 v12; // [rsp+338h] [rbp-80h]
  __int64 v13; // [rsp+348h] [rbp-70h]
  __int64 v14; // [rsp+350h] [rbp-68h]
  __int64 v15; // [rsp+360h] [rbp-58h]
  __int64 v16; // [rsp+368h] [rbp-50h]
  __int64 v17; // [rsp+378h] [rbp-40h]
  __int64 v18; // [rsp+380h] [rbp-38h]
  int v19; // [rsp+388h] [rbp-30h]
  unsigned __int64 v20; // [rsp+398h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  sub_C2C0((__int64)&v6, a1, (__int64)&unk_16DC0, 2);
  LOBYTE(v7) = 0;
  v6 = off_1AC68;
  v18 = -1;
  v19 = 0;
  v10 = 0;
  v17 = a3;
  *v9 |= 0x400000u;
  qmemcpy(v8, a2, sizeof(v8));
  v4 = 0;
  if ( (unsigned __int8)match_jpt(&v6) )
  {
    op_offset(v18, 0, 2, -1, 16LL * v8[0], -v19, v6, v7);
    v4 = 1;
  }
  v6 = off_1CB88;
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
  }
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
  }
  return v4;
}
