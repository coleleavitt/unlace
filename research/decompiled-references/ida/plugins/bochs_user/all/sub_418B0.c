__int64 __fastcall sub_418B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  const char *v5; // rsi
  unsigned int v7; // [rsp+4h] [rbp-134h] BYREF
  __int64 v8; // [rsp+8h] [rbp-130h] BYREF
  _BYTE v9[264]; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v2 = *(_QWORD *)(a1 + 12);
    v3 = *(_QWORD *)(a1 + 20);
  }
  else
  {
    if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v8, 8, 1) )
      goto LABEL_12;
    v2 = (unsigned int)v8;
    v3 = HIDWORD(v8);
  }
  v9[0] = 0;
  if ( v3 <= 0xFFFF )
  {
    sub_36760(v3, v9, 260);
  }
  else
  {
    sub_26EC0(v1, v3, (__int64)v9, 259, 1);
    if ( !v9[0] )
      goto LABEL_12;
  }
  v9[259] = 0;
  if ( !(unsigned int)sub_4F840(qword_753F8 + 64, v2, v9, &v7, &v8, 0) )
  {
    v4 = v8 + v7;
    goto LABEL_7;
  }
LABEL_12:
  v4 = 0;
LABEL_7:
  v5 = "eax";
  if ( *(_BYTE *)(qword_753F8 + 121) )
    v5 = "rax";
  sub_25E30(v1, v5, v4);
  return 0;
}

