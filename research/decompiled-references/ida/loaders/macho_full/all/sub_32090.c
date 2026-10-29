unsigned __int64 __fastcall sub_32090(__int64 a1, __int64 a2, __int64 (*a3)(), __int64 (*a4)())
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-68h] BYREF
  int v10; // [rsp+8h] [rbp-60h]
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int128 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 (*v15)(); // [rsp+38h] [rbp-30h]
  unsigned __int64 v16; // [rsp+48h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v14 = a2;
  v10 = 15;
  v9 = off_64628;
  v11 = 0;
  v13 = a1;
  v12 = 0;
  v15 = a3;
  sub_31B00((__int64)a3, &v9, a3, a4);
  v4 = v11;
  v9 = off_64628;
  if ( v11 )
  {
    v5 = v12;
    if ( (_QWORD)v12 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 40 * v6);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = v11;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

