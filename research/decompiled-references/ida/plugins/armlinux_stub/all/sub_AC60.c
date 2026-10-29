__int64 __fastcall sub_AC60(__int64 a1, _DWORD *a2, __int64 *a3, unsigned int a4, int a5)
{
  __int64 *v9; // rsi
  __int64 *v10; // rax
  char v11; // r10
  int v12; // edx
  __int64 v13; // rcx
  char v14; // r10

  v9 = &a3[7 * (int)a4];
  if ( a3 == v9 )
  {
    v14 = 1;
    goto LABEL_13;
  }
  v10 = a3;
  v11 = 0;
  do
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v10 + 40) == 9 )
        goto LABEL_7;
      v12 = *((_DWORD *)v10 + 8);
      v13 = *v10;
      if ( v12 != 4 )
      {
        if ( v12 == 8 )
        {
          if ( (v13 & 3) != 0 )
          {
LABEL_19:
            *((_BYTE *)v10 + 40) = 3;
            goto LABEL_7;
          }
        }
        else
        {
          if ( (v13 & 7) != 0 )
            goto LABEL_19;
          if ( (unsigned int)(*((_DWORD *)v10 + 9) - 1) > 7 )
          {
            *((_BYTE *)v10 + 40) = 5;
            goto LABEL_7;
          }
        }
        goto LABEL_6;
      }
      if ( (v13 & 1) != 0 )
        break;
LABEL_6:
      *((_BYTE *)v10 + 40) = 0;
      v11 = 1;
LABEL_7:
      v10 += 7;
      if ( v9 == v10 )
        goto LABEL_12;
    }
    *((_BYTE *)v10 + 40) = 4;
    v10 += 7;
  }
  while ( v9 != v10 );
LABEL_12:
  v14 = v11 ^ 1;
LABEL_13:
  if ( a5 || !v14 )
    return (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, a2, a3, a4);
  if ( a2 )
    *a2 = 0;
  return 1;
}

