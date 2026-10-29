__int64 __fastcall sub_12BC0(__int64 a1, unsigned int a2)
{
  __int64 sreg; // rax
  __int64 v3; // r12
  unsigned int v5; // ebp

  sreg = get_sreg();
  v3 = sub_12B00(a1, a2, sreg);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 58);
  if ( get_sreg() == 1 )
  {
    v5 = a2 & 0xC0;
    if ( v5 <= 0x80 || v5 == 192 )
      v3 += get_sreg();
  }
  return sub_126C0(a1, (__int64)byte_19060, v3);
}

