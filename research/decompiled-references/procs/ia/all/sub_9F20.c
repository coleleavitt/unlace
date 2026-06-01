__int64 __fastcall sub_9F20(_QWORD *a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v6; // rbx
  _QWORD *v7; // rbp
  unsigned __int8 *v8; // kr00_8
  _QWORD *v9; // kr08_8
  _QWORD *v10; // rbp
  unsigned __int8 *v11; // rbx
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  __int64 v17; // rax
  __int64 v18; // rbx

  v8 = v6;
  v9 = v7;
  v10 = a1;
  v11 = a2;
  switch ( a2[1] )
  {
    case 0u:
      return 0;
    case 1u:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3)),
        33);
      return 1;
    case 3u:
      v13 = *((unsigned __int16 *)a2 + 3);
      if ( (_WORD)v13 == 24 )
        goto LABEL_6;
      goto LABEL_23;
    case 5u:
      v14 = is_defarg(a1[90], *a2);
      v15 = *a1;
      if ( v14 )
        goto LABEL_20;
      v16 = a2[32];
      if ( v16 == 1 )
      {
        v18 = *((_QWORD *)a2 + 1);
        if ( v18 < 0 )
        {
          v18 = -v18;
          (*(void (__fastcall **)(_QWORD *, __int64))(v15 + 32))(a1, 45);
          v15 = *a1;
        }
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v15 + 112))(a1, v18, 10);
      }
      else if ( v16 == 2 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v15 + 112))(a1, *((_QWORD *)a2 + 1), 10);
      }
      else
      {
LABEL_20:
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD))(v15 + 24))(a1, a2, 0);
      }
      break;
    case 7u:
      v17 = sub_8E40(a1 + 28, *((_QWORD *)a2 + 2));
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int8 *, __int64, _QWORD))(*a1 + 120LL))(
              a1,
              a2,
              v17,
              *((_QWORD *)a2 + 2)) )
        sub_9D80(a1, *((_QWORD *)a2 + 2));
      return 1;
    case 8u:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3) + 1024),
        33);
      return 1;
    case 9u:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3) + 2048),
        33);
      return 1;
    case 0xAu:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3) + 2560),
        33);
      return 1;
    case 0xBu:
      sub_9DD0(a1, 328, (__int64)"ar", (__int64)&unk_25A80, *((unsigned __int16 *)a2 + 3));
      return 1;
    case 0xCu:
      sub_9DD0(a1, 456, (__int64)"cr", (__int64)&unk_257E0, *((unsigned __int16 *)a2 + 3));
      return 1;
    case 0xDu:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *((unsigned __int16 *)a2 + 3) + 4672),
        33);
      return 1;
    default:
      v10 = v9;
      v11 = v8;
      if ( under_debugger )
        BUG();
      a1 = (_QWORD *)(&stru_2870 + 19);
      v13 = interr(10371, a2, a3, a4, a5, a6);
LABEL_23:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8 * v13 + 4672),
        33);
LABEL_6:
      (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 32LL))(v10, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v10 + 56LL))(
        v10,
        *(_QWORD *)(*(_QWORD *)(v10[78] + 56LL) + 8LL * (char)v11[32]),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 32LL))(v10, 93);
      break;
  }
  return 1;
}
