__int64 __fastcall sub_1C1F60(__int64 a1, _DWORD *a2, int a3, int a4, double a5, __m128 a6)
{
  unsigned __int64 v8; // rbp
  int v9; // ebx
  unsigned __int64 *range; // rax
  __int64 *v11; // rdi
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v8 = a3 + a4;
  v14 = __readfsqword(0x28u);
  v9 = a4;
  range = (unsigned __int64 *)rangeset_t_find_range();
  if ( range )
  {
    if ( v8 < *range )
    {
      if ( !under_debugger )
        sub_383060(0xCA59u, a5);
      BUG();
    }
    v9 = range[1] - a3;
  }
  v11 = *(__int64 **)(a1 + 8);
  if ( *a2 == 3 )
  {
    sub_63E80(v11, a2[2], v9, a5);
  }
  else
  {
    v13.m128i_i64[0] = *(_QWORD *)(a1 + 56) + *((_QWORD *)a2 + 1);
    v13.m128i_i64[1] = v9;
    sub_316BB0(v11 + 2, &v13, a5, a6);
  }
  return 0;
}

