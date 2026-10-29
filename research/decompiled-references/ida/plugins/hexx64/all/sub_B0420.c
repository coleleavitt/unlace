__int64 __fastcall sub_B0420(_BYTE *a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-58h] BYREF
  char v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  unsigned __int64 v8; // [rsp+48h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = a2;
  memset(&v4[1], 0, 32);
  v5 = 0;
  v4[0] = &off_4DBFA0;
  v7 = 0;
  v2 = sub_11E900(a1, (__int64)v4);
  result = 0;
  if ( v2 )
    return v7;
  return result;
}

