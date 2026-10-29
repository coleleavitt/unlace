__int64 __fastcall sub_1FCB0(__int64 a1, td_event_e a2, _QWORD *a3, double a4)
{
  const td_thragent_t *v5; // rdi
  td_err_e v7; // eax
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r13d
  const char *v11; // rcx
  const char *v13; // rax
  td_notify_t v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v5 = *(const td_thragent_t **)(a1 + 952);
  v15 = __readfsqword(0x28u);
  v7 = td_ta_event_addr(v5, a2, &v14);
  if ( v7 )
  {
    v13 = sub_FF60(v7);
    sub_B0B0((__int64)"%s: %s\n", "td_ta_event_addr", v13);
    return 0;
  }
  v10 = sub_1FC40(a1, (__int64)a3, (__off64_t)v14.u.bptaddr);
  if ( !(_BYTE)v10 )
  {
    sub_143D0(a1, (__int64)"%a: failed to add thread_db breakpoint\n", a4);
    return 0;
  }
  v11 = "TD_DEATH";
  if ( a2 == TD_CREATE )
    v11 = "TD_CREATE";
  sub_32190(a1, (unsigned int)"%a: added BP for thread event %s\n", *a3, (_DWORD)v11, v8, v9);
  return v10;
}

