__int64 __fastcall sub_27380(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  struct _Unwind_Exception *v7; // rbx

  sub_58110(a1, (unsigned int)"dalvik_debmod_t::dbg_exit_process\n", a3, a4, a5, a6);
  if ( *(_DWORD *)(a1 + 1820) )
  {
    sub_479D0(a1 + 864, 1);
    *(_DWORD *)(a1 + 1820) = 0;
    sub_20D40(a2);
    set_debug_event_code();
    v7 = (struct _Unwind_Exception *)sub_16810();
    free_debug_event();
    _Unwind_Resume(v7);
  }
  return 1;
}

