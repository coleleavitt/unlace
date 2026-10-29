unsigned __int64 __fastcall sub_14D80(__int64 a1, char a2)
{
  const char *v4; // rsi
  __int128 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r9d
  int v9; // ebx
  int v10; // r14d
  const char *v11; // rdx
  char *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbp
  char *v15; // rdi
  char *v17; // rdx
  unsigned int v18; // [rsp+0h] [rbp-144h]
  unsigned int v19; // [rsp+0h] [rbp-144h]
  unsigned int v20; // [rsp+Ch] [rbp-138h] BYREF
  unsigned __int8 v21; // [rsp+10h] [rbp-134h] BYREF
  char v22; // [rsp+11h] [rbp-133h]
  __int16 v23; // [rsp+18h] [rbp-12Ch]
  __int64 v24; // [rsp+1Ch] [rbp-128h] BYREF
  __int128 v25; // [rsp+24h] [rbp-120h]
  __int64 v26; // [rsp+3Ch] [rbp-108h] BYREF
  __int128 v27; // [rsp+44h] [rbp-100h]
  __int64 v28; // [rsp+5Ch] [rbp-E8h] BYREF
  __int128 v29; // [rsp+64h] [rbp-E0h]
  char v30[136]; // [rsp+7Ch] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+104h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v4 = "before";
  v25 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  if ( a2 )
    v4 = "after";
  sub_E500((__int64)"Checking references, %s creating instructions...\n", v4);
  v9 = 1;
  v10 = 0x3FFFFF;
  if ( *(_WORD *)(a1 + 33017) )
  {
    do
    {
      while ( 1 )
      {
        v4 = (const char *)(unsigned __int16)v9;
        netnode_supval(*(_QWORD *)(a1 + 33336), (unsigned __int16)v9, &v21, 12, 83);
        *((_QWORD *)&v5 + 1) = v21;
        v6 = (unsigned int)v21 - 5;
        LOBYTE(v5) = v22 & 1;
        if ( (unsigned __int8)(v21 - 5) <= 1u )
          break;
        if ( !(_BYTE)v5 )
        {
          switch ( BYTE8(v5) )
          {
            case 7:
              if ( !a2 )
                break;
              v5 = v27;
              v8 = (unsigned __int16)v9;
              v7 = (__int64)&v20;
              v20 = (unsigned __int16)v9;
              v4 = (const char *)v26;
              if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v27 + 1) )
              {
                v26 = qvector_reserve(&v26, v26, v27 + 1, 4);
                v4 = (const char *)v26;
                v8 = (unsigned __int16)v9;
                *(_QWORD *)&v5 = v27;
              }
              *(_DWORD *)&v4[4 * v5] = v8;
              *(_QWORD *)&v27 = v27 + 1;
              if ( (v22 & 0x10) != 0 )
                break;
LABEL_48:
              v5 = v29;
              v20 = v8;
              v4 = (const char *)v28;
              if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
              {
                v18 = v8;
                v28 = qvector_reserve(&v28, v28, v29 + 1, 4);
                v4 = (const char *)v28;
                v8 = v18;
                *(_QWORD *)&v5 = v29;
              }
              *(_DWORD *)&v4[4 * v5] = v8;
              *(_QWORD *)&v29 = v29 + 1;
              break;
            case 0xC:
              if ( !a2 )
                goto LABEL_14;
              break;
            case 1:
              if ( !a2 )
              {
                v5 = v27;
                v8 = (unsigned __int16)v9;
                v7 = (__int64)&v20;
                v20 = (unsigned __int16)v9;
                v4 = (const char *)v26;
                if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v27 + 1) )
                {
                  v26 = qvector_reserve(&v26, v26, v27 + 1, 4);
                  v4 = (const char *)v26;
                  v7 = (__int64)&v20;
                  *(_QWORD *)&v5 = v27;
                  v8 = (unsigned __int16)v9;
                }
                *(_DWORD *)&v4[4 * v5] = v8;
                *(_QWORD *)&v27 = v27 + 1;
                if ( (v22 & 2) != 0
                  && v10
                  && (v4 = (const char *)v8,
                      v19 = v8,
                      LODWORD(v5) = sub_13EF0(a1, v8, 4u, v30),
                      v8 = v19,
                      v6 = (unsigned int)v5,
                      (unsigned __int8)v5 <= 0x15u)
                  && (v10 & (1 << v5)) != 0 )
                {
                  v10 ^= 1 << v5;
                }
                else if ( v23 )
                {
                  goto LABEL_48;
                }
              }
              break;
            default:
              goto LABEL_13;
          }
        }
LABEL_10:
        if ( *(_WORD *)(a1 + 33017) < (unsigned __int16)++v9 )
          goto LABEL_17;
      }
      ++v9;
      if ( (_BYTE)v5 )
        goto LABEL_10;
LABEL_13:
      if ( !a2 )
        goto LABEL_10;
LABEL_14:
      v6 = *((_QWORD *)&v25 + 1);
      *(_QWORD *)&v5 = v25;
      v7 = (unsigned __int16)v9;
      v20 = (unsigned __int16)v9;
      v4 = (const char *)v24;
      if ( *((_QWORD *)&v25 + 1) < (unsigned __int64)(v25 + 1) )
      {
        v24 = qvector_reserve(&v24, v24, v25 + 1, 4);
        v4 = (const char *)v24;
        v7 = (unsigned __int16)v9;
        *(_QWORD *)&v5 = v25;
      }
      *(_DWORD *)&v4[4 * v5] = v7;
      ++v9;
      *(_QWORD *)&v25 = v25 + 1;
    }
    while ( *(_WORD *)(a1 + 33017) >= (unsigned __int16)v9 );
  }
LABEL_17:
  if ( (_QWORD)v25 )
  {
    v11 = "NameAndType";
    if ( a2 )
      v11 = "(any except Class/Type/String)";
    v4 = "unused";
    sub_136E0(a1, (int)"unused", (int)v11, (__int64)&v24, v7, v8);
  }
  if ( (_QWORD)v27 )
  {
    if ( !(_QWORD)v29 )
      goto LABEL_51;
    v12 = "Utf8";
    v4 = "unreferenced";
    if ( a2 )
    {
      v12 = "Class";
      v4 = "unnamed";
    }
    sub_136E0(a1, (int)v4, (int)v12, (__int64)&v28, v7, v8);
    v13 = v29;
    v6 = v27;
    if ( (_QWORD)v29 )
    {
      v14 = 0;
      do
      {
        v15 = (char *)v26;
        *((_QWORD *)&v5 + 1) = v26 + 4 * v6;
        if ( v26 != *((_QWORD *)&v5 + 1) )
        {
          while ( *(_DWORD *)(v28 + 4 * v14) != *(_DWORD *)v15 )
          {
            v15 += 4;
            if ( *((char **)&v5 + 1) == v15 )
              goto LABEL_33;
          }
          if ( v15 != *((char **)&v5 + 1) )
          {
            v4 = v15 + 4;
            memmove(v15, v15 + 4, *((_QWORD *)&v5 + 1) - (_QWORD)v15 - 4LL);
            v6 = v27 - 1;
            *(_QWORD *)&v27 = v27 - 1;
          }
        }
LABEL_33:
        ++v14;
      }
      while ( v14 != v13 );
    }
    if ( v6 )
    {
LABEL_51:
      v17 = "Utf8";
      if ( a2 )
        v17 = "Class";
      v4 = "unused";
      sub_136E0(a1, (int)"unused", (int)v17, (__int64)&v26, v7, v8);
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, v4, *((_QWORD *)&v5 + 1), v6);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, v4, *((_QWORD *)&v5 + 1), v6);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, v4, *((_QWORD *)&v5 + 1), v6);
  }
  return v31 - __readfsqword(0x28u);
}

