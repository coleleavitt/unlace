__int64 __fastcall sub_10DE0(unsigned __int8 **a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int8 *v6; // r8
  int v7; // edx

  v2 = *a1;
  v3 = a2 - (_QWORD)*a1;
  if ( v3 <= 1 )
    sub_E890((__int64)"Not enough bytes left: %zd; expected at least %d", v3, 2);
  v4 = *v2;
  v5 = dword_1B720[v4];
  if ( v5 == -1 || (v6 = v2 + 2, v4 = v2[1], v7 = dword_1B720[v4], v7 == -1) )
    sub_E890((__int64)"Bad xdigit: %c", (unsigned int)(char)v4);
  *a1 = v6;
  return (unsigned int)(v7 + 16 * v5);
}

