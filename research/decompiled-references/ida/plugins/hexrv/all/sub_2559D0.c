int __fastcall sub_2559D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  unsigned __int8 v3; // cl
  int result; // eax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rbx
  bool v13; // dl
  bool v14; // al

  v2 = *(_BYTE *)(a1 + 64);
  v3 = *(_BYTE *)(a2 + 64);
  if ( v2 < v3 )
    return -1;
  result = 1;
  if ( v3 < v2 )
    return result;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a2 + 48);
  if ( v5 < v6 )
    return -1;
  if ( v6 < v5 )
    return result;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a2 + 56);
  if ( v7 < v8 )
    return -1;
  if ( v8 >= v7 )
  {
    result = sub_255840((_QWORD **)a1, (_QWORD **)a2);
    if ( !result )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v10 = *(_QWORD *)(a2 + 24);
      v11 = v9 + 48LL * *(_QWORD *)(a1 + 32);
      v12 = v10 + 48LL * *(_QWORD *)(a2 + 32);
      v13 = v9 != v11;
      v14 = v10 != v12;
      if ( v10 == v12 || v9 == v11 )
      {
LABEL_18:
        if ( v9 == v11 && v14 )
          return -1;
        else
          return v13 && v12 == v10;
      }
      else
      {
        while ( 1 )
        {
          result = sub_2558D0(v9, v10);
          if ( result )
            break;
          v9 += 48;
          v10 += 48;
          v13 = v11 != v9;
          v14 = v12 != v10;
          if ( v11 == v9 || v12 == v10 )
            goto LABEL_18;
        }
      }
    }
  }
  return result;
}

