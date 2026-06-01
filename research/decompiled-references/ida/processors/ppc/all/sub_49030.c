__int64 __fastcall sub_49030(_QWORD *a1, unsigned __int8 *a2, double a3)
{
  unsigned __int8 v3; // dl
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // eax
  int v18; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  void (__fastcall *v24)(_QWORD *, unsigned __int8 *, __int64); // r12
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD v28[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a2[1];
  v28[3] = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 0u:
      return 0;
    case 1u:
      v21 = a1[78];
      v22 = *((unsigned __int16 *)a2 + 3);
      goto LABEL_34;
    case 2u:
    case 7u:
      v11 = *((_QWORD *)a2 + 2) + 16LL * a1[28];
      v12 = *(_QWORD *)(*(_QWORD *)(a1[77] + 32LL) + 16LL);
      if ( v11 != v12 )
      {
        v12 &= v11;
        if ( v11 == -1 )
          v12 = -1;
      }
      v13 = j__use_mapping(v12);
      v14 = sub_4CF90(a1[77], *((_QWORD *)a2 + 2));
      v15 = *a1;
      if ( v14 && *(_QWORD *)(v14 + 16) > 1u )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v15 + 56))(a1, *(_QWORD *)(v14 + 8), 34);
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int8 *, __int64, _QWORD))(v15 + 120))(
                   a1,
                   a2,
                   v13,
                   *((_QWORD *)a2 + 2)) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *((_QWORD *)a2 + 2), 16);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
        remember_problem(2, a1[30], 0);
      }
      return 1;
    case 3u:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      goto LABEL_33;
    case 4u:
      v23 = sub_48B90(a1, *((unsigned __int16 *)a2 + 3), *((_QWORD *)a2 + 2), a2, 1);
      if ( v23 )
      {
        if ( v23 == 2 )
          goto LABEL_42;
      }
      else
      {
        v24 = *(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 24LL);
        v25 = a2[1];
        if ( v25 == 4 )
          v26 = (unsigned __int8)getinf_flag(3, 4) == 0 ? 196 : 212;
        else
          v26 = 4 * (unsigned int)(v25 == 5);
        v24(a1, a2, v26);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
LABEL_42:
      if ( !(unsigned __int8)is_defarg(a1[90], *a2) )
        sub_48A30(a1);
      return 1;
    case 5u:
      v20 = a1[77];
      if ( (*(_DWORD *)(v20 + 460) & 0xF) == 3
        && (unsigned __int16)(*((_WORD *)a1 + 124) - 1263) <= 3u
        && (unsigned __int8)(*a2 - 2) <= 1u )
      {
        goto LABEL_50;
      }
      if ( (*((_BYTE *)a1 + 253) & 4) == 0 || (unsigned __int8)is_defarg(a1[90], *a2) )
      {
        if ( *((_WORD *)a1 + 124) != 4
          || *a2 != 2
          || *((_BYTE *)a1 + 305) != 1
          || !(unsigned int)sub_48B90(a1, *((unsigned __int16 *)a1 + 155), *((_QWORD *)a2 + 1), a2, 0) )
        {
          (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 24LL))(a1, a2, 4);
        }
      }
      else
      {
        v20 = a1[77];
LABEL_50:
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(
          a1,
          *((_QWORD *)a2 + 1) & *(_QWORD *)(*(_QWORD *)(v20 + 32) + 16LL),
          10);
      }
      goto LABEL_42;
    case 8u:
      sub_48760((__int64)a1, a1[77] + 376LL, *((_QWORD *)a2 + 1));
      return 1;
    case 9u:
    case 0xFu:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v6 == sub_48150 )
      {
        v7 = a1[4];
        if ( v7 )
        {
          v9 = v7 + 1;
          v8 = a1[4];
          --v7;
        }
        else
        {
          v8 = 1;
          v9 = 2;
        }
        v10 = a1[3];
        if ( a1[5] < v9 )
        {
          v27 = qvector_reserve(a1 + 3, v10, v9, 1);
          a1[3] = v27;
          v10 = v27;
        }
        a1[4] = v9;
        *(_BYTE *)(v10 + v7) = 32;
        *(_BYTE *)(a1[3] + v8) = 0;
      }
      else
      {
        v6(a1, 32);
      }
LABEL_33:
      v21 = a1[78];
      v22 = (char)a2[32];
LABEL_34:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(v21 + 56) + 8 * v22),
        33);
      return 1;
    case 0xAu:
      v16 = *((unsigned __int16 *)a2 + 3);
      if ( (*((_BYTE *)a1 + 252) & 0x20) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 112LL))(a1, v16, 10);
      else
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8 * v16),
          33);
      v17 = *((_DWORD *)a1 + 63);
      if ( (v17 & 0x40) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, (char)a2[32], 10);
        v17 = *((_DWORD *)a1 + 63);
      }
      if ( (v17 & 0x80u) != 0 )
        goto LABEL_37;
      return 1;
    case 0xBu:
      qsnprintf(v28, 20, "cr%d", *((unsigned __int16 *)a2 + 3));
      (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 56LL))(a1, v28, 33);
      v18 = *((_DWORD *)a1 + 63);
      if ( *((_WORD *)a1 + 124) <= 0xE4u && (v18 & 0x10) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 112LL))(a1, 1, 0);
      }
      else if ( (v18 & 0x8000) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 32);
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 112LL))(a1, (*((_DWORD *)a1 + 63) >> 4) & 1, 0);
      }
      return 1;
    case 0xCu:
      sub_486C0((__int64)a1, *((unsigned __int16 *)a2 + 3));
      return 1;
    case 0xDu:
      sub_48760((__int64)a1, a1[77] + 400LL, *((_QWORD *)a2 + 1));
      return 1;
    case 0xEu:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, *((unsigned __int16 *)a2 + 3), 10);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, (char)a2[32], 10);
LABEL_37:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, (char)a2[33], 10);
      return 1;
    default:
      sub_33700((__int64)"out: %a: bad optype %d", a3, a1[30]);
      return 1;
  }
}

