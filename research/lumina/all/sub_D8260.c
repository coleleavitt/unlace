void __fastcall sub_D8260(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  int v4; // r12d
  _QWORD *v5; // rsi
  _QWORD *v6; // rsi
  _QWORD *v7; // rsi
  char v8; // al
  _QWORD *v9; // rsi
  _QWORD *v10; // rsi
  _QWORD *v11; // rsi

  if ( a2 )
  {
    v3 = a2 + 1;
    if ( *(int *)a2 > 0 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = (_QWORD *)v3[1];
        if ( v5 )
          sub_C9250(a1, v5);
        v6 = (_QWORD *)v3[2];
        if ( v6 )
          sub_C9250(a1, v6);
        v7 = (_QWORD *)v3[3];
        if ( v7 )
          sub_C9250(a1, v7);
        v8 = *((_BYTE *)v3 + 61);
        if ( (v8 & 2) != 0 )
        {
          v9 = (_QWORD *)v3[11];
          if ( v9 )
          {
            sub_C9250(a1, v9);
            v8 = *((_BYTE *)v3 + 61);
          }
        }
        if ( (v8 & 4) != 0 )
          sub_D7880(a1, (_QWORD *)v3[11]);
        sub_D8230(a1, (_QWORD *)v3[4]);
        v10 = (_QWORD *)v3[5];
        if ( v10 )
          sub_D7700(a1, v10);
        v11 = (_QWORD *)v3[9];
        if ( (*((_BYTE *)v3 + 62) & 2) != 0 )
          break;
        if ( v11 )
        {
          ++v4;
          v3 += 13;
          sub_D7720(a1, (__int64)v11);
          if ( *(_DWORD *)a2 <= v4 )
            goto LABEL_23;
        }
        else
        {
LABEL_6:
          ++v4;
          v3 += 13;
          if ( *(_DWORD *)a2 <= v4 )
            goto LABEL_23;
        }
      }
      if ( v11 )
        sub_CF6E0(a1, v11);
      goto LABEL_6;
    }
LABEL_23:
    sub_C9250(a1, a2);
  }
}
