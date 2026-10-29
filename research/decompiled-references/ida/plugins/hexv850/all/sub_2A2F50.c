__int64 __fastcall sub_2A2F50(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // r12d
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // r14d
  int v12; // esi
  __int64 v13; // rax

  v6 = a3;
  result = sub_2A0F00(a2, *(_QWORD *)(a1 + 8), a3, a4, a5, a6);
  if ( *(_DWORD *)a2 != 6 )
    goto LABEL_2;
  v13 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)(v13 + 8) == 61 )
  {
    result = sub_250670(*(__int64 **)(v13 + 24));
    if ( !result )
      return result;
LABEL_2:
    v9 = a2 + 16;
    if ( *(_DWORD *)(a2 + 16) != 6 )
    {
LABEL_3:
      if ( *(_DWORD *)a2 == 1 && *(_DWORD *)(a2 + 16) == 1 )
        return result;
      goto LABEL_5;
    }
LABEL_19:
    result = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(result + 8) == 61 )
    {
      result = sub_250670(*(__int64 **)(result + 24));
      if ( !result )
        return result;
    }
    goto LABEL_3;
  }
  v9 = a2 + 16;
  if ( *(_DWORD *)(a2 + 16) == 6 )
    goto LABEL_19;
LABEL_5:
  result = sub_299330(a2, v9);
  if ( (_DWORD)result )
  {
    if ( *(_DWORD *)a2 != 6 )
      goto LABEL_12;
    v10 = *(_QWORD *)(a2 + 8);
    v11 = 0;
    if ( *(_DWORD *)(v10 + 8) != 65 )
      goto LABEL_12;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v10 + 32);
      if ( *(_DWORD *)(a2 + 32) != 3 && v12 != -1 )
      {
        result = sub_2A26F0(a1, v12, (unsigned int *)a2, v11, v6);
        if ( (_BYTE)result )
          break;
      }
      if ( v11 == 1 )
        return sub_2A2430(a1, (unsigned int *)a2, v6);
LABEL_12:
      if ( *(_DWORD *)v9 == 6 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        v11 = 1;
        if ( *(_DWORD *)(v10 + 8) == 65 )
          continue;
      }
      return sub_2A2430(a1, (unsigned int *)a2, v6);
    }
  }
  return result;
}

