unsigned __int64 __fastcall sub_216C0(__int64 a1)
{
  __int64 v2; // r13
  td_err_e v3; // eax
  td_err_e info; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  const char *v9; // rax
  const char *v10; // rax
  td_event_msg_t v12; // [rsp+0h] [rbp-1E8h] BYREF
  td_thrinfo_t infop; // [rsp+20h] [rbp-1C8h] BYREF
  unsigned __int64 v14; // [rsp+1A8h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v2 = a1 + 1216;
  while ( 1 )
  {
    v3 = td_ta_event_getmsg(*(const td_thragent_t **)(a1 + 952), &v12);
    if ( v3 )
      break;
    info = td_thr_get_info(v12.th_p, &infop);
    if ( info )
    {
      v9 = sub_FF60(info);
      sub_B0B0((__int64)"%s: %s\n", "td_thr_get_info", v9);
    }
    if ( v12.event == TD_CREATE )
    {
      v5 = *(_QWORD *)(a1 + 1224);
      if ( !v5 )
        goto LABEL_23;
      v6 = v2;
      do
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 16);
          v8 = *(_QWORD *)(v5 + 24);
          if ( infop.ti_lid <= *(_DWORD *)(v5 + 32) )
            break;
          v5 = *(_QWORD *)(v5 + 24);
          if ( !v8 )
            goto LABEL_13;
        }
        v6 = v5;
        v5 = *(_QWORD *)(v5 + 16);
      }
      while ( v7 );
LABEL_13:
      if ( v2 == v6 || infop.ti_lid < *(_DWORD *)(v6 + 32) )
      {
LABEL_23:
        if ( (unsigned __int8)sub_15380(a1, (__int64)&infop, v12.th_p) )
          sub_1DEC0(a1, (unsigned int)infop.ti_lid, (__int64)infop.ti_startfunc);
      }
    }
    else if ( v12.event == TD_DEATH )
    {
      sub_1EB80(a1, infop.ti_lid, 2);
    }
    else
    {
      sub_B0B0((__int64)"Spurious thread event %d.", v12.event);
    }
  }
  if ( v3 != TD_NOMSG )
  {
    v10 = sub_FF60(v3);
    sub_B0B0((__int64)"Cannot get thread event message: %s\n", v10);
  }
  return v14 - __readfsqword(0x28u);
}

