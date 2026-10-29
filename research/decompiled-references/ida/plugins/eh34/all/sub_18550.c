__int64 __fastcall sub_18550(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // ecx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rsi
  __int64 v12; // r11
  _DWORD *v13; // rdx
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rcx

  if ( a2 != 4 )
  {
    if ( a2 != 30 )
      return 0;
    v4 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v14 = *((__int64 **)a3 + 1);
      v15 = v14 + 1;
      *((_QWORD *)a3 + 1) = v14 + 1;
      v8 = *v14;
    }
    else
    {
      v6 = *((_QWORD *)a3 + 2);
      v7 = v4 + 8;
      *a3 = v7;
      v8 = *(_QWORD *)(v6 + v4);
      if ( (unsigned int)v7 <= 0x2F )
      {
        v9 = v4 + 16;
        *a3 = v9;
        v10 = *(_QWORD *)(v6 + v7);
        if ( (unsigned int)v9 <= 0x2F )
        {
          v11 = v4 + 24;
          *a3 = v11;
          v12 = *(_QWORD *)(v6 + v9);
          if ( (unsigned int)v11 <= 0x2F )
          {
            v13 = (_DWORD *)(v11 + v6);
            *a3 = v4 + 32;
LABEL_9:
            sub_183C0(a1, v8, v10, v12, *v13 != 0);
            return 0;
          }
          v13 = *((_DWORD **)a3 + 1);
LABEL_14:
          *((_QWORD *)a3 + 1) = v13 + 2;
          goto LABEL_9;
        }
        v16 = *((__int64 **)a3 + 1);
LABEL_13:
        v13 = v16 + 1;
        *((_QWORD *)a3 + 1) = v16 + 1;
        v12 = *v16;
        goto LABEL_14;
      }
      v15 = *((__int64 **)a3 + 1);
    }
    v16 = v15 + 1;
    *((_QWORD *)a3 + 1) = v15 + 1;
    v10 = *v15;
    goto LABEL_13;
  }
  sub_18480(a1);
  return 0;
}

