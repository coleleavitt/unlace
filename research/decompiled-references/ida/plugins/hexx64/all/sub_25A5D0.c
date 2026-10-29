int __fastcall sub_25A5D0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int8 v3; // dl
  unsigned __int8 v4; // cl
  int result; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rbx
  bool v14; // dl
  bool v15; // al

  v3 = *(_BYTE *)(a1 + 64);
  v4 = *(_BYTE *)(a2 + 64);
  if ( v3 < v4 )
    return -1;
  result = 1;
  if ( v4 < v3 )
    return result;
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a2 + 48);
  if ( v6 < v7 )
    return -1;
  if ( v7 < v6 )
    return result;
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(a2 + 56);
  if ( v8 < v9 )
    return -1;
  if ( v9 >= v8 )
  {
    result = sub_25A440((_QWORD **)a1, (_QWORD **)a2, a3);
    if ( !result )
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(_QWORD *)(a2 + 24);
      v12 = v10 + 48LL * *(_QWORD *)(a1 + 32);
      v13 = v11 + 48LL * *(_QWORD *)(a2 + 32);
      v14 = v10 != v12;
      v15 = v11 != v13;
      if ( v11 == v13 || v10 == v12 )
      {
LABEL_18:
        if ( v10 == v12 && v15 )
          return -1;
        else
          return v14 && v13 == v11;
      }
      else
      {
        while ( 1 )
        {
          result = sub_25A4D0(v10, v11, a3);
          if ( result )
            break;
          v10 += 48;
          v11 += 48;
          v14 = v12 != v10;
          v15 = v13 != v11;
          if ( v12 == v10 || v13 == v11 )
            goto LABEL_18;
        }
      }
    }
  }
  return result;
}

