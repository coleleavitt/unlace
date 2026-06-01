__int64 __fastcall sub_1274C0(unsigned __int8 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __m128i a5)
{
  int v5; // ebx
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rbp
  __int16 v15; // cx
  __int16 v16; // dx
  __int16 v17; // cx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int16 v23; // [rsp+0h] [rbp-48h] BYREF
  __int16 v24; // [rsp+2h] [rbp-46h]
  int v25; // [rsp+4h] [rbp-44h]
  __int64 v26; // [rsp+8h] [rbp-40h]
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( *((_DWORD *)a1 + 1) <= (int)a3 )
    return 0;
  v5 = a3;
  if ( !(_DWORD)a3 )
    return 0;
  v8 = a4;
  if ( (a1[1] & 4) != 0 )
    goto LABEL_49;
  v9 = *a1;
  if ( (_BYTE)v9 != 4 )
    goto LABEL_6;
  v10 = *((_QWORD *)a1 + 1);
  if ( sub_122600((unsigned int *)v10) )
  {
LABEL_49:
    if ( sub_11CAD0(v5) )
    {
      v9 = *a1;
LABEL_6:
      switch ( v9 )
      {
        case 0LL:
          return 1;
        case 1LL:
          if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64 *, _QWORD))(*a2 + 216))(
                  a2,
                  *((unsigned int *)a1 + 2)) )
            return 0;
          goto LABEL_11;
        case 2LL:
          v11 = *((_QWORD *)a1 + 1);
          *(_QWORD *)(v11 + 16) = sub_32ABC0(*(_QWORD *)(v11 + 16), v5, 0);
          goto LABEL_11;
        case 4LL:
          v10 = *((_QWORD *)a1 + 1);
          goto LABEL_14;
        case 5LL:
        case 6LL:
        case 9LL:
          goto LABEL_11;
        case 14LL:
          if ( *((_DWORD *)a1 + 1) / 2 < v5 )
            return 0;
          sub_123A40((__int64)&v23, *((unsigned __int8 **)a1 + 1), *((unsigned int *)a1 + 1), a4);
          v13 = v25;
          if ( v25 <= v5 )
            goto LABEL_39;
          if ( (unsigned __int8)sub_1272B0((__int64)&v23, a2, v5, v8, *(double *)a5.m128i_i64) )
            goto LABEL_38;
          if ( (_BYTE)v23 != 4 )
            goto LABEL_25;
          v13 = v25;
          if ( v5 < v25 && v5 > 0 )
          {
            v14 = *(_QWORD *)(v26 + 24);
            if ( !(unsigned __int8)sub_1272B0((__int64)&v23, a2, v5, 0, *(double *)a5.m128i_i64) )
              sub_1207E0((char *)&v23, a2, 10, v14, v5, a5);
LABEL_38:
            v13 = v25;
          }
LABEL_39:
          v15 = v23;
          v23 = *(_WORD *)a1;
          v16 = *((_WORD *)a1 + 1);
          *(_WORD *)a1 = v15;
          v17 = v24;
          v24 = v16;
          v18 = *((_DWORD *)a1 + 1);
          *((_WORD *)a1 + 1) = v17;
          v25 = v18;
          v19 = v26;
          *((_DWORD *)a1 + 1) = v13;
          v20 = *((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v19;
          v26 = v20;
          sub_11CDA0((__int64)&v23);
          break;
        case 15LL:
          return sub_126980((__int64)a1, 0, v5, 1, *(double *)a5.m128i_i64);
        default:
          return 0;
      }
      goto LABEL_11;
    }
    return 0;
  }
LABEL_14:
  v12 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 > 9u )
  {
    if ( v12 > 0xE )
    {
      if ( v12 - 19 > 2 )
        return 0;
    }
    else if ( v12 <= 0xB )
    {
      return 0;
    }
    if ( (v8 & 1) == 0 )
      return 0;
    sub_123A40((__int64)&v23, (unsigned __int8 *)(v10 + 32), a3, a4);
    if ( !(unsigned __int8)sub_1274C0((unsigned __int8 *)&v23, (__int64)a2, (unsigned int)v5, v8)
      || !(unsigned __int8)sub_1274C0(
                             (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 48LL),
                             (__int64)a2,
                             (unsigned int)v5,
                             v8) )
    {
LABEL_25:
      sub_11CDA0((__int64)&v23);
      return 0;
    }
    sub_11CA10((char *)(*((_QWORD *)a1 + 1) + 32LL), (char *)&v23);
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 68LL) = v5;
    sub_11CDA0((__int64)&v23);
  }
  else if ( v12 > 7 )
  {
    if ( *(_DWORD *)(v10 + 36) > v5 )
      return 0;
    if ( *(_DWORD *)(v10 + 36) == v5 )
    {
      sub_123A40((__int64)&v23, (unsigned __int8 *)(v10 + 32), a3, a4);
      sub_11CDA0((__int64)a1);
      sub_123A40((__int64)a1, (unsigned __int8 *)&v23, v21, v22);
      sub_11CDA0((__int64)&v23);
    }
    else
    {
      *(_DWORD *)(v10 + 68) = v5;
    }
  }
  else
  {
    if ( v12 != 7
      || (v8 & 1) == 0
      || !(unsigned __int8)sub_1274C0((unsigned __int8 *)(v10 + 32), (__int64)a2, (unsigned int)v5, v8) )
    {
      return 0;
    }
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 68LL) = v5;
  }
LABEL_11:
  *((_DWORD *)a1 + 1) = v5;
  return 1;
}

