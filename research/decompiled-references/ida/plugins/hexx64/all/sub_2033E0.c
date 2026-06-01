__int64 __fastcall sub_2033E0(__int64 a1, int *a2, __int64 a3, unsigned int a4, double a5)
{
  char v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // r12d

  if ( (unsigned int)sub_1C2AD0(a2, (int *)a3, a5) )
  {
    sub_228C20(*(_QWORD *)(a1 + 56));
    if ( !a2[23] && *(_DWORD *)a3 == 1 )
    {
      if ( *a2 != 1 )
      {
        if ( !under_debugger )
          sub_383060(0xCE7Bu, a5);
        BUG();
      }
      while ( 1 )
      {
        v10 = *(_QWORD *)(a3 + 8);
        v11 = a4 + v10;
        if ( !(unsigned __int8)sub_1C7920(
                                 a3,
                                 *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1504LL),
                                 nullptr,
                                 a4,
                                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL),
                                 a5) )
          break;
        v9 = *(_QWORD *)(a3 + 8);
        if ( v10 == v9 )
          goto LABEL_5;
        if ( v10 < v9 || v11 - (int)v9 > 16 )
          break;
        a4 = sub_11CA90(v11 - (int)v9, a5);
      }
      return (unsigned int)-1;
    }
    else
    {
LABEL_5:
      v8 = sub_1C3110((__int64)a2, 0, 0, a5);
      if ( (unsigned __int8)sub_1C3110(a3, 0, 0, a5) != v8 )
        **(_DWORD **)(a1 + 56) &= ~0x200000u;
      copy_argloc();
      a2[6] &= ~0x2000000u;
    }
  }
  return a4;
}

