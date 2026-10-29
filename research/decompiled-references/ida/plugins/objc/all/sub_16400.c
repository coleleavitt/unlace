unsigned __int64 __fastcall sub_16400(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64 *); // rax
  __int64 v4; // rax
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64 *); // rax
  _QWORD **v6; // rbx
  void *v7; // rdi
  _QWORD v9[4]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v10; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D0h]
  __int64 v12; // [rsp+38h] [rbp-C0h]
  int v13; // [rsp+40h] [rbp-B8h]
  _QWORD v14[3]; // [rsp+50h] [rbp-A8h] BYREF
  int v15; // [rsp+68h] [rbp-90h] BYREF
  void *v16; // [rsp+70h] [rbp-88h]
  int *v17; // [rsp+78h] [rbp-80h]
  int *v18; // [rsp+80h] [rbp-78h]
  __int64 v19; // [rsp+88h] [rbp-70h]
  __int64 v20; // [rsp+90h] [rbp-68h]
  __int128 v21; // [rsp+98h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-50h]
  int v23; // [rsp+B0h] [rbp-48h]
  _QWORD *v24; // [rsp+B8h] [rbp-40h]
  __int64 v25; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v26; // [rsp+C8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v14[1] = 1;
  v17 = &v15;
  v18 = &v15;
  v2 = *a1;
  v15 = 0;
  v3 = *(void (__fastcall **)(_QWORD *, _QWORD *, __int64 *))(v2 + 368);
  v16 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v23 = -1;
  v14[0] = &off_3C5B0;
  v24 = a1;
  v25 = a2;
  v10 = 0;
  v12 = 0;
  v21 = 0;
  v11 = 0;
  v13 = -1;
  v3(a1, v14, &v10);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  v9[0] = &off_3C5D8;
  v4 = *a1;
  v9[1] = a1;
  v5 = *(void (__fastcall **)(_QWORD *, _QWORD *, __int64 *))(v4 + 384);
  v9[2] = a2;
  v10 = 0;
  v12 = 0;
  v13 = -1;
  v11 = 0;
  v5(a1, v9, &v10);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  v14[0] = &unk_3CB00;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  v6 = (_QWORD **)v16;
  if ( v16 )
  {
    do
    {
      sub_10FE0(v6[3]);
      v7 = v6;
      v6 = (_QWORD **)v6[2];
      operator delete(v7, 0x28u);
    }
    while ( v6 );
  }
  return v26 - __readfsqword(0x28u);
}
