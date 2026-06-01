unsigned __int64 __fastcall sub_2A8690(__int64 *a1, __int64 a2, char a3, int a4, int a5, int a6, __m128 a7)
{
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-68h] BYREF
  int v9; // [rsp+8h] [rbp-60h]
  __int64 v10; // [rsp+10h] [rbp-58h]
  __int128 v11; // [rsp+18h] [rbp-50h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int64 *v14; // [rsp+40h] [rbp-28h]
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( !a3 )
    return sub_2A8440(a1, a2, 8, a4, a5, a6, a7);
  v14 = a1;
  v11 = 0;
  v9 = 0;
  v10 = 0;
  v12 = 0;
  v8 = off_4E0E38;
  v13 = 0;
  sub_255A80((__int64 *)&v8, a2, 0, 0.0);
  v8 = off_4DBCF8;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v15 - __readfsqword(0x28u);
}

