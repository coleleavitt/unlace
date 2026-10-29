__int64 __fastcall sub_27240(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _QWORD *v7; // rdi

  sub_58110(a1, (unsigned int)"dalvik_debmod_t::dbg_detach_process()\n", a3, a4, a5, a6);
  if ( *(_DWORD *)(a1 + 1820) == 1 )
    sub_4A5E0(a1 + 864);
  *(_DWORD *)(a1 + 1820) = 0;
  set_debug_event_code();
  v7 = *(_QWORD **)(a1 + 168);
  if ( v7 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
  {
    sub_26BE0((_QWORD *)(a1 + 120));
  }
  else
  {
    *v7 = 0xFFFFFFFFLL;
    v7[1] = -1;
    v7[2] = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 168) += 72LL;
  }
  free_debug_event();
  return 1;
}

