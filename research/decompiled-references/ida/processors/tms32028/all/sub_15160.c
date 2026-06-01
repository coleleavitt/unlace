__int64 __fastcall sub_15160(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // kr00_8
  _QWORD *v5; // kr08_8
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  char v8; // al
  char v10; // al
  __int16 v11; // ax
  void (__fastcall *v12)(_QWORD *, __int64); // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rcx
  void (__fastcall *v17)(_QWORD *, const char *, __int64); // rcx
  int v18; // eax
  const char *v19; // rsi
  unsigned __int8 (__fastcall *v20)(_QWORD *, __int64, __int64, __int64); // r12
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // r12

  v4 = v2;
  v5 = v3;
  v6 = a1;
  v7 = a2;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      if ( *(_BYTE *)(a2 + 32) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      if ( *(_BYTE *)(a2 + 33) == 5 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 42);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      v10 = *(_BYTE *)(a2 + 33);
      if ( v10 == 3 )
      {
        (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "++", 9);
      }
      else
      {
        if ( v10 > 3 )
          goto LABEL_50;
        if ( v10 == 1 )
        {
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, ".LSB", 9);
        }
        else if ( v10 == 2 )
        {
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, ".MSB", 9);
        }
      }
      goto LABEL_3;
    case 2:
      sub_14A00((__int64)a1, a2);
      goto LABEL_3;
    case 3:
      sub_14BF0(a1, a2);
      goto LABEL_3;
    case 4:
      v11 = *(_WORD *)(a2 + 6);
      v12 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL);
      if ( v11 == 63 )
      {
        v12(a1, 64);
        if ( sub_12250() )
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
        v20 = *(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL);
        v21 = sub_117A0(a1 + 28, *(_QWORD *)(a2 + 16));
        if ( !v20(a1, a2, v21, -1) )
LABEL_57:
          sub_149B0((__int64)a1, *(_QWORD *)(a2 + 16));
      }
      else
      {
        if ( v11 == 27 )
        {
          v12(a1, 42);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          v13 = *a1;
          v14 = 192;
          goto LABEL_21;
        }
        v12(a1, 42);
        if ( *(_QWORD *)(a2 + 16) )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          v13 = *a1;
          v14 = 200;
LABEL_21:
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v13 + 24))(a1, a2, v14);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
          goto LABEL_3;
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
      }
LABEL_3:
      v8 = *(_BYTE *)(v7 + 35);
      if ( !v8 )
        return 1;
      v17 = *(void (__fastcall **)(_QWORD *, const char *, __int64))(*v6 + 56LL);
      switch ( v8 )
      {
        case ' ':
          v17(v6, " << #16", 9);
          break;
        case '0':
          v17(v6, " << PM", 9);
          break;
        case '@':
          v17(v6, " << T", 9);
          break;
        default:
          v18 = v8 & 0xC0;
          v19 = " << #";
          if ( v18 != 128 )
          {
            if ( v18 != 192 )
            {
              v17(v6, " << #", 9);
              (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v6 + 112LL))(v6, *(_BYTE *)(v7 + 35) & 0xF, 10);
              return 1;
            }
            v19 = " >> #";
          }
          v17(v6, v19, 9);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v6 + 112LL))(v6, *(_BYTE *)(v7 + 35) & 0x1F, 10);
          break;
      }
      return 1;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      v15 = *(_BYTE *)(a2 + 33);
      if ( v15 == 2 )
      {
        v22 = sub_150F0(a1[77], (__int64)(a1 + 28), a2);
        v23 = *a1;
        if ( v22 == -1 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v23 + 24))(a1, a2, 0);
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(v23 + 120))(a1, a2, v22, -1) )
            (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
          sub_12250();
          if ( (*((_BYTE *)a1 + 721) & 8) == 0 )
LABEL_30:
            sub_14260();
        }
      }
      else
      {
        v16 = *a1;
        if ( v15 == 3 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v16 + 24))(a1, a2, 0);
        }
        else if ( v15 == 5 )
        {
          v24 = *(_QWORD *)(a2 + 8);
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(v16 + 112))(a1, v24 & 0x1F, 10);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*a1 + 112LL))(a1, (v24 >> 8) & 7, 10);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v16 + 24))(a1, a2, 4 * (unsigned int)(v15 == 0));
        }
      }
      goto LABEL_3;
    case 7:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 120LL))(
             a1,
             a2,
             *(_QWORD *)(a2 + 16) + 16LL * a1[28]) )
      {
        goto LABEL_3;
      }
      if ( *(_BYTE *)(a2 + 33) != 2 )
        goto LABEL_57;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      sub_149B0((__int64)a1, *(unsigned __int16 *)(a2 + 16));
      if ( *(_QWORD *)(a2 + 16) != -1 && (*((_BYTE *)a1 + 721) & 8) == 0 )
        goto LABEL_30;
      goto LABEL_3;
    case 8:
      sub_14440((__int64)a1, *(_BYTE *)(a2 + 33));
      goto LABEL_3;
    case 9:
      sub_147C0((__int64)a1, *(_BYTE *)(a2 + 33));
      goto LABEL_3;
    case 0xA:
      sub_14680((__int64)a1, *(_QWORD *)(a2 + 8));
      goto LABEL_3;
    case 0xB:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, *(char *)(a2 + 33), 10);
      goto LABEL_3;
    case 0xC:
      sub_14910((__int64)a1, *(_BYTE *)(a2 + 33));
      goto LABEL_3;
    case 0xD:
      sub_14FD0((__int64)a1, a2);
      goto LABEL_3;
    default:
      v6 = v5;
      v7 = v4;
      if ( under_debugger )
        BUG();
      v10 = interr();
LABEL_50:
      if ( v10 == 4 )
        (*(void (__fastcall **)(_QWORD *, char *, __int64))(*v6 + 56LL))(v6, "--", 9);
      goto LABEL_3;
  }
}

