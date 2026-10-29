__int64 __fastcall sub_11210(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // ebp
  int v8; // r12d
  int v9; // ebx
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v7 = *(_DWORD *)(a1 + 1036);
  v14 = __readfsqword(0x28u);
  v8 = a2 < a3 ? -1 : 1;
  if ( v7 == -1 )
    v7 = callui(1053, a2, a3, a4, a5, a6, v11, v12, v13, v14);
  v9 = *(_DWORD *)(a1 + 1032);
  if ( v9 < 0 || v7 <= v9 )
  {
    return (unsigned int)-1;
  }
  else
  {
    while ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64, __int64))callui)(
                                1054,
                                (unsigned int)v9,
                                &v11,
                                a4,
                                a5,
                                a6)
         || v12 != a3 )
    {
      v9 += v8;
      if ( v9 == -1 || v7 <= v9 )
        return (unsigned int)-1;
    }
  }
  return (unsigned int)v9;
}

