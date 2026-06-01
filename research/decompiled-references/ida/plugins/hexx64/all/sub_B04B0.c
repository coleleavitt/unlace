__int64 __fastcall sub_B04B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v19[2]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 *v20[4]; // [rsp+18h] [rbp-C8h] BYREF
  _QWORD v21[5]; // [rsp+38h] [rbp-A8h] BYREF
  char v22; // [rsp+60h] [rbp-80h]
  __int64 v23[2]; // [rsp+68h] [rbp-78h] BYREF
  __int64 v24; // [rsp+78h] [rbp-68h] BYREF
  __int128 v25; // [rsp+80h] [rbp-60h]
  unsigned int v26; // [rsp+90h] [rbp-50h]
  unsigned __int64 v27; // [rsp+A0h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 48);
  v27 = __readfsqword(0x28u);
  v22 = 0;
  v21[1] = 0;
  v21[3] = 0;
  v21[4] = 0;
  v21[0] = &off_4DBFC8;
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0;
  v26 = 0;
  v21[2] = a1;
  v25 = 0;
  if ( v6 )
  {
    do
    {
      sub_127A20((__int64)v19, a1, v6, 1, a5, a6);
      if ( (*(_DWORD *)v6 == 4 || *(_DWORD *)v6 == 67 && *(_DWORD *)(v6 + 36) == *(_DWORD *)(v6 + 68))
        && (v7 = sub_11FD80((char *)(v6 + 32), &v18, 0)) != 0
        && !v18
        && *(_BYTE *)(v6 + 64) != 6 )
      {
        sub_64280(v23, v19, 0.0);
        sub_316CB0(&v24, v20, v16, v17);
      }
      else
      {
        v7 = 0;
      }
      if ( (!(unsigned __int8)sub_64880(v23) || (_QWORD)v25) && *(_DWORD *)v6 != 62 )
        sub_11E900((_BYTE *)v6, (__int64)v21);
      if ( !v7 )
      {
        sub_64640(v23, v19, v8, v9, v10, v11);
        sub_317C60(&v24, (__int64)v20);
      }
      if ( v20[0] )
      {
        v20[1] = nullptr;
        qfree((__int64)v20[0]);
      }
      qfree(v19[0]);
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v6 );
    v12 = *(_DWORD *)(a1 + 24);
    if ( v26 )
    {
      v13 = v12 & 0xFFFFFDDF;
      LOBYTE(v13) = v13 | 0x80;
      *(_DWORD *)(a1 + 24) = v13;
      sub_A2520(a1, "DEMOTE64 %d");
      v14 = v26;
      goto LABEL_16;
    }
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 24);
  }
  v14 = 0;
  *(_DWORD *)(a1 + 24) = v12 & 0xFFFFFFDF;
LABEL_16:
  v21[0] = &off_4DBFC8;
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  qfree(v23[0]);
  return v14;
}

