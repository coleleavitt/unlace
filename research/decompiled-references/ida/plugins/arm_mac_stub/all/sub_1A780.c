__int64 __fastcall sub_1A780(__int64 a1, __int64 *a2)
{
  const char *v2; // rdx
  bool v3; // zf
  unsigned int v4; // ebx
  _QWORD v6[6]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v7; // [rsp+30h] [rbp-68h]
  __int128 v8; // [rsp+38h] [rbp-60h]
  __int128 v9; // [rsp+48h] [rbp-50h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  unsigned __int64 v11; // [rsp+68h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_13F90(a1 + 1056);
  v6[0] = off_45E20;
  v2 = s;
  v8 = 0;
  v6[1] = 4;
  memset(&v6[2], 0, 32);
  v3 = a2[2] == 0;
  v10 = a1;
  v7 = 0;
  v9 = 0;
  if ( !v3 )
    v2 = (const char *)a2[1];
  v4 = sub_17610(a1 + 1056, *a2, (__int64)v2, (__int64)(a2 + 4), (__int64)v6);
  v6[0] = off_45D08;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v4;
}

