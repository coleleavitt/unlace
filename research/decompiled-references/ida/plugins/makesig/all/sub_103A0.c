__int64 __fastcall sub_103A0(char **a1, __int64 a2)
{
  char *v2; // rax
  unsigned __int8 *v4; // r11
  unsigned int v5; // edx
  char *v6; // rdi
  __int64 v7; // rcx
  char v8; // r8
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rsi
  unsigned __int8 *v12; // rdi
  unsigned __int8 *i; // rsi

  v2 = *a1;
  if ( a2 - (__int64)*a1 <= 3 )
    sub_E890((__int64)"Not enough bytes left: %zd; expected at least %d", a2 - (_QWORD)*a1, 4);
  v4 = (unsigned __int8 *)(v2 + 4);
  v5 = 0;
  do
  {
    v6 = v2;
    v7 = (unsigned __int8)*v2++;
    v8 = v7;
    v9 = dword_1B720[v7];
    if ( v9 == -1 )
      sub_E890((__int64)"Bad xdigit: %c", (unsigned int)v8);
    v5 = (unsigned __int16)v9 + 16 * v5;
  }
  while ( v2 != (char *)v4 );
  v10 = dword_1B720[(unsigned __int8)*v2];
  if ( v10 == -1 )
  {
    v12 = (unsigned __int8 *)v2;
  }
  else
  {
    v11 = a2 - (_QWORD)v2;
    if ( v11 <= 3 )
      sub_E890((__int64)"Not enough bytes left: %zd; expected at least %d", v11, 4);
    v12 = (unsigned __int8 *)(v6 + 5);
    for ( i = (unsigned __int8 *)(v2 + 1); ; ++i )
    {
      v5 = (unsigned __int16)v10 + 16 * v5;
      if ( i == v12 )
        break;
      v10 = dword_1B720[(unsigned __int8)v2[1]];
      v2 = (char *)i;
      if ( v10 == -1 )
        sub_E890((__int64)"Bad xdigit: %c", (unsigned int)*v2);
    }
  }
  *a1 = (char *)v12;
  return v5;
}

