__int64 __fastcall sub_F5720(__int64 a1, __int64 *a2, const char *a3, const char *a4, int a5)
{
  size_t v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // r15d
  const char *v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rbp
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int8 *v21; // rcx
  int v22; // eax
  size_t v23; // r10
  const void *v24; // r13
  int v25; // r11d
  int v26; // ecx
  char *v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+10h] [rbp-88h]
  int v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+20h] [rbp-78h]
  int v39; // [rsp+2Ch] [rbp-6Ch]
  int v40; // [rsp+30h] [rbp-68h]
  size_t v41; // [rsp+38h] [rbp-60h]
  char *s; // [rsp+48h] [rbp-50h]
  char *dest; // [rsp+50h] [rbp-48h]
  int v44; // [rsp+58h] [rbp-40h]
  int v45; // [rsp+5Ch] [rbp-3Ch]

  v33 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  if ( !a4 )
  {
    if ( a3 )
    {
      LODWORD(v8) = strlen(a3) & 0x3FFFFFFF;
      v29 = (int)v8;
      v28 = 6LL * (int)v8 + 3;
    }
    else
    {
      v28 = 3;
      LODWORD(v8) = 0;
      v29 = 0;
    }
    v35 = v29;
    v30 = sub_DC1C0(v33, v28);
    v13 = v30;
    if ( !v30 )
    {
      v10 = 7;
      sub_C91C0(0, v28);
      return v10;
    }
    v31 = v35;
    v44 = 0;
    LODWORD(v37) = 0;
    v34 = 0;
    dest = (char *)v30 + 2 * v31 + 1;
    s = (char *)v30 + 4 * v31 + 2;
    goto LABEL_9;
  }
  v44 = strlen(a4) & 0x3FFFFFFF;
  if ( a3 )
  {
    v8 = strlen(a3) & 0x3FFFFFFF;
    v9 = (int)v8;
  }
  else
  {
    LODWORD(v8) = 0;
    v9 = 0;
  }
  v10 = 7;
  v11 = (const char *)sub_E8280(v33, "\"%w\" ", a4);
  v34 = (__int64)v11;
  if ( v11 )
  {
    v37 = (int)((strlen(v11) & 0x3FFFFFFF) - 1);
    v12 = v9 + v37 * *((int *)a2 + 2) + 1;
    v13 = sub_DC1C0(v33, v12);
    if ( !v13 )
    {
LABEL_6:
      sub_C91C0(v34, v12);
      return v10;
    }
    s = nullptr;
    dest = nullptr;
LABEL_9:
    memcpy(v13, a3, (int)v8);
    v16 = *a2;
    if ( *a2 )
    {
      v36 = (int)a3;
      v45 = 2 * v8;
      do
      {
        v17 = *(_QWORD *)(v16 + 24);
        if ( v17 )
        {
          v18 = v16;
          v19 = *(_QWORD *)(v16 + 24);
          do
          {
            if ( *(_QWORD *)(v19 + 8) > *(_QWORD *)(v18 + 8) )
              v18 = v19;
            v19 = *(_QWORD *)(v19 + 24);
          }
          while ( v19 );
          v20 = *(_QWORD *)(v18 + 24);
          if ( v18 == v16 )
          {
            v32 = a2;
          }
          else
          {
            while ( v18 != v17 )
            {
              v16 = v17;
              v17 = *(_QWORD *)(v17 + 24);
            }
            v32 = (_QWORD *)(v16 + 24);
          }
        }
        else
        {
          v18 = v16;
          v20 = 0;
          v32 = a2;
        }
        *v32 = v20;
        if ( a4 )
        {
          v21 = *(unsigned __int8 **)(v18 + 8);
          v22 = *(_DWORD *)(v18 + 16);
          if ( a5 || (byte_1BEF00[*v21] & 0x46) == 0 )
          {
            v25 = v37;
            if ( v21[v22] == 34 )
            {
              v24 = (const void *)v34;
              v23 = (unsigned int)(v37 + 1);
              v25 = v37 + 1;
            }
            else
            {
              v23 = (unsigned int)v37;
              v24 = (const void *)v34;
            }
          }
          else
          {
            v23 = v44;
            v24 = a4;
            v25 = v44;
          }
        }
        else
        {
          memcpy(dest, *(const void **)(v18 + 8), *(unsigned int *)(v18 + 16));
          dest[*(unsigned int *)(v18 + 16)] = 0;
          sub_C23E0(dest);
          v27 = " ";
          if ( *(_BYTE *)(*(_QWORD *)(v18 + 8) + *(unsigned int *)(v18 + 16)) != 39 )
            v27 = "";
          sub_E89C0(v45, (__int64)s, "%Q%s", dest, v27);
          if ( s )
          {
            v25 = strlen(s) & 0x3FFFFFFF;
            v23 = v25;
          }
          else
          {
            v23 = 0;
            v25 = 0;
          }
          v21 = *(unsigned __int8 **)(v18 + 8);
          v22 = *(_DWORD *)(v18 + 16);
          v24 = s;
        }
        v26 = (_DWORD)v21 - v36;
        if ( v25 != v22 )
        {
          v41 = v23;
          v40 = v26;
          v39 = v25;
          memmove(
            (char *)v13 + (unsigned int)(v25 + v26),
            (char *)v13 + (unsigned int)(v26 + v22),
            (unsigned int)(v8 - (v26 + v22)));
          v26 = v40;
          v23 = v41;
          LODWORD(v8) = v39 + v8 - *(_DWORD *)(v18 + 16);
          *((_BYTE *)v13 + (int)v8) = 0;
        }
        memcpy((char *)v13 + v26, v24, v23);
        sub_C9250(v33, (_QWORD *)v18);
        v16 = *a2;
      }
      while ( *a2 );
    }
    v10 = 0;
    sub_F48B0(a1, v13, -1, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v15);
    v12 = (__int64)v13;
    sub_C9250(v33, v13);
    goto LABEL_6;
  }
  return v10;
}
