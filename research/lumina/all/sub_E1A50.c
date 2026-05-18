__int64 __fastcall sub_E1A50(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  int v5; // r8d
  _QWORD *v6; // r12
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // r13
  const char *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r15
  char *v13; // rax
  __int64 v14; // r15
  int v15; // r10d
  int v16; // eax
  int v17; // r8d
  __int64 v18; // r15
  __int64 *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // r13
  char *v26; // rsi
  char *v27; // r15
  int v28; // edx
  int v29; // eax
  __int64 v30; // [rsp+8h] [rbp-100h]
  unsigned int v31; // [rsp+8h] [rbp-100h]
  int v32; // [rsp+10h] [rbp-F8h]
  char *v33; // [rsp+10h] [rbp-F8h]
  unsigned __int16 v34; // [rsp+10h] [rbp-F8h]
  int v35; // [rsp+10h] [rbp-F8h]
  int v36; // [rsp+1Ch] [rbp-ECh]
  unsigned __int16 v37; // [rsp+1Ch] [rbp-ECh]
  unsigned int v38; // [rsp+1Ch] [rbp-ECh]
  __int64 v40; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v41; // [rsp+48h] [rbp-C0h]
  __int64 v42; // [rsp+50h] [rbp-B8h]
  int v43; // [rsp+58h] [rbp-B0h]
  __int16 v44; // [rsp+5Ch] [rbp-ACh]
  _BYTE v45[104]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+C8h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 96);
  v46 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 0x2000) != 0 || (a4 & 0x20) != 0 )
    return 0;
  v6 = a1;
  v7 = *(_DWORD *)(v4 + 48) & 0x30;
  v8 = *(unsigned __int8 *)(a3 + 64);
  v9 = a2;
  v30 = a1[2];
  if ( (v5 & 0x30) != 0 || (v5 & 0x400) == 0 && *(_WORD *)(v4 + 24) )
  {
    v40 = *a1;
    v42 = 0x3B9ACA0000000064LL;
    v43 = 0;
    v41 = v45;
    v44 = 256;
LABEL_5:
    v10 = "SEARCH";
    v36 = 1;
    goto LABEL_6;
  }
  v40 = *a1;
  v42 = 0x3B9ACA0000000064LL;
  v41 = v45;
  v43 = 0;
  v44 = 256;
  if ( (a4 & 3) != 0 )
    goto LABEL_5;
  v36 = 0;
  v10 = "SCAN";
LABEL_6:
  v11 = (unsigned __int8)v8;
  v32 = v5;
  sub_DBBA0((__int64)&v40, "%s %S", v10, (const wchar_t *)(a2 + 104 * v8 + 8));
  if ( (v32 & 0x500) != 0 )
  {
    if ( (v32 & 0x100) != 0 && (v32 & 0xF) != 0 )
    {
      sub_DBBA0((__int64)&v40, " USING INTEGER PRIMARY KEY (%s", "rowid");
      v23 = 61;
      if ( (v32 & 5) == 0 )
      {
        if ( v7 == 48 )
        {
          sub_DBBA0((__int64)&v40, ">? AND %s", "rowid");
          v23 = 60;
        }
        else
        {
          v23 = (v32 & 0x20) == 0 ? 60 : 62;
        }
      }
      sub_DBBA0((__int64)&v40, "%c?)", v23);
    }
    else if ( (v32 & 0x400) != 0 )
    {
      sub_DBBA0((__int64)&v40, " VIRTUAL TABLE INDEX %d:%s", *(_DWORD *)(v4 + 24), *(const char **)(v4 + 32));
    }
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(v4 + 32);
  if ( *(char *)(*(_QWORD *)(a2 + 104 * v11 + 40) + 48LL) < 0 && (*(_BYTE *)(v12 + 99) & 3) == 2 )
  {
    if ( !v36 )
      goto LABEL_19;
    v13 = "PRIMARY KEY";
  }
  else
  {
    v13 = "AUTOMATIC PARTIAL COVERING INDEX";
    if ( (v32 & 0x20000) == 0 )
    {
      v13 = "AUTOMATIC COVERING INDEX";
      if ( (v32 & 0x4000) == 0 )
      {
        v13 = "COVERING INDEX %s";
        if ( (v32 & 0x40) == 0 )
          v13 = "INDEX %s";
      }
    }
  }
  v33 = v13;
  sub_DFD90((__int64)&v40, " USING ", 7);
  sub_DBBA0((__int64)&v40, v33, *(_QWORD *)v12);
  v14 = *(_QWORD *)(v4 + 32);
  if ( *(_WORD *)(v4 + 24) )
  {
    v37 = *(_WORD *)(v4 + 24);
    v34 = *(_WORD *)(v4 + 54);
    sub_DFD90((__int64)&v40, " (", 2);
    v24 = 0;
    v25 = v14;
    v38 = v37 - 1;
    do
    {
      v27 = "<expr>";
      v28 = *(__int16 *)(*(_QWORD *)(v25 + 8) + 2 * v24);
      if ( v28 != -2 )
      {
        v27 = "rowid";
        if ( v28 != -1 )
          v27 = *(char **)(*(_QWORD *)(*(_QWORD *)(v25 + 24) + 8LL) + 16LL
                                                                    * *(__int16 *)(*(_QWORD *)(v25 + 8) + 2 * v24));
      }
      v29 = v24;
      if ( v24 )
      {
        sub_DFD90((__int64)&v40, " AND ", 5);
        v29 = v24;
      }
      v26 = "ANY(%s)";
      if ( v34 <= v29 )
        v26 = "%s=?";
      ++v24;
      sub_DBBA0((__int64)&v40, v26, v27);
    }
    while ( v38 + 1LL != v24 );
    v14 = v25;
    v6 = a1;
    v9 = a2;
    v15 = v38 + 1;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(v4 + 48) & 0x30) != 0 )
  {
    sub_DFD90((__int64)&v40, " (", 2);
    v15 = 0;
LABEL_14:
    v16 = *(_DWORD *)(v4 + 48);
    v17 = v15;
    if ( (v16 & 0x20) != 0 )
    {
      v35 = v15;
      sub_DFE10((__int64)&v40, v14, *(unsigned __int16 *)(v4 + 26), v15, v15, ">");
      v16 = *(_DWORD *)(v4 + 48);
      v17 = 1;
      v15 = v35;
    }
    if ( (v16 & 0x10) != 0 )
      sub_DFE10((__int64)&v40, v14, *(unsigned __int16 *)(v4 + 28), v15, v17, "<");
    sub_DFD90((__int64)&v40, ")", 1);
  }
LABEL_19:
  if ( (*(_BYTE *)(v9 + 104 * v11 + 68) & 8) != 0 )
    sub_DBBA0((__int64)&v40, " LEFT-JOIN");
  v18 = v30;
  v19 = sub_DC130((__int64)&v40);
  v31 = sub_E1710(v30, 184, *(_DWORD *)(v30 + 144), *((_DWORD *)v6 + 76), 0);
  sub_DCC50(v18, v31, (__int64)v19, 4294967290LL, v20, v21);
  return v31;
}
