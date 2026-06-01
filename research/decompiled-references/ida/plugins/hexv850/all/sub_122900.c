__int64 __fastcall sub_122900(unsigned __int8 *a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rbp
  __int16 v14; // cx
  __int16 v15; // dx
  __int16 v16; // cx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int16 v20; // [rsp+0h] [rbp-48h] BYREF
  __int16 v21; // [rsp+2h] [rbp-46h]
  int v22; // [rsp+4h] [rbp-44h]
  __int64 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( *((_DWORD *)a1 + 1) <= a3 || !a3 )
    return 0;
  if ( (a1[1] & 4) != 0 )
    goto LABEL_49;
  v8 = *a1;
  if ( (_BYTE)v8 != 4 )
    goto LABEL_6;
  v9 = *((_QWORD *)a1 + 1);
  if ( sub_11DA40((unsigned int *)v9) )
  {
LABEL_49:
    if ( sub_117F10(a3) )
    {
      v8 = *a1;
LABEL_6:
      switch ( v8 )
      {
        case 0LL:
          return 1;
        case 1LL:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 216LL))(
                  a2,
                  *((unsigned int *)a1 + 2)) )
            return 0;
          goto LABEL_11;
        case 2LL:
          v10 = *((_QWORD *)a1 + 1);
          *(_QWORD *)(v10 + 16) = sub_325150(*(_QWORD *)(v10 + 16), (unsigned int)a3, 0);
          goto LABEL_11;
        case 4LL:
          v9 = *((_QWORD *)a1 + 1);
          goto LABEL_14;
        case 5LL:
        case 6LL:
        case 9LL:
          goto LABEL_11;
        case 14LL:
          if ( *((_DWORD *)a1 + 1) / 2 < a3 )
            return 0;
          sub_11EE80((__int64)&v20, *((unsigned __int8 **)a1 + 1));
          v12 = v22;
          if ( v22 <= a3 )
            goto LABEL_39;
          if ( (unsigned __int8)sub_1226F0((unsigned __int64)&v20, a2, a3) )
            goto LABEL_38;
          if ( (_BYTE)v20 != 4 )
            goto LABEL_25;
          v12 = v22;
          if ( a3 < v22 && a3 > 0 )
          {
            v13 = *(_QWORD *)(v23 + 24);
            if ( !(unsigned __int8)sub_1226F0((unsigned __int64)&v20, a2, a3) )
              sub_11BC20((char *)&v20, a2, 10, v13, a3);
LABEL_38:
            v12 = v22;
          }
LABEL_39:
          v14 = v20;
          v20 = *(_WORD *)a1;
          v15 = *((_WORD *)a1 + 1);
          *(_WORD *)a1 = v14;
          v16 = v21;
          v21 = v15;
          v17 = *((_DWORD *)a1 + 1);
          *((_WORD *)a1 + 1) = v16;
          v22 = v17;
          v18 = v23;
          *((_DWORD *)a1 + 1) = v12;
          v19 = *((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v18;
          v23 = v19;
          sub_1181E0((__int64)&v20);
          break;
        case 15LL:
          return sub_121DC0((__int64)a1, 0, a3, 1);
        default:
          return 0;
      }
      goto LABEL_11;
    }
    return 0;
  }
LABEL_14:
  v11 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 > 9u )
  {
    if ( v11 > 0xE )
    {
      if ( v11 - 19 > 2 )
        return 0;
    }
    else if ( v11 <= 0xB )
    {
      return 0;
    }
    if ( (a4 & 1) == 0 )
      return 0;
    sub_11EE80((__int64)&v20, (unsigned __int8 *)(v9 + 32));
    if ( !(unsigned __int8)sub_122900(&v20, a2, (unsigned int)a3)
      || !(unsigned __int8)sub_122900(*((_QWORD *)a1 + 1) + 48LL, a2, (unsigned int)a3) )
    {
LABEL_25:
      sub_1181E0((__int64)&v20);
      return 0;
    }
    sub_117E50((char *)(*((_QWORD *)a1 + 1) + 32LL), (char *)&v20);
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 68LL) = a3;
    sub_1181E0((__int64)&v20);
  }
  else if ( v11 > 7 )
  {
    if ( *(_DWORD *)(v9 + 36) > a3 )
      return 0;
    if ( *(_DWORD *)(v9 + 36) == a3 )
    {
      sub_11EE80((__int64)&v20, (unsigned __int8 *)(v9 + 32));
      sub_1181E0((__int64)a1);
      sub_11EE80((__int64)a1, (unsigned __int8 *)&v20);
      sub_1181E0((__int64)&v20);
    }
    else
    {
      *(_DWORD *)(v9 + 68) = a3;
    }
  }
  else
  {
    if ( v11 != 7 || (a4 & 1) == 0 || !(unsigned __int8)sub_122900(v9 + 32, a2, (unsigned int)a3) )
      return 0;
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 68LL) = a3;
  }
LABEL_11:
  *((_DWORD *)a1 + 1) = a3;
  return 1;
}

