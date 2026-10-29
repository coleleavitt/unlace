__int64 __fastcall sub_104AC0(__int64 a1, unsigned int a2, char *a3, _DWORD *a4, char **a5)
{
  char *v5; // r11
  __int64 v8; // r8
  char v9; // al
  __int64 v10; // rbx
  char v11; // di
  char v12; // al
  char *v13; // r15
  __int64 v14; // r13
  char v15; // al
  unsigned int i; // r14d
  unsigned int v17; // ecx
  unsigned int j; // ebp
  __int64 v19; // rax
  int v20; // edx
  int v21; // edx
  __int64 v22; // rbp
  __int64 v23; // rax
  int v24; // eax
  _BOOL4 v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // r14d
  unsigned int v31; // r10d
  char v32; // r15
  __int64 v33; // rcx
  unsigned int v34; // ebp
  __int64 v35; // rsi
  int v36; // r9d
  int v37; // ebp
  __int64 v38; // rax
  __int64 v39; // rax
  int v41; // ecx
  unsigned int v42; // ecx
  char v43; // r9
  __int64 v44; // rax
  char v45; // si
  int v46; // ebp
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // esi
  char v51; // al
  __int64 v52; // r13
  unsigned int v53; // esi
  char *s2; // [rsp+0h] [rbp-78h]
  char *v55; // [rsp+10h] [rbp-68h]
  char *v56; // [rsp+10h] [rbp-68h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  __int64 v58; // [rsp+18h] [rbp-60h]
  unsigned int v59; // [rsp+24h] [rbp-54h]
  unsigned int v60; // [rsp+24h] [rbp-54h]

  v5 = byte_1BEF00;
  v8 = *(_QWORD *)(a1 + 8);
LABEL_2:
  v9 = *a3;
  v10 = v8 + 16LL * a2;
  if ( *a3 )
  {
    v11 = *(_BYTE *)(v10 + 1);
    if ( (v11 & 8) != 0 )
      return 0;
    if ( v9 == 46 )
    {
      if ( *(_BYTE *)v10 != 7 )
        return 0;
      v12 = a3[1];
      v13 = a3 + 1;
      if ( v12 == 34 )
      {
        s2 = a3 + 2;
        v51 = a3[2];
        if ( !v51 || v51 == 34 )
        {
          i = 0;
          LODWORD(v52) = 1;
        }
        else
        {
          for ( i = 1; ; ++i )
          {
            v52 = i + 1;
            v51 = v13[v52];
            if ( !v51 || v51 == 34 )
              break;
          }
        }
        if ( v51 )
        {
          v14 = (unsigned int)(v52 + 1);
          goto LABEL_14;
        }
      }
      else if ( v12 != 0 && v12 != 46 && v12 != 91 )
      {
        LODWORD(v14) = 0;
        do
        {
          v14 = (unsigned int)(v14 + 1);
          v15 = v13[v14];
        }
        while ( v15 != 46 && v15 != 0 && v15 != 91 );
        if ( (_DWORD)v14 )
        {
          s2 = v13;
          i = v14;
LABEL_14:
          v17 = *(_DWORD *)(v10 + 4);
          for ( j = 1; ; j = v21 + v22 )
          {
            if ( j > v17 )
            {
              while ( (*(_BYTE *)(v10 + 1) & 0x20) != 0 )
              {
                a2 += *(_DWORD *)(v10 + 8);
                j = 1;
                v10 = v8 + 16LL * a2;
                v17 = *(_DWORD *)(v10 + 4);
                if ( v17 )
                  goto LABEL_18;
              }
              if ( a4 )
              {
                v46 = sub_104250((unsigned int *)a1, 7, 2, 0);
                v47 = (unsigned int)sub_104250((unsigned int *)a1, 5, i, (__int64)s2);
                v48 = sub_1049F0(a1, &v13[v14], a4, (__int64)a5);
                v10 = v48;
                if ( !*(_BYTE *)(a1 + 32) )
                {
                  if ( v48 )
                  {
                    v49 = *(_QWORD *)(a1 + 8) + 16LL * a2;
                    *(_BYTE *)(v49 + 1) |= 0x20u;
                    *(_DWORD *)(v49 + 8) = v46 - a2;
                    *(_BYTE *)(16 * v47 + *(_QWORD *)(a1 + 8) + 1) |= 1u;
                    return v10;
                  }
                }
              }
              return 0;
            }
LABEL_18:
            v19 = v10 + 16LL * j;
            v20 = *(_DWORD *)(v19 + 4);
            if ( (*(_BYTE *)(v19 + 1) & 1) != 0 )
            {
              if ( i != v20 )
                goto LABEL_20;
              v60 = v17;
              v58 = v8;
              v56 = v5;
              v26 = strncmp(*(const char **)(v19 + 8), s2, i);
              v5 = v56;
              v8 = v58;
              v17 = v60;
              v25 = v26 == 0;
            }
            else
            {
              if ( v20 != i + 2 )
                goto LABEL_20;
              v59 = v17;
              v57 = v8;
              v55 = v5;
              v24 = strncmp((const char *)(*(_QWORD *)(v19 + 8) + 1LL), s2, i);
              v17 = v59;
              v8 = v57;
              v5 = v55;
              v25 = v24 == 0;
            }
            if ( v25 )
            {
              a3 = &v13[v14];
              a2 += j + 1;
              goto LABEL_2;
            }
LABEL_20:
            v21 = 1;
            v22 = j + 1;
            v23 = v10 + 16 * v22;
            if ( *(_BYTE *)v23 > 5u )
              v21 = *(_DWORD *)(v23 + 4) + 1;
          }
        }
      }
      v10 = 0;
      *a5 = v13;
      return v10;
    }
    if ( v9 == 91 )
    {
      v27 = (unsigned __int8)a3[1];
      if ( (v5[v27] & 4) != 0 )
      {
        v28 = (char)v27;
        v29 = 0;
        LODWORD(v27) = 1;
        do
        {
          v29 = v28 + 10 * v29 - 48;
          v27 = (unsigned int)(v27 + 1);
          v28 = a3[v27];
        }
        while ( (v5[(unsigned __int8)a3[v27]] & 4) != 0 );
        if ( (_BYTE)v28 == 93 && (unsigned int)v27 > 1 )
        {
          if ( *(_BYTE *)v10 != 6 )
            return 0;
          v31 = *(_DWORD *)(v10 + 4);
          goto LABEL_53;
        }
      }
      else
      {
        LODWORD(v27) = 1;
        v29 = 0;
      }
      if ( a3[1] == 35 )
      {
        v30 = a2;
        if ( *(_BYTE *)v10 != 6 )
          return 0;
        v31 = *(_DWORD *)(v10 + 4);
        v32 = *(_BYTE *)(v10 + 1);
        v33 = v8 + 16LL * a2;
        v34 = v31;
        while ( (unsigned int)v27 <= v34 )
        {
LABEL_40:
          v35 = v33 + 16LL * (unsigned int)v27;
          v36 = 1;
          v29 += (*(_BYTE *)(v35 + 1) & 4) == 0;
          if ( *(_BYTE *)v35 > 5u )
            v36 = *(_DWORD *)(v35 + 4) + 1;
          LODWORD(v27) = v36 + v27;
        }
        while ( (v32 & 0x20) != 0 )
        {
          v30 += *(_DWORD *)(v33 + 8);
          LODWORD(v27) = 1;
          v33 = v8 + 16LL * (int)v30;
          v34 = *(_DWORD *)(v33 + 4);
          v32 = *(_BYTE *)(v33 + 1);
          if ( v34 )
            goto LABEL_40;
        }
        if ( a3[2] == 45 )
        {
          if ( (v5[(unsigned __int8)a3[3]] & 4) == 0 )
            goto LABEL_64;
          v41 = a3[3];
          v53 = 0;
          LODWORD(v27) = 3;
          do
          {
            v53 = v41 + 10 * v53 - 48;
            v27 = (unsigned int)(v27 + 1);
            v41 = a3[v27];
          }
          while ( (v5[(unsigned __int8)a3[v27]] & 4) != 0 );
          if ( v29 < v53 )
            return 0;
          v29 -= v53;
        }
        else
        {
          LOBYTE(v41) = a3[2];
          LODWORD(v27) = 2;
        }
        if ( (_BYTE)v41 == 93 )
        {
LABEL_53:
          v42 = 1;
          a3 += (unsigned int)(v27 + 1);
          while ( 1 )
          {
            while ( 1 )
            {
              v43 = v11 & 0x20;
              if ( v42 <= v31 )
                break;
              if ( !v43 )
              {
                if ( v29 )
                  return 0;
                if ( !a4 )
                  return 0;
                v37 = sub_104250((unsigned int *)a1, 6, 1, 0);
                v38 = sub_1049F0(a1, a3, a4, (__int64)a5);
                v10 = v38;
                if ( *(_BYTE *)(a1 + 32) || !v38 )
                  return 0;
                v39 = *(_QWORD *)(a1 + 8) + 16LL * a2;
                *(_BYTE *)(v39 + 1) |= 0x20u;
                *(_DWORD *)(v39 + 8) = v37 - a2;
                return v10;
              }
LABEL_68:
              a2 += *(_DWORD *)(v10 + 8);
              v42 = 1;
              v10 = v8 + 16LL * a2;
              v31 = *(_DWORD *)(v10 + 4);
              v11 = *(_BYTE *)(v10 + 1);
            }
            v44 = v10 + 16LL * v42;
            v45 = *(_BYTE *)(v44 + 1) & 4;
            if ( v29 )
            {
              v29 -= v45 == 0;
            }
            else if ( !v45 )
            {
              if ( !v43 )
              {
                a2 += v42;
                goto LABEL_2;
              }
              goto LABEL_68;
            }
            v50 = 1;
            if ( *(_BYTE *)v44 > 5u )
              v50 = *(_DWORD *)(v44 + 4) + 1;
            v42 += v50;
          }
        }
      }
    }
LABEL_64:
    *a5 = a3;
    return 0;
  }
  return v10;
}
