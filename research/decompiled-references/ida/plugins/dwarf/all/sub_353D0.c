__int64 __fastcall sub_353D0(_QWORD *a1)
{
  bool v1; // zf
  __int64 *v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v18[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = a1[8] == 0;
  v18[1] = __readfsqword(0x28u);
  if ( v1 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v11 = sub_34340((__int64)a1);
      v16 = src;
      if ( v11[1] )
        v16 = (const char *)*v11;
      sub_88B80((unsigned int)"Error enumerator DIE %s retrieving enumerator name\n", (_DWORD)v16, v12, v13, v14, v15);
    }
    return 5;
  }
  if ( !(unsigned __int8)sub_2C6A0(a1[10], a1[13], 0x1Cu, a1 + 18) )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v3 = sub_34340((__int64)a1);
      v8 = src;
      if ( v3[1] )
        v8 = (const char *)*v3;
      sub_88B80((unsigned int)"Error enumerator DIE %s retrieving enumerator value\n", (_DWORD)v8, v4, v5, v6, v7);
    }
    return 5;
  }
  v17 = 0x518B64E5320B09BLL;
  v9 = sub_856E0(&v17, a1 + 8);
  v18[0] = a1[18];
  v10 = (__int64 *)sub_856E0(v9, v18);
  sub_349E0((__int64)a1, v10);
  return 3;
}

