__int64 __fastcall sub_21090(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]
  __int128 v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v6 = 0;
  v7 = *(_QWORD *)(a2 + 8);
  v15 = __readfsqword(0x28u);
  if ( v7 != *(_QWORD *)(a1 + 1832) )
    return v6;
  sub_65BB0(a1, (unsigned int)"handle dyld bpt, ea=%a\n", v7, a4, a5, a6);
  sub_20E80(a1);
  v10 = *(unsigned int *)(a1 + 1192);
  v11 = *(unsigned int *)(a1 + 1364);
  v12 = -2;
  v13 = -1;
  v14 = 0;
  if ( !(unsigned __int8)sub_46CE0(a1, v11, &v12, v10) )
  {
    if ( under_debugger )
      goto LABEL_12;
    interr();
LABEL_10:
    if ( !under_debugger )
      interr();
LABEL_12:
    BUG();
  }
  v6 = sub_47B70(a1, *(unsigned int *)(a1 + 1364), v13);
  if ( !(_BYTE)v6 )
    goto LABEL_10;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
  if ( v12 >= -1 && v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v6;
}

