__int64 __fastcall sub_413640(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        char a6,
        __m128i a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  __int128 v26; // [rsp+18h] [rbp-40h]
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v12 = a1[23];
  v27 = __readfsqword(0x28u);
  if ( !*a4 )
    a4 = nullptr;
  v13 = sub_1D6450(v12, a2, a3, a4, (unsigned __int8 *)a5, a7, a8, a9);
  v16 = v13;
  if ( !v13 )
  {
    if ( *(_BYTE *)a5 != 1 )
      return v16;
    v20 = *(_DWORD *)(a5 + 4);
    v21 = *(_DWORD *)(a5 + 8);
    v24[0] = 0;
    v24[1] = 0;
    sub_63E80(v24, v21, v20, *(double *)a7.m128i_i64);
    v25 = 0;
    v26 = 0;
    sub_64280(a1 + 3, v24, 0.0);
    sub_316CB0(a1 + 5, (const void **)&v25, v22, v23);
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    goto LABEL_12;
  }
  if ( a6 )
  {
    *(_DWORD *)(v13 + 4) |= 0x10u;
  }
  else if ( (int)a2 > 62 )
  {
    *(_DWORD *)(v13 + 4) |= 0x10u;
LABEL_10:
    sub_127A20((__int64)v24, *(_QWORD *)(a1[23] + 16), v13, 1, v14, v15, *(double *)a7.m128i_i64, a8);
    sub_64280(a1 + 3, v24, *(double *)a7.m128i_i64);
    sub_316CB0(a1 + 5, (const void **)&v25, v18, v19);
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
LABEL_12:
    qfree(v24[0]);
    return v16;
  }
  if ( (_DWORD)a2 != 61 )
    goto LABEL_10;
  return v16;
}

