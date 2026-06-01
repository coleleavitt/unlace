__int64 __fastcall sub_3962F0(__int64 a1, _QWORD *a2, double a3)
{
  unsigned int v3; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v9[8]; // [rsp+10h] [rbp-40h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( *a2 == -1 )
  {
    return 0;
  }
  else
  {
    v8 = 0;
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v9[0] = 0;
      copy_tinfo_t();
    }
    else
    {
      sub_32C870(v9, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), (_QWORD *)(a2[3] + 48LL));
    }
    v3 = sub_388F60(&v8, 0, *(_QWORD *)(a1 + 128), (__int64)&unk_412793, (__int64)v9, 1, nullptr);
    if ( (_BYTE)v3 && (unsigned int)lexcompare_tinfo() )
    {
      set_op_tinfo();
      sub_395FD0(a1, 0, a3, v5, v6, v7);
      sub_1CE420(*(_QWORD *)(a1 + 24));
      reanalyze_function();
    }
    else
    {
      v3 = 0;
    }
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return v3;
}

