__int64 __fastcall sub_14E2E0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  char v5; // dl
  char v7; // al

  v5 = a4;
  if ( (*(_BYTE *)(a1 + 605) & 4) == 0 )
    return sub_11FD80((char *)a3, a2, v5);
  if ( *(_BYTE *)a3 != 10 )
    return sub_11FD80((char *)a3, a2, v5);
  if ( **(_BYTE **)(a3 + 8) != 6 )
    return sub_11FD80((char *)a3, a2, v5);
  v7 = sub_32A760(a1);
  v5 = a4;
  if ( v7 )
    return sub_11FD80((char *)a3, a2, v5);
  *a2 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_DWORD *)(*(_QWORD *)(a1 + 112) + 84LL), a4);
  return 1;
}

