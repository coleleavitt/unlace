unsigned __int64 __fastcall sub_89D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 name_base_ea; // rbx
  __int64 func; // rax
  int func_chunknum; // eax
  void *v7; // rsi
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v3 = a1[30] + *(char *)(a2 + 2);
  v11 = __readfsqword(0x28u);
  name_base_ea = get_name_base_ea(v3, a3);
  func = get_func(v3);
  func_chunknum = get_func_chunknum(func, name_base_ea);
  v10 = 0;
  v9 = nullptr;
  get_ea_name(&v9, name_base_ea, ((func_chunknum >= 0) << 6) | 3u, 0);
  v7 = &unk_150C8;
  if ( (_QWORD)v10 )
    v7 = v9;
  (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, v7, 0);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

