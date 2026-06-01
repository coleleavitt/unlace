void __fastcall sub_32E70(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r12
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 dword; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  void (__fastcall *v21)(__int64, __int64, unsigned __int8); // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi

  if ( *a2 <= 0 )
    return;
  v2 = a2[2];
  if ( v2 <= 0xF )
    return;
  v3 = a2[1] + *(_QWORD *)(a1 + 608);
  v4 = v2 - 16;
  create_data(v3, 0x20000000, 4, -1);
  set_name(v3, "elf_gnu_hash_nbuckets", 6144);
  v5 = num_flag();
  set_op_type(v3, v5, 0);
  dword = (unsigned int)get_dword(v3, v5, v6, v7, v8);
  create_data(v3 + 4, 0x20000000, 4, -1);
  set_name(v3 + 4, "elf_gnu_hash_symbias", 6144);
  v10 = num_flag();
  set_op_type(v3 + 4, v10, 0);
  create_data(v3 + 8, 0x20000000, 4, -1);
  set_name(v3 + 8, "elf_gnu_hash_bitmask_nwords", 6144);
  v11 = num_flag();
  set_op_type(v3 + 8, v11, 0);
  v15 = (unsigned int)get_dword(v3 + 8, v11, v12, v13, v14);
  create_data(v3 + 12, 0x20000000, 4, -1);
  set_name(v3 + 12, "elf_gnu_hash_shift", 6144);
  v16 = num_flag();
  v17 = v3 + 16;
  set_op_type(v3 + 12, v16, 0);
  if ( *(_BYTE *)(a1 + 617) )
  {
    v18 = v4 >> 3;
    if ( v4 >> 3 > v15 )
      v18 = v15;
    if ( !v18 )
      goto LABEL_7;
    v20 = (unsigned int)(8 * v18);
    v21 = (void (__fastcall *)(__int64, __int64, unsigned __int8))sub_FA00;
  }
  else
  {
    v19 = v4 >> 2;
    if ( v15 > v4 >> 2 )
      v15 = v4 >> 2;
    if ( !v15 )
      goto LABEL_8;
    v20 = (unsigned int)(4 * v15);
    v21 = (void (__fastcall *)(__int64, __int64, unsigned __int8))sub_F9E0;
  }
  v4 -= v20;
  v21(v3 + 16, v20, 0);
  set_name(v3 + 16, "elf_gnu_hash_indexes", 6144);
  v22 = num_flag();
  v17 += v20;
  set_op_type(v3 + 16, v22, 0);
LABEL_7:
  v19 = v4 >> 2;
LABEL_8:
  if ( dword > v19 )
    dword = v19;
  if ( dword )
  {
    v24 = (unsigned int)(4 * dword);
    v4 -= v24;
    set_name(v17, "elf_gnu_hash_bucket", 6144);
    create_data(v17, 0x20000000, v24, -1);
    v25 = num_flag();
    v26 = v17;
    v17 += v24;
    set_op_type(v26, v25, 0);
  }
  if ( v4 )
  {
    set_name(v17, "elf_gnu_hash_chain", 6144);
    create_data(v17, 0x20000000, v4, -1);
    v23 = num_flag();
    set_op_type(v17, v23, 0);
  }
  sub_E890(v3, 1u, (__int64)"ELF GNU Hash Table");
}
