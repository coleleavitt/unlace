__int64 __fastcall sub_36E050(__int64 a1, int a2)
{
  unsigned int v2; // r12d
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-98h] BYREF
  int v5; // [rsp+8h] [rbp-90h]
  __int64 v6; // [rsp+10h] [rbp-88h]
  __int128 v7; // [rsp+18h] [rbp-80h]
  __int64 v8; // [rsp+28h] [rbp-70h]
  __int128 v9; // [rsp+30h] [rbp-68h]
  __int64 v10; // [rsp+40h] [rbp-58h] BYREF
  __int128 v11; // [rsp+48h] [rbp-50h]
  int v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v14; // [rsp+68h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13 = a2;
  v5 = 0;
  v6 = 0;
  v8 = 0;
  v4 = off_4C69A8;
  v10 = 0;
  v12 = 0;
  v7 = 0;
  v9 = 0;
  v11 = 0;
  v2 = 0;
  if ( !(unsigned int)sub_251200((__int64 *)&v4, a1 + 16, 0) && v12 )
    v2 = sub_36DEF0(a1, (__int64)&v10);
  v4 = off_4C69A8;
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  v4 = off_4BC478;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v2;
}

