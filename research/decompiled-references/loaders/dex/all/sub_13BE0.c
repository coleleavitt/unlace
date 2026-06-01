__int64 __fastcall sub_13BE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int dword; // r12d
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rdi
  const char *v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // r13d
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbp
  const char *v21; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  dword = get_dword(a3, a2, a3);
  create_data(a3, 0x20000000, 4, -1);
  v6 = num_flag();
  set_op_type(a3, v6, 0);
  v7 = *(_DWORD *)a1;
  v8 = *(_QWORD *)(a1 + 8);
  v22 = 0;
  v21 = nullptr;
  sub_8910(v8, (__int64)&v21, v7, dword);
  v9 = s1;
  if ( (_QWORD)v22 )
    v9 = v21;
  sub_13370(a3, (__int64)"[0x%x] Short-form description: (0x%x) '%s'", a2, dword, v9);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  v11 = get_dword(a3 + 4, "[0x%x] Short-form description: (0x%x) '%s'", v10);
  create_data(a3 + 4, 0x20000000, 4, -1);
  v12 = num_flag();
  set_op_type(a3 + 4, v12, 0);
  v13 = *(_DWORD *)a1;
  v14 = *(_QWORD *)(a1 + 8);
  v21 = nullptr;
  v22 = 0;
  v15 = (unsigned int)(v13 - 1);
  if ( v15 >= *(_QWORD *)(v14 + 56) )
    sub_59F0();
  sub_8BD0((__int64)&v21, *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8 * v15), v11, 0x55u);
  v16 = s1;
  if ( (_QWORD)v22 )
    v16 = v21;
  sub_13370(a3 + 4, (__int64)"Return type: (0x%x) '%s'", v11, v16);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  v18 = (unsigned int)get_dword(a3 + 8, "Return type: (0x%x) '%s'", v17);
  v19 = *(_QWORD *)(a1 + 152) + v18;
  sub_13370(a3 + 8, (__int64)"Parameters offset: 0x%a", 0.0);
  create_data(a3 + 8, 0x20000000, 4, -1);
  if ( (_DWORD)v18 )
    add_dref(a3 + 8, v19, 5);
  return a3 + 12;
}
