unsigned __int64 __fastcall sub_20120(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  void *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+8h] [rbp-70h]
  __int64 v9; // [rsp+10h] [rbp-68h]
  _BYTE *v10; // [rsp+18h] [rbp-60h]
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+28h] [rbp-50h] BYREF
  void *v13; // [rsp+30h] [rbp-48h]
  int *v14; // [rsp+38h] [rbp-40h]
  int *v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  unsigned __int64 v17; // [rsp+58h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  sub_13E80((__int64)"Loading firmware images");
  v14 = &v12;
  v15 = &v12;
  v12 = 0;
  v13 = nullptr;
  v16 = 0;
  LODWORD(v8) = 0;
  v7 = &off_972F0;
  v9 = a1;
  v10 = v11;
  if ( (int)sub_1F810(a1, (__int64)&v7) >= 0 )
    sub_59BA0(a1, v11);
  callui(24, 10, 0, &callui, v1, v2, v7, v8, v9, v10);
  v3 = v13;
  while ( v3 )
  {
    v4 = v3;
    sub_1B670(*((void **)v3 + 3));
    v5 = *((_QWORD *)v3 + 14);
    v3 = *((void **)v3 + 2);
    if ( v5 )
    {
      v4[15] = 0;
      qfree();
    }
    if ( v4[10] )
    {
      v4[11] = 0;
      qfree();
    }
    if ( v4[7] )
    {
      v4[8] = 0;
      qfree();
    }
    operator delete(v4, 0x90u);
  }
  return v17 - __readfsqword(0x28u);
}

