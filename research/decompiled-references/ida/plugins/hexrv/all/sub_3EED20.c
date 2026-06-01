__int64 __fastcall sub_3EED20(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, char a6, double a7, char a8, char a9)
{
  char v12; // r10
  int v14; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v15[11]; // [rsp+20h] [rbp-58h] BYREF

  v15[3] = __readfsqword(0x28u);
  v12 = a8;
  v14 = 0;
  if ( !a9 )
  {
    if ( a4 )
    {
      sub_3EE9B0(v15, a1, &v14, a4, a6, a8);
      sub_120CC0(a2, (unsigned __int8 *)v15);
      sub_1188E0((__int64)v15);
      v12 = a8;
      if ( !a5 )
        return 1;
    }
    else if ( !a5 )
    {
      return 1;
    }
    sub_3EE9B0(v15, a1, &v14, a5, a6, v12);
    sub_120CC0(a3, (unsigned __int8 *)v15);
    sub_1188E0((__int64)v15);
    return 1;
  }
  if ( !a6 )
  {
    if ( a4 )
    {
      sub_3EE8B0(v15, a1, &v14, a4, a8, a7);
      sub_120CC0(a2, (unsigned __int8 *)v15);
      sub_1188E0((__int64)v15);
      v12 = a8;
    }
    if ( a5 )
    {
      sub_3EE8B0(v15, a1, &v14, a5, v12, a7);
      sub_120CC0(a3, (unsigned __int8 *)v15);
      sub_1188E0((__int64)v15);
    }
    return 1;
  }
  return 0;
}

