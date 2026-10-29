__int64 *__fastcall sub_C020(__int64 a1, int a2, int a3)
{
  int v3; // edi
  __int64 *i; // rax
  __int64 v5; // rcx

  v3 = *(_DWORD *)(a1 + 120);
  for ( i = &qword_10CA0;
        *(unsigned __int8 *)i != v3 || a2 != *((unsigned __int16 *)i + 1) || a3 != *((unsigned __int8 *)i + 4);
        i += 3 )
  {
    v5 = i[4];
    if ( !v5 )
      return (__int64 *)v5;
  }
  return i;
}

