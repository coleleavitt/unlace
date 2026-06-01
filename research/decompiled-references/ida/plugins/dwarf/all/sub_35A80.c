__int64 __fastcall sub_35A80(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int16 v4; // ax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  const char *v11; // rbp
  __int64 *v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rsi
  const char *v17; // rbp
  __int64 *v18; // rax
  __int64 *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  _QWORD v24[5]; // [rsp+0h] [rbp-28h] BYREF

  v24[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 88);
  result = *(unsigned __int8 *)(v2 + 142);
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 5 )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v10 = sub_34340(v2);
        v11 = src;
        if ( v10[1] )
          v11 = (const char *)*v10;
        v12 = sub_34340(a1);
        v16 = src;
        if ( v12[1] )
          v16 = (const char *)*v12;
        sub_88B80(
          (unsigned int)"Error pointer DIE %s dependency DIE %s processing error\n",
          (_DWORD)v16,
          (_DWORD)v11,
          v13,
          v14,
          v15);
      }
    }
    else
    {
      if ( (unsigned __int8)sub_350A0(v2, a1 + 8) )
      {
        v4 = *(_WORD *)(a1 + 140);
        switch ( v4 )
        {
          case '5':
            v7 = *(_QWORD *)(a1 + 8);
            if ( (_BYTE)v7 )
            {
              LOBYTE(v7) = v7 | 0x80;
              *(_QWORD *)(a1 + 8) = v7;
            }
            v6 = 0xBB204036DC26F477LL;
            break;
          case '7':
            v6 = 0x2BA24879CEBE97BDLL;
            break;
          case '&':
            v5 = *(_QWORD *)(a1 + 8);
            if ( (_BYTE)v5 )
              *(_QWORD *)(a1 + 8) = v5 | 0x40;
            v6 = 0x72C69ED553720877LL;
            break;
          default:
LABEL_17:
            sub_345A0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 88) + 136LL));
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 142LL);
        }
        v24[0] = v6;
        v8 = sub_856E0(v24, a1 + 64);
        v9 = (__int64 *)sub_856E0(v8, *(_QWORD *)(a1 + 88) + 72LL);
        sub_349E0(a1, v9);
        goto LABEL_17;
      }
      if ( (debug & 0x400000) != 0 )
      {
        v17 = src;
        v18 = sub_34340(*(_QWORD *)(a1 + 88));
        if ( v18[1] )
          v17 = (const char *)*v18;
        v19 = sub_34340(a1);
        v23 = src;
        if ( v19[1] )
          v23 = (const char *)*v19;
        sub_88B80(
          (unsigned int)"Error modifier DIE %s propagating DIE %s type information\n",
          (_DWORD)v23,
          (_DWORD)v17,
          v20,
          v21,
          v22);
      }
    }
    return 5;
  }
  return result;
}

