unsigned __int64 __fastcall sub_601D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v4; // rax
  __int64 v5; // rax
  char v6; // bp
  __int64 v7; // rsi
  __int64 v9; // rax
  _BYTE v10[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v11[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v11[0] = __readfsqword(0x28u);
  v4 = sub_196E10(v10, v11, v2) - (_QWORD)v10;
  if ( v4 )
    sub_5F5C0(a2, v10, v4);
  v5 = a2[1];
  v6 = *(_BYTE *)(a1 + 24);
  v7 = *a2;
  if ( a2[2] < (unsigned __int64)(v5 + 1) )
  {
    v9 = sub_1987B0(a2, v7, v5 + 1, 1);
    *a2 = v9;
    v7 = v9;
    v5 = a2[1];
  }
  *(_BYTE *)(v7 + v5) = v6;
  ++a2[1];
  return v11[0] - __readfsqword(0x28u);
}
