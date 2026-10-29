__int64 __fastcall sub_15380(__int64 a1, __int64 a2, const td_thrhandle_t *a3)
{
  td_err_e v4; // eax
  td_err_e v5; // edi
  __int64 result; // rax
  const char *v7; // rax
  const char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  td_thr_events_t v12[3]; // [rsp+0h] [rbp-18h] BYREF

  v12[1] = (td_thr_events_t)__readfsqword(0x28u);
  v12[0] = (td_thr_events_t)416LL;
  v4 = td_thr_set_event(a3, v12);
  if ( v4 )
  {
    v8 = sub_FF60(v4);
    sub_13770((__int64)"%s: %s\n", (__int64)"td_thr_set_event", (__int64)v8, v9, v10, v11, v12[0].event_bits[0]);
  }
  v5 = td_thr_event_enable(a3, 1);
  result = 1;
  if ( v5 )
  {
    v7 = sub_FF60(v5);
    sub_B0B0((__int64)"%s: %s\n", "td_thr_event_enable", v7);
    return 0;
  }
  return result;
}

