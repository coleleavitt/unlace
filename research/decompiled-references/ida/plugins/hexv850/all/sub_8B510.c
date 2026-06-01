unsigned __int64 __fastcall sub_8B510(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  char v4; // r12
  __int64 v5; // rsi
  __int64 v7; // rax

  sub_8AAC0((__int64)a2, 2, "va_adaptor.varregs");
  sub_8B190((__int64 *)(a1 + 8), a2);
  sub_8AAC0((__int64)a2, 2, "va_adaptor.real_varregs");
  sub_8B190((__int64 *)(a1 + 144), a2);
  sub_8AAC0((__int64)a2, 2, "va_adaptor.flags");
  v3 = a2[1];
  v4 = *(_BYTE *)(a1 + 288);
  v5 = *a2;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v7 = qvector_reserve();
    *a2 = v7;
    v5 = v7;
    v3 = a2[1];
  }
  *(_BYTE *)(v5 + v3) = v4;
  ++a2[1];
  sub_8AAC0((__int64)a2, 2, "va_adaptor.prolog_attrs");
  sub_8B2F0(a1 + 296, a2);
  sub_8AAC0((__int64)a2, 2, "va_adaptor.shadow_size");
  return sub_7ADE0(a2);
}

