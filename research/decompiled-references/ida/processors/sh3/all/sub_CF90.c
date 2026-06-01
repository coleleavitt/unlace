__int64 __fastcall sub_CF90(__int64 a1, unsigned __int8 *a2, double a3)
{
  char v4; // al
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax

  switch ( a2[1] )
  {
    case 0u:
      return 0;
    case 1u:
      goto LABEL_3;
    case 2u:
      (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 192);
      return 1;
    case 3u:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 64);
      v4 = a2[32];
      if ( v4 == 2 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
      }
      else
      {
        if ( v4 > 2 )
        {
          if ( v4 != 3 )
            goto LABEL_37;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
            a1,
            **(_QWORD **)(*(_QWORD *)(a1 + 624) + 56LL),
            33);
LABEL_19:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
            33);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
          return 1;
        }
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
              a1,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
              33);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
            return 1;
          }
LABEL_37:
          sub_CC90((__int64)"%a: bad phrase number", a3);
        }
        if ( (unsigned __int8)is_defarg(*(_QWORD *)(a1 + 720), *a2) )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
          v8 = *(_QWORD *)a1;
          v9 = 0;
LABEL_18:
          (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(v8 + 24))(a1, a2, v9);
          goto LABEL_19;
        }
      }
LABEL_3:
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
        33);
      return 1;
    case 4u:
      if ( *((_WORD *)a2 + 3) == 89 && (unsigned __int8)sub_CEB0(a1) )
        return 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 64);
      if ( *((_WORD *)a2 + 3) == 92 && *(_WORD *)(a1 + 248) == 157 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 64);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
      v8 = *(_QWORD *)a1;
      v9 = 196;
      goto LABEL_18;
    case 5u:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
      if ( (unsigned __int8)is_off(*(_QWORD *)(a1 + 720), *a2)
        && (v11 = sub_F240(*(_QWORD *)(a1 + 616), *((unsigned int *)a2 + 2))) != 0
        && *(_QWORD *)(v11 + 16) > 1u )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(a1, *(_QWORD *)(v11 + 8), 34);
      }
      else
      {
        v10 = 64;
        if ( *(_WORD *)(a1 + 248) == 1 )
          v10 = 68;
        (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, v10);
      }
      return 1;
    case 7u:
      v5 = *((_QWORD *)a2 + 2) + 16LL * *(_QWORD *)(a1 + 224);
      v6 = sub_F240(*(_QWORD *)(a1 + 616), v5);
      v7 = *(_QWORD *)a1;
      if ( v6 && *(_QWORD *)(v6 + 16) > 1u )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v7 + 56))(a1, *(_QWORD *)(v6 + 8), 34);
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64, _QWORD))(v7 + 120))(
                   a1,
                   a2,
                   v5,
                   *((_QWORD *)a2 + 2)) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 104LL))(a1, *((_QWORD *)a2 + 2), 16);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
        remember_problem(2, *(_QWORD *)(a1 + 240), 0);
      }
      return 1;
    default:
      sub_9380((__int64)"out: %a: bad optype %d", a3, *(_QWORD *)(a1 + 240));
      return 1;
  }
}

