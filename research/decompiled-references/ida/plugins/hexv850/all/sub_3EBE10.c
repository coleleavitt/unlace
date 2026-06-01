unsigned __int64 __fastcall sub_3EBE10(__int64 a1, unsigned __int8 *a2, __int64 a3, int a4, int a5, double a6)
{
  unsigned __int8 v8; // al
  __int16 v10; // ax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rsi
  unsigned __int64 v16; // [rsp+10h] [rbp-60h] BYREF
  __int64 v17; // [rsp+18h] [rbp-58h]
  _DWORD v18[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-38h]

  v8 = a2[1];
  v19 = __readfsqword(0x28u);
  if ( ((v8 - 2) & 0xFD) == 0 )
  {
    v17 = 0;
    v16 = 0xFFFFFFFF00000000LL;
    if ( v8 != 4 )
      goto LABEL_6;
    goto LABEL_9;
  }
  if ( v8 != 5 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCECDu, a6);
    BUG();
  }
  v17 = 0;
  v16 = 0xFFFFFFFF00000000LL;
  v10 = *(_WORD *)(a1 + 48);
  switch ( v10 )
  {
    case '%':
LABEL_9:
      v12 = 4;
      goto LABEL_10;
    case '&':
      v12 = 0;
LABEL_10:
      v13 = sub_11C030(
              (__int64)&v16,
              *(_QWORD *)(a1 + 800),
              *(_QWORD *)(a1 + 40),
              a2,
              a3,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
              v12,
              -1);
      v14 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v14 + 84) < a4 )
      {
        if ( !v13 )
        {
          sub_1181E0((__int64)&v16);
          if ( (_BYTE)v16 )
            goto LABEL_7;
          break;
        }
        sub_11BC20((char *)&v16, v14, 9, *(_QWORD *)(a1 + 40), a4);
      }
      if ( (_BYTE)v16 )
        goto LABEL_7;
      break;
    case '$':
      v12 = 1;
      goto LABEL_10;
  }
LABEL_6:
  sub_11BE50((__int64)&v16, *(_QWORD *)(a1 + 832), a3, a4, *(_QWORD *)(a1 + 40), *a2);
LABEL_7:
  v18[0] = 1;
  v18[2] = a5;
  v18[1] = a4;
  sub_3EBC10(a1, 4, (unsigned __int8 *)&v16, nullptr, (unsigned __int8 *)v18);
  sub_1181E0((__int64)v18);
  sub_1181E0((__int64)&v16);
  return v19 - __readfsqword(0x28u);
}

