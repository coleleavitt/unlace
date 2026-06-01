void __fastcall __noreturn sub_37CFE0(unsigned int a1, double a2)
{
  _DWORD *exception; // rbp
  size_t v3; // r12
  void *v4; // rax
  __int64 module_data; // rax
  __int64 v6; // rbx
  __int64 v7; // r12

  module_data = get_module_data();
  if ( !module_data )
    module_data = interr();
  v6 = module_data;
  sub_66DF0((__int64 *)(module_data + 928));
  v7 = *(_QWORD *)(v6 + 416);
  *(_DWORD *)(v6 + 448) = 0;
  if ( v7 == -1 )
    v7 = *(_QWORD *)(v6 + 408);
  sub_3380C0(v6, 0xBu, a1);
  if ( (get_merge_state() & 3) == 0 )
    sub_68620((__int64)"%a: INTERR %d\n", a2, v7);
  exception = __cxa_allocate_exception(0x30u);
  *(_QWORD *)exception = off_4AF6B0;
  exception[2] = -1;
  *((_QWORD *)exception + 2) = v7;
  *((_QWORD *)exception + 3) = 0;
  *((_OWORD *)exception + 2) = 0;
  v3 = *(_QWORD *)(v6 + 936);
  if ( v3 )
  {
    v4 = (void *)qalloc_or_throw();
    *((_QWORD *)exception + 3) = v4;
    *((_QWORD *)exception + 5) = v3;
    memcpy(v4, *(const void **)(v6 + 928), v3);
    *((_QWORD *)exception + 4) = v3;
  }
  *(_QWORD *)exception = off_4B74F8;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_interr_t, (void (*)(void *))sub_334A40);
}

