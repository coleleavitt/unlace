__int64 __fastcall sub_319A50(__int64 a1, __int64 a2, double a3)
{
  void *exception; // rbx
  int v4; // edx
  __int64 v6; // rax
  char v7; // dl
  char v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v15; // rax

  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 > 8 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_137330((__int64)exception, -35, -1, "too big operand");
LABEL_4:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
  }
  switch ( *(_BYTE *)a2 )
  {
    case 1:
    case 5:
    case 6:
    case 9:
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    case 2:
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
      if ( (unsigned int)(v4 - 1) <= 1 || v4 == 4 )
        return ~(-1LL << (8 * (unsigned __int8)v4)) & v15;
      if ( v4 == 8 )
        return v15;
      goto LABEL_22;
    case 4:
      return sub_318D60(a1, *(_QWORD *)(a2 + 8), a3);
    case 0xE:
      v6 = sub_319A50(a1, *(_QWORD *)(a2 + 8) + 16LL);
      v8 = v7;
      v9 = v6;
      v10 = sub_319A50(a1, *(_QWORD *)(a2 + 8));
      v11 = *(_DWORD *)(a2 + 4);
      v12 = v9 << (8 * v8);
      if ( ((8 * v8) & 0xC0) != 0 )
        v12 = 0;
      if ( (unsigned int)(v11 - 1) <= 1 || v11 == 4 )
        return ((1LL << (8 * (unsigned __int8)v11)) - 1) & (v10 | ((1LL << (8 * (unsigned __int8)v11)) - 1) & v12);
      if ( v11 != 8 )
LABEL_22:
        sub_318660(a3);
      return v10 | v12;
    default:
      exception = __cxa_allocate_exception(0x30u);
      sub_137330((__int64)exception, -35, -1, "unknown operand type");
      goto LABEL_4;
  }
}

