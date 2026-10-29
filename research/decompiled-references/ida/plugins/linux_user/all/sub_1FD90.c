__int64 __fastcall sub_1FD90(__int64 a1, double a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  td_err_e v9; // eax
  td_err_e v10; // eax
  td_err_e v11; // eax
  td_err_e v12; // eax
  const td_thragent_t *v13; // rdi
  td_err_e v14; // eax
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  const char *v21; // rax
  const char *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const char *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  const char *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  td_thrhandle_t v34; // [rsp+0h] [rbp-38h] BYREF
  td_thr_events_t event; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v36; // [rsp+18h] [rbp-20h]

  v36 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 952) )
    return 1;
  if ( !byte_480E0 )
    return 0;
  sub_32190(a1, (unsigned int)"DBG: checking pid %d with thread_db\n", *(_DWORD *)(a1 + 1340), a5, a6, a7);
  *(_DWORD *)(a1 + 948) = *(_DWORD *)(a1 + 1340);
  v9 = td_ta_new((struct ps_prochandle *)(a1 + 948), (td_thragent_t **)(a1 + 952));
  if ( v9 )
  {
    v17 = (unsigned int)sub_FF60(v9);
    sub_32190(a1, (unsigned int)"DBG: td_ta_new: %s\n", v17, v18, v19, v20);
    *(_QWORD *)(a1 + 952) = 0;
    return 0;
  }
  else
  {
    v10 = td_ta_map_lwp2thr(*(const td_thragent_t **)(a1 + 952), *(_DWORD *)(a1 + 1340), &v34);
    if ( v10 == TD_OK )
    {
      v11 = td_thr_event_enable(&v34, 8);
      if ( v11 )
      {
        v22 = sub_FF60(v11);
        sub_13770(
          (__int64)"%s: %s\n",
          (__int64)"td_thr_event_enable(TD_CREATE)",
          (__int64)v22,
          v23,
          v24,
          v25,
          (char)v34.th_ta_p);
      }
      v12 = td_thr_event_enable(&v34, 9);
      if ( v12 )
      {
        v30 = sub_FF60(v12);
        sub_13770(
          (__int64)"%s: %s\n",
          (__int64)"td_thr_event_enable(TD_DEATH)",
          (__int64)v30,
          v31,
          v32,
          v33,
          (char)v34.th_ta_p);
      }
      v13 = *(const td_thragent_t **)(a1 + 952);
      event = (td_thr_events_t)384LL;
      v14 = td_ta_set_event(v13, &event);
      if ( v14 )
      {
        v26 = sub_FF60(v14);
        sub_13770((__int64)"%s: %s\n", (__int64)"td_ta_set_event", (__int64)v26, v27, v28, v29, (char)v34.th_ta_p);
      }
      sub_1FCB0(a1, TD_CREATE, (_QWORD *)(a1 + 960), a2);
      sub_1FCB0(a1, TD_DEATH, (_QWORD *)(a1 + 976), a2);
      sub_32190(
        a1,
        (unsigned int)"DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n",
        *(_QWORD *)(a1 + 960),
        *(_QWORD *)(a1 + 976),
        v15,
        v16);
      sub_1F300(a1);
      return 1;
    }
    v21 = sub_FF60(v10);
    sub_B0B0((__int64)"%s: %s\n", "td_ta_map_lwp2thr", v21);
    return 0;
  }
}

