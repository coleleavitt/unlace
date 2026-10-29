__int64 __fastcall sub_35D390(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128i a8)
{
  _DWORD *v9; // r13
  char v10; // r12
  char v11; // bp
  __int64 *v12; // rax
  __int64 v13; // r15
  _QWORD *v14; // rax
  int v15; // eax
  unsigned __int64 *v16; // rdx
  __int64 v18; // [rsp+0h] [rbp-38h]
  __int64 v19; // [rsp+8h] [rbp-30h]
  __int64 v20; // [rsp+10h] [rbp-28h]
  __int64 v21; // [rsp+18h] [rbp-20h]

  v9 = a2;
  v10 = a4;
  v11 = a5;
  while ( *(_QWORD *)(a1 + 304) != *(_QWORD *)(a1 + 272) )
  {
    if ( (unsigned __int8)callui(27, a2, &callui, a4, a5, a6, v18, v19, v20, v21) )
      return 1;
    auto_wait();
    v12 = *(__int64 **)(a1 + 272);
    v13 = *v12;
    if ( v12 == (__int64 *)(*(_QWORD *)(a1 + 288) - 8LL) )
    {
      operator delete(*(void **)(a1 + 280), 0x200u);
      v16 = (unsigned __int64 *)(*(_QWORD *)(a1 + 296) + 8LL);
      *(_QWORD *)(a1 + 296) = v16;
      v14 = (_QWORD *)*v16;
      a8 = (__m128i)(*v16 + 512);
      a7 = (__m128)_mm_unpacklo_epi64((__m128i)*v16, a8);
      *(__m128 *)(a1 + 280) = a7;
    }
    else
    {
      v14 = v12 + 1;
    }
    *(_QWORD *)(a1 + 272) = v14;
    v15 = sub_35C4E0(
            (__int64 *)a1,
            *(_QWORD *)(a1 + 184) + 120LL * (int)v13,
            v10,
            v11,
            *(double *)a7.m128_u64,
            *(double *)a8.m128i_i64);
    if ( v15 )
    {
      if ( (unsigned int)(v15 - 1) > 1 )
        return 1;
    }
    else
    {
      *v9 = 0;
    }
    a2 = (_DWORD *)*(unsigned int *)(*(_QWORD *)a1 + 1340LL);
    if ( (_DWORD)a2 )
      sub_35AE10(a3, (int)a2);
  }
  sub_35AE10(a3, 0);
  return 0;
}

