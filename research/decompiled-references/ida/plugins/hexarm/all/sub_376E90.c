unsigned __int64 __fastcall sub_376E90(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rdi
  char tinfo_property; // al
  __int64 v19; // rbp
  __int64 v20; // r8
  int v21; // r9d
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // [rsp+8h] [rbp-30h] BYREF
  __int64 v32; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-20h]

  v9 = *(_QWORD *)(a1 + 8);
  v33 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v9 + 320) )
  {
    sub_36DC60(&v31, v9, 0);
    v17 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v17 + 480) != -1 )
    {
      tinfo_property = get_tinfo_property();
      v17 = *(_QWORD *)(a1 + 8);
      if ( (tinfo_property & 8) == 0 )
      {
        v11 = 13LL * *(int *)(v17 + 480);
        v19 = *(_QWORD *)(v17 + 432) + 104LL * *(int *)(v17 + 480);
        if ( (*(_BYTE *)(v19 + 24) & 2) == 0 )
        {
          if ( (unsigned __int8)sub_373490(a1, *(_DWORD *)(v19 + 88)) )
          {
            v30 = sub_29CE20(*(_QWORD *)(a1 + 216), (unsigned int)&v31, *(_DWORD *)(v19 + 88));
            v17 = *(_QWORD *)(a1 + 8);
            if ( !v30 )
              goto LABEL_5;
            sub_1EFCB0(v19, *(_QWORD *)(v17 + 1504), &v31, 0);
            *(_DWORD *)(v19 + 24) = *(_DWORD *)(v19 + 24) & 0xFFFBFFFD | 2;
          }
          v17 = *(_QWORD *)(a1 + 8);
        }
      }
    }
LABEL_5:
    v32 = 0;
    if ( (unsigned __int8)sub_376CE0(v17, a2, a3, a4, a5, v15, v16, a8, a9, (__int64)&v32, v11, v12, v13, v14) )
      sub_F2F00(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL), (int)&v32, 0, v20, v21);
    clear_tinfo_t();
    clear_tinfo_t();
    return v33 - __readfsqword(0x28u);
  }
  v23 = get_tinfo_property();
  v29 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v29 + 68) == v23 )
    return v33 - __readfsqword(0x28u);
  return sub_331510((_QWORD *)v29, *(_QWORD *)(v29 + 40), 0xCu, v24, v25, v26, a2, a3, a4, a5, v27, v28, a8, a9);
}

