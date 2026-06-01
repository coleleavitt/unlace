unsigned __int64 __fastcall sub_48A30(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 func; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v1 = a1[77];
  v2 = a1[30];
  v16 = __readfsqword(0x28u);
  if ( netnode_altval(*(_QWORD *)(v1 + 120), v2, 833) == -1 && (unsigned __int8)xrefblk_t_first_from(&v12, a1[30], 2) )
  {
    while ( 1 )
    {
      v8 = a1[30];
      v9 = v13;
      v14 = 0;
      v15 = 0;
      func = get_func(v8);
      v5 = func ? (((int)get_func_chunknum(func, v9) >= 0) << 6) | 3u : 3LL;
      v6 = v13;
      if ( get_ea_name(&v14, v13, v5, 0) > 0 )
        break;
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14, v6, v7, 0.0);
      }
      if ( !(unsigned __int8)xrefblk_t_next_to(&v12) )
        return v16 - __readfsqword(0x28u);
    }
    sub_481D0((__int64)a1, (__int64)&unk_689A9, *(_QWORD *)(a1[79] + 48LL), v14);
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, &unk_689A9, v11, 0.0);
    }
  }
  return v16 - __readfsqword(0x28u);
}

