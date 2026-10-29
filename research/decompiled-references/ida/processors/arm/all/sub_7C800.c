__int64 __fastcall sub_7C800(__int64 *a1, __int64 a2, __int64 a3, char *a4, int a5, char a6)
{
  _QWORD *v7; // rbp
  __int64 v9; // r13
  __int64 v10; // r14
  char *v11; // rbx
  int v12; // r13d
  __int16 v13; // ax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v19; // rax
  char *v20; // rax
  const char *v21; // rbx
  _BYTE *v22; // rbx
  char v23; // al
  __int16 v24; // dx
  __int16 v25; // ax
  unsigned __int16 v26; // ax
  __int16 v27; // dx
  char v28; // dl
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 *v32; // [rsp+18h] [rbp-B0h]
  unsigned int v34; // [rsp+24h] [rbp-A4h]
  _QWORD v35[2]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v36; // [rsp+40h] [rbp-88h]
  char v37; // [rsp+42h] [rbp-86h]
  char *s2; // [rsp+50h] [rbp-78h] BYREF
  __int64 v39; // [rsp+58h] [rbp-70h]
  unsigned __int16 v40; // [rsp+60h] [rbp-68h]
  char v41; // [rsp+62h] [rbp-66h]
  __int64 idati; // [rsp+70h] [rbp-58h]
  const char *v43; // [rsp+78h] [rbp-50h]
  __int16 v44; // [rsp+80h] [rbp-48h]
  char v45; // [rsp+82h] [rbp-46h]
  unsigned __int64 v46; // [rsp+88h] [rbp-40h]

  v7 = (_QWORD *)a2;
  v46 = __readfsqword(0x28u);
  v36 = 0;
  v35[0] = 0;
  v35[1] = 0;
  v37 = 48;
  if ( !a2 )
  {
    if ( a1 )
    {
      v9 = a1[1];
      v10 = 0;
      if ( !v9 )
        goto LABEL_5;
      do
      {
LABEL_4:
        ++v10;
        clear_tinfo_t();
      }
      while ( v9 != v10 );
LABEL_5:
      a1[1] = 0;
      if ( !a3 || (v34 = *(_DWORD *)a3) == 0 )
      {
        if ( a5 > 0 )
        {
LABEL_8:
          v11 = a4;
          v12 = 0;
          v34 = 0;
          while ( 1 )
          {
            s2 = 0;
            v40 = 0;
            v39 = 0;
            v41 = 48;
            sub_7C0F0((__int64)&s2, v11);
            if ( v7 )
            {
              v13 = *((_WORD *)v7 + 8);
              if ( v13 && v13 != v40
                || *v7 && strcmp((const char *)*v7, s2)
                || (unsigned __int8)v7[1] && !(unsigned __int8)compare_tinfo() )
              {
                goto LABEL_18;
              }
              v14 = *((_BYTE *)v7 + 18);
              if ( v14 != 48 && v14 != v41 )
              {
                if ( v14 == 7 )
                {
                  if ( (unsigned __int8)((v41 & 0xF) - 2) > 5u )
                    goto LABEL_18;
                }
                else if ( v14 != 57 || v40 == 0xFFFF || (v41 & 0xF) != 9 )
                {
                  goto LABEL_18;
                }
              }
            }
            if ( a6 && !(unsigned __int8)sub_7C600((const char **)v11, (__int64)&s2) )
            {
              clear_tinfo_t();
              v34 = -1;
              goto LABEL_34;
            }
            copy_tinfo_t();
            if ( a1 )
            {
              v43 = 0;
              idati = (__int64)s2;
              copy_tinfo_t();
              v15 = a1[1];
              v16 = *a1;
              v44 = v40;
              v45 = v41;
              if ( a1[2] < (unsigned __int64)(v15 + 1) )
              {
                v19 = qvector_reserve((__int64)a1, v16, v15 + 1, 24);
                *a1 = v19;
                v15 = a1[1];
                v16 = v19;
              }
              v17 = (__int64 *)(v16 + 24 * v15);
              *v17 = idati;
              v17[1] = 0;
              v32 = v17;
              copy_tinfo_t();
              *((_WORD *)v32 + 8) = v44;
              *((_BYTE *)v32 + 18) = v45;
              ++a1[1];
              clear_tinfo_t();
            }
            ++v34;
LABEL_18:
            ++v12;
            v11 += 40;
            clear_tinfo_t();
            if ( a5 <= v12 )
              goto LABEL_43;
          }
        }
        v34 = 0;
LABEL_43:
        if ( !v7 )
          goto LABEL_34;
        goto LABEL_44;
      }
      goto LABEL_31;
    }
    if ( !a3 || (v34 = *(_DWORD *)a3) == 0 )
    {
      if ( a5 > 0 )
        goto LABEL_8;
LABEL_33:
      v34 = 0;
      goto LABEL_34;
    }
    goto LABEL_31;
  }
  v35[0] = *(_QWORD *)a2;
  copy_tinfo_t();
  v36 = *(_WORD *)(a2 + 16);
  v37 = *(_BYTE *)(a2 + 18);
  if ( a1 )
  {
    v9 = a1[1];
    v10 = 0;
    if ( !v9 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( !a3 )
  {
    if ( a5 > 0 )
      goto LABEL_8;
    v34 = 0;
    goto LABEL_44;
  }
  v34 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 )
  {
LABEL_31:
    if ( v34 == 3 && (unsigned int)*(unsigned __int16 *)(a3 + 8) - 163 <= 0x1F && (unsigned __int16)v36 <= 0x10u )
    {
      if ( !v36 )
        v36 = 16;
      if ( a5 > 0 )
      {
        v7 = v35;
        goto LABEL_8;
      }
      v20 = (char *)v35[0];
      v34 = 0;
      v7 = v35;
      if ( v35[0] )
      {
LABEL_46:
        s2 = v20;
        v39 = 0;
        copy_tinfo_t();
        v21 = (const char *)*v7;
        v40 = *((_WORD *)v7 + 8);
        v41 = *((_BYTE *)v7 + 18);
        if ( !strncmp(v21, "simd_", 5u) )
        {
          if ( v21[5] == 105 && v21[6] == 110 && v21[7] == 116 )
          {
            v22 = v21 + 8;
            v23 = 20;
          }
          else if ( !strncmp(v21 + 5, "uint", 4u) )
          {
            v22 = v21 + 9;
            v23 = 36;
          }
          else if ( !strncmp(v21 + 5, "float", 5u) )
          {
            v22 = v21 + 10;
            v23 = 9;
          }
          else
          {
            if ( strncmp(v21 + 5, "double", 6u) )
              goto LABEL_74;
            v22 = v21 + 11;
            v23 = 25;
          }
          v41 = v23;
          if ( (unsigned __int8)(*v22 - 48) > 9u || v22[1] )
            goto LABEL_74;
          v24 = round_up_power2();
          v25 = 4;
          if ( v41 == 25 )
            v25 = 8;
          v26 = v24 * v25;
          v27 = *((_WORD *)v7 + 8);
          v40 = v26;
          if ( v27 )
          {
            if ( v26 != v27 )
              goto LABEL_74;
          }
          if ( *v7 && strcmp((const char *)*v7, s2) || (unsigned __int8)v7[1] && !(unsigned __int8)compare_tinfo() )
            goto LABEL_74;
          v28 = *((_BYTE *)v7 + 18);
          if ( v28 == 48 || v28 == v41 )
            goto LABEL_66;
          if ( v28 == 7 )
          {
            if ( (unsigned __int8)((v41 & 0xF) - 2) <= 5u )
              goto LABEL_66;
          }
          else if ( v28 == 57 && v40 != 0xFFFF && (v41 & 0xF) == 9 )
          {
LABEL_66:
            if ( *v7 )
            {
              v43 = (const char *)*v7;
              v44 = 256;
              idati = get_idati();
              if ( (unsigned __int8)create_tinfo() )
              {
                if ( v40 == get_tinfo_size() )
                {
                  if ( a1 )
                  {
                    v43 = 0;
                    idati = (__int64)s2;
                    copy_tinfo_t();
                    v44 = v40;
                    v45 = v41;
                    v29 = a1[1];
                    if ( a1[2] < (unsigned __int64)(v29 + 1) )
                    {
                      *a1 = qvector_reserve((__int64)a1, *a1, v29 + 1, 24);
                      v29 = a1[1];
                    }
                    v30 = *a1 + 24 * v29;
                    *(_QWORD *)v30 = idati;
                    *(_QWORD *)(v30 + 8) = 0;
                    copy_tinfo_t();
                    *(_WORD *)(v30 + 16) = v44;
                    *(_BYTE *)(v30 + 18) = v45;
                    ++a1[1];
                    clear_tinfo_t();
                  }
                  ++v34;
                }
              }
            }
          }
        }
LABEL_74:
        clear_tinfo_t();
        goto LABEL_34;
      }
    }
    goto LABEL_33;
  }
  if ( a5 > 0 )
    goto LABEL_8;
LABEL_44:
  v20 = (char *)*v7;
  if ( *v7 && *((_WORD *)v7 + 8) )
    goto LABEL_46;
LABEL_34:
  clear_tinfo_t();
  return v34;
}
