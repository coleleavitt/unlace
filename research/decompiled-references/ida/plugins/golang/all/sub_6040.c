__int64 __fastcall sub_6040(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // r12
  void *v4; // rdi

  *(_QWORD *)a1 = off_27498;
  clr_module_data();
  if ( *(_DWORD *)(a1 + 528) != -1 )
    unregister_custom_refinfo();
  if ( *(_DWORD *)(a1 + 532) != -1 )
    unregister_custom_refinfo();
  v2 = *(_QWORD *)(a1 + 328);
  while ( v2 )
  {
    v3 = (void *)v2;
    sub_5E00(*(_QWORD **)(v2 + 24));
    v2 = *(_QWORD *)(v2 + 16);
    clear_tinfo_t();
    operator delete(v3, 0x30u);
  }
  v4 = *(void **)(a1 + 272);
  if ( v4 )
    operator delete(v4, *(_QWORD *)(a1 + 304) - (_QWORD)v4);
  *(_QWORD *)(a1 + 128) = &off_27D40;
  remove_event_listener();
  *(_QWORD *)(a1 + 104) = &off_27D40;
  remove_event_listener();
  return qfree();
}
