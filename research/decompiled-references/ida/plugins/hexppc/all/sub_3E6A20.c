char __fastcall sub_3E6A20(__int128 a1, __int64 a2, __int64 a3, char *a4, char a5)
{
  __int64 v5; // rax
  int *v7; // rcx

  v5 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = a2;
  if ( a3 && *(_BYTE *)a3 == 4 )
  {
    v7 = *(int **)(a3 + 8);
    *((_QWORD *)&a1 + 1) = v5;
    if ( a5 )
      return sub_309C70(a1, v5, a2, v7, a2, (__int64)a4);
    else
      return sub_309D70(a1, a2, v7, a2, (__int64)a4);
  }
  else
  {
    *(_QWORD *)&a1 = v5;
    return sub_125F90(a1, a4, 0);
  }
}

