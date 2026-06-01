__int64 __fastcall sub_7190(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  int v8; // edx
  void *v9; // rsi
  __int64 v11; // rsi
  __int64 v12; // rbp
  void *v13; // rsi
  int v16; // [rsp+Ch] [rbp-6Ch] BYREF
  _BYTE *v17; // [rsp+10h] [rbp-68h] BYREF
  __int128 v18; // [rsp+18h] [rbp-60h]
  void *v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v1 = a1[1];
  v22 = __readfsqword(0x28u);
  v16 = 0;
  v3 = v1 + a1[3];
  v4 = a1[4] + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, &v16)) == 0 )
    sub_3890((__int64)"target features section: couldn't read count at 0x%llx\n", a1[5]);
  v6 = a1[3];
  a1[5] = v6;
  a1[3] = v5 + v6;
  create_data(v6, 0, v5, -1);
  v18 = 0;
  v17 = nullptr;
  v7 = (_BYTE *)qvector_reserve(&v17, 0, 11, 1);
  *(_QWORD *)&v18 = 11;
  v8 = v16;
  v17 = v7;
  qmemcpy(v7, "sym count ", 10);
  v17[10] = 0;
  sub_4EE0((__int64 *)&v17, (__int64)"(%u)", v8);
  v9 = &unk_10F58;
  if ( (_QWORD)v18 )
    v9 = v17;
  set_cmt(a1[5], v9, 0);
  while ( v16-- )
  {
    v21 = 0;
    v11 = a1[3];
    if ( a1[4] < (unsigned __int64)(v11 + 1) )
      sub_3890((__int64)"couldn't read template type @0x%llx", v11);
    a1[5] = v11;
    a1[3] = v11 + 1;
    v19 = nullptr;
    v20 = 0;
    sub_4200(a1, (__int64 *)&v19);
    v12 = (__int64)v19;
    v13 = &unk_10F58;
    if ( v20 )
      v13 = v19;
    sub_3940((__int64)"This binary has feature '%s' which is not currently supported.", v13);
    if ( v12 )
      qfree(v12);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return 1;
}

