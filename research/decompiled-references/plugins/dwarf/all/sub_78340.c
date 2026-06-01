__int64 __fastcall sub_78340(__int64 a1, const __m128i *a2)
{
  __int16 v2; // ax
  __m128i **v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // [rsp+0h] [rbp-60h] BYREF
  const __m128i *v16; // [rsp+8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-50h] BYREF
  __int128 v18; // [rsp+18h] [rbp-48h]
  unsigned __int64 v19; // [rsp+28h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v2 = sub_97BF0(a2);
  if ( v2 == 52 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v10 = sub_81C40(a2);
      sub_88B80((unsigned int)"on_func_die_variable(variable=%s)\n", v10, v11, v12, v13, v14);
    }
    v4 = *(__m128i ***)(a1 + 24);
    v15 = 0;
    if ( (unsigned __int8)sub_62AC0(*v4, &v15, a2) )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v17 = 0;
      v16 = a2;
      v18 = 0;
      sub_750B0((__int64)&v17, nullptr, v9, (__int64)&v16, 0);
      sub_770C0(a2[16].m128i_i64[0], 0, nullptr, &v15, (__int64)&v17, (__int64)&v16, *(_QWORD **)(a1 + 24));
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
    }
    else if ( (debug & 0x400000) != 0 )
    {
      sub_88B80((unsigned int)"WARNING: Type couldn't be found.\n", (unsigned int)&v15, v5, v6, v7, v8);
    }
    clear_tinfo_t(&v15);
  }
  else if ( v2 == 11 )
  {
    sub_A1190(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 120LL), 0);
  }
  return 0;
}
