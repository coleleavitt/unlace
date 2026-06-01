__int64 __fastcall sub_201560(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  unsigned __int8 v5; // si
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // edi
  unsigned __int8 v13; // cl
  int v14; // edx

  v5 = *(_BYTE *)(a3 + 32);
  if ( v5 != *((_BYTE *)a2 + 8) )
  {
    if ( !under_debugger )
      sub_383060(0xCA99u, a4);
    BUG();
  }
  v6 = *(_QWORD *)(a3 + 24);
  v7 = *a2;
  result = a1;
  v9 = *((int *)a2 + 3);
  if ( v6 < *a2 )
  {
    *a2 = v6;
    v12 = v7 - v6 + v9;
    *((_DWORD *)a2 + 3) = v12;
    v13 = *(_BYTE *)(a3 + 32);
    if ( v13 < v5 )
    {
LABEL_7:
      if ( v12 >= *(_DWORD *)(result + 88) )
        return result;
LABEL_12:
      result = sub_11CA90(v12, a4);
      *((_DWORD *)a2 + 3) = result;
      return result;
    }
    if ( v5 < v13 )
      sub_201360(a4);
    v11 = *(_QWORD *)(a3 + 24) + *(int *)(a3 + 40);
    v10 = v6 + v12;
    LODWORD(v7) = v6;
  }
  else
  {
    v10 = v7 + v9;
    v11 = v6 + *(int *)(a3 + 40);
  }
  if ( v11 < v10 || v11 <= v10 )
  {
    v12 = *((_DWORD *)a2 + 3);
    goto LABEL_7;
  }
  v14 = v11 - v7;
  *((_DWORD *)a2 + 3) = v14;
  v12 = v14;
  if ( v14 < *(_DWORD *)(result + 88) )
    goto LABEL_12;
  return result;
}

