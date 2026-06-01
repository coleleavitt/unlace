_QWORD *__fastcall sub_183B80(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128i a7,
        __int64 a8)
{
  int v9; // edx
  unsigned __int8 v14[32]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v17[11]; // [rsp+60h] [rbp-58h] BYREF

  v17[3] = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a4 + 4);
  if ( v9 != *(_DWORD *)(a2 + 84) )
  {
    if ( !under_debugger )
      sub_383060(0xC977u, *(double *)a7.m128i_i64);
    BUG();
  }
  if ( (unsigned __int8)sub_12AB50((unsigned int **)a5, (unsigned __int64 *)a2, v9, 0, a7) )
  {
    if ( a6 != 1 )
    {
      v15[1] = 0;
      v15[0] = 0xFFFFFFFF00000000LL;
      v16[0] = 0xFFFFFFFF00000000LL;
      v16[1] = 0;
      v17[0] = 0xFFFFFFFF00000000LL;
      v17[1] = 0;
      sub_330970((__int64)v14, a3);
      *(_DWORD *)v14 = 14;
      sub_125180((unsigned __int8 *)v15, (unsigned __int8 *)a5);
      sub_120A10((__int64)v16, (unsigned __int64 *)a2, a6, *(_DWORD *)(a5 + 4), -1, 0);
      HIDWORD(v17[0]) = *(_DWORD *)(a5 + 4);
      sub_1262E0(a5, v14, *(double *)a7.m128i_i64);
      sub_11CDA0((__int64)v17);
      sub_11CDA0((__int64)v16);
      sub_11CDA0((__int64)v15);
    }
    sub_A29B0((__int64)a1, (unsigned __int64 *)a2, a3, a4, (unsigned __int8 *)a5, a8, a7);
  }
  else
  {
    a1[1] = 0;
    *a1 = 0xFFFFFFFF00000000LL;
  }
  return a1;
}

