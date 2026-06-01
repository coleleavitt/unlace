__int64 __fastcall sub_5C410(__int64 *a1, __int64 a2, __int64 a3, const char **a4, int a5, char a6)
{
  _QWORD *v7; // r12
  __int64 v9; // r15
  __int64 v10; // rbx
  int v11; // r15d
  char *v12; // r13
  int v13; // eax
  int v14; // ebx
  const char *v15; // r13
  __int16 v16; // dx
  char v17; // al
  char v18; // al
  int v19; // eax
  int v20; // edx
  char v22; // al
  __int16 v23; // ax
  char v24; // al
  char *v25; // rax
  const char *v26; // rbx
  _BYTE *v27; // rbx
  char v28; // al
  __int16 v29; // dx
  __int16 v30; // ax
  unsigned __int16 v31; // ax
  __int16 v32; // dx
  char v33; // dl
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v43; // [rsp+24h] [rbp-A4h]
  _QWORD v44[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int16 v45; // [rsp+40h] [rbp-88h]
  char v46; // [rsp+42h] [rbp-86h]
  char *s2; // [rsp+50h] [rbp-78h] BYREF
  __int64 v48; // [rsp+58h] [rbp-70h]
  unsigned __int16 v49; // [rsp+60h] [rbp-68h]
  char v50; // [rsp+62h] [rbp-66h]
  __int64 idati; // [rsp+70h] [rbp-58h]
  const char *v52; // [rsp+78h] [rbp-50h]
  __int16 v53; // [rsp+80h] [rbp-48h]
  char v54; // [rsp+82h] [rbp-46h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v7 = (_QWORD *)a2;
  v55 = __readfsqword(0x28u);
  v46 = 48;
  v44[0] = 0;
  v44[1] = 0;
  v45 = 0;
  if ( !a2 )
  {
    if ( !a1 )
    {
      if ( !a3 || (v43 = *(_DWORD *)a3) == 0 )
      {
        if ( a5 > 0 )
          goto LABEL_8;
        goto LABEL_25;
      }
LABEL_20:
      if ( v43 == 3 )
      {
        v19 = *(unsigned __int16 *)(a3 + 8);
        if ( (unsigned int)(v19 - 56) <= 7 )
        {
          v20 = 8;
        }
        else if ( (unsigned int)(v19 - 64) <= 0xF )
        {
          v20 = 16;
        }
        else if ( (unsigned int)(v19 - 81) <= 0xF )
        {
          v20 = 32;
        }
        else
        {
          v20 = 64;
          if ( (unsigned int)(v19 - 133) > 0x1F )
            goto LABEL_25;
        }
        if ( v45 <= v20 )
        {
          if ( !v45 )
            v45 = v20;
          if ( a5 > 0 )
          {
            v7 = v44;
            goto LABEL_8;
          }
          v25 = (char *)v44[0];
          v43 = 0;
          v7 = v44;
          if ( v44[0] )
          {
LABEL_44:
            s2 = v25;
            v48 = 0;
            copy_tinfo_t();
            v26 = (const char *)*v7;
            v49 = *((_WORD *)v7 + 8);
            v50 = *((_BYTE *)v7 + 18);
            if ( !strncmp(v26, "simd_", 5u) )
            {
              if ( v26[5] == 105 && v26[6] == 110 && v26[7] == 116 )
              {
                v27 = v26 + 8;
                v28 = 20;
              }
              else if ( !strncmp(v26 + 5, "uint", 4u) )
              {
                v27 = v26 + 9;
                v28 = 36;
              }
              else if ( !strncmp(v26 + 5, "float", 5u) )
              {
                v27 = v26 + 10;
                v28 = 9;
              }
              else
              {
                if ( strncmp(v26 + 5, "double", 6u) )
                  goto LABEL_72;
                v27 = v26 + 11;
                v28 = 25;
              }
              v50 = v28;
              if ( (unsigned __int8)(*v27 - 48) > 9u || v27[1] )
                goto LABEL_72;
              v29 = round_up_power2();
              v30 = 4;
              if ( v50 == 25 )
                v30 = 8;
              v31 = v29 * v30;
              v32 = *((_WORD *)v7 + 8);
              v49 = v31;
              if ( v32 )
              {
                if ( v31 != v32 )
                  goto LABEL_72;
              }
              if ( *v7 && strcmp((const char *)*v7, s2) || (unsigned __int8)v7[1] && !(unsigned __int8)compare_tinfo() )
                goto LABEL_72;
              v33 = *((_BYTE *)v7 + 18);
              if ( v33 == 48 || v33 == v50 )
                goto LABEL_64;
              if ( v33 == 7 )
              {
                if ( (unsigned __int8)((v50 & 0xF) - 2) <= 5u )
                  goto LABEL_64;
              }
              else if ( v33 == 57 && v49 != 0xFFFF && (v50 & 0xF) == 9 )
              {
LABEL_64:
                if ( *v7 )
                {
                  v52 = (const char *)*v7;
                  v53 = 256;
                  idati = get_idati();
                  if ( (unsigned __int8)create_tinfo() )
                  {
                    if ( v49 == get_tinfo_size() )
                    {
                      if ( a1 )
                      {
                        v52 = 0;
                        idati = (__int64)s2;
                        copy_tinfo_t();
                        v53 = v49;
                        v54 = v50;
                        v34 = a1[1];
                        if ( a1[2] < (unsigned __int64)(v34 + 1) )
                        {
                          *a1 = qvector_reserve();
                          v34 = a1[1];
                        }
                        v35 = *a1 + 24 * v34;
                        *(_QWORD *)v35 = idati;
                        *(_QWORD *)(v35 + 8) = 0;
                        copy_tinfo_t();
                        *(_WORD *)(v35 + 16) = v53;
                        *(_BYTE *)(v35 + 18) = v54;
                        ++a1[1];
                        clear_tinfo_t();
                      }
                      ++v43;
                    }
                  }
                }
              }
            }
LABEL_72:
            clear_tinfo_t();
            goto LABEL_26;
          }
        }
      }
LABEL_25:
      v43 = 0;
      goto LABEL_26;
    }
    v9 = a1[1];
    v10 = 0;
    if ( !v9 )
    {
LABEL_5:
      a1[1] = 0;
      if ( !a3 || (v43 = *(_DWORD *)a3) == 0 )
      {
        if ( a5 > 0 )
        {
LABEL_8:
          v43 = 0;
          v11 = 0;
          while ( 1 )
          {
            v12 = (char *)*a4;
            s2 = 0;
            v48 = 0;
            v49 = 0;
            v50 = 48;
            v13 = strlen(v12);
            s2 = v12;
            v14 = v13;
            copy_tinfo_t();
            v15 = *a4;
            if ( !strcmp(*a4, "__m64") )
              break;
            if ( !strncmp(v15, "__m128", 6u) )
            {
              v16 = 16;
              v49 = 16;
              v22 = v15[v14 - 1];
              if ( v22 == 105 )
                goto LABEL_85;
LABEL_28:
              if ( v22 != 100 )
              {
                v18 = 29;
                goto LABEL_30;
              }
              goto LABEL_90;
            }
            if ( !strncmp(v15, "__m256", 6u) )
            {
              v16 = 32;
              v49 = 32;
              v17 = v15[v14 - 1];
              if ( v17 == 105 )
              {
                v18 = 7;
                goto LABEL_30;
              }
LABEL_14:
              if ( v17 != 100 )
              {
                v18 = 9;
                goto LABEL_30;
              }
LABEL_90:
              v18 = 25;
              goto LABEL_30;
            }
            if ( !strncmp(v15, "__m512", 6u) )
            {
              v16 = 64;
              v49 = 64;
              v17 = v15[v14 - 1];
              if ( v17 != 105 )
                goto LABEL_14;
LABEL_85:
              v18 = 7;
LABEL_30:
              v50 = v18;
              if ( !v7 )
                goto LABEL_74;
              v23 = *((_WORD *)v7 + 8);
              if ( v23 && v23 != v16 )
                goto LABEL_40;
              goto LABEL_33;
            }
            v50 = 48;
            v49 = 0;
            if ( !v7 )
              goto LABEL_74;
            if ( *((_WORD *)v7 + 8) )
              goto LABEL_40;
LABEL_33:
            if ( *v7 && strcmp((const char *)*v7, s2) || (unsigned __int8)v7[1] && !(unsigned __int8)compare_tinfo() )
              goto LABEL_40;
            v24 = *((_BYTE *)v7 + 18);
            if ( v24 != 48 && v24 != v50 )
            {
              if ( v24 == 7 )
              {
                if ( (unsigned __int8)((v50 & 0xF) - 2) > 5u )
                  goto LABEL_40;
              }
              else if ( v24 != 57 || v49 == 0xFFFF || (v50 & 0xF) != 9 )
              {
                goto LABEL_40;
              }
            }
LABEL_74:
            if ( a6 && !(unsigned __int8)sub_5C210(a4, (__int64)&s2) )
            {
              clear_tinfo_t();
              v43 = -1;
              goto LABEL_26;
            }
            copy_tinfo_t();
            if ( a1 )
            {
              v52 = 0;
              idati = (__int64)s2;
              copy_tinfo_t();
              v36 = a1[1];
              v37 = *a1;
              v53 = v49;
              v54 = v50;
              if ( a1[2] < (unsigned __int64)(v36 + 1) )
              {
                v40 = qvector_reserve();
                *a1 = v40;
                v36 = a1[1];
                v37 = v40;
              }
              v38 = v37 + 24 * v36;
              v39 = idati;
              *(_QWORD *)(v38 + 8) = 0;
              *(_QWORD *)v38 = v39;
              copy_tinfo_t();
              *(_WORD *)(v38 + 16) = v53;
              *(_BYTE *)(v38 + 18) = v54;
              ++a1[1];
              clear_tinfo_t();
            }
            ++v43;
LABEL_40:
            ++v11;
            a4 += 4;
            clear_tinfo_t();
            if ( a5 <= v11 )
              goto LABEL_41;
          }
          v16 = 8;
          v49 = 8;
          v22 = v15[v14 - 1];
          if ( v22 == 105 )
            goto LABEL_85;
          goto LABEL_28;
        }
        v43 = 0;
LABEL_41:
        if ( !v7 )
          goto LABEL_26;
        goto LABEL_42;
      }
      goto LABEL_20;
    }
    do
    {
LABEL_4:
      ++v10;
      clear_tinfo_t();
    }
    while ( v9 != v10 );
    goto LABEL_5;
  }
  v44[0] = *(_QWORD *)a2;
  copy_tinfo_t();
  v45 = *(_WORD *)(a2 + 16);
  v46 = *(_BYTE *)(a2 + 18);
  if ( a1 )
  {
    v9 = a1[1];
    v10 = 0;
    if ( !v9 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( a3 )
  {
    v43 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 )
      goto LABEL_20;
    if ( a5 > 0 )
      goto LABEL_8;
  }
  else
  {
    if ( a5 > 0 )
      goto LABEL_8;
    v43 = 0;
  }
LABEL_42:
  v25 = (char *)*v7;
  if ( *v7 && *((_WORD *)v7 + 8) )
    goto LABEL_44;
LABEL_26:
  clear_tinfo_t();
  return v43;
}
