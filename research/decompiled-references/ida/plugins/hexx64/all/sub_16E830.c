__int64 __fastcall sub_16E830(__int64 a1, __m128i a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  unsigned int v5; // r12d
  __int64 v6; // r13
  _DWORD *v7; // rdx
  __int64 v8; // r14

  result = 0;
  if ( *(_DWORD *)(a1 + 76) == 4 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v3 + 64) == 7 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      v5 = *(_DWORD *)(v3 + 72);
      if ( v5 >= *(_DWORD *)(v4 + 64) )
        sub_167AF0(*(double *)a2.m128i_i64);
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * v5);
      if ( *(_DWORD *)(v6 + 352) == 1 )
      {
        v7 = *(_DWORD **)(v6 + 56);
        if ( v7 )
        {
          if ( *v7 == 55 && v7[10] == *(_DWORD *)(a1 + 72) + 1 )
          {
            if ( *(_DWORD *)v3 == 42 )
              sub_1207E0(
                (char *)(v3 + 32),
                *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL),
                6,
                *(_QWORD *)(v3 + 24),
                *(_DWORD *)(v3 + 36),
                a2);
            else
              *(_DWORD *)v3 = sub_32E9E0(*(_DWORD *)v3);
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL) = *(_DWORD *)(a1 + 72) + 1;
            v8 = *(_QWORD *)(v6 + 16);
            sub_69BA0(*(_QWORD *)(a1 + 64), v6, *(_QWORD *)(a1 + 8), *(double *)a2.m128i_i64);
            **(_QWORD **)(a1 + 368) = __ROL8__(**(_QWORD **)(a1 + 368), 32);
            sub_A8320(v6);
            sub_A8320(v8);
            sub_66FA0(*(_QWORD *)(a1 + 64), 1);
            return 1;
          }
        }
      }
    }
  }
  return result;
}

