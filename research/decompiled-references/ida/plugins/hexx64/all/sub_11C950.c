__int64 __fastcall sub_11C950(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // eax
  __int64 v6; // rax
  unsigned __int8 v7; // dl
  __int16 v8; // cx
  __int16 v9; // dx
  int v10; // ecx
  int v11; // edx
  __int64 result; // rax

  v5 = *a1;
  if ( (_BYTE)v5 != 10 )
  {
    if ( (unsigned __int8)(v5 - 5) > 1u && (_BYTE)v5 != 9 )
    {
      if ( !under_debugger )
        sub_383060(0xC467u, a5);
      BUG();
    }
    v6 = j__qalloc_or_throw(24, a2, (unsigned int)(v5 - 5), a4);
    *(_QWORD *)v6 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = -1;
    *(_BYTE *)v6 = *a1;
    v7 = a1[1];
    *a1 = 0;
    *(_BYTE *)(v6 + 1) = v7;
    v8 = *((_WORD *)a1 + 1);
    a1[1] = 0;
    v9 = *(_WORD *)(v6 + 2);
    *(_WORD *)(v6 + 2) = v8;
    v10 = *((_DWORD *)a1 + 1);
    *((_WORD *)a1 + 1) = v9;
    v11 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 4) = v10;
    *((_DWORD *)a1 + 1) = v11;
    *(_QWORD *)(v6 + 8) = *((_QWORD *)a1 + 1);
    *a1 = 10;
    *((_QWORD *)a1 + 1) = v6;
    *(_DWORD *)(v6 + 4) = -1;
  }
  result = *(unsigned int *)(a2 + 84);
  *((_DWORD *)a1 + 1) = result;
  return result;
}

