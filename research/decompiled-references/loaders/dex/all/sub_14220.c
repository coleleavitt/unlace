__int64 __fastcall sub_14220(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int16 v8; // r13
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  const char *v13; // rcx
  const char *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  const char *v18; // r12
  __int64 v19; // rax
  const char *v20; // rsi
  __int64 v21; // rax
  unsigned __int16 word; // r13
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rax
  const char *v27; // [rsp+0h] [rbp-48h] BYREF
  __int128 v28; // [rsp+8h] [rbp-40h]
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  switch ( get_word(a3) )
  {
    case 0LL:
      create_data(a3, 0x10000000, 2, -1);
      v26 = num_flag();
      set_op_type(a3, v26, 0);
      v20 = "a static field setter";
      goto LABEL_14;
    case 1LL:
      v18 = "a static field getter";
      goto LABEL_13;
    case 2LL:
      v18 = "an instance field setter";
      goto LABEL_13;
    case 3LL:
      v18 = "an instance field getter";
LABEL_13:
      create_data(a3, 0x10000000, 2, -1);
      v19 = num_flag();
      set_op_type(a3, v19, 0);
      v20 = v18;
LABEL_14:
      set_cmt(a3, v20, 0);
      create_data(a3 + 2, 0x10000000, 2, -1);
      v21 = num_flag();
      v7 = a3 + 4;
      set_op_type(a3 + 2, v21, 0);
      word = get_word(a3 + 4);
      create_data(a3 + 4, 0x10000000, 2, -1);
      v23 = num_flag();
      set_op_type(a3 + 4, v23, 0);
      v24 = *(_DWORD *)a1;
      v25 = *(_QWORD *)(a1 + 8);
      v28 = 0;
      v27 = nullptr;
      sub_89A0(v25, (__int64 *)&v27, v24, word);
      v13 = s1;
      v14 = "Field";
      if ( (_QWORD)v28 )
        v13 = v27;
      goto LABEL_8;
    case 4LL:
      v4 = "a static method invoker";
      goto LABEL_3;
    case 5LL:
      v4 = "an instance method invoker";
LABEL_3:
      create_data(a3, 0x10000000, 2, -1);
      v5 = num_flag();
      set_op_type(a3, v5, 0);
      set_cmt(a3, v4, 0);
      create_data(a3 + 2, 0x10000000, 2, -1);
      v6 = num_flag();
      v7 = a3 + 4;
      set_op_type(a3 + 2, v6, 0);
      v8 = get_word(a3 + 4);
      create_data(a3 + 4, 0x10000000, 2, -1);
      v9 = num_flag();
      set_op_type(a3 + 4, v9, 0);
      v10 = *(_DWORD *)a1;
      v11 = *(_QWORD *)(a1 + 8);
      v27 = nullptr;
      v28 = 0;
      v12 = (unsigned int)(v10 - 1);
      if ( v12 >= *(_QWORD *)(v11 + 56) )
        sub_59F0();
      if ( (unsigned __int8)sub_8BD0((__int64)&v27, *(_QWORD *)(*(_QWORD *)(v11 + 48) + 8 * v12), v8, 0x4Eu) )
        sub_57A0(&v27);
      v13 = s1;
      v14 = "Method";
      if ( (_QWORD)v28 )
      {
        v13 = v27;
        v14 = "Method";
      }
LABEL_8:
      sub_13370(v7, (__int64)"%s: '%s'", v14, v13);
      create_data(a3 + 6, 0x10000000, 2, -1);
      v15 = num_flag();
      set_op_type(a3 + 6, v15, 0);
      v16 = a3 + 8;
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
      break;
    default:
      v16 = 0;
      break;
  }
  return v16;
}
