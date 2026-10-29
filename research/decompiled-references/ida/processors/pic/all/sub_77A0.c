__int64 __fastcall sub_77A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // kr08_8
  _QWORD *v4; // rbx
  __int64 v6; // r12
  __int64 v8; // rdi
  __int64 v9; // r12
  _BYTE *v10; // rax
  _BYTE *v11; // r13
  __int16 v12; // ax
  char v13; // al
  __int64 v14; // rdx
  _BYTE *v15; // rax
  __int64 v16; // rax
  const char *v17; // rsi

  v3 = v2;
  v4 = a1;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      switch ( *(_BYTE *)(a2 + 32) )
      {
        case 0:
          goto LABEL_23;
        case 1:
          v16 = *a1;
          v17 = "++";
          goto LABEL_22;
        case 2:
          v16 = *a1;
          v17 = "--";
LABEL_22:
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v16 + 56))(a1, v17, 9);
LABEL_23:
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[77] + 16LL) + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          return 1;
        case 3:
          goto LABEL_28;
        case 4:
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[77] + 16LL) + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "--", 9);
          return 1;
        default:
          if ( under_debugger )
            goto LABEL_35;
          interr();
          break;
      }
      goto LABEL_33;
    case 2:
      v8 = a1[77];
      v9 = *(_QWORD *)(v8 + 232);
      v6 = sub_A0E0(v8, *(_QWORD *)(a2 + 16)) + v9;
      v10 = (_BYTE *)sub_A7A0(v4[77], *(_QWORD *)(a2 + 16));
      v11 = v10;
      if ( !v10 || !*v10 )
        goto LABEL_3;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 80LL))(v4, v6);
      (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*v4 + 56LL))(v4, v11, 34);
      return 1;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 144);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[77] + 16LL) + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      return 1;
    case 5:
      v12 = *((_WORD *)a1 + 124);
      if ( (unsigned __int16)(v12 - 19) <= 3u || (unsigned __int16)(v12 - 94) <= 4u )
      {
        v15 = (_BYTE *)sub_A800(a1[77], a1[35], *(unsigned int *)(a2 + 8));
        if ( v15 )
        {
          if ( *v15 )
          {
            (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v15, 34);
            return 1;
          }
        }
      }
      v13 = *(_BYTE *)(a2 + 5);
      if ( !v13 )
      {
        v14 = 16;
        goto LABEL_16;
      }
      if ( v13 == 1 )
      {
        v14 = 32;
LABEL_16:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, v14);
        return 1;
      }
LABEL_33:
      if ( under_debugger )
LABEL_35:
        BUG();
      interr();
      return sub_7AF0(249);
    case 7:
      v6 = *(_QWORD *)(a2 + 16) + 16LL * a1[28];
LABEL_3:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*v4 + 120LL))(v4, a2, v6) )
        sub_76E0((__int64)v4, *(_QWORD *)(a2 + 16));
      return 1;
    default:
      v4 = v3;
      if ( under_debugger )
        goto LABEL_35;
      a1 = (_QWORD *)(&stru_2840 + 10);
      interr();
LABEL_28:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[77] + 16LL) + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*v4 + 56LL))(v4, "++", 9);
      return 1;
  }
}

