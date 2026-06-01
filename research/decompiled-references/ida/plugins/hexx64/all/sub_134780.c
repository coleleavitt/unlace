unsigned __int64 __fastcall sub_134780(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v12; // rax
  unsigned __int8 v13[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  while ( 1 )
  {
    v6 = *(_BYTE *)a2;
    if ( *(_BYTE *)a2 != 14 )
      break;
    sub_134780(a1, *(_QWORD *)(a2 + 8), a3, a4);
    a2 = *(_QWORD *)(a2 + 8) + 16LL;
  }
  if ( v6 > 0xEu )
  {
    if ( v6 != 15 )
    {
LABEL_5:
      if ( !under_debugger )
        sub_383060(0xC828u, a5);
      BUG();
    }
  }
  else if ( (v6 & 0xFB) != 1 )
  {
    goto LABEL_5;
  }
  sub_123A40((__int64)v13, (unsigned __int8 *)a2, a3, a4);
  v8 = a1[1];
  v9 = *a1;
  v10 = v8 + 1;
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v12 = qvector_reserve((__int64)a1, v9, v10, 16);
    *a1 = v12;
    v9 = v12;
    v8 = a1[1];
  }
  sub_123A40(v9 + 16 * v8, v13, v10, v7);
  ++a1[1];
  sub_11CDA0((__int64)v13);
  return v14 - __readfsqword(0x28u);
}

