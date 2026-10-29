unsigned __int64 __fastcall sub_29FF0(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 (*v9)(); // rax
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-98h] BYREF
  __int64 v12; // [rsp+8h] [rbp-90h]
  __int64 v13; // [rsp+10h] [rbp-88h]
  __int64 v14; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+30h] [rbp-68h]
  __int128 v18; // [rsp+38h] [rbp-60h]
  __int128 v19; // [rsp+48h] [rbp-50h]
  __int64 v20; // [rsp+58h] [rbp-40h]
  __int64 v21; // [rsp+60h] [rbp-38h]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v6 = 0;
  if ( *a3 != -1 )
  {
    if ( (_BYTE)a4 )
      v6 = qbasename();
    v21 = v6;
    v8 = *a1;
    v18 = 0;
    v9 = *(__int64 (**)())(v8 + 840);
    v11 = off_8C2B0;
    v12 = 24;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v20 = a2;
    v19 = 0;
    if ( v9 == sub_25140
      || !((unsigned __int8 (__fastcall *)(__int64 *, __int64 (__fastcall ***)(), _QWORD *))v9)(a1, &v11, a3) )
    {
      sub_40940(a1, a2, a3, a4, a5, a6, v11, v12, v13, v14, v15, v16);
    }
    v11 = off_8B7D0;
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
  return v22 - __readfsqword(0x28u);
}

