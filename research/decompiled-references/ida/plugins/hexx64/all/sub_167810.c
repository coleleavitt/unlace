__int64 __fastcall sub_167810(__int64 a1, unsigned int *a2, unsigned int a3, __m128i a4, __m128 a5, __m128 a6)
{
  int v6; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v12; // rdx
  int v13; // r14d
  unsigned int v14; // ebx
  __int128 v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // r14
  __int64 v18; // rdi
  int v20; // [rsp+4h] [rbp-94h]
  unsigned __int8 *v21; // [rsp+8h] [rbp-90h]
  __int64 v22; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v23[6]; // [rsp+20h] [rbp-78h] BYREF
  int v24; // [rsp+50h] [rbp-48h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v6 = -1;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 480);
  v25 = __readfsqword(0x28u);
  v21 = *(unsigned __int8 **)(v10 + 112);
  v20 = a3 & 4;
  while ( 1 )
  {
    v13 = 0;
    v14 = (unsigned __int8)sub_159FC0(a1, a2, a3, *(double *)a4.m128i_i64, *(double *)a5.m128_u64, a6) + v9;
    if ( v20 )
    {
      *((_QWORD *)&v15 + 1) = a2;
      *(_QWORD *)&v15 = a1;
      v13 = (unsigned __int8)sub_B36D0(v15);
      if ( !(v13 | v6) )
        break;
    }
    else if ( !v6 )
    {
      break;
    }
    v22 = -1;
    v6 = sub_15BC70(a2, v21, a1, (__int64)a2, nullptr, (__m128 **)&v22, a4, a5, a3);
    if ( v22 != -1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      v23[2] = a1;
      v23[3] = a2;
      v23[1] = v12;
      v23[4] = 0;
      v23[0] = &off_4DDD50;
      v23[5] = v22;
      v24 = 0;
      sub_11F760(a2, v23);
      v13 += v24;
    }
    if ( !(v6 | v13) )
      break;
    v9 = v13 + v6 + v14;
  }
  v16 = *(_QWORD *)(a1 + 480);
  v17 = *(__int64 **)(v16 + 1064);
  if ( 8LL * *(_QWORD *)(v16 + 1072) )
  {
    do
    {
      v18 = *v17++;
      v14 += (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, _QWORD))(*(_QWORD *)v18 + 16LL))(
               v18,
               a1,
               a2,
               a3);
    }
    while ( v17 != (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 1064LL)
                             + 8LL * *(_QWORD *)(*(_QWORD *)(a1 + 480) + 1072LL)) );
  }
  return v14;
}

