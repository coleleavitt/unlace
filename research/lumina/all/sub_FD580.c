__int64 __fastcall sub_FD580(__int64 a1, int a2, _QWORD *a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int8 *v8; // rsi
  __int64 v10; // rdx

  if ( a2 < 0 || *(_DWORD *)a1 <= a2 )
  {
    *a3 = 0;
    return 21;
  }
  else
  {
    v4 = a2;
    v5 = a1 + 8LL * a2;
    v6 = *(_QWORD *)(v5 + 128);
    if ( v6 )
    {
      *a3 = v6;
      return 0;
    }
    else
    {
      v8 = *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL)
                                           + 56LL * *(int *)(*(_QWORD *)(a1 + 8) + 12LL * a2 + 8))
                               + 24LL);
      if ( v8 )
      {
        result = sub_F7C20(
                   **(_QWORD **)(a1 + 104),
                   v8,
                   *(_BYTE *)(**(_QWORD **)(a1 + 104) + 100LL),
                   0x41u,
                   (__int64 *)(a1 + 8 * v4 + 128),
                   a4);
        v10 = *(_QWORD *)(v5 + 128);
        *a3 = v10;
        if ( !(_DWORD)result && !v10 )
          return 12;
      }
      else
      {
        *a3 = 0;
        return 12;
      }
    }
  }
  return result;
}
