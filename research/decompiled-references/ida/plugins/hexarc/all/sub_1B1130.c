unsigned __int64 __fastcall sub_1B1130(__int64 a1, char a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // [rsp+0h] [rbp-1080h] BYREF
  __int128 v11; // [rsp+8h] [rbp-1078h]
  __int64 v12; // [rsp+18h] [rbp-1068h]
  __int64 (__fastcall **v13)(int, int, int, int, int, int, char); // [rsp+20h] [rbp-1060h] BYREF
  __int64 v14; // [rsp+28h] [rbp-1058h]
  __int128 v15; // [rsp+30h] [rbp-1050h]
  int v16; // [rsp+40h] [rbp-1040h]
  __int64 v17; // [rsp+48h] [rbp-1038h]
  char v18[4104]; // [rsp+50h] [rbp-1030h] BYREF
  unsigned __int64 v19; // [rsp+1058h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 0;
  sub_65220(&v10);
  v5 = &under_debugger;
  v6 = *(_QWORD *)(a1 + 1496);
  if ( !under_debugger && !*(_BYTE *)(v6 + 1424) )
    goto LABEL_3;
  v8 = *(_QWORD *)(v6 + 1024);
  if ( *(_QWORD *)(v8 + 120) <= 1u )
    goto LABEL_3;
  ++*(_DWORD *)(v8 + 140);
  qsnprintf();
  v9 = fopenWT();
  if ( !v9 )
  {
    sub_66B20((__int64)"Cannot open output file %s\n", v18);
    if ( !v10 )
      return v19 - __readfsqword(0x28u);
    goto LABEL_5;
  }
  sub_60540();
  v14 = 0;
  v17 = v9;
  v16 = 0;
  v13 = &off_4AFE50;
  v15 = 0;
  sub_1A8D40(a1, (void (***)(_QWORD, _QWORD, const char *, ...))&v13);
  qfclose();
  v13 = &off_4AFE38;
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
    if ( !a2 )
      goto LABEL_4;
  }
  else
  {
LABEL_3:
    if ( !a2 )
      goto LABEL_4;
  }
  sub_31AB50(a1, 0, (_DWORD)v5, v2, v3, v4, v10, v11, DWORD2(v11), v12);
LABEL_4:
  if ( v10 )
  {
LABEL_5:
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v19 - __readfsqword(0x28u);
}

