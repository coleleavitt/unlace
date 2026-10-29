__int64 __fastcall sub_1FB090(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // cl
  int v13; // edx

  v3 = sub_11DA40(*(unsigned __int8 **)a1, *(unsigned __int8 **)a2, a3);
  if ( v3 )
    return v3 >> 31;
  v5 = *(_QWORD *)(a1 + 32);
  if ( !v5
    || (v6 = *(_QWORD *)(v5 + 24), v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL), result = 1, v6 >= v7)
    && (result = 0, v7 >= v6) )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( !v8
      || (v9 = *(_QWORD *)(v8 + 24), v10 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL), result = 1, v9 >= v10)
      && (result = 0, v10 >= v9) )
    {
      v11 = *(_BYTE *)(a1 + 52);
      v12 = *(_BYTE *)(a2 + 52);
      result = 1;
      if ( v11 >= v12 )
      {
        result = 0;
        if ( v12 >= v11 )
        {
          v13 = *(_DWORD *)(a2 + 48);
          result = 1;
          if ( *(_DWORD *)(a1 + 48) >= v13 )
          {
            result = 0;
            if ( *(_DWORD *)(a1 + 48) <= v13 )
            {
              v3 = sub_330920(a1 + 8, a2 + 8);
              return v3 >> 31;
            }
          }
        }
      }
    }
  }
  return result;
}

