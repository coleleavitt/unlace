__int64 __fastcall sub_396DF0(__int64 a1, char a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v8; // rdi
  int v9; // eax
  int v10; // edx
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // rdi
  int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  __m128i v20; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  sub_38B490(a1, 0);
  if ( !a2 )
  {
    if ( **(_QWORD **)(a1 + 88) != -1 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v20.m128i_i64[0] = **(_QWORD **)(a1 + 88);
      v20.m128i_i32[2] = 0;
      v9 = sub_137670(v8, (__int64)&v20);
      v10 = 0;
      v11 = v9;
      if ( (v9 & 7) != 0 )
        goto LABEL_5;
    }
    return 0;
  }
  v15 = sub_38C590(a1);
  if ( !v15 )
    return 0;
  if ( **(_QWORD **)(a1 + 88) == -1 )
    return 0;
  v16 = *(_QWORD *)(a1 + 24);
  v20.m128i_i64[0] = **(_QWORD **)(a1 + 88);
  v20.m128i_i32[2] = 0;
  v11 = sub_137670(v16, (__int64)&v20);
  v17 = v11 & 7;
  if ( v17 == 1 )
    return 0;
  v18 = v17 - 2;
  v10 = v17 - 1;
  if ( v18 > 2 )
  {
    if ( *(_DWORD *)(a1 + 80) == 1 )
    {
      v19 = (*(_BYTE *)(v15 + 5) & 8) != 0 ? *(_DWORD *)(v15 + 36) : get_tinfo_size();
      if ( v19 > 1 )
      {
        v10 = 1;
        if ( v19 != 2 )
        {
          v10 = 2;
          if ( v19 > 4 )
            v10 = (v19 > 8) + 3;
        }
        goto LABEL_5;
      }
    }
    return 0;
  }
LABEL_5:
  sub_141B70(*(_QWORD *)(a1 + 24), &v20, v11 & 0xFFFFFFF8 | v10);
  sub_2B81A0(
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 1496LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 1344LL));
  sub_395A90(a1, 0, a3, v12, v13, v14, a4, a5, a6);
  return 1;
}

