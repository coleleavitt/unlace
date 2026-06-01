__int64 __fastcall sub_178A70(
        _QWORD *a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rcx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r13
  unsigned int v20; // eax
  int v21; // eax
  int v24; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 v27[13]; // [rsp+40h] [rbp-68h] BYREF

  v27[5] = __readfsqword(0x28u);
  if ( a4 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xC56Du, a7);
    goto LABEL_20;
  }
  memset(&v27[1], 0, 32);
  v27[0] = (__int64)&off_4DDFA0;
  LOBYTE(v8) = sub_1787A0(a1, v27, &v24, a2, a3, a4, a7, a5, a6, 1, 8193);
  v9 = v8;
  if ( (_BYTE)v8 )
  {
    LOBYTE(v9) = v24 == 0;
    return v9;
  }
  v25 = 0;
  v26 = 0;
  sub_64190(&v25, a3, a7);
  sub_6FCF0((__int64)a1, a4, &v25, a7);
  sub_64340(&v25, a3, a7);
  v11 = sub_64960(&v25, 0);
  v15 = a1[5];
  v16 = v11;
  v17 = *(_DWORD *)(v15 + 64);
  if ( v16 != (_DWORD)v26 )
  {
    while ( v16 < v17 )
    {
      v18 = *(_QWORD *)(v15 + 528);
      v19 = *(_QWORD *)(v18 + 8LL * v16);
      if ( (*(_DWORD *)(v19 + 24) & 0x600) != 0x200 )
        sub_A7590(*(_QWORD *)(v18 + 8LL * v16), 0, v12, v18, v13, v14);
      if ( (unsigned __int8)sub_64780((_QWORD *)(v19 + 240), a2)
        || (unsigned __int8)sub_318470((unsigned __int64 **)(v19 + 256), (__int64)(a2 + 2)) )
      {
        goto LABEL_10;
      }
      v20 = sub_64960(&v25, v16 + 1);
      v15 = a1[5];
      v16 = v20;
      v17 = *(_DWORD *)(v15 + 64);
      if ( v16 == (_DWORD)v26 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_383060(0xCDEFu, a7);
LABEL_20:
    BUG();
  }
LABEL_13:
  if ( a4 >= v17 )
    sub_1733C0(a7);
  LOBYTE(v21) = sub_B0230(
                  *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8LL * a4),
                  (unsigned __int64 **)a2,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 528) + 8LL * a4) + 48LL),
                  a6,
                  1,
                  0x2001u);
  v9 = v21 ^ 1;
LABEL_10:
  qfree(v25);
  return v9;
}

