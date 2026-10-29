__int64 __fastcall sub_4D8F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  int v7; // r13d
  bool v8; // r15
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  unsigned int v13; // eax
  char v14; // al
  int v15; // ecx
  bool v16; // r15
  __int64 v17; // rbx
  int v18; // eax
  int v19; // esi
  int v20; // eax
  __int64 v21; // [rsp+8h] [rbp-A0h]
  int v22; // [rsp+10h] [rbp-98h]
  __int64 v23; // [rsp+10h] [rbp-98h]
  char v24; // [rsp+1Ch] [rbp-8Ch]
  int v25; // [rsp+30h] [rbp-78h]
  unsigned int v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  char v28; // [rsp+47h] [rbp-61h] BYREF
  __int64 v29[12]; // [rsp+48h] [rbp-60h] BYREF

  v29[4] = __readfsqword(0x28u);
  if ( (getinf() & 4) == 0
    || (v2 = getseg()) != 0 && (*(_WORD *)(v2 + 44) & 0x18) == 8
    || (unsigned __int8)is_spec_ea()
    || (v4 = sub_4CEA0(a1, a2, v29), v5 = v4, v4 == -1) )
  {
    remember_problem();
    return 0;
  }
  v6 = sub_4D0C0(a1, (__int64 *)a2, v4, -1);
  if ( !v6 )
    return 0;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 41) - 4) <= 1u && (get_flags_ex() & 0xF00000) != 0x500000 )
  {
    get_default_reftype();
    op_offset();
  }
  v22 = 1 << (*(_BYTE *)(getseg() + 43) + 4);
  v21 = *(_QWORD *)(a2 + 16);
  v7 = v22 / 8;
  v8 = *(_WORD *)(a2 + 24) == 17 || *(_WORD *)(a2 + 24) == 87;
  if ( v8 )
  {
    v9 = nbits();
    v10 = v22;
    v27 = -1;
    v11 = v9 + 14;
    v12 = v9 + 7;
    if ( v12 >= 0 )
      v11 = v12;
    v13 = v7 / (v11 >> 3) + 2;
  }
  else
  {
    v27 = 16LL * *(_QWORD *)a2;
    v18 = nbits();
    v10 = v22;
    v19 = v18 + 14;
    v20 = v18 + 7;
    if ( v20 >= 0 )
      v19 = v20;
    v13 = v7 / (v19 >> 3);
  }
  v25 = v10;
  v23 = v13;
  v29[1] = v5;
  v29[2] = v6 * v13;
  set_jumptable_info();
  v28 = 0;
  v24 = v8;
  v14 = is_call_insn();
  v15 = v25;
  if ( v14 )
    v26 = 17 - v8;
  else
    v26 = 19 - v8;
  v16 = v15 > 31 && v8;
  do
  {
    --v6;
    v17 = sub_483C0(a1, v21, v5, v27, v7, v26, v24, &v28);
    if ( v16 )
      op_seg();
    if ( v7 == 8 || v7 == 4 || v27 == -1 )
      create_data();
    else
      create_16bit_data();
    if ( v17 != -1 || calc_offset_base() != -1 )
    {
      get_default_reftype();
      op_offset();
    }
    v5 += v23;
  }
  while ( v6 );
  set_jumptable();
  return 1;
}

