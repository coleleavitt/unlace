bool __fastcall sub_144330(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128i a7,
        __m128 a8,
        __m128i a9,
        double a10)
{
  __int128 v10; // rdi
  int v12; // r14d
  __int64 v13; // rbp
  int v14; // ebx
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  int v21; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-30h]

  *((_QWORD *)&v10 + 1) = 0;
  v22 = __readfsqword(0x28u);
  v21 = 0;
  sub_144130((__int64 *)a1, nullptr, &v21, a4, a5, a6, *(double *)a7.m128i_i64, a8);
  v12 = v21;
  if ( *(int *)(a1 + 64) > 1 )
  {
    v13 = 8;
    v14 = 1;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v13);
        *(_QWORD *)&v10 = v15;
        if ( (unsigned __int8)sub_172380(v10, a7, *(double *)a8.m128_u64, a9, a10) )
          break;
        ++v14;
        v13 += 8;
        if ( *(_DWORD *)(a1 + 64) <= v14 )
          return v12 > 0;
      }
      ++v12;
      ++v14;
      v13 += 8;
      sub_B57E0(v15, 0, v16, v17, v18, v19);
      v21 = v12;
    }
    while ( *(_DWORD *)(a1 + 64) > v14 );
  }
  return v12 > 0;
}

