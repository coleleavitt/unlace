__int64 __fastcall sub_314190(__int64 a1, __int64 a2)
{
  void *exception; // rbx
  __int64 v3; // rdx
  __int64 v5; // rax
  char v6; // dl
  char v7; // r13
  __int64 v8; // r12
  int v9; // eax
  __int64 v12; // rax

  v3 = *(unsigned int *)(a2 + 4);
  if ( (int)v3 > 8 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_132770((__int64)exception, -35, -1, "too big operand");
LABEL_4:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_75A40);
  }
  switch ( *(_BYTE *)a2 )
  {
    case 1:
    case 5:
    case 6:
    case 9:
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    case 2:
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
      if ( (unsigned int)(v3 - 1) <= 1 || (_DWORD)v3 == 4 )
        return ~(-1LL << (8 * (unsigned __int8)v3)) & v12;
      if ( (_DWORD)v3 == 8 )
        return v12;
      goto LABEL_22;
    case 4:
      return sub_3134A0(a1, *(_QWORD *)(a2 + 8));
    case 0xE:
      v5 = sub_314190(a1, *(_QWORD *)(a2 + 8) + 16LL);
      v7 = v6;
      v8 = v5;
      a1 = sub_314190(a1, *(_QWORD *)(a2 + 8));
      v9 = *(_DWORD *)(a2 + 4);
      v3 = v8 << (8 * v7);
      a2 = (unsigned __int8)(8 * v7) & 0xC0;
      if ( ((8 * v7) & 0xC0) != 0 )
        v3 = 0;
      if ( (unsigned int)(v9 - 1) <= 1 || v9 == 4 )
        return ((1LL << (8 * (unsigned __int8)v9)) - 1) & (a1 | ((1LL << (8 * (unsigned __int8)v9)) - 1) & v3);
      if ( v9 != 8 )
LABEL_22:
        sub_312DA0(a1, a2, v3);
      return a1 | v3;
    default:
      exception = __cxa_allocate_exception(0x30u);
      sub_132770((__int64)exception, -35, -1, "unknown operand type");
      goto LABEL_4;
  }
}

