void __fastcall sub_15D980(__int64 a1, __int64 a2, int a3, int a4, int a5, double a6)
{
  __int64 v8; // r9
  int v9; // eax
  char **v10; // r15
  int v11; // r12d
  __int64 v12; // rcx
  char *i; // rax
  char v14; // dl
  bool v15; // bl
  int v16; // ecx
  __int64 k; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rdi
  int v20; // r10d
  _BYTE *v21; // r11
  unsigned __int8 **v22; // rbp
  unsigned __int8 *v23; // rdi
  _BYTE *j; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int16 v27; // ax
  _BYTE *v28; // rdx
  __int16 v29; // ax
  __int64 v30; // [rsp+0h] [rbp-68h]
  int v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+10h] [rbp-58h]
  int v34; // [rsp+18h] [rbp-50h]
  __int64 v35; // [rsp+18h] [rbp-50h]
  __int64 v36; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+28h] [rbp-40h]
  int v38; // [rsp+28h] [rbp-40h]
  int v39; // [rsp+2Ch] [rbp-3Ch]

  v8 = *(_QWORD *)(a1 + 336);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 48);
    if ( (v9 & 4) != 0 )
    {
      sub_DBD10(a1, "table \"%s\" has more than one primary key", *(const char **)v8);
      if ( a2 )
        goto LABEL_34;
      return;
    }
    *(_DWORD *)(v8 + 48) = v9 | 4;
    if ( a2 )
    {
      v32 = *(_DWORD *)a2;
      if ( *(int *)a2 > 0 )
      {
        v10 = (char **)(a2 + 8);
        v37 = a4;
        LOWORD(v11) = -1;
        v30 = 0;
        v12 = a2 + 24LL * (unsigned int)(*(_DWORD *)a2 - 1) + 32;
        while ( 1 )
        {
          for ( i = *v10; i; i = *((char **)i + 2) )
          {
            if ( (i[5] & 0x10) == 0 )
              break;
          }
          v14 = *i;
          if ( *i == 117 )
          {
            *i = 59;
          }
          else
          {
            if ( v14 == 113 )
            {
              v28 = *((_BYTE **)i + 2);
              if ( *v28 != 117 )
                goto LABEL_13;
              *v28 = 59;
              v14 = *i;
            }
            if ( v14 != 59 )
              goto LABEL_13;
          }
          v20 = *(__int16 *)(v8 + 54);
          v21 = *((_BYTE **)i + 1);
          if ( v20 <= 0 )
          {
            LOWORD(v11) = 0;
            goto LABEL_13;
          }
          v22 = *(unsigned __int8 ***)(v8 + 8);
          v11 = 0;
          while ( 2 )
          {
            v23 = *v22;
            for ( j = v21; ; ++j )
            {
              v25 = (unsigned __int8)*j;
              v26 = *v23;
              if ( (_DWORD)v25 != (_DWORD)v26 )
                break;
              if ( !*j )
              {
                v27 = *((_WORD *)v22 + 7);
                *((_WORD *)v22 + 7) = v27 | 1;
                if ( (v27 & 0x60) != 0 )
                {
                  v39 = a5;
                  v36 = v8;
                  v35 = v12;
                  sub_DBD10(a1, "generated columns cannot be part of the PRIMARY KEY");
                  v30 = (__int64)v22;
                  v12 = v35;
                  v8 = v36;
                  a5 = v39;
                }
                else
                {
                  v30 = (__int64)v22;
                }
                goto LABEL_13;
              }
LABEL_45:
              ++v23;
            }
            if ( byte_1BF000[v25] == byte_1BF000[v26] )
              goto LABEL_45;
            ++v11;
            v22 += 2;
            if ( v11 != v20 )
              continue;
            break;
          }
LABEL_13:
          v10 += 3;
          if ( (char **)v12 == v10 )
          {
            a4 = v37;
            v15 = v32 == 1;
            goto LABEL_15;
          }
        }
      }
    }
    else
    {
      v11 = *(__int16 *)(v8 + 54) - 1;
      v30 = *(_QWORD *)(v8 + 8) + 16LL * v11;
      v29 = *(_WORD *)(v30 + 14);
      *(_WORD *)(v30 + 14) = v29 | 1;
      v15 = 1;
      if ( (v29 & 0x60) != 0 )
      {
        v34 = a5;
        v38 = a4;
        v33 = v8;
        sub_DBD10(a1, "generated columns cannot be part of the PRIMARY KEY");
        v8 = v33;
        a4 = v38;
        a5 = v34;
      }
LABEL_15:
      if ( v30 && v15 && (*(_BYTE *)(v30 + 8) & 0xF0) == 0x40 && a5 != 1 )
      {
        v16 = 8 * a4;
        if ( *(_BYTE *)(a1 + 292) <= 1u )
        {
          *(_DWORD *)(v8 + 48) |= v16;
          *(_WORD *)(v8 + 52) = v11;
          *(_BYTE *)(v8 + 62) = a3;
          if ( !a2 )
            return;
        }
        else
        {
          if ( !a2 )
          {
            *(_WORD *)(v8 + 52) = v11;
            *(_DWORD *)(v8 + 48) |= v16;
            *(_BYTE *)(v8 + 62) = a3;
            return;
          }
          for ( k = *(_QWORD *)(a2 + 8); k; k = *(_QWORD *)(k + 16) )
          {
            if ( (*(_BYTE *)(k + 5) & 0x10) == 0 )
              break;
          }
          v18 = *(_QWORD **)(a1 + 400);
          if ( v18 )
          {
            while ( k != *v18 )
            {
              v18 = (_QWORD *)v18[3];
              if ( !v18 )
                goto LABEL_30;
            }
            *v18 = v8 + 52;
          }
LABEL_30:
          *(_WORD *)(v8 + 52) = v11;
          *(_DWORD *)(v8 + 48) |= v16;
          *(_BYTE *)(v8 + 62) = a3;
        }
        *(_BYTE *)(a1 + 290) = *(_BYTE *)(a2 + 24);
        sub_E4D20(a1, a2);
        v19 = *(_QWORD *)a1;
        goto LABEL_35;
      }
    }
    if ( !a4 )
    {
      sub_15C470(a1, 0, 0, nullptr, (__int64 *)a2, a3, a6, 0, 0, a5, 0, 2);
      return;
    }
    sub_DBD10(a1, "AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
  }
  if ( a2 )
  {
LABEL_34:
    v19 = *(_QWORD *)a1;
LABEL_35:
    sub_D7810(v19, (_QWORD *)a2);
  }
}
