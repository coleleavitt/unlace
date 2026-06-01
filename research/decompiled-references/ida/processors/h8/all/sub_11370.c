__int64 __fastcall sub_11370(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-3B8h] BYREF
  char v7; // [rsp+8h] [rbp-3B0h]
  _BYTE v8[360]; // [rsp+10h] [rbp-3A8h] BYREF
  int v9; // [rsp+210h] [rbp-1A8h]
  __int64 v10; // [rsp+330h] [rbp-88h]
  __int64 v11; // [rsp+338h] [rbp-80h]
  __int64 v12; // [rsp+348h] [rbp-70h]
  __int64 v13; // [rsp+350h] [rbp-68h]
  __int64 v14; // [rsp+360h] [rbp-58h]
  __int64 v15; // [rsp+368h] [rbp-50h]
  __int64 v16; // [rsp+378h] [rbp-40h]
  char v17; // [rsp+380h] [rbp-38h]
  __int64 v18; // [rsp+384h] [rbp-34h]
  __int16 v19; // [rsp+38Ch] [rbp-2Ch]
  unsigned __int64 v20; // [rsp+398h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  sub_E800((__int64)&v6, a1, (__int64)qword_18200, 1);
  v7 = 0;
  qmemcpy(v8, a2, sizeof(v8));
  v18 = 0x7FFFFFFFFLL;
  v6 = off_1C790;
  v17 = 10;
  v16 = a3;
  v9 = 0;
  v19 = 2570;
  v4 = 0;
  if ( (unsigned __int8)match_jpt() )
  {
    sub_112A0((__int64)&v6);
    v4 = 1;
  }
  v6 = off_1DBA0;
  if ( v14 )
  {
    v15 = 0;
    qfree();
  }
  if ( v12 )
  {
    v13 = 0;
    qfree();
  }
  if ( v10 )
  {
    v11 = 0;
    qfree();
  }
  return v4;
}

