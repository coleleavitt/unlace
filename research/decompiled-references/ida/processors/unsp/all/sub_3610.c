__int64 __fastcall sub_3610(_QWORD *a1, __int64 a2, double a3)
{
  char v3; // dl
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 (__fastcall *v8)(_QWORD *, char); // rax
  __int64 v9; // r12
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(_QWORD *, char); // rax
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax

  v3 = *(_BYTE *)(a2 + 1);
  switch ( v3 )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
    case 7:
      if ( v3 == 7 )
      {
        v6 = map_code_ea();
      }
      else
      {
        v5 = *(_QWORD *)(a2 + 16);
        v6 = 16 * calc_dataseg() + v5;
      }
      if ( *(_BYTE *)(a2 + 1) == 2 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 120LL))(
              a1,
              a2,
              v6,
              *(_QWORD *)(a2 + 16)) )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 161);
      if ( *(_BYTE *)(a2 + 1) != 2 )
        return 1;
      goto LABEL_12;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      if ( *(_QWORD *)(a2 + 16) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 164);
      }
      goto LABEL_12;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 8);
      return 1;
    case 8:
      if ( (*(_BYTE *)(a2 + 24) & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "ds", 33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      v15 = *(_QWORD *)(a2 + 24) & 3LL;
      if ( v15 == 2 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      }
      else
      {
        if ( v15 == 3 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
          v17 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6));
          v18 = *a1;
          goto LABEL_31;
        }
        v16 = v15 == 1;
        v17 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6));
        v18 = *a1;
        if ( !v16 )
        {
LABEL_31:
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v18 + 56))(a1, v17, 33);
          goto LABEL_12;
        }
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v18 + 56))(a1, v17, 33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
      }
LABEL_12:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      return 1;
    case 9:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      v8 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v8 == sub_3420 )
      {
        v9 = a1[4];
        if ( v9 )
        {
          v11 = v9 + 1;
          v10 = a1[4];
          --v9;
        }
        else
        {
          v10 = 1;
          v11 = 2;
        }
        v12 = a1[3];
        if ( a1[5] < v11 )
        {
          v24 = qvector_reserve();
          a1[3] = v24;
          v12 = v24;
        }
        a1[4] = v11;
        *(_BYTE *)(v12 + v9) = 32;
        *(_BYTE *)(a1[3] + v10) = 0;
      }
      else
      {
        v8(a1, 32);
      }
      v13 = *a1;
      switch ( *(_QWORD *)(a2 + 24) )
      {
        case 0LL:
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v13 + 56))(a1, "asr", 5);
          v13 = *a1;
          break;
        case 1LL:
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v13 + 56))(a1, "lsl", 5);
          v13 = *a1;
          break;
        case 2LL:
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v13 + 56))(a1, "lsr", 5);
          v13 = *a1;
          break;
        case 3LL:
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v13 + 56))(a1, "rol", 5);
          v13 = *a1;
          break;
        case 4LL:
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(v13 + 56))(a1, "ror", 5);
          v13 = *a1;
          break;
        default:
          break;
      }
      v19 = *(__int64 (__fastcall **)(_QWORD *, char))(v13 + 96);
      if ( v19 == sub_3420 )
      {
        v20 = a1[4];
        if ( v20 )
        {
          v21 = v20 + 1;
          v22 = a1[4];
          --v20;
        }
        else
        {
          v22 = 1;
          v21 = 2;
        }
        v23 = a1[3];
        if ( a1[5] < v21 )
        {
          v25 = qvector_reserve();
          a1[3] = v25;
          v23 = v25;
        }
        a1[4] = v21;
        *(_BYTE *)(v23 + v20) = 32;
        *(_BYTE *)(a1[3] + v22) = 0;
      }
      else
      {
        v19(a1, 32);
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, (*(_QWORD *)(a2 + 8) & 3LL) + 1, 10);
      return 1;
    case 10:
      v14 = *(_QWORD *)(a2 + 8);
      if ( v14 == 2 )
      {
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "fiq", 5);
      }
      else if ( v14 > 2 )
      {
        if ( v14 == 3 )
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "on", 5);
      }
      else if ( v14 )
      {
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "irq", 5);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "off", 5);
      }
      return 1;
    default:
      sub_2FC0((__int64)"out: %a: bad optype %d", a3, a1[30]);
      return 1;
  }
}

