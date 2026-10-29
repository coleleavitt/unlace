__int64 __fastcall sub_187B0(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // ecx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // r11
  _DWORD *v14; // rdx
  __int64 *v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // rcx

  v3 = a1 - 56;
  if ( a2 != 4 )
  {
    if ( a2 != 30 )
      return 0;
    v5 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v15 = *((__int64 **)a3 + 1);
      v16 = v15 + 1;
      *((_QWORD *)a3 + 1) = v15 + 1;
      v9 = *v15;
    }
    else
    {
      v7 = *((_QWORD *)a3 + 2);
      v8 = v5 + 8;
      *a3 = v8;
      v9 = *(_QWORD *)(v7 + v5);
      if ( (unsigned int)v8 <= 0x2F )
      {
        v10 = v5 + 16;
        *a3 = v10;
        v11 = *(_QWORD *)(v7 + v8);
        if ( (unsigned int)v10 <= 0x2F )
        {
          v12 = v5 + 24;
          *a3 = v12;
          v13 = *(_QWORD *)(v7 + v10);
          if ( (unsigned int)v12 <= 0x2F )
          {
            v14 = (_DWORD *)(v12 + v7);
            *a3 = v5 + 32;
LABEL_9:
            sub_183C0(v3, v9, v11, v13, *v14 != 0);
            return 0;
          }
          v14 = *((_DWORD **)a3 + 1);
LABEL_14:
          *((_QWORD *)a3 + 1) = v14 + 2;
          goto LABEL_9;
        }
        v17 = *((__int64 **)a3 + 1);
LABEL_13:
        v14 = v17 + 1;
        *((_QWORD *)a3 + 1) = v17 + 1;
        v13 = *v17;
        goto LABEL_14;
      }
      v16 = *((__int64 **)a3 + 1);
    }
    v17 = v16 + 1;
    *((_QWORD *)a3 + 1) = v16 + 1;
    v11 = *v16;
    goto LABEL_13;
  }
  sub_18480(v3);
  return 0;
}
