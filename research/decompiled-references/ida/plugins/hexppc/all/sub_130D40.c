unsigned __int64 __fastcall sub_130D40(__int64 *a1, __int64 a2)
{
  unsigned __int8 v3; // al
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int8 v8[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  while ( 1 )
  {
    v3 = *(_BYTE *)a2;
    if ( *(_BYTE *)a2 != 14 )
      break;
    sub_130D40(a1, *(_QWORD *)(a2 + 8));
    a2 = *(_QWORD *)(a2 + 8) + 16LL;
  }
  if ( v3 > 0xEu )
  {
    if ( v3 != 15 )
    {
LABEL_5:
      if ( !under_debugger )
        sub_37EEE0(51240);
      BUG();
    }
  }
  else if ( (v3 & 0xFB) != 1 )
  {
    goto LABEL_5;
  }
  sub_120000((__int64)v8, (unsigned __int8 *)a2);
  v4 = a1[1];
  v5 = *a1;
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v7 = qvector_reserve();
    *a1 = v7;
    v5 = v7;
    v4 = a1[1];
  }
  sub_120000(v5 + 16 * v4, v8);
  ++a1[1];
  sub_119360((__int64)v8);
  return v9 - __readfsqword(0x28u);
}

