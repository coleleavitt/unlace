__int64 __fastcall sub_1BE840(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r11
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax

  if ( !*(_BYTE *)(a2 + 145) )
    return 1;
  v8 = *a3;
  result = 0;
  if ( *a3 >= 0 && v8 < a5 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      v11 = *(unsigned __int64 **)(a1 + 8);
      v12 = *v11;
      v13 = *v11 + 24 * v11[1];
      if ( v13 < *v11 )
        return 1;
      while ( 1 )
      {
        v14 = *(unsigned __int16 *)(v12 + 16);
        v15 = *(unsigned __int16 *)(v12 + 18);
        if ( v8 < *(unsigned __int16 *)(v12 + 18) + (int)v14 )
          break;
        v12 += 24LL;
        if ( v13 < v12 )
          return 1;
      }
      if ( (unsigned int)(*(_DWORD *)v12 - 3) > 1 )
        return 1;
      if ( v15 >= v8 - v14 + a4 )
      {
        *a3 = v14 + v15 - v8 + v14 - a4;
        return 1;
      }
      result = 0;
      if ( v8 == v14 )
      {
        v16 = a4 + v8;
        if ( v13 != v12 )
        {
          while ( 1 )
          {
            v17 = *(unsigned __int16 *)(v12 + 16);
            if ( v17 > v16 )
              break;
            if ( (int)(v17 + *(unsigned __int16 *)(v12 + 18)) > v16 )
              return 0;
            v12 += 24LL;
            if ( v12 == v13 )
              return 1;
          }
        }
        return 1;
      }
    }
    else
    {
      if ( (unsigned int)(*(_DWORD *)a1 - 3) > 1 )
        return 1;
      v10 = a4 + v8;
      if ( a5 >= v10 )
      {
        *a3 = a5 - v10;
        return 1;
      }
    }
  }
  return result;
}

