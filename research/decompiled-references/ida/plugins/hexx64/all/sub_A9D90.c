__int64 __fastcall sub_A9D90(__int64 a1, unsigned __int64 **a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // eax
  __int64 v7; // rbx
  int v9; // r8d
  int v10; // r9d
  char v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v17; // [rsp+14h] [rbp-A4h]
  __int64 v18[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h]
  __int64 v21[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-58h] BYREF
  __int64 v23; // [rsp+68h] [rbp-50h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v5 = a5;
  v7 = a3;
  v24 = __readfsqword(0x28u);
  if ( (a5 & 0x20) == 0 )
  {
    v5 = a5 ^ 1;
    if ( (((unsigned __int8)a5 ^ 1) & 1) == 0 )
      v5 = a5 ^ 1 | 0x40;
  }
  BYTE1(v5) |= 1u;
  v17 = v5;
  if ( a3 && a3 != a4 )
  {
    while ( !(unsigned __int8)sub_64880(a2) || a2[3] )
    {
      if ( *(char *)(v7 + 4) >= 0 || (a5 & 0x200) != 0 )
      {
        sub_124680((__int64)v18, a1, v7, a5);
        v11 = sub_64780(a2, v18);
        if ( !v11 )
          v11 = sub_318470(a2 + 2, (__int64)&v19);
        sub_127A20((__int64)v21, a1, v7, v17, v9, v10);
        sub_64640((__int64 *)a2, v21, v12, v13, v14, v15);
        sub_317C60((__int64 *)a2 + 2, (__int64)&v22);
        if ( v11 )
        {
          if ( v22 )
          {
            v23 = 0;
            qfree(v22);
          }
          qfree(v21[0]);
          if ( v19 )
          {
            v20 = 0;
            qfree(v19);
          }
          qfree(v18[0]);
          return v7;
        }
        if ( v22 )
        {
          v23 = 0;
          qfree(v22);
        }
        qfree(v21[0]);
        if ( v19 )
        {
          v20 = 0;
          qfree(v19);
        }
        qfree(v18[0]);
      }
      v7 = *(_QWORD *)(v7 + 8);
      if ( !v7 || a4 == v7 )
        return 0;
    }
  }
  return 0;
}

