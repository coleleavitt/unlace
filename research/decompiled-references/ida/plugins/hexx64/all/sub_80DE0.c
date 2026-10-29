unsigned __int64 __fastcall sub_80DE0(__int64 a1, __int64 *a2, double a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int128 v8; // rt0
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx

  if ( *(_BYTE *)(a1 + 24) )
    return sub_7F8E0(a2);
  result = sub_7F8E0(a2);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 && *(_QWORD *)(a1 + 16) )
  {
    v6 = *(_QWORD *)(v5 + 8);
LABEL_6:
    while ( v5 != v6 )
    {
      v7 = -*(_QWORD *)(v6 + 24);
      if ( *(__int64 *)(v6 + 24) > 0 )
        v7 = *(_QWORD *)(v6 + 24);
      *(_QWORD *)&v8 = *(_QWORD *)(v6 + 24);
      *((_QWORD *)&v8 + 1) = v7;
      sub_7F940(a2, v8 >> 63);
      v9 = a2[1];
      v10 = *(_BYTE *)(v6 + 32);
      v11 = *a2;
      if ( a2[2] < (unsigned __int64)(v9 + 1) )
      {
        v13 = qvector_reserve((__int64)a2, v11, v9 + 1, 1);
        *a2 = v13;
        v11 = v13;
        v9 = a2[1];
      }
      *(_BYTE *)(v11 + v9) = v10;
      ++a2[1];
      sub_80CF0((_DWORD *)(v6 + 40), a2, a3);
      result = *(_QWORD *)v6;
      if ( (*(_QWORD *)v6 & 2) == 0 )
      {
        v12 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
        {
          result &= 0xFFFFFFFFFFFFFFFCLL;
          v14 = *(_QWORD *)result;
          if ( (*(_QWORD *)result & 2) == 0 )
          {
            while ( *(_QWORD *)(result + 16) == v6 )
            {
              v6 = result;
              v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
              v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v14 & 2) != 0 )
              {
                v6 = v15;
                goto LABEL_6;
              }
              result = v15;
            }
          }
          v6 = result;
        }
        else
        {
          do
          {
            v6 = v12;
            v12 = *(_QWORD *)(v12 + 8);
          }
          while ( (*(_BYTE *)v12 & 2) == 0 );
        }
      }
    }
  }
  return result;
}

