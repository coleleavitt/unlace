unsigned __int64 __fastcall sub_3E3E40(_QWORD *a1, int a2)
{
  __int16 v4; // ax
  __int16 v5; // cx
  unsigned __int16 v6; // cx
  __int64 v7; // r14
  int v8; // eax
  unsigned __int64 v9; // r9
  unsigned __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdi
  _DWORD v14[92]; // [rsp+0h] [rbp-348h] BYREF
  _QWORD v15[59]; // [rsp+170h] [rbp-1D8h] BYREF

  v15[51] = __readfsqword(0x28u);
  qmemcpy(v15, a1 + 49, 0x198u);
  qmemcpy(v14, a1 + 3, 0x168u);
  v4 = v14[7];
  v5 = v14[6];
  while ( 1 )
  {
    v6 = v5 - 15;
    v7 = v15[1];
    v8 = v4 & 0x100;
    if ( v6 <= 0x38u )
    {
      if ( ((1LL << v6) & 0x101014000000000LL) != 0 )
        goto LABEL_6;
      if ( ((1LL << v6) & 9) != 0 )
        break;
    }
    if ( v8 )
      goto LABEL_6;
    v11 = v15[1];
LABEL_12:
    if ( v11 >= v15[2] )
      goto LABEL_6;
    if ( (unsigned int)sub_1CEBD0(v15, (__int64)v14) )
      goto LABEL_6;
    v5 = v14[6];
    if ( LOWORD(v14[6]) == 16 || v15[3] != -1 )
      goto LABEL_6;
    v4 = v14[7];
    if ( LOWORD(v14[6]) == 43 || LOWORD(v14[6]) <= 4u )
    {
      v12 = 0;
    }
    else
    {
      v12 = v14[7] & 0x1F;
      if ( (v14[7] & 0x10) != 0 )
        v12 = 16;
    }
    if ( a2 != v12 )
    {
      v9 = a1[106];
      if ( a1[107] < v9 )
        goto LABEL_7;
      v13 = (unsigned int)(a2 - 1);
      a2 = 16;
      if ( (unsigned int)v13 <= 0xD )
        a2 = dword_407800[v13];
      if ( a2 != v12 )
        goto LABEL_7;
      a1[106] = v7;
    }
  }
  if ( !v8 && !(unsigned __int8)is_call_insn() )
  {
    v11 = v15[1];
    goto LABEL_12;
  }
LABEL_6:
  v9 = a1[106];
LABEL_7:
  a1[107] = v7;
  if ( a1[5] < v9 )
    return v9;
  return v7;
}

