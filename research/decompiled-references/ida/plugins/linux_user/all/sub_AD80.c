unsigned __int64 sub_AD80()
{
  __int64 v0; // rdi
  __int64 module_data; // rax
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rbx
  _BYTE *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v0 = (unsigned int)dword_48084;
  module_data = get_module_data();
  if ( !module_data )
    sub_ACB0(v0);
  v2 = module_data;
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  if ( v3 == sub_ABD0 )
    v4 = v2 + 224;
  else
    v4 = v3(v2);
  if ( *(_BYTE *)(v4 + 1336) && (unsigned __int8)netnode_inited() )
  {
    if ( *(_QWORD *)(v4 + 1312) <= 1u )
    {
      v6 = *(_BYTE **)(v4 + 1304);
      if ( *(_QWORD *)(v4 + 1320) <= 1u )
      {
        v7 = qvector_reserve();
        *(_QWORD *)(v4 + 1304) = v7;
        v6 = (_BYTE *)v7;
      }
      *(_QWORD *)(v4 + 1312) = 2;
      *v6 = 1;
      *(_BYTE *)(*(_QWORD *)(v4 + 1304) + 1LL) = 0;
    }
    netnode_check();
    *(_BYTE *)(v4 + 1336) = 0;
  }
  return v8 - __readfsqword(0x28u);
}

