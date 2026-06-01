__int64 sub_3E7FE0()
{
  __int64 *v0; // rax
  unsigned __int16 i; // cx
  __int64 *v3; // rax

  v0 = &qword_4C2BC0;
  for ( i = qword_4C2BC0; ++v0 != (__int64 *)&unk_4C2F98; i = *(_WORD *)v0 )
  {
    if ( i >= *(_WORD *)v0 )
      return 0;
  }
  v3 = &qword_4C2BC0;
  do
  {
    if ( (*((_BYTE *)v3 + 4) & 6) != 0 && !*((_WORD *)v3 + 1) )
      return 0;
    ++v3;
  }
  while ( v3 != (__int64 *)&unk_4C2F98 );
  return 1;
}

