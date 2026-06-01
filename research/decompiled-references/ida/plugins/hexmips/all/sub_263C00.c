__int64 __fastcall sub_263C00(__int64 a1, void **a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // rax
  __int64 module_data; // rbx
  char *v9; // r8
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 i; // r12
  __int64 v13; // rdi

  v7 = a4[5];
  if ( v7 )
    module_data = *(_QWORD *)(v7 + 216);
  else
    module_data = get_module_data();
  v9 = (char *)&unk_3FD21D;
  if ( *(_BYTE *)(a1 + 64) )
    v9 = (char *)&unk_3FD212;
  sub_25DEC0(a2, module_data, 0, a3, v9, a4, 0x4Cu);
  sub_264ED0(a1, a2, a3 + *(_DWORD *)(module_data + 592), a4, 1);
  result = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 24);
  for ( i = v11 + 48 * result; i != v11; result = sub_263840(v13, a2, a3, a4, *(_BYTE *)(a1 + 64)) )
  {
    v13 = v11;
    v11 += 48;
  }
  return result;
}

