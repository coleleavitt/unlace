__int64 __fastcall sub_13CF50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128i a7)
{
  unsigned int v8; // r14d
  char v9; // al
  unsigned int v11; // ebx
  __int64 v13; // r13
  unsigned __int64 *v14; // rbp
  char v15; // [rsp+Fh] [rbp-49h]
  __int64 v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(_DWORD *)(a6 + 4);
  v9 = *(_BYTE *)(a6 + 1);
  v16[1] = __readfsqword(0x28u);
  v15 = v9;
  v11 = sub_13C7E0(a1, a2, (int *)a3, a4, a5, v8, a7);
  if ( (_BYTE)v11 )
  {
    if ( (v15 & 2) != 0 )
      *(_BYTE *)(a2 + 1) |= 2u;
  }
  else
  {
    v13 = *(_QWORD *)(a3 + 24);
    v14 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( sub_1345B0(v16, *(_QWORD *)(a1 + 64), a5, v8) )
      sub_120A10(a5, v14, v16[0], *(_DWORD *)(a5 + 4), v13, 0);
  }
  return v11;
}

