__int64 __fastcall sub_7B30(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // kr00_8
  _QWORD *v5; // kr08_8
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r12
  _BYTE *v15; // rax
  _BYTE *v16; // r13
  _BYTE *v17; // rax
  int v18; // edx
  char v19; // al
  __int64 v20; // rdx
  int v21; // edx
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  const char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  void (__fastcall *v29)(_QWORD *, __int64); // rax

  v4 = v3;
  v5 = v2;
  v6 = a1;
  v7 = a2;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      v9 = *(_BYTE *)(a2 + 32);
      if ( v9 )
      {
        if ( v9 != 1 )
          return 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
        v10 = a1[78];
        v11 = *(char *)(a2 + 33);
      }
      else
      {
        v10 = a1[78];
        v11 = *(unsigned __int16 *)(a2 + 6);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8 * v11),
        33);
      return 1;
    case 2:
      v12 = a1[77];
      v13 = *(_QWORD *)(v12 + 240);
      v14 = sub_9E20(v12, *(_QWORD *)(a2 + 16)) + v13;
      v15 = (_BYTE *)sub_A670(v6[77], *(_QWORD *)(a2 + 16));
      v16 = v15;
      if ( !v15 || !*v15 )
        goto LABEL_17;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 80LL))(v6, v14);
      (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*v6 + 56LL))(v6, v16, 34);
      return 1;
    case 3:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      switch ( *(_BYTE *)(a2 + 32) )
      {
        case 1:
          goto LABEL_38;
        case 2:
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          v27 = *a1;
          v28 = 9;
          v26 = "--";
          goto LABEL_40;
        case 3:
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          v27 = *a1;
          v28 = 9;
          v26 = "++";
          goto LABEL_40;
        case 4:
          goto LABEL_37;
        case 5:
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "++", 9);
          v24 = a1[78];
          v25 = *(unsigned __int16 *)(a2 + 6);
          goto LABEL_39;
        case 6:
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
          v24 = a1[78];
          v25 = *(char *)(a2 + 33);
          goto LABEL_39;
        case 7:
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
          v29 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL);
          if ( *(_BYTE *)(a2 + 33) == 1 )
            v29(a1, 43);
          else
            v29(a1, 45);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 61);
          sub_7900((__int64)a1, (__int64)&qword_D488, *(_QWORD *)(a2 + 8));
          return 1;
        default:
          if ( under_debugger )
            goto LABEL_54;
          interr();
          break;
      }
      goto LABEL_52;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      v18 = 0;
      if ( *(_BYTE *)(a2 + 1) == 4 )
        v18 = 130;
      v19 = *(_BYTE *)(a2 + 5);
      if ( !v19 )
      {
        v20 = v18 | 0x14u;
        goto LABEL_24;
      }
      if ( v19 == 1 )
      {
        v20 = v18 | 0x24u;
LABEL_24:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, v20);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
        return 1;
      }
      goto LABEL_52;
    case 5:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "#", 12);
      if ( (unsigned __int16)(*((_WORD *)a1 + 124) - 40) > 8u
        || (v17 = (_BYTE *)sub_A6E0(a1[77], a1[35], *(unsigned int *)(a2 + 8))) == nullptr
        || !*v17 )
      {
        v21 = 0;
        if ( *(_BYTE *)(a2 + 1) == 4 )
          v21 = 130;
        v22 = *(_BYTE *)(a2 + 5);
        if ( v22 )
        {
          if ( v22 != 1 )
          {
LABEL_52:
            if ( !under_debugger )
              interr();
LABEL_54:
            BUG();
          }
          v23 = v21 | 0x24u;
        }
        else
        {
          v23 = v21 | 0x14u;
        }
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, v23);
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v17, 34);
      return 1;
    case 7:
      v14 = *(_QWORD *)(a2 + 16) + 16LL * a1[28];
LABEL_17:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*v6 + 120LL))(v6, a2, v14) )
        sub_7A70((__int64)v6, *(_QWORD *)(a2 + 16));
      return 1;
    case 8:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(&off_106E0 + *(unsigned __int8 *)(a2 + 32)),
        32);
      return 1;
    default:
      v6 = v5;
      v7 = v4;
      if ( under_debugger )
        goto LABEL_54;
      interr();
LABEL_37:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*v6 + 56LL))(v6, "--", 9);
LABEL_38:
      v24 = v6[78];
      v25 = *(unsigned __int16 *)(v7 + 6);
LABEL_39:
      v26 = *(const char **)(*(_QWORD *)(v24 + 56) + 8 * v25);
      v27 = *v6;
      v28 = 33;
LABEL_40:
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v27 + 56))(v6, v26, v28);
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 32LL))(v6, 93);
      return 1;
  }
}

