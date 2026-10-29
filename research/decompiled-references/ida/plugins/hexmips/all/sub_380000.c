__int64 __fastcall sub_380000(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rdi
  unsigned __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 *v7; // rdx
  unsigned __int64 v8; // r9
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v12; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = *(unsigned __int64 **)a2;
    v6 = 0;
    v7 = *(unsigned __int64 **)a2;
    while ( v3 < *v7 || v3 >= *v7 + v7[2] )
    {
      ++v6;
      v7 += 3;
      if ( v4 == v6 )
        goto LABEL_6;
    }
    if ( !v7 )
    {
LABEL_6:
      v8 = *(_QWORD *)(a1 + 24);
      v9 = 0;
      goto LABEL_7;
    }
    v12 = correct_address();
    v8 = *(_QWORD *)(a1 + 24);
    v9 = 1;
    *(_QWORD *)(a1 + 16) = v12;
    v4 = *(_QWORD *)(a2 + 8);
    if ( !v4 )
      return v9;
    v5 = *(unsigned __int64 **)a2;
LABEL_7:
    v10 = 0;
    while ( v8 < *v5 || v8 >= *v5 + v5[2] )
    {
      ++v10;
      v5 += 3;
      if ( v10 == v4 )
        return v9;
    }
    if ( v5 )
    {
      *(_QWORD *)(a1 + 24) = correct_address();
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v9;
}

