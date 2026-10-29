int sub_B570()
{
  _BYTE *v0; // rbx
  __int64 v1; // rdi
  char v3; // [rsp+Dh] [rbp-F3h] BYREF
  char v4; // [rsp+Eh] [rbp-F2h] BYREF
  char v5; // [rsp+Fh] [rbp-F1h] BYREF
  _BYTE v6[24]; // [rsp+10h] [rbp-F0h] BYREF
  int v7; // [rsp+28h] [rbp-D8h]
  _BYTE v8[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h]
  _BYTE v10[24]; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+68h] [rbp-98h]
  _BYTE v12[24]; // [rsp+70h] [rbp-90h] BYREF
  int v13; // [rsp+88h] [rbp-78h]
  _BYTE v14[24]; // [rsp+90h] [rbp-70h] BYREF
  int v15; // [rsp+A8h] [rbp-58h]
  _BYTE v16[24]; // [rsp+B0h] [rbp-50h] BYREF
  int v17; // [rsp+C8h] [rbp-38h]
  _BYTE v18[8]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+D8h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  sub_1B350(v6, "__eh34_wind");
  v7 = 5;
  sub_1B350(v8, "__eh34_try");
  v9 = 1;
  sub_1B350(v10, "__eh34_unwind");
  v11 = 6;
  sub_1B350(v12, "__eh34_catch");
  v13 = 2;
  sub_1B350(v14, "__eh34_catch_type");
  v15 = 3;
  sub_1B350(v16, "__eh34_catch_ellipsis");
  v17 = 11;
  v0 = v18;
  sub_58DE0(&unk_8D540, v6, v18, 0, &v5, &v4, &v3);
  do
  {
    v1 = *((_QWORD *)v0 - 4);
    v0 -= 32;
    if ( v1 )
    {
      *((_QWORD *)v0 + 1) = 0;
      qfree(v1);
    }
  }
  while ( v0 != v6 );
  return __cxa_atexit(sub_58D80, &unk_8D540, &off_8B6C0);
}
