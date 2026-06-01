__int64 __fastcall sub_1723B0(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r15d
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r13
  unsigned int v21; // eax
  int v22; // eax
  int v25; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28[13]; // [rsp+40h] [rbp-68h] BYREF

  v28[5] = __readfsqword(0x28u);
  if ( a4 == -1 )
  {
    if ( !under_debugger )
      sub_37B760(50541);
    goto LABEL_20;
  }
  memset(&v28[1], 0, 32);
  v28[0] = (__int64)off_4AA7E0;
  LOBYTE(v8) = sub_1720E0(a1, v28, &v25, a2, a3, a4, a5, a6, 1u, 8193);
  v9 = v8;
  if ( (_BYTE)v8 )
  {
    LOBYTE(v9) = v25 == 0;
    return v9;
  }
  v26 = 0;
  v27 = 0;
  sub_5DC10(&v26, a3);
  sub_69770((__int64)a1, a4, &v26);
  sub_5DDC0(&v26, a3);
  v11 = 0;
  v12 = sub_5E3E0(&v26, 0);
  v16 = a1[5];
  v17 = v12;
  v18 = *(_DWORD *)(v16 + 64);
  if ( v17 != (_DWORD)v27 )
  {
    while ( v17 < v18 )
    {
      v19 = *(_QWORD *)(v16 + 528);
      v20 = *(_QWORD *)(v19 + 8LL * v17);
      if ( (*(_DWORD *)(v20 + 24) & 0x600) != 0x200 )
        sub_A0ED0(*(_QWORD *)(v19 + 8LL * v17), 0, v13, v19, v14, v15);
      if ( (unsigned __int8)sub_5E200((_QWORD *)(v20 + 240), a2) || (unsigned __int8)sub_3110F0(v20 + 256, a2 + 2) )
        goto LABEL_10;
      v11 = v17 + 1;
      v21 = sub_5E3E0(&v26, v11);
      v16 = a1[5];
      v17 = v21;
      v18 = *(_DWORD *)(v16 + 64);
      if ( v17 == (_DWORD)v27 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_37B760(52719);
LABEL_20:
    BUG();
  }
LABEL_13:
  if ( a4 >= v18 )
    sub_16CD00(&v26, v11, v13, v16, v14, v15);
  LOBYTE(v22) = sub_A9B70(
                  *(_QWORD *)(*(_QWORD *)(v16 + 528) + 8LL * a4),
                  a2,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 528) + 8LL * a4) + 48LL),
                  a6,
                  1,
                  0x2001u);
  v9 = v22 ^ 1;
LABEL_10:
  qfree();
  return v9;
}

