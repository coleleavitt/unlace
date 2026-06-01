bool __fastcall sub_6B100(__int64 a1, char a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 76) == 2 && !*(_QWORD *)(a1 + 48) )
    return 1;
  if ( a2 )
  {
    if ( sub_330DE0(a1) == 1 )
    {
      v4 = *(_QWORD *)(a1 + 56);
      if ( *(_DWORD *)v4 == 55 && *(_BYTE *)(v4 + 32) == 7 )
      {
        v5 = *(_QWORD *)(a1 + 64);
        v6 = *(unsigned int *)(v4 + 40);
        if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 64) )
          sub_65460(a3);
        v7 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v6);
        if ( *(_DWORD *)(v7 + 76) == 2 )
          return *(_QWORD *)(v7 + 48) == 0;
      }
    }
  }
  return 0;
}

