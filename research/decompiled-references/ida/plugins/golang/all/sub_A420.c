__int64 sub_A420()
{
  _DWORD *v0; // rax
  __m128i v1; // xmm1
  __int64 named_type_tid; // rbp
  __m128i v4; // [rsp+0h] [rbp-98h] BYREF
  __int64 v5; // [rsp+10h] [rbp-88h]
  __m128i v6; // [rsp+18h] [rbp-80h] BYREF
  __int64 v7; // [rsp+30h] [rbp-68h]
  __m128i v8; // [rsp+38h] [rbp-60h]
  _DWORD *v9; // [rsp+48h] [rbp-50h]
  __int128 v10; // [rsp+50h] [rbp-48h]
  int v11; // [rsp+60h] [rbp-38h]
  bool v12; // [rsp+64h] [rbp-34h]
  unsigned __int64 v13; // [rsp+68h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v8 = 0;
  v7 = 0;
  v10 = 0;
  v0 = (_DWORD *)qvector_reserve();
  v9 = v0;
  *(_QWORD *)&v10 = 8;
  *v0 = 1819240239;
  *(_DWORD *)((char *)v0 + 3) = 1735287148;
  *((_BYTE *)v9 + 7) = 0;
  v11 = 0;
  get_std_dirtree();
  v6 = 0;
  dirtree_getcwd();
  v5 = 0;
  v1 = _mm_loadu_si128(&v6);
  v6 = 0;
  if ( v7 )
  {
    v4 = v1;
    v8.m128i_i64[0] = 0;
    qfree();
    v1 = _mm_load_si128(&v4);
  }
  v7 = 0;
  v8 = v1;
  v12 = (unsigned __int8)dirtree_mkdir() == 0;
  dirtree_chdir();
  parse_decls();
  get_type_ordinal();
  set_type_choosable();
  named_type_tid = get_named_type_tid();
  get_std_dirtree();
  dirtree_chdir();
  if ( v12 )
    dirtree_rmdir();
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  if ( v7 )
  {
    v8.m128i_i64[0] = 0;
    qfree();
  }
  return named_type_tid;
}
