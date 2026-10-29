unsigned __int64 __fastcall sub_3137C0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6)
{
  int v8; // ecx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v12; // ecx

  sub_312B80(a1, a5);
  if ( a4 > 0 )
  {
    if ( a3 >= a2 )
    {
      v8 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 3;
      if ( v8 != 8 )
      {
        v9 = (1LL << (8 * (unsigned __int8)v8)) - 1;
        if ( v9 < a2 )
          goto LABEL_17;
        v10 = a3 - (a3 - a2) % a4;
        goto LABEL_6;
      }
      *(_QWORD *)(a1 + 8) = a2;
      v10 = a3 - (a3 - a2) % a4;
      goto LABEL_7;
    }
LABEL_18:
    if ( !under_debugger )
      sub_383060(0xCA1Cu, a5);
    BUG();
  }
  if ( !a4 || a2 < a3 )
    goto LABEL_18;
  v12 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)a1 = 3;
  if ( v12 != 8 )
  {
    v9 = (1LL << (8 * (unsigned __int8)v12)) - 1;
    if ( v9 < a2 )
      goto LABEL_17;
    v10 = a3 - (a3 - a2) % -a4;
LABEL_6:
    *(_QWORD *)(a1 + 8) = a2;
    if ( v9 >= v10 )
      goto LABEL_7;
LABEL_17:
    sub_312A40(a5);
  }
  *(_QWORD *)(a1 + 8) = a2;
  v10 = a3 - (a3 - a2) % -a4;
LABEL_7:
  *(_QWORD *)(a1 + 16) = v10;
  if ( a3 == a2 )
    a4 = 1;
  *(_QWORD *)(a1 + 24) = a4;
  return sub_312F60(a1, a5, a6);
}

