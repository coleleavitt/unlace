__int64 __fastcall sub_33190(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r9d
  char v5; // dl
  __int64 v6; // rax
  int v7; // edx
  unsigned __int16 v8; // [rsp+6h] [rbp-42h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __m128i v10[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  unsigned __int64 v12; // [rsp+38h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v10[1] = 0;
  v10[0].m128i_i64[0] = 0;
  v11 = 0;
  v2 = sub_135E0(a1, a2);
  if ( !(unsigned __int8)sub_27DB0(v2, &v9, v10, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v3) )
  {
    if ( (debug & 0x40000) != 0 )
      sub_111A0(
        (__int64)"DEXSIP: aloc_var_slot_valid could not get thread and frame ids of clazz %llX method %llX\n",
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 40));
    return 0;
  }
  v5 = sub_33080((__int64)&v8, *(__int64 **)(a1 + 48), v9, v10[0].m128i_i64[0], 73);
  LODWORD(v6) = debug & 0x40000;
  if ( !v5 )
  {
    if ( (_DWORD)v6 )
      sub_111A0((__int64)"DEXSIP: aloc_var_slot_valid probe failed\n");
    return 0;
  }
  if ( (_DWORD)v6 )
    v6 = sub_111A0(
           (__int64)"DEXSIP: aloc_var_slot_valid slot %d frame %llX err %u\n",
           *(_DWORD *)(*(_QWORD *)(a1 + 48) + 84LL),
           v10[0].m128i_i64[0],
           (__int16)v8);
  v7 = v8;
  LOBYTE(v6) = v8 == 0;
  LOBYTE(v7) = v8 == 34;
  return v7 | (unsigned int)v6;
}

