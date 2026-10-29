__int64 __fastcall sub_3E8950(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  int v8; // esi
  __int64 v9; // r15
  __int64 n; // [rsp+8h] [rbp-B0h]
  __int64 v11[2]; // [rsp+20h] [rbp-98h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  __int128 v13; // [rsp+38h] [rbp-80h]
  __int64 v14[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v15; // [rsp+60h] [rbp-58h] BYREF
  __int128 v16; // [rsp+68h] [rbp-50h]
  unsigned __int64 v17; // [rsp+78h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0xF) != 9 && *(_DWORD *)(a2 + 376) == 1 )
  {
    v4 = *(_QWORD *)(a2 + 64);
    v5 = **(unsigned int **)(a2 + 368);
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 64) )
      sub_3E6760(a3);
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8 * v5);
    v7 = *(_QWORD *)(v6 + 56);
    if ( v7 )
    {
      if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 )
        v7 = *(_QWORD *)(v7 + 16);
      else
        v7 = 0;
    }
    v8 = *(_DWORD *)(a1 + 420);
    v13 = 0;
    v11[0] = 0;
    v11[1] = 0;
    src = nullptr;
    v14[0] = 0;
    v14[1] = 0;
    sub_60440(v14, v8, 8);
    v15 = nullptr;
    v16 = 0;
    sub_60840(v11, v14);
    sub_312B30((__int64 *)&src, &v15);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    qfree();
    sub_605C0(v14, (__int64)v11);
    v9 = v13;
    v15 = nullptr;
    v16 = 0;
    if ( (_QWORD)v13 )
    {
      n = 16 * v13;
      v15 = (__int64 *)qalloc_or_throw();
      *((_QWORD *)&v16 + 1) = v9;
      memcpy(v15, src, n);
      *(_QWORD *)&v16 = v9;
    }
    if ( sub_A6350(v6, v14, *(_QWORD *)(v6 + 48), v7, 0) && !sub_11F1F0((__int64)v14, (__int64)v11) )
    {
      copy_tinfo_t();
      clear_tinfo_t();
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    qfree();
    if ( src )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    qfree();
  }
  return 1;
}

