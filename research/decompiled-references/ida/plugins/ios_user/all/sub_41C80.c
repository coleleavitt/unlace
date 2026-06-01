__int64 __fastcall sub_41C80(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  char v8; // bl
  const char *v9; // [rsp+0h] [rbp-28h] BYREF
  __int128 v10; // [rsp+8h] [rbp-20h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( !a1 || !*a1 )
    goto LABEL_3;
  v9 = nullptr;
  v10 = 0;
  v7 = sub_148E0();
  v8 = sub_5B7F0(*(_QWORD *)(v7 + 864), &v9, a1);
  if ( (unsigned __int64)v10 > 1 )
  {
    sub_13170((__int64)"%s\n", v9);
    if ( v8 )
      goto LABEL_6;
  }
  else if ( v8 )
  {
    goto LABEL_6;
  }
  sub_13170((__int64)"<error sending command to monitor>\n");
LABEL_6:
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
LABEL_3:
  callui(1082, 0, 0, 0xFFFF, &callui, a6, v9, v10, *((_QWORD *)&v10 + 1), v11);
  return 1;
}

