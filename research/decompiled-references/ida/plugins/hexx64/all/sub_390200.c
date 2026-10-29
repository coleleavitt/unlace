__int64 __fastcall sub_390200(__int64 a1, double a2)
{
  unsigned int v3; // ebp
  unsigned __int64 *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-50h] BYREF
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  sub_38B490(a1, 0);
  v3 = sub_38D820(a1 + 80, &v13, &v14, *(_QWORD *)(a1 + 32), a2);
  if ( (_BYTE)v3 )
  {
    v5 = sub_2572F0(*(_QWORD *)(a1 + 32), *(_QWORD **)(a1 + 88));
    v6 = *(_QWORD *)(a1 + 32);
    v7 = *v5;
    v17 = 0;
    v16 = 0;
    sub_257F10(v6, v7, &v16, v8);
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    if ( sub_334F40(nullptr, &tinfo_property, v13, (__int64)&v16) >= 0 )
    {
      sub_25E960(*(_QWORD *)(a1 + 32), v7, (__int64)&v16);
      v9 = *(__int64 **)(a1 + 32);
      v10 = *v9;
      sub_2B7C90(*(_QWORD *)(v9[27] + 112), *v9, v9[12]);
      sub_3901D0(a1, v10, v11, v12);
    }
    clear_tinfo_t();
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
  }
  return v3;
}

