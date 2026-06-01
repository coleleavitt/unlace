__int64 __fastcall sub_44CA0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  const char *v7; // rsi
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v1 = qword_753F8;
  v2 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v3 = *(_QWORD *)(a1 + 12);
    v4 = *(_QWORD *)(a1 + 20);
    goto LABEL_3;
  }
  if ( !(unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)v9, 8, 1) )
  {
    v3 = LODWORD(v9[0]);
    v4 = HIDWORD(v9[0]);
    v1 = qword_753F8;
LABEL_3:
    v9[0] = v4;
    v5 = sub_44B20(v1, v3, v9);
    v6 = 1;
    if ( !v5 )
      goto LABEL_4;
  }
  v6 = 0;
LABEL_4:
  v7 = "eax";
  if ( *(_BYTE *)(qword_753F8 + 121) )
    v7 = "rax";
  sub_25E30(v2, v7, v6);
  return 0;
}

