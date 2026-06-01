__int64 __fastcall sub_C980(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-3B8h] BYREF
  int v7; // [rsp+8h] [rbp-3B0h]
  _QWORD v8[45]; // [rsp+10h] [rbp-3A8h] BYREF
  int v9; // [rsp+210h] [rbp-1A8h]
  __int64 v10; // [rsp+330h] [rbp-88h]
  __int64 v11; // [rsp+338h] [rbp-80h]
  __int64 v12; // [rsp+348h] [rbp-70h]
  __int64 v13; // [rsp+350h] [rbp-68h]
  __int64 v14; // [rsp+360h] [rbp-58h]
  __int64 v15; // [rsp+368h] [rbp-50h]
  __int64 v16; // [rsp+378h] [rbp-40h]
  __int64 v17; // [rsp+380h] [rbp-38h]
  unsigned __int64 v18; // [rsp+388h] [rbp-30h]
  unsigned __int64 v19; // [rsp+398h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  sub_C2C0((__int64)&v6, a1, (__int64)&unk_16DD0, 2);
  v6 = off_1AB98;
  qmemcpy(v8, a2, sizeof(v8));
  v17 = -1;
  LOBYTE(v7) = 0;
  v9 = 0;
  v16 = a3;
  v18 = 0xFFFFFFFF00000000LL;
  v4 = 0;
  if ( (unsigned __int8)match_jpt(&v6) )
  {
    op_offset(v17, 0, 2, -1, 16LL * v8[0], -(int)v18, v6, v7);
    v4 = 1;
  }
  v6 = off_1CB88;
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
  }
  if ( v12 )
  {
    v13 = 0;
    qfree(v12);
  }
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
  }
  return v4;
}
