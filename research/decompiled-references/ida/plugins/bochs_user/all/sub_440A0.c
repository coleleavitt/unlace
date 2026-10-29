__int64 __fastcall sub_440A0(__int64 a1, unsigned int ***a2)
{
  unsigned int **v2; // rax
  unsigned int *v3; // rdx

  v2 = *a2;
  a2[4] = *a2;
  if ( v2 == &v2[(_QWORD)a2[1]] )
    return 1;
  while ( 1 )
  {
    v3 = *v2;
    a2[4] = v2 + 1;
    if ( (unsigned int)sub_26D50(*(_QWORD *)(a1 + 4832), *v3, *((_QWORD *)v3 + 1), *((_QWORD *)v3 + 2)) )
      break;
    v2 = a2[4];
    if ( v2 == &(*a2)[(_QWORD)a2[1]] )
      return 1;
  }
  return 0;
}

