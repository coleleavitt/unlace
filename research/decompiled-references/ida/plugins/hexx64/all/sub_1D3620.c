__int64 __fastcall sub_1D3620(__int64 *a1, __int64 *a2, double a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-48h] BYREF
  const void *v6[2]; // [rsp+8h] [rbp-40h] BYREF
  char v7; // [rsp+18h] [rbp-30h]
  __int64 *v8; // [rsp+20h] [rbp-28h]
  unsigned int v9; // [rsp+28h] [rbp-20h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v8 = a1;
  v6[0] = nullptr;
  v6[1] = nullptr;
  v7 = 0;
  v5 = off_4DEA98;
  v9 = 0;
  sub_6F590((__int64 *)&v5, a1, 0, 0);
  if ( a2 )
    sub_648D0(a2, v6, a3);
  v3 = v9;
  v5 = off_4DBB18;
  qfree((__int64)v6[0]);
  return v3;
}

