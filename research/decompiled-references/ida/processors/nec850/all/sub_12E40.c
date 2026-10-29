__int64 __fastcall sub_12E40(_WORD *a1, unsigned __int8 *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  switch ( a2[1] )
  {
    case 1u:
    case 3u:
      goto LABEL_9;
    case 2u:
    case 7u:
      if ( !(*(unsigned __int8 (__fastcall **)(_WORD *, unsigned __int8 *, _QWORD, __int64))(*(_QWORD *)a1 + 120LL))(
              a1,
              a2,
              *((_QWORD *)a2 + 2) & *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 77) + 32LL) + 16LL),
              -1) )
      {
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
        (*(void (__fastcall **)(_WORD *, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 192);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
        remember_problem(2, *((_QWORD *)a1 + 30), 0);
      }
      goto LABEL_10;
    case 4u:
      if ( *((_QWORD *)a2 + 2)
        || *((_WORD *)a2 + 3) == 3
        || ((v7 = *a2, (a1[73] & 1) == 0) ? (v8 = *((unsigned int *)a1 + 15)) : (v8 = *((_QWORD *)a1 + 90)),
            (unsigned __int8)is_defarg(v8, v7)) )
      {
        if ( (a2[32] & 4) != 0 )
        {
          v4 = 192;
          v5 = 64;
        }
        else
        {
          v4 = 160;
          v5 = 32;
        }
        LOBYTE(v5) = v5 | 0x84;
        if ( (a2[32] & 2) != 0 )
          v4 = v5;
        (*(void (__fastcall **)(_WORD *, unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
          a1,
          a2,
          v4,
          a2[32] & 2);
      }
LABEL_9:
      sub_12700((__int64)a1, (__int64)a2);
      goto LABEL_10;
    case 5u:
      (*(void (__fastcall **)(_WORD *, unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, (2 * a2[32]) & 4);
      goto LABEL_10;
    case 9u:
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 123);
      if ( a2[1] != 9 )
      {
        if ( !under_debugger )
          interr(10522);
        BUG();
      }
      v9[0] = *((_QWORD *)a2 + 1);
      sub_12DA0((__int64)a1, v9);
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 125);
      goto LABEL_10;
    case 0xAu:
      if ( (a1[126] & 0x10) != 0 )
        sub_128C0((__int64)a1, (__int64)a2);
      else
        sub_12870((__int64)a1, (__int64)a2);
      goto LABEL_10;
    case 0xBu:
      sub_12400(a1, (__int64)a2);
LABEL_10:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

