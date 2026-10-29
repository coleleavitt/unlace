__int64 __fastcall sub_571B0(__int64 a1, __int64 a2, int a3)
{
  void *exception; // r12
  int v4; // eax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 result; // rax

  v8 = a1 + 8;
  *(_QWORD *)a1 = &unk_C9C30;
  sub_84A60(a1 + 8);
  *(_DWORD *)(a1 + 272) = a3;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 352) = 0;
  v10 = *(_QWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 276) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  if ( (v10 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v10 == -1 )
  {
    if ( under_debugger )
      BUG();
    interr(30478);
  }
  if ( !(unsigned __int8)sub_98E20(a2 + 224, v8) )
  {
    exception = __cxa_allocate_exception(0x18u);
    v4 = sub_81C90(a2);
    sub_95790(
      (_DWORD)exception,
      (unsigned int)"The DWARF plugin has run into an inconsistent state: can't load DIE with reference %s.",
      v4,
      v5,
      v6,
      v7);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'die_t::load_failure_t, (void (*)(void *))sub_52F60);
  }
  v11 = sub_97AE0(v8);
  if ( v11 != -1 )
    v11 >>= 3;
  *(_QWORD *)(a1 + 368) = v11;
  result = sub_97AE0(v8);
  *(_QWORD *)(a1 + 376) = result;
  return result;
}

