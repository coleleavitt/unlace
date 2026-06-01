__int64 __fastcall sub_28140(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _QWORD *v8; // rdi

  sub_58110(a1, (unsigned int)"dalvik_debmod_t::dbg_prepare_to_pause_process\n", a3, a4, a5, a6);
  if ( *(_DWORD *)(a1 + 1820) != 2 || !(unsigned __int8)sub_4A530(a1 + 864) )
    return ~*(unsigned __int8 *)(a1 + 920);
  *(_DWORD *)(a1 + 1820) = 1;
  set_debug_event_code();
  v8 = *(_QWORD **)(a1 + 168);
  if ( v8 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
  {
    sub_26BE0((_QWORD *)(a1 + 120));
  }
  else
  {
    *v8 = 0xFFFFFFFFLL;
    v8[1] = -1;
    v8[2] = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 168) += 72LL;
  }
  free_debug_event();
  return 1;
}

