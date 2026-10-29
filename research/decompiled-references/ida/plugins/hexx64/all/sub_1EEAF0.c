__int64 *__fastcall sub_1EEAF0(__int64 *a1, _DWORD *a2, _QWORD *a3, int a4, char a5, double a6)
{
  unsigned int v7; // edx
  bool v10; // al
  unsigned int v11; // eax
  char v12; // al

  v7 = a4;
  if ( (a5 & 1) != 0 )
    goto LABEL_9;
  if ( (unsigned int)(*a2 - 3) > 1 )
    goto LABEL_3;
  v10 = sub_11CAD0(a4);
  v7 = a4;
  if ( !v10 )
    goto LABEL_3;
  v11 = a2[2];
  if ( *a2 == 4 )
    v11 = (unsigned __int16)v11;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a3 + 200LL))(a3, v11);
  v7 = a4;
  if ( v12 )
  {
LABEL_9:
    sub_32C080(a1, a3[12], v7);
    if ( *(_BYTE *)a1 )
      return a1;
  }
  else
  {
LABEL_3:
    sub_32C430(a1, (__int64)a3, v7, 0);
    if ( *(_BYTE *)a1 )
      return a1;
  }
  if ( (a5 & 2) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCBEDu, a6);
    BUG();
  }
  return a1;
}

