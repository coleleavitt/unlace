__int64 __fastcall sub_136890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r14d
  char v8; // al
  unsigned int v10; // ebx
  __int64 v12; // r13
  __int64 v13; // rbp
  char v14; // [rsp+Fh] [rbp-49h]
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = *(_DWORD *)(a6 + 4);
  v8 = *(_BYTE *)(a6 + 1);
  v15[1] = __readfsqword(0x28u);
  v14 = v8;
  v10 = sub_136120(a1, a2, (int *)a3, a4, a5, v7);
  if ( (_BYTE)v10 )
  {
    if ( (v14 & 2) != 0 )
      *(_BYTE *)(a2 + 1) |= 2u;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 24);
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( sub_12DEF0(v15, *(_QWORD *)(a1 + 64), a5, v7) )
      sub_11A350(a5, v13, v15[0], *(_DWORD *)(a5 + 4), v12, 0);
  }
  return v10;
}

