__int64 __fastcall sub_3A340(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  int v3; // ebp
  __int64 *v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const char *v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  const char *v14; // rbp
  __int64 *v15; // rax
  int v16; // r12d
  __int64 *v17; // rax
  int v18; // r8d
  int v19; // r9d
  const char *v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24[5]; // [rsp+0h] [rbp-28h] BYREF

  v24[1] = __readfsqword(0x28u);
  sub_39C30(a1);
  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v3 = *(unsigned __int16 *)(a1 + 140);
      v4 = sub_34340(a1);
      v8 = src;
      if ( v4[1] )
        v8 = (const char *)*v4;
      sub_88B80((unsigned int)"Error modifier DIE %s(%u) resolving type\n", (_DWORD)v8, v3, v5, v6, v7);
    }
    return 5;
  }
  if ( *(_BYTE *)(v1 + 142) == 5 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v14 = src;
      v15 = sub_34340(*(_QWORD *)(a1 + 88));
      if ( v15[1] )
        v14 = (const char *)*v15;
      v16 = *(unsigned __int16 *)(a1 + 140);
      v17 = sub_34340(a1);
      v20 = src;
      if ( v17[1] )
        v20 = (const char *)*v17;
      sub_88B80(
        (unsigned int)"Error modifier DIE %s(%u) dependency DIE %s processing error\n",
        (_DWORD)v20,
        v16,
        (_DWORD)v14,
        v18,
        v19);
    }
    return 5;
  }
  result = 0;
  if ( a1 == v1 )
  {
    create_tinfo(a1 + 8, 1, 7, 0);
    sub_345A0(a1, 0);
    v24[0] = 0x4E7B30A9EA4DB41LL;
    sub_349E0(a1, v24);
    v9 = *(_WORD *)(a1 + 140);
    switch ( v9 )
    {
      case '5':
        v23 = *(_QWORD *)(a1 + 8);
        if ( (_BYTE)v23 )
        {
          LOBYTE(v23) = v23 | 0x80;
          *(_QWORD *)(a1 + 8) = v23;
        }
        v11 = 0xBB204036DC26F477LL;
        break;
      case '7':
        v24[0] = 0x2BA24879CEBE97BDLL;
        v21 = sub_856E0(v24, a1 + 64);
        v22 = (__int64 *)sub_856E0(v21, a1 + 72);
        sub_349E0(a1, v22);
        return 3;
      case '&':
        v10 = *(_QWORD *)(a1 + 8);
        if ( (_BYTE)v10 )
          *(_QWORD *)(a1 + 8) = v10 | 0x40;
        v11 = 0x72C69ED553720877LL;
        break;
      default:
        return 3;
    }
    v24[0] = v11;
    v12 = sub_856E0(v24, a1 + 64);
    v13 = (__int64 *)sub_856E0(v12, a1 + 72);
    sub_349E0(v1, v13);
    return 3;
  }
  return result;
}
