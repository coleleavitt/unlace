unsigned __int64 __fastcall sub_A5810(__int64 a1, __int64 *a2)
{
  size_t v3; // rax
  __int64 v4; // rax
  char v5; // bp
  __int64 v6; // rsi
  __int64 v8; // rax
  _BYTE v9[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v10[0] = __readfsqword(0x28u);
  v3 = sub_196CD0(v9, v10) - (_QWORD)v9;
  if ( v3 )
    sub_9E3C0(a2, v9, v3);
  v4 = a2[1];
  v5 = *(_BYTE *)(a1 + 16);
  v6 = *a2;
  if ( a2[2] < (unsigned __int64)(v4 + 1) )
  {
    v8 = sub_1987B0(a2, v6, v4 + 1, 1);
    *a2 = v8;
    v6 = v8;
    v4 = a2[1];
  }
  *(_BYTE *)(v6 + v4) = v5;
  ++a2[1];
  return v10[0] - __readfsqword(0x28u);
}
