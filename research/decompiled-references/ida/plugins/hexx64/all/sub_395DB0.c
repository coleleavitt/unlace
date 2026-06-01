__int64 __fastcall sub_395DB0(__int64 a1, _QWORD *a2, double a3, __m128 a4, __m128i a5, double a6)
{
  unsigned int v6; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v12[8]; // [rsp+10h] [rbp-40h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( *a2 == -1 )
  {
    return 0;
  }
  else
  {
    v11 = 0;
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v12[0] = 0;
      copy_tinfo_t();
    }
    else
    {
      sub_32C540(v12, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), (_QWORD *)(a2[3] + 48LL));
    }
    v6 = sub_388A20(&v11, 0, *(_QWORD *)(a1 + 128), (__int64)&unk_418793, (__int64)v12, 1, a3, a4, nullptr);
    if ( (_BYTE)v6 && (unsigned int)lexcompare_tinfo() )
    {
      set_op_tinfo();
      sub_395A90(a1, 0, a3, v8, v9, v10, *(double *)a4.m128_u64, a5, a6);
      sub_1CE9E0(*(_QWORD *)(a1 + 24));
      reanalyze_function();
    }
    else
    {
      v6 = 0;
    }
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return v6;
}

