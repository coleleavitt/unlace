_QWORD *__fastcall sub_24EE70(__int64 a1, __int64 *a2, __int64 a3, unsigned __int8 a4, double a5)
{
  int v5; // eax
  __int64 v7; // rcx
  __int64 *v8; // r14
  _QWORD *v9; // r13
  _QWORD *result; // rax
  __int64 *v11; // rsi
  __int64 *v12; // rsi
  _QWORD *v13; // r12
  char v14; // al
  __int64 *v15; // rcx
  unsigned int v16; // r15d
  char v17; // al
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // r13
  char tinfo_property; // al
  __int64 v22; // rax
  __int64 v23; // r13
  unsigned int v24; // edx
  __int64 *v25; // rsi
  char v26; // al
  int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // edx
  const char *v30; // rcx
  int v31; // edx
  __int64 v32; // r8
  _QWORD *v33; // [rsp+0h] [rbp-78h]
  __int64 v34; // [rsp+8h] [rbp-70h]
  __int64 v35; // [rsp+18h] [rbp-60h] BYREF
  __int64 v36; // [rsp+20h] [rbp-58h] BYREF
  __int64 v37; // [rsp+28h] [rbp-50h] BYREF
  __int64 v38[9]; // [rsp+30h] [rbp-48h] BYREF

  v33 = (_QWORD *)a3;
  v38[1] = __readfsqword(0x28u);
  v5 = *((_DWORD *)a2 + 1);
  if ( (v5 & 0x80u) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCB06u, a5);
    goto LABEL_118;
  }
  v7 = *(unsigned int *)a2;
  v8 = a2;
  v35 = 0;
  if ( (v5 & 0x10) == 0 )
  {
LABEL_9:
    v36 = 0;
    if ( (unsigned int)v7 > 0x34 )
      goto LABEL_14;
    if ( (unsigned int)v7 <= 4 )
    {
      if ( (_DWORD)v7 == 2 )
      {
        if ( (*((_BYTE *)v8 + 65) & 2) != 0 )
        {
LABEL_41:
          v19 = *((_DWORD *)v8 + 17);
          v20 = sub_24D0D0(a1, (__int64)(v8 + 4), (__int64)(v8 + 6), (__int64)&v35, a5);
          tinfo_property = get_tinfo_property();
          v9 = (_QWORD *)sub_244320(
                           *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL),
                           v20,
                           v19,
                           (tinfo_property & 0xF) == 9,
                           a5);
          *v9 = v8[3];
LABEL_19:
          if ( a4 )
          {
            if ( *((_BYTE *)v8 + 64) )
            {
              if ( !(_BYTE)v35 && (*((_BYTE *)v8 + 65) & 2) == 0 )
              {
                sub_32C430(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)v8 + 17), 0);
                copy_tinfo_t();
                clear_tinfo_t();
              }
              v9 = sub_24AA50(a1, (__int64 *)v8[3], (__int64)(v8 + 8), &v35, (__int64)v9, a5);
            }
            else
            {
              sub_2441C0((__int64)v9, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 0, a5);
              *v9 = v8[3];
            }
            sub_246B40((__int64)v9, *(_QWORD *)(a1 + 328), v33, a5);
          }
          goto LABEL_26;
        }
        if ( (get_tinfo_property() & 0xF) == 9 || (get_tinfo_property() & 0x2F) == 0xD )
        {
          v38[0] = 0;
          copy_tinfo_t();
        }
        else
        {
          sub_32C430(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)v8 + 17), 0);
        }
        a2 = v38;
        copy_tinfo_t();
        clear_tinfo_t();
        v7 = *(unsigned int *)v8;
        goto LABEL_14;
      }
      if ( (unsigned int)v7 <= 2 )
      {
        if ( (_DWORD)v7 != 1 )
        {
LABEL_62:
          if ( !under_debugger )
            sub_383060(0xC4E9u, a5);
          goto LABEL_118;
        }
        v32 = 0;
      }
      else
      {
        v32 = (__int64)(v8 + 8);
      }
      a2 = (__int64 *)v8[3];
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
      if ( !(unsigned __int8)sub_242770(v23, (unsigned __int64)a2, (__int64)(v8 + 4), &v35, v32, a5) )
      {
        sub_32C430(v38, *(_QWORD *)(v23 + 1504), *((_DWORD *)v8 + 9), 0);
        a2 = v38;
        copy_tinfo_t();
        clear_tinfo_t();
      }
    }
    else if ( ((1LL << v7) & 0x1E03C00BA8000LL) != 0 )
    {
      sub_32C430(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)v8 + 9), 2);
      copy_tinfo_t();
      clear_tinfo_t();
      a2 = &v35;
      copy_tinfo_t();
    }
    else
    {
      a3 = 0x1E03C021050020LL;
      if ( ((1LL << v7) & 0x1E03C021050020LL) != 0 )
      {
        sub_32C430(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)v8 + 9), 1);
        copy_tinfo_t();
        clear_tinfo_t();
        a2 = &v35;
        copy_tinfo_t();
      }
      else
      {
        if ( (_DWORD)v7 != 22 )
          goto LABEL_14;
        sub_32C430(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)v8 + 9), 0);
        copy_tinfo_t();
        clear_tinfo_t();
        a2 = &v35;
        copy_tinfo_t();
      }
    }
    v7 = *(unsigned int *)v8;
LABEL_14:
    switch ( v7 )
    {
      case 1LL:
        if ( a4 )
        {
          v12 = (__int64 *)v8[3];
          v38[0] = 0;
          v13 = (_QWORD *)sub_249AF0(a1, v12, (__int64)(v8 + 4), v38, &v35, 0, a5);
          clear_tinfo_t();
          v14 = get_tinfo_property();
          v15 = v13 + 6;
          v16 = *((_DWORD *)v8 + 9);
          if ( (v14 & 0xF) != 9 )
            v15 = &v35;
          v34 = sub_24D0D0(a1, (__int64)(v8 + 6), (__int64)(v8 + 8), (__int64)v15, a5);
          v17 = get_tinfo_property();
          v18 = sub_244320(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v34, v16, (v17 & 0xF) == 9, a5);
          if ( (*((_BYTE *)v8 + 33) & 2) != 0 )
            *(_DWORD *)(v18 + 56) |= 2u;
          if ( *v13 == -1 )
            *v13 = v8[3];
          v9 = (_QWORD *)sub_249120(*(_QWORD *)(a1 + 328), v18, (__int64)v13, a5);
          *v9 = v8[3];
          sub_246B40((__int64)v9, *(_QWORD *)(a1 + 328), v33, a5);
LABEL_26:
          clear_tinfo_t();
          goto LABEL_7;
        }
        if ( !under_debugger )
          sub_383060(0xC4E8u, a5);
        return result;
      case 2LL:
        goto LABEL_41;
      case 3LL:
      case 4LL:
        v11 = (__int64 *)v8[3];
        v38[0] = 0;
        v9 = (_QWORD *)sub_249AF0(a1, v11, (__int64)(v8 + 4), v38, &v35, 0, a5);
        clear_tinfo_t();
        goto LABEL_19;
      case 5LL:
        v31 = 47;
        goto LABEL_101;
      case 6LL:
        v31 = 49;
        goto LABEL_101;
      case 7LL:
        v31 = 50;
LABEL_101:
        v22 = (__int64)sub_24B220(a1, (__int64)v8, v31, &v36, v33, a4, a5);
        goto LABEL_46;
      case 8LL:
      case 9LL:
      case 10LL:
        v22 = (__int64)sub_24CEA0(a1, (__int64)v8, v33, a4, a5);
        goto LABEL_46;
      case 11LL:
        v22 = (__int64)sub_24CCD0(a1, (__int64)v8, v33, a4, a5);
        goto LABEL_46;
      case 12LL:
        v28 = 35;
        goto LABEL_65;
      case 13LL:
        v28 = 36;
        goto LABEL_65;
      case 14LL:
        v28 = 37;
        goto LABEL_65;
      case 15LL:
        v28 = 39;
        goto LABEL_65;
      case 16LL:
        v28 = 38;
        goto LABEL_65;
      case 17LL:
        v28 = 41;
        goto LABEL_65;
      case 18LL:
        v28 = 40;
        goto LABEL_65;
      case 19LL:
        v28 = 19;
        goto LABEL_65;
      case 20LL:
        v28 = 21;
        goto LABEL_65;
      case 21LL:
        v28 = 20;
        goto LABEL_65;
      case 22LL:
        v28 = 34;
        goto LABEL_65;
      case 23LL:
        v28 = 33;
        goto LABEL_65;
      case 24LL:
        v28 = 32;
LABEL_65:
        v22 = (__int64)sub_24B3A0(a1, (__int64)v8, v28, &v36, v33, a4, a5);
        goto LABEL_46;
      case 25LL:
        v30 = "CFADD";
        goto LABEL_76;
      case 26LL:
        v30 = "OFADD";
        goto LABEL_76;
      case 27LL:
        v30 = "CFSHL";
        goto LABEL_76;
      case 28LL:
        v30 = "CFSHR";
        goto LABEL_76;
      case 29LL:
      case 40LL:
        v24 = 30;
        goto LABEL_56;
      case 30LL:
        v30 = "OFSUB";
        goto LABEL_76;
      case 31LL:
        v30 = "SETP";
LABEL_76:
        v22 = (__int64)sub_24BC90(a1, (__int64)v8, v33, v30, a4, a5);
        goto LABEL_46;
      case 32LL:
        v24 = 23;
        goto LABEL_56;
      case 33LL:
        v24 = 22;
        goto LABEL_56;
      case 34LL:
        v24 = 25;
        goto LABEL_56;
      case 35LL:
        v24 = 31;
        goto LABEL_56;
      case 36LL:
        v24 = 29;
        goto LABEL_56;
      case 37LL:
        v24 = 27;
        goto LABEL_56;
      case 38LL:
        v24 = 28;
        goto LABEL_56;
      case 39LL:
        v24 = 24;
        goto LABEL_56;
      case 41LL:
        v24 = 26;
LABEL_56:
        v22 = sub_24BFF0(a1, (__int64)v8, v24, &v36, a4, a5);
        goto LABEL_46;
      case 42LL:
      case 53LL:
        sub_32C270(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)v8 + 9));
        v25 = (__int64 *)v8[3];
        v37 = 0;
        v9 = (_QWORD *)sub_249AF0(a1, v25, (__int64)(v8 + 4), &v37, v38, 0, a5);
        clear_tinfo_t();
        clear_tinfo_t();
        *v9 = v8[3];
        if ( *(_DWORD *)v8 == 53 )
        {
          v26 = get_tinfo_property();
          if ( (v26 & 0xE) == 0 && (v26 & 0x30) != 0 )
          {
            v27 = sub_241FB0((__int64 ***)v8[7], *(_QWORD *)(a1 + 328), *((_DWORD *)v8 + 9));
            sub_32C430(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)v8 + 9), v27);
            sub_246B40((__int64)v9, *(_QWORD *)(a1 + 328), v38, a5);
            clear_tinfo_t();
          }
        }
        goto LABEL_26;
      case 43LL:
        v29 = 23;
        goto LABEL_74;
      case 44LL:
        v29 = 22;
        goto LABEL_74;
      case 45LL:
        v29 = 25;
        goto LABEL_74;
      case 46LL:
        v29 = 31;
        goto LABEL_74;
      case 47LL:
        v29 = 29;
        goto LABEL_74;
      case 48LL:
        v29 = 27;
        goto LABEL_74;
      case 49LL:
        v29 = 28;
        goto LABEL_74;
      case 50LL:
        v29 = 24;
        goto LABEL_74;
      case 51LL:
        v29 = 30;
        goto LABEL_74;
      case 52LL:
        v29 = 26;
LABEL_74:
        v22 = (__int64)sub_24C1C0(a1, (__int64)v8, v29, &v36, a5);
        goto LABEL_46;
      case 54LL:
      case 62LL:
        goto LABEL_45;
      case 55LL:
        v9 = nullptr;
        if ( *((_BYTE *)v8 + 32) != 6 )
          goto LABEL_26;
        v22 = (__int64)sub_246080(*(_QWORD *)(a1 + 176), v8[3], v8[5], v7);
        goto LABEL_46;
      case 56LL:
      case 57LL:
        v22 = (__int64)sub_24D8E0(a1, (__int64)v8, v33, a4, a5);
        goto LABEL_46;
      default:
        goto LABEL_62;
    }
LABEL_118:
    BUG();
  }
  if ( (_DWORD)v7 == 2 )
  {
    sub_32C150(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)a2 + 17));
    a2 = v38;
    copy_tinfo_t();
    clear_tinfo_t();
    v7 = *(unsigned int *)v8;
    goto LABEL_9;
  }
  if ( (_DWORD)v7 != 62 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v9 = (_QWORD *)sub_24E7E0(a1, (__int64)a2, (_QWORD *)a3, a4, a5);
      goto LABEL_7;
    }
    sub_32C150(v38, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *((_DWORD *)a2 + 9));
    a2 = v38;
    copy_tinfo_t();
    clear_tinfo_t();
    v7 = *(unsigned int *)v8;
    goto LABEL_9;
  }
  v36 = 0;
LABEL_45:
  v22 = sub_23E3A0(v8[3], (__int64)a2, a3, v7);
LABEL_46:
  v9 = (_QWORD *)v22;
  clear_tinfo_t();
LABEL_7:
  clear_tinfo_t();
  return v9;
}

