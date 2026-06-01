__int64 __fastcall sub_111030(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // r9d
  int v8; // [rsp+4h] [rbp-74h] BYREF
  __int64 v9; // [rsp+8h] [rbp-70h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h] BYREF
  char v11; // [rsp+18h] [rbp-60h]
  _DWORD v12[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  unsigned __int64 v15; // [rsp+48h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  v4 = sub_1DFF30((__int64)&v10, a1, &v8, a2);
  if ( (_BYTE)v4 )
  {
    v13 = 0;
    v12[0] = 0;
    v12[1] = v8;
    v14 = 0;
    if ( (unsigned __int8)sub_1E0180(a3, (unsigned int)v12, (unsigned int)&v10, 0, v5, v6)
      && (unsigned __int8)sub_312AF0((__int64)v12, &v9) )
    {
      LOBYTE(v4) = v9 == 0;
    }
    else
    {
      v4 = 0;
    }
    sub_312B80((__int64)v12);
  }
  return v4;
}

