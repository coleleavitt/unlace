__int64 __fastcall sub_106F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]

  v7 = callui(1053, a2, a3, a4, a5, a6, v12, v13, v14, __readfsqword(0x28u)) - 1;
  if ( v7 < 0 )
    return -1;
  while ( 1 )
  {
    if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64, __int64))callui)(
                            1054,
                            (unsigned int)v7,
                            &v12,
                            v6,
                            v8,
                            v9) )
    {
      result = v13;
      if ( v13 != -1 )
        break;
    }
    if ( v7-- == 0 )
      return -1;
  }
  return result;
}

