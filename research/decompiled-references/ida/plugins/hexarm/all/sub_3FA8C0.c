unsigned __int64 __fastcall sub_3FA8C0(__int64 a1)
{
  char v1; // r15
  int v2; // r15d
  char v3; // dl
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  char v10; // al
  char v11; // [rsp+Ch] [rbp-34Ch]
  _DWORD v12[92]; // [rsp+10h] [rbp-348h] BYREF
  _QWORD v13[59]; // [rsp+180h] [rbp-1D8h] BYREF

  v13[51] = __readfsqword(0x28u);
  v1 = *(_BYTE *)(a1 + 56);
  qmemcpy(v13, (const void *)(a1 + 392), 0x198u);
  qmemcpy(v12, (const void *)(a1 + 24), 0x168u);
  v2 = v1 & 0xF;
  while ( 1 )
  {
    v3 = v12[7];
    v4 = v13[1];
    if ( LOWORD(v12[6]) > 0x50u )
      break;
    if ( LOWORD(v12[6]) <= 0x11u )
    {
      if ( LOWORD(v12[6]) == 4 )
        goto LABEL_6;
    }
    else
    {
      v5 = 1LL << (LOBYTE(v12[6]) - 18);
      if ( (v5 & 0x3000000F) != 0 )
        goto LABEL_7;
      if ( (v5 & 0x4000000000002020LL) != 0 )
      {
LABEL_6:
        if ( (v12[7] & 1) != 0 )
          goto LABEL_7;
        v11 = v12[7];
        v10 = is_call_insn();
        v3 = v11;
        if ( v10 )
          goto LABEL_7;
        goto LABEL_18;
      }
    }
    if ( (v12[7] & 1) != 0 )
      goto LABEL_13;
LABEL_18:
    if ( (v3 & 1) != 0 )
      goto LABEL_7;
    v8 = v13[1];
LABEL_20:
    if ( v8 >= v13[2] || (unsigned int)sub_1D5710(v13, (__int64)v12) )
      goto LABEL_7;
    v9 = v12[8] & 0xF;
    if ( v2 != v9 )
    {
      v6 = *(_QWORD *)(a1 + 848);
      if ( *(_QWORD *)(a1 + 856) < v6 )
        goto LABEL_8;
      v2 ^= 1u;
      if ( v9 != v2 )
        goto LABEL_8;
      *(_QWORD *)(a1 + 848) = v4;
    }
  }
  if ( (unsigned __int16)(LOWORD(v12[6]) - 521) <= 1u )
    goto LABEL_7;
  if ( (v12[7] & 1) == 0 )
    goto LABEL_18;
LABEL_13:
  if ( BYTE1(v12[10]) == 1 && HIWORD(v12[11]) == 15 )
  {
    v8 = v13[1];
    goto LABEL_20;
  }
LABEL_7:
  v6 = *(_QWORD *)(a1 + 848);
LABEL_8:
  *(_QWORD *)(a1 + 856) = v4;
  if ( *(_QWORD *)(a1 + 40) < v6 )
    return v6;
  return v4;
}

