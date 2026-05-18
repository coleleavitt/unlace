__int64 __fastcall sub_C4FA0(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned __int16 v3; // r8
  int v4; // r9d
  __int64 result; // rax
  int v6; // ecx
  int v7; // r10d
  __int64 *v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx

  v2 = *(unsigned __int16 *)(a2 + 52);
  v3 = *(_WORD *)(a2 + 54);
  v4 = *(unsigned __int16 *)(a1 + 54);
  result = 0;
  if ( *(unsigned __int16 *)(a1 + 52) - v4 < v2 - v3
    && (*(_WORD *)(a1 + 20) <= *(_WORD *)(a2 + 20) || *(_WORD *)(a1 + 22) <= *(_WORD *)(a2 + 22)) )
  {
    result = 0;
    if ( (unsigned __int16)v4 >= v3 )
    {
      v6 = *(unsigned __int16 *)(a1 + 52) - 1;
      if ( *(_WORD *)(a1 + 52) )
      {
        v7 = v2 - 1;
        v8 = (__int64 *)(*(_QWORD *)(a1 + 64) + 8LL * v6);
        v9 = 8LL * (unsigned int)(v2 - 1);
        v10 = (__int64)&v8[-v6 - 1];
        v11 = 8LL * (v2 - 2);
        while ( 1 )
        {
          v12 = *v8;
          if ( *v8 )
          {
            if ( v7 == -1 )
              return 0;
            v13 = *(_QWORD *)(a2 + 64);
            if ( v12 != *(_QWORD *)(v13 + 8LL * v7) )
              break;
          }
LABEL_16:
          if ( --v8 == (__int64 *)v10 )
            goto LABEL_17;
        }
        v14 = v11 + v13;
        v15 = v14 - v9;
        while ( v14 != v15 )
        {
          v14 -= 8;
          if ( v12 == *(_QWORD *)(v14 + 8) )
            goto LABEL_16;
        }
        return 0;
      }
      else
      {
LABEL_17:
        result = 1;
        if ( (*(_BYTE *)(a1 + 48) & 0x40) != 0 )
          return (*(_DWORD *)(a2 + 48) >> 6) & 1;
      }
    }
  }
  return result;
}
