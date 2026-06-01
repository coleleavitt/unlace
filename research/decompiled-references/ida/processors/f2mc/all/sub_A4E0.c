__int64 __fastcall sub_A4E0(_QWORD *a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  int i; // ebp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // r14
  __int64 v16; // rbp
  char v17; // al
  __int64 v18; // rbp
  char v19; // al
  void (__fastcall *v20)(_QWORD *, __int64, _QWORD); // rbp
  unsigned int v21; // eax
  _BYTE *v22; // rax
  _BYTE *v23; // r14
  unsigned int v24; // r12d
  _BYTE *v25; // rbp
  void (__fastcall *v26)(_QWORD *, __int64); // rax
  char v27; // [rsp+0h] [rbp-48h]
  unsigned int v28; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v29[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *((unsigned __int8 *)a1 + 253);
  v7 = a1[77];
  v29[1] = __readfsqword(0x28u);
  v8 = (__int64)a2;
  if ( (_BYTE)v6 )
  {
    a4 = *a2;
    if ( *((_BYTE *)a1 + 252) == (_BYTE)a4 )
    {
      a4 = (unsigned int)*((char *)a1 + 256);
      if ( (unsigned __int8)v6 != (_DWORD)a4 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8 * v6),
          33);
        a2 = (unsigned __int8 *)&word_3A;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
      }
    }
  }
  for ( i = 0; *(char *)(v8 + 32) > i; ++i )
  {
    a2 = (unsigned __int8 *)&dword_40;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
  }
  v10 = *(unsigned __int8 *)(v8 + 1);
  switch ( (char)v10 )
  {
    case 0:
      return 0;
    case 1:
      v12 = a1[78];
      v13 = *(unsigned __int16 *)(v8 + 6);
      goto LABEL_12;
    case 2:
      v15 = *(_QWORD *)(v8 + 16);
      v16 = get_sreg() << 16;
      v17 = *(_BYTE *)(v8 + 34);
      v18 = v15 | v16;
      v29[0] = v18;
      if ( v17 == 105 )
      {
        v28 = *(char *)(v8 + 35);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 105);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
        if ( *(_BYTE *)(v8 + 33) == 1 )
        {
          sub_A2F0(v7, v29, &v28);
          v18 = v29[0];
        }
        v22 = (_BYTE *)sub_C440(v7, v18);
        v23 = v22;
        if ( v22 && *v22 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 80LL))(a1, v18);
          (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v23, 34);
        }
        else
        {
          sub_A100((__int64)a1, v18, v8);
        }
        if ( *(_BYTE *)(v8 + 33) == 1 )
        {
          v24 = v28;
          v25 = (_BYTE *)sub_C480(v7, v18, v28);
          v26 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL);
          if ( v25 && *v25 )
          {
            v26(a1, 95);
            (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v25, 34);
          }
          else
          {
            v26(a1, 58);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 9);
            (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, (int)v24, 10);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 9);
          }
        }
      }
      else
      {
        if ( v17 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)v17);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
        }
        sub_A100((__int64)a1, v18, v8);
        if ( *(_BYTE *)(v8 + 33) == 1 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)(char)(*(_BYTE *)(v8 + 35) + 48));
        }
      }
      return 1;
    case 3:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(v8 + 6)),
        33);
      v19 = *(_BYTE *)(v8 + 33);
      if ( v19 == 1 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      }
      else if ( v19 == 2 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        v12 = a1[78];
        v13 = *(unsigned __int16 *)(v8 + 26);
LABEL_12:
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(v12 + 56) + 8 * v13),
          33);
      }
      break;
    case 4:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(v8 + 6)),
        33);
      goto LABEL_24;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
LABEL_24:
      v20 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL);
      v21 = sub_A460(v8);
      v20(a1, v8, v21);
      break;
    case 6:
    case 7:
      v11 = *(_QWORD *)(v8 + 16);
      if ( (_BYTE)v10 == 7 )
        v11 += 16LL * a1[28];
      sub_A100((__int64)a1, v11, v8);
      break;
    case 8:
      sub_A180(a1, *(_WORD *)(v8 + 6));
      break;
    default:
      sub_81B0((__int64)"interr: out", (__int64)a2, v10, a4, a5, a6, v27);
  }
  return 1;
}

