__int64 __fastcall sub_11AA0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // kr00_8
  _QWORD *v6; // kr08_8
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  char v10; // al
  __int64 v11; // r14
  __int64 v12; // r12
  char v13; // al
  char v14; // al
  __int64 v15; // rdx
  char v16; // al
  char v17; // al
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rsi
  void (__fastcall *v21)(_QWORD *, __int64, __int64); // rcx
  __int64 v22; // rsi
  char v23; // al
  char v24; // al
  char v25; // al
  __int16 v26; // ax
  __int128 v27; // [rsp+0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+20h] [rbp-38h]
  unsigned __int64 v30; // [rsp+28h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v4 = a1[77];
  v5 = v3;
  v6 = v2;
  v7 = a1;
  v8 = a2;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
    case 9:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      v10 = *(_BYTE *)(a2 + 32);
      if ( (unsigned __int8)(v10 - 2) > 1u )
        goto LABEL_8;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
LABEL_7:
      v10 = *(_BYTE *)(a2 + 32);
LABEL_8:
      v11 = *(_QWORD *)(a2 + 16);
      if ( v10 == 1 )
        v12 = (unsigned __int8)v11 | get_sreg() & 0xFFFFFF00LL;
      else
        v12 = v11 + 16LL * a1[28];
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 24) + 4LL) & 1) != 0 && (*(_BYTE *)(a2 + 33) & 0x20) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 80LL))(a1, v12);
      if ( *(_BYTE *)(a2 + 32) != 1
        && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 120LL))(
             a1,
             a2,
             v12,
             *(_QWORD *)(a2 + 16)) )
      {
        goto LABEL_15;
      }
      sub_11820(a1, *(_QWORD *)(a2 + 16));
      v13 = *(_BYTE *)(a2 + 32);
      if ( v13 == 1 )
      {
        sub_119D0((__int64)a1);
LABEL_15:
        v13 = *(_BYTE *)(a2 + 32);
      }
      if ( v13 != 2 )
        sub_11920(a1, *(_BYTE *)(a2 + 33));
      return 1;
    case 3:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      v14 = *(_BYTE *)(a2 + 32);
      v15 = *a1;
      if ( v14 == 16 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(v15 + 32))(a1, 45);
      }
      else if ( v14 == 17 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(v15 + 32))(a1, 43);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      v16 = *(_BYTE *)(a2 + 32);
      if ( v16 == 19 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      }
      else if ( v16 == 18 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
      }
      if ( !(unsigned __int8)xrefblk_t_first_from() )
        return 1;
      break;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      v17 = is_stkvar();
      v18 = 196;
      if ( v17 || (*(_BYTE *)(a2 + 33) & 0x40) != 0 )
        goto LABEL_32;
      goto LABEL_45;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    case 7:
      goto LABEL_7;
    case 8:
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 24) + 4LL) & 1) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (*(unsigned __int16 *)(a2 + 6) + *(char *)(a2 + 32) - 1)),
        33);
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 24) + 4LL) & 1) != 0 )
        goto LABEL_39;
      return 1;
    default:
      v7 = v6;
      v8 = v5;
      if ( under_debugger )
        BUG();
      interr();
LABEL_45:
      if ( *(_WORD *)(v4 + 224) <= 0xFFFu )
        v18 = 164;
LABEL_32:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v7 + 24LL))(v7, v8, v18);
      sub_11920(v7, *(_BYTE *)(v8 + 33));
      (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 32LL))(v7, 44);
      v19 = *(_BYTE *)(v8 + 32);
      if ( v19 == 2 )
      {
        v24 = *((_BYTE *)v7 + 267);
        v27 = 0;
        BYTE2(v27) = v24;
        v25 = *((_BYTE *)v7 + 298);
        v29 = 0;
        BYTE1(v27) = v25;
        v26 = *((_WORD *)v7 + 135);
        v28 = 0;
        WORD3(v27) = v26;
        LOBYTE(v29) = v7[36];
        *(_QWORD *)&v28 = v7[34];
        BYTE1(v29) = *((_BYTE *)v7 + 299);
        ((void (__fastcall *)(_QWORD *, __int128 *))sub_11AA0)(v7, &v27);
      }
      else
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v7[78] + 56LL) + 8LL * *(unsigned __int16 *)(v8 + 6));
        v21 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v7 + 56LL);
        if ( v19 != 1 )
        {
          v21(v7, v20, 33);
          goto LABEL_39;
        }
        v21(v7, v20, 33);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 32LL))(v7, 46);
      v22 = 98;
      v23 = *(_BYTE *)(v8 + 33);
      if ( (v23 & 1) == 0 )
        v22 = (v23 & 2) == 0 ? 108 : 119;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 32LL))(v7, v22);
LABEL_39:
      (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 32LL))(v7, 41);
      return 1;
  }
  while ( BYTE1(v28) != 1 )
  {
    if ( !(unsigned __int8)xrefblk_t_next_from() )
      return 1;
  }
  if ( *((_QWORD *)&v27 + 1) != -1 )
    sub_119D0((__int64)a1);
  return 1;
}

