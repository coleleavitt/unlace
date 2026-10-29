__int64 __fastcall sub_EEB0(__int64 a1, unsigned __int8 *a2, double a3)
{
  unsigned __int8 v3; // dl
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // r12
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax

  v3 = a2[1];
  switch ( v3 )
  {
    case 0u:
      return 0;
    case 1u:
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
        33);
      return 1;
    case 2u:
      v12 = *(unsigned __int16 *)(a1 + 248);
      if ( (unsigned __int16)v12 > 0x9Fu )
      {
        if ( (_WORD)v12 == 226 )
          goto LABEL_25;
      }
      else if ( (unsigned __int16)v12 > 0x63u )
      {
        v16 = 0xC00200000000001LL;
        if ( _bittest64(&v16, (unsigned int)(v12 - 100)) )
          goto LABEL_25;
      }
      else if ( (unsigned __int16)(v12 - 12) <= 0x2Bu )
      {
        v13 = 0x80000001001000LL;
        if ( _bittest64(&v13, v12) )
        {
LABEL_25:
          v11 = *((_QWORD *)a2 + 2);
LABEL_26:
          v14 = sub_ABC0(*(_QWORD *)(a1 + 616), v11);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
                  a1,
                  a2,
                  v14,
                  v14) )
            sub_ED40((_QWORD *)a1, *((_QWORD *)a2 + 2));
          goto LABEL_11;
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      v17 = sub_ABC0(*(_QWORD *)(a1 + 616), *((_QWORD *)a2 + 2));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
              a1,
              a2,
              v17,
              v17) )
        sub_ED40((_QWORD *)a1, *((_QWORD *)a2 + 2));
      goto LABEL_10;
    case 3u:
    case 4u:
      v5 = *(unsigned __int16 *)(a1 + 248);
      if ( (unsigned __int16)v5 > 0x9Fu )
      {
        v7 = 0;
        if ( (_WORD)v5 == 226 )
          goto LABEL_6;
        goto LABEL_31;
      }
      if ( (unsigned __int16)v5 > 0x63u )
      {
        v15 = 0xC00200000000001LL;
        v7 = 0;
        if ( _bittest64(&v15, (unsigned int)(v5 - 100)) )
          goto LABEL_6;
        goto LABEL_31;
      }
      if ( (unsigned __int16)(v5 - 12) > 0x2Bu || (v6 = 0x80000001001000LL, v7 = 0, !_bittest64(&v6, v5)) )
      {
LABEL_31:
        v7 = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
        v3 = a2[1];
      }
LABEL_6:
      v8 = *((unsigned __int16 *)a2 + 3);
      if ( v3 == 3 || (_WORD)v8 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8 * v8),
          33);
        if ( a2[1] == 3 && a2[32] )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * (char)a2[32]),
            33);
        }
        else if ( *((_QWORD *)a2 + 2)
               || !(unsigned __int8)is_numop(*(_QWORD *)(a1 + 720), *a2)
               && (unsigned __int8)is_defarg(*(_QWORD *)(a1 + 720), *a2) )
        {
          (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 710);
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 708);
      }
      if ( v7 )
LABEL_10:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
LABEL_11:
      v9 = *(_DWORD *)(a1 + 252);
      if ( (v9 & 0x400) != 0 )
      {
        if ( (v9 & 0x800) != 0 )
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 1096LL),
            33);
        else
          sub_EDD0((_QWORD *)a1, (__int64)a2);
      }
      return 1;
    case 5u:
      if ( (unsigned __int16)(*(_WORD *)(a1 + 248) - 93) <= 1u
        && *((_QWORD *)a2 + 1) <= 4u
        && (unsigned __int8)is_numop(*(_QWORD *)(a1 + 720), *a2) )
      {
        (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, off_17A80[*((int *)a2 + 2)], 28);
      }
      else
      {
        (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 4);
      }
      return 1;
    case 7u:
      v11 = *((_QWORD *)a2 + 2);
      if ( *(_WORD *)(a1 + 248) != 12 || (unsigned __int64)(v11 - *(_QWORD *)(a1 + 240)) > 0xC )
        goto LABEL_26;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1 + 632) + 184LL),
        32);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(
        a1,
        *((_QWORD *)a2 + 2) - *(_QWORD *)(a1 + 240),
        10);
      return 1;
    default:
      sub_8270(a1 + 224, a3);
      return 1;
  }
}

