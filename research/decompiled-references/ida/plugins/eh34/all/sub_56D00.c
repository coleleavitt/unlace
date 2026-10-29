__int64 __fastcall sub_56D00(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v7; // r8
  int v8; // r10d
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx

  v4 = a2;
  result = HIDWORD(a4);
  v7 = (a3 - 1) / 2;
  v8 = HIDWORD(a4);
  if ( a2 >= v7 )
  {
    v9 = a1 + 8 * a2;
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_13;
    result = a2;
    goto LABEL_15;
  }
  while ( 1 )
  {
    result = 2 * (a2 + 1);
    v9 = a1 + 16 * (a2 + 1);
    if ( *(_DWORD *)(v9 - 4) < *(_DWORD *)(v9 + 4) )
    {
      --result;
      v9 = a1 + 8 * result;
    }
    *(_QWORD *)(a1 + 8 * a2) = *(_QWORD *)v9;
    if ( v7 <= result )
      break;
    a2 = result;
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == result )
  {
LABEL_15:
    v12 = 2 * result + 2;
    v13 = *(_QWORD *)(a1 + 8 * v12 - 8);
    result = v12 - 1;
    *(_QWORD *)v9 = v13;
    v9 = a1 + 8 * result;
  }
  v10 = (result - 1) / 2;
  if ( result > v4 )
  {
    while ( 1 )
    {
      v11 = a1 + 8 * v10;
      v9 = a1 + 8 * result;
      if ( *(_DWORD *)(v11 + 4) <= v8 )
        break;
      *(_QWORD *)v9 = *(_QWORD *)v11;
      result = v10;
      if ( v4 >= v10 )
      {
        *(_QWORD *)v11 = a4;
        return result;
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *(_QWORD *)v9 = a4;
  return result;
}

