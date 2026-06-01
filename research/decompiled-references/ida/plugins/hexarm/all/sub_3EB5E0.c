bool __fastcall sub_3EB5E0(_DWORD *a1, int a2)
{
  __int64 (*v2)(); // rax
  bool result; // al
  int v4; // edx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx

  v2 = *(__int64 (**)())(*(_QWORD *)a1 + 200LL);
  if ( v2 != sub_3EA0E0 && (unsigned __int8)v2() )
    return 0;
  if ( a2 >= a1[155] )
  {
    result = 1;
    if ( a2 < a1[158] + 16 )
      return result;
  }
  result = 1;
  if ( a2 >= a1[163] )
    return result;
  v4 = a1[20];
  v5 = a2 - 8;
  if ( v4 == 8 )
  {
    if ( v5 > 0x107 )
      goto LABEL_14;
    v8 = a1[15];
    if ( a2 >= v8 && a2 < v8 + 8 )
      goto LABEL_14;
    goto LABEL_19;
  }
  if ( v5 <= 0x3F )
  {
    v6 = a1[15];
    if ( a2 < v6 || a2 >= v4 + v6 )
    {
LABEL_19:
      v9 = a1[165];
      result = 1;
      if ( a2 < v9 || a2 >= v4 + v9 )
        return result;
      if ( v4 != 8 )
        goto LABEL_8;
LABEL_14:
      v7 = a1[153];
      goto LABEL_15;
    }
  }
LABEL_8:
  v7 = a1[137];
LABEL_15:
  if ( a2 < a1[122] )
    return 0;
  return a2 < v7 + 16;
}

