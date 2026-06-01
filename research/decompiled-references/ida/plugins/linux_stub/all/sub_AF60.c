unsigned __int64 sub_AF60()
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
  v0 = (unsigned int)dword_3ABA4;
  module_data = get_module_data();
  if ( !module_data )
    sub_A850(v0);
  v2 = module_data;
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  if ( v3 == sub_A6F0 )
    v4 = v2 + 224;
  else
    v4 = v3(v2);
  if ( *(_BYTE *)(v4 + 1080) && (unsigned __int8)netnode_inited() )
  {
    if ( *(_QWORD *)(v4 + 1064) <= 1u )
    {
      v6 = *(_BYTE **)(v4 + 1056);
      if ( *(_QWORD *)(v4 + 1072) <= 1u )
      {
        v7 = qvector_reserve();
        *(_QWORD *)(v4 + 1056) = v7;
        v6 = (_BYTE *)v7;
      }
      *(_QWORD *)(v4 + 1064) = 2;
      *v6 = 1;
      *(_BYTE *)(*(_QWORD *)(v4 + 1056) + 1LL) = 0;
    }
    netnode_check();
    *(_BYTE *)(v4 + 1080) = 0;
  }
  return v8 - __readfsqword(0x28u);
}

