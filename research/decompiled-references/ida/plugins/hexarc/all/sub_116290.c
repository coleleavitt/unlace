__int64 __fastcall sub_116290(char *a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rax
  char v4; // dl
  __int16 v5; // cx
  __int16 v6; // dx
  int v7; // ecx
  int v8; // edx
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 != 10 )
  {
    if ( (unsigned __int8)(v2 - 5) > 1u && v2 != 9 )
    {
      if ( !under_debugger )
        sub_37B760(50279);
      BUG();
    }
    v3 = j__qalloc_or_throw();
    *(_QWORD *)v3 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 16) = -1;
    *(_BYTE *)v3 = *a1;
    v4 = a1[1];
    *a1 = 0;
    *(_BYTE *)(v3 + 1) = v4;
    v5 = *((_WORD *)a1 + 1);
    a1[1] = 0;
    v6 = *(_WORD *)(v3 + 2);
    *(_WORD *)(v3 + 2) = v5;
    v7 = *((_DWORD *)a1 + 1);
    *((_WORD *)a1 + 1) = v6;
    v8 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 4) = v7;
    *((_DWORD *)a1 + 1) = v8;
    *(_QWORD *)(v3 + 8) = *((_QWORD *)a1 + 1);
    *a1 = 10;
    *((_QWORD *)a1 + 1) = v3;
    *(_DWORD *)(v3 + 4) = -1;
  }
  result = *(unsigned int *)(a2 + 84);
  *((_DWORD *)a1 + 1) = result;
  return result;
}

