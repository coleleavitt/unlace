__int64 __fastcall sub_186B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 eah; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  _QWORD v14[3]; // [rsp+10h] [rbp-68h] BYREF
  int v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  eah = get_eah();
  if ( (get_flags_ex(a2, 4) & 0x600) == 0 )
    create_16bit_data(a3, 2);
  v15 = *(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a6 + 4) & 1) != 0 )
  {
    v10 = *(_QWORD *)(a6 + 8);
  }
  else
  {
    v10 = 0;
    if ( *(_QWORD *)(a6 + 16) != -1 )
      v10 = 16 * sel2para();
  }
  v14[1] = v10;
  v14[0] = *(_QWORD *)(eah + 16) & (*(_QWORD *)(a6 + 24) + v10);
  v14[2] = *(_QWORD *)(a6 + 32);
  if ( a5 )
    handle_fixups_in_macro(v14, a2, 9, 2);
  v11 = sub_185F0(0x31u, v14, a3, a4, a6);
  result = 0;
  if ( v11 >= 0 )
  {
    op_offset_ex(a2, a4, v14);
    return 1;
  }
  return result;
}
