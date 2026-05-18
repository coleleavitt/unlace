__int64 __fastcall sub_F79F0(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  __int128 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v15 = 0;
  v12 = 0;
  v13 = a1;
  v16 = __readfsqword(0x28u);
  v11 = 0;
  v14 = 0;
  sub_F11D0((__int64)&v11, a2, a3, 2, nullptr, a6);
  sub_E0AA0((__int64)&v11, 1);
  if ( !*(_BYTE *)(a1 + 103) )
    return *((_QWORD *)&v11 + 1);
  if ( (v12 & 0x900000000000LL) != 0 || (_DWORD)v14 )
    sub_C9690((__int64)&v11, 1, v6, v7, v8, v9);
  return 0;
}
