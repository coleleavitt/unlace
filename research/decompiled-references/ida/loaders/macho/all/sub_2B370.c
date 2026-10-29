__int64 __fastcall sub_2B370(__int64 a1, __int64 a2, char a3, __int64 (*a4)())
{
  unsigned __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  _QWORD *v11; // rdi
  __int64 v13; // rax
  bool v14; // r13
  _QWORD *v15; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( (a3 & 8) != 0 )
  {
    sub_2B040((__int64)&v15, *(_QWORD **)(a1 + 48), nullptr, a4);
    v5 = v16;
    v6 = v15;
    v7 = *(_QWORD *)(a1 + 48);
    if ( a2 - 1 >= v16 )
    {
      sub_292E0(v7);
      if ( !v6 )
        return 0;
      if ( !v5 )
        goto LABEL_8;
      goto LABEL_4;
    }
    sub_292E0(v7);
    if ( v6 )
    {
LABEL_4:
      v8 = v6;
      v9 = 0;
      do
      {
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
        }
        ++v9;
        v8 += 3;
      }
      while ( v5 != v9 );
LABEL_8:
      qfree();
    }
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 40);
    v13 = v11[30];
    if ( *(_QWORD *)(v11[1] + 16LL) == v13 || v13 == -1 || v11[23] && rangeset_t_find_range() )
    {
      v14 = (unsigned __int8)segtype() == 2;
      if ( (*(_BYTE *)(**(_QWORD **)(a1 + 32) + 12LL) & 8) != 0 && v14 )
        sub_1A010();
      add_entry();
      if ( (a3 & 4) != 0 )
        make_name_weak();
      if ( (a3 & 0x10) != 0 )
        set_cmt();
      if ( (a3 & 3) == 1 )
        set_cmt();
    }
  }
  return 0;
}

