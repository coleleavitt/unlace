__int64 __fastcall sub_225B60(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  int v10; // r13d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  char tinfo_property; // al
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 i; // rsi
  __int64 v26; // rcx
  __int64 v27; // [rsp+8h] [rbp-40h]

  v2 = a2;
  v3 = a2[7];
  v4 = v3 + *((int *)a2 + 19);
  v5 = *a2;
  if ( *((_DWORD *)a2 + 19) == -1 )
    v4 = a2[7];
  if ( (v5 & 2) == 0 )
  {
    v6 = (_QWORD *)a2[2];
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
      v8 = *v7;
      if ( (*v7 & 2) == 0 )
      {
        while ( (_QWORD *)v7[2] == v2 )
        {
          v2 = v7;
          v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
          v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v8 & 2) != 0 )
          {
            v2 = (_QWORD *)v9;
            goto LABEL_9;
          }
          v7 = (_QWORD *)v9;
        }
      }
      v2 = v7;
    }
    else
    {
      do
      {
        v2 = v6;
        v23 = (_QWORD *)v6[1];
        if ( (*(_BYTE *)v23 & 2) != 0 )
          break;
        v2 = v23;
        v6 = (_QWORD *)v23[1];
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
    }
  }
LABEL_9:
  v10 = 0;
  if ( v2 != (_QWORD *)a1[11] )
  {
    while ( 1 )
    {
LABEL_10:
      if ( v2[7] >= v4 )
        goto LABEL_20;
      v11 = *((_DWORD *)v2 + 20);
      if ( (v11 & 1) != 0 )
      {
        v12 = *((int *)v2 + 19);
        v13 = v2[7];
        if ( (_DWORD)v12 )
          goto LABEL_13;
        if ( v3 != v13 || a1[22] >= v3 )
          goto LABEL_23;
        tinfo_property = get_tinfo_property();
        v20 = 2;
        if ( (tinfo_property & 0xF) != 0xB )
        {
          v20 = 0;
          if ( !*((_DWORD *)v2 + 19) )
          {
            v27 = v2[12];
            v21 = get_tinfo_property();
            LODWORD(v20) = v27;
            if ( (v21 & 0x2F) == 0xD )
            {
              v20 = (int)v27;
            }
            else
            {
              v24 = v2[11];
              for ( i = v24 + 40LL * v2[12]; i != v24; v24 += 40 )
              {
                v26 = *(_QWORD *)(v24 + 16);
                if ( *(_DWORD *)v26 == 12 )
                {
                  LODWORD(v20) = v20 + 1;
                }
                else if ( *(_BYTE *)(v26 + 64) == 8 )
                {
                  LODWORD(v20) = (*(_DWORD *)(*(_QWORD *)(v26 + 72) + 284LL) == 2) + (_DWORD)v20;
                }
              }
              v20 = (int)v20;
            }
          }
        }
        v22 = v2[12];
        if ( 2 * v22 != v20 )
          return -1;
        v10 += v22;
        if ( v10 > 1 )
          return -1;
        v11 = *((_DWORD *)v2 + 20);
        if ( (v11 & 1) != 0 )
          break;
      }
      if ( (v11 & 2) != 0 && v2[8] != -1 && (get_tinfo_property() & 0xF) == 0xB )
        break;
LABEL_16:
      if ( (*v2 & 2) != 0 )
      {
LABEL_19:
        if ( (_QWORD *)a1[11] == v2 )
          goto LABEL_20;
      }
      else
      {
        v14 = (_QWORD *)v2[2];
        if ( (*(_BYTE *)v14 & 2) == 0 )
        {
          do
          {
            v2 = v14;
            v14 = (_QWORD *)v14[1];
          }
          while ( (*(_BYTE *)v14 & 2) == 0 );
          goto LABEL_19;
        }
        v16 = (_QWORD *)(*v2 & 0xFFFFFFFFFFFFFFFCLL);
        v17 = *v16;
        if ( (*v16 & 2) == 0 )
        {
          while ( (_QWORD *)v16[2] == v2 )
          {
            v2 = v16;
            v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
            v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v17 & 2) != 0 )
            {
              v2 = (_QWORD *)v18;
              if ( a1[11] != v18 )
                goto LABEL_10;
              goto LABEL_20;
            }
            v16 = (_QWORD *)v18;
          }
        }
        v2 = v16;
        if ( (_QWORD *)a1[11] == v16 )
          goto LABEL_20;
      }
    }
    v12 = *((int *)v2 + 19);
    v13 = v2[7];
LABEL_13:
    if ( (_DWORD)v12 != -1 )
LABEL_23:
      v13 += v12;
    if ( v4 < v13 )
      v4 = v13;
    goto LABEL_16;
  }
LABEL_20:
  if ( *(_QWORD *)(a1[1] + 144LL) < v4 )
    return -1;
  return v4;
}

