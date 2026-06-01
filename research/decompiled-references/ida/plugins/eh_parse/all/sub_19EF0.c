unsigned __int64 __fastcall sub_19EF0(__int64 a1, int a2)
{
  int v2; // ebx
  _QWORD *v3; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v6; // [rsp+10h] [rbp-88h]
  __int128 v7; // [rsp+20h] [rbp-78h]
  int v8; // [rsp+30h] [rbp-68h]
  __int128 v9; // [rsp+38h] [rbp-60h]
  __int64 v10; // [rsp+48h] [rbp-50h]
  char v11; // [rsp+50h] [rbp-48h]
  __int16 v12; // [rsp+51h] [rbp-47h]
  unsigned __int64 v13; // [rsp+58h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) == 10 )
  {
    v2 = -1;
    while ( 1 )
    {
      v2 = sub_FCD0(v2, "pdata");
      if ( v2 < 0 )
        break;
      while ( 1 )
      {
        v5[0] = off_2E750;
        v5[1] = a1;
        v8 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v6 = -1;
        v7 = 0;
        v9 = 0;
        v3 = (_QWORD *)getnseg((unsigned int)v2);
        if ( !(unsigned __int8)sub_17900((__int64)v5, v3) )
          break;
        sub_19A80((__int64)v5, a2 | 2, 0.0, NAN);
        v2 = sub_FCD0(v2, "pdata");
        if ( v2 < 0 )
          return v13 - __readfsqword(0x28u);
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}

