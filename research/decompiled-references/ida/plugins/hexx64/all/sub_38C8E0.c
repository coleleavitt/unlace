__int64 *__fastcall sub_38C8E0(__int64 a1, __int64 *a2, int *a3, double a4)
{
  __int64 *v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax
  int tinfo_size; // r14d
  __int64 v9; // rbx
  __int64 v11; // r15
  int v12; // eax

  v5 = nullptr;
  sub_38B490(a1, 0);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 88);
    v7 = sub_384AF0(v6);
    v5 = (__int64 *)v7;
    if ( v7 )
    {
      if ( *(_DWORD *)(v6 + 8) == 77 )
      {
        v11 = *(_QWORD *)(v6 + 24);
        sub_254FC0(v11);
        if ( (unsigned int)verify_tinfo() )
          tinfo_size = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1504LL) + 80LL);
        else
          tinfo_size = get_tinfo_size();
        v12 = *(_DWORD *)(a1 + 120);
        LODWORD(v9) = (2 * v12) >> 1;
        if ( (v12 & 0x20000000) == 0 )
          LODWORD(v9) = v12 & 0xBFFFFFFF;
        v9 = (int)v9;
        if ( (unsigned int)sub_287C60((__int64 *)(v11 + 112), (int)v9) == -1 )
          v9 = **(_QWORD **)(*(_QWORD *)(v11 + 112) + 32LL);
      }
      else
      {
        tinfo_size = *(char *)(v7 + 15);
        if ( (unsigned int)verify_tinfo() )
          v9 = sub_32ABC0(*v5, tinfo_size, 1, a4);
        else
          v9 = sub_255A30(v5);
      }
      *a2 = v9;
      *a3 = tinfo_size;
    }
  }
  return v5;
}

