unsigned __int64 __fastcall sub_1B79D0(__int64 a1, char a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // [rsp+0h] [rbp-1080h] BYREF
  __int128 v10; // [rsp+8h] [rbp-1078h]
  __int64 (__fastcall **v11)(int, int, int, int, int, int, char); // [rsp+20h] [rbp-1060h] BYREF
  __int64 v12; // [rsp+28h] [rbp-1058h]
  __int128 v13; // [rsp+30h] [rbp-1050h]
  int v14; // [rsp+40h] [rbp-1040h]
  __int64 v15; // [rsp+48h] [rbp-1038h]
  char v16[4104]; // [rsp+50h] [rbp-1030h] BYREF
  unsigned __int64 v17; // [rsp+1058h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  sub_6B7A0(&v9);
  v4 = *(_QWORD *)(a1 + 1496);
  if ( !under_debugger && !*(_BYTE *)(v4 + 1424) )
    goto LABEL_3;
  v7 = *(_QWORD *)(v4 + 1024);
  if ( *(_QWORD *)(v7 + 120) <= 1u )
    goto LABEL_3;
  ++*(_DWORD *)(v7 + 140);
  qsnprintf();
  v8 = fopenWT();
  if ( !v8 )
  {
    sub_6D0A0((__int64)"Cannot open output file %s\n", v16);
    v5 = v9;
    if ( !v9 )
      return v17 - __readfsqword(0x28u);
    goto LABEL_5;
  }
  sub_66AC0();
  v12 = 0;
  v15 = v8;
  v14 = 0;
  v11 = &off_4E3650;
  v13 = 0;
  sub_1AF540(a1, (void (***)(_QWORD, _QWORD, const char *, ...))&v11);
  qfclose();
  v11 = &off_4E3638;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
    if ( !a2 )
      goto LABEL_4;
  }
  else
  {
LABEL_3:
    if ( !a2 )
      goto LABEL_4;
  }
  sub_321ED0(a1, 0, 0.0, a4);
LABEL_4:
  v5 = v9;
  if ( v9 )
  {
LABEL_5:
    *(_QWORD *)&v10 = 0;
    qfree(v5);
  }
  return v17 - __readfsqword(0x28u);
}

