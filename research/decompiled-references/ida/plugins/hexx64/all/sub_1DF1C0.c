__int64 __fastcall sub_1DF1C0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __m128i a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v10; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // eax
  int v20; // r12d
  __int64 v21; // r13
  void (*v22)(); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // r9d

  if ( *(int *)(a3 + 96) <= 0 )
  {
    v11 = 0;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    do
    {
      if ( sub_64930(a4, v10) )
        v11 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + (v10 << 6) + 8) + v11 - *(_QWORD *)(*(_QWORD *)(a3 + 72) + (v10 << 6));
      ++v10;
    }
    while ( *(_DWORD *)(a3 + 96) > (int)v10 );
  }
  v12 = a2[101] + v11;
  a2[101] = v12;
  if ( (int)(*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 652LL) << 10) < v12 )
    return 4294967267LL;
  *(_QWORD *)(a1 + 920) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 336LL))(*(_QWORD *)(a1 + 1504));
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))(*a2 + 16LL))(a2, a3, a4);
  if ( !(_DWORD)result )
  {
    if ( !*(_QWORD *)(a1 + 8)
      || (v15 = sub_1CE9E0(a1), v15[4] == *(_QWORD *)(a1 + 88))
      && *((unsigned __int16 *)v15 + 20) == *(_QWORD *)(a1 + 96)
      && (v14 = *(_QWORD *)(a1 + 104), v15[7] == v14) )
    {
      sub_67FD0(a1, *(_QWORD *)(a1 + 40), 2, v14, *(double *)a6.m128i_i64);
      result = sub_1D7070(a1, (__int64)a2, a3, a4, *(_QWORD **)(a1 + 8), a5, a6, a7, a8);
      if ( !(_DWORD)result )
      {
        v18 = 0;
        if ( *(int *)(a1 + 64) > 1 )
        {
          while ( 1 )
          {
            v20 = v18 + 1;
            v21 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * (v18 + 1));
            if ( !(unsigned __int8)sub_1D55D0(v21, *(double *)a6.m128i_i64) )
              break;
            v19 = *(_DWORD *)(a1 + 64);
            if ( (int)v18 + 2 >= v19 )
              goto LABEL_20;
            ++v18;
            if ( v20 + 1 >= (unsigned int)v19 )
            {
              if ( !under_debugger )
                sub_383060(0xCDEFu, *(double *)a6.m128i_i64);
              BUG();
            }
          }
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v21 + 32);
        }
LABEL_20:
        if ( !*(_QWORD *)(a1 + 8)
          || (result = sub_1DF020(a1, (__int64)a2, a5, *(double *)a6.m128i_i64), !(_DWORD)result) )
        {
          sub_1D5170(a1, (__int64)a2, v16, v17, *(double *)a6.m128i_i64);
          v22 = *(void (**)())(*a2 + 40LL);
          if ( v22 != nullsub_121 )
            ((void (__fastcall *)(_QWORD *))v22)(a2);
          *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 988LL) = *(_DWORD *)(a1 + 64);
          result = sub_33E140(*(_QWORD *)(a1 + 1496), 3u, a1);
          if ( !(_DWORD)result )
          {
            result = sub_330F20(a1, 1, v23, v24, v25, v26);
            if ( (_DWORD)result )
              return 4294967263LL;
          }
        }
      }
    }
    else
    {
      return 4294967283LL;
    }
  }
  return result;
}

