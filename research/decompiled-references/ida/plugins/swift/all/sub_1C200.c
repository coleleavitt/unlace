__int64 __fastcall sub_1C200(__int64 a1, _DWORD *a2, char a3, __int64 a4)
{
  int v5; // r13d
  int v7; // eax
  __int64 v8; // r13

  if ( a3 )
  {
    if ( *(_DWORD *)(get_ph() + 4) )
    {
      if ( *(_DWORD *)(get_ph() + 4) != 13 )
        return 0;
      v5 = sub_1E840(*(_QWORD *)(a1 + 16), a4);
    }
    else
    {
      v5 = sub_1E200(*(_QWORD *)(a1 + 16), a4);
    }
    ++*(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(a1 + 32) == 3 )
      ++*(_QWORD *)(a1 + 8);
    goto LABEL_6;
  }
  if ( *(_DWORD *)(get_ph() + 4) )
  {
    if ( *(_DWORD *)(get_ph() + 4) != 13 )
      return 0;
    v5 = sub_1E7F0(*(_QWORD *)(a1 + 8), a4);
  }
  else
  {
    v5 = sub_1E170(*(_QWORD *)(a1 + 8), a4);
  }
  ++*(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 32) != 3 )
  {
LABEL_6:
    if ( v5 == -1 )
      return 0;
    goto LABEL_7;
  }
  ++*(_QWORD *)(a1 + 16);
  if ( v5 == -1 )
    return 0;
LABEL_7:
  if ( v5 != -2 )
  {
    cleanup_argloc(a2);
    *a2 = 3;
    a2[2] = v5;
    return 1;
  }
  if ( !*(_DWORD *)(get_ph() + 4) )
  {
    v7 = sub_1E720(a4);
LABEL_21:
    v8 = (*(_QWORD *)(a1 + 24) + v7 - 1) & -v7;
    *(_QWORD *)(a1 + 24) = v8;
    cleanup_argloc(a2);
    *a2 = 1;
    *((_QWORD *)a2 + 1) = v8;
    *(_QWORD *)(a1 + 24) += (unsigned int)round_up_power2((unsigned int)a4);
    return 1;
  }
  if ( *(_DWORD *)(get_ph() + 4) == 13 )
  {
    v7 = sub_1EB00(a4);
    goto LABEL_21;
  }
  return 0;
}

