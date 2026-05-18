__int64 __fastcall sub_E4860(__int64 a1, __int64 *a2, int a3, __int64 a4, int *a5)
{
  __int64 v6; // rax
  __int64 result; // rax
  _OWORD v8[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v9; // [rsp+20h] [rbp-B8h]
  __int64 v10; // [rsp+30h] [rbp-A8h]
  _QWORD v11[19]; // [rsp+40h] [rbp-98h] BYREF

  v10 = 0;
  v11[15] = __readfsqword(0x28u);
  memset(v8, 0, sizeof(v8));
  memset(v11, 0, 0x70u);
  v9 = 0;
  if ( a2 )
  {
    v6 = *a2;
    LODWORD(v11[9]) = -1;
    v11[5] = a2;
    LODWORD(v11[0]) = 1;
    v11[3] = v6;
    if ( a2[12] != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 56LL) )
      a3 |= 0x40000u;
  }
  *(_QWORD *)&v8[0] = a1;
  *((_QWORD *)&v8[0] + 1) = v11;
  DWORD2(v9) = a3 | 0x10000;
  result = sub_E45E0((__int64)v8, a4);
  if ( !(_DWORD)result )
  {
    if ( a5 )
      return sub_E46F0((__int64 *)v8, a5);
  }
  return result;
}
