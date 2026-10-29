unsigned __int64 __fastcall sub_25C270(__int64 *a1, __int64 *a2)
{
  size_t v3; // rax
  __int64 v4; // rbp
  size_t v5; // r12
  size_t v6; // r13
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 module_data; // rax
  int radix; // [rsp+18h] [rbp-450h]
  int tinfo_size; // [rsp+1Ch] [rbp-44Ch]
  char v13[1024]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v14; // [rsp+428h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  tag_on();
  radix = get_radix();
  is_invsign();
  tinfo_size = get_tinfo_size();
  sub_250670(a1);
  if ( (unsigned int)get_tinfo_property() == 2 )
  {
    module_data = get_module_data();
    sub_25C1D0(a1, module_data, tinfo_size, radix);
  }
  format_c_number();
  tag_off();
  v3 = strlen(v13);
  v4 = a2[1];
  v5 = v3;
  v6 = v3;
  if ( v4 )
  {
    --v4;
    v6 = v3 + v4;
  }
  v7 = *a2;
  if ( a2[2] < v6 + 1 )
  {
    v9 = qvector_reserve();
    *a2 = v9;
    v7 = v9;
  }
  a2[1] = v6 + 1;
  *(_BYTE *)(v7 + v6) = 0;
  memmove((void *)(v4 + *a2), v13, v5);
  return v14 - __readfsqword(0x28u);
}

