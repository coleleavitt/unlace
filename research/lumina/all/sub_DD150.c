__int64 *__fastcall sub_DD150(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // r15
  _QWORD *v8; // r13
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r11
  const char *v12; // rsi
  char v13; // al
  char v14; // al
  char v15; // al
  __int64 v16; // r14
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 *v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]

  if ( !a2 )
    return nullptr;
  if ( !a1 || *(_QWORD *)(a1 + 488) <= (unsigned __int64)a2 )
    goto LABEL_3;
  v5 = 128;
  if ( *(_QWORD *)(a1 + 472) <= (unsigned __int64)a2 )
    goto LABEL_4;
  if ( *(_QWORD *)(a1 + 480) > (unsigned __int64)a2 )
  {
LABEL_3:
    v5 = ((int (__fastcall *)(_DWORD *))*(&xmmword_2414B0 + 1))(a2);
    goto LABEL_4;
  }
  v5 = *(unsigned __int16 *)(a1 + 414);
LABEL_4:
  v6 = sub_DBF10(a1, v5);
  v24 = v6;
  if ( !v6 )
    return nullptr;
  v7 = v6 + 1;
  v8 = a2 + 2;
  *(_DWORD *)v6 = *a2;
  *((_DWORD *)v6 + 1) = a2[1];
  if ( (int)*a2 > 0 )
  {
    v23 = 0;
    v25 = 0;
    v9 = 0;
    do
    {
      v16 = *v8;
      if ( *v8 )
      {
        v10 = sub_DD6E0(a1, *v8, a3, 0);
        *v7 = v10;
        v11 = v10;
        if ( *(_BYTE *)v16 == 0xB2 && v10 )
        {
          v18 = *(_QWORD *)(v10 + 24);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v16 + 24);
            v23 = v18;
            *(_QWORD *)(v11 + 16) = v18;
            v25 = v19;
          }
          else
          {
            v20 = *(_QWORD *)(v16 + 16);
            if ( v20 != v25 )
            {
              v23 = 0;
              if ( v20 )
              {
                v27 = v11;
                v26 = *(_QWORD *)(v16 + 16);
                v21 = sub_DD6E0(a1, v20, a3, 0);
                v11 = v27;
                v20 = v26;
                v23 = v21;
              }
              v25 = v20;
              *(_QWORD *)(v11 + 24) = v23;
            }
            *(_QWORD *)(v11 + 16) = v23;
          }
        }
      }
      else
      {
        *v7 = 0;
      }
      v12 = (const char *)v8[1];
      ++v9;
      v7 += 3;
      v8 += 3;
      *(v7 - 2) = (__int64)sub_DC720(a1, v12);
      *((_BYTE *)v7 - 8) = *((_BYTE *)v8 - 8);
      v13 = *((_BYTE *)v8 - 7) & 3 | *((_BYTE *)v7 - 7) & 0xD8;
      *((_BYTE *)v7 - 7) = *((_BYTE *)v8 - 7) & 3 | *((_BYTE *)v7 - 7) & 0xF8;
      v14 = *((_BYTE *)v8 - 7) & 0x20 | v13;
      *((_BYTE *)v7 - 7) = v14;
      v15 = *((_BYTE *)v8 - 7) & 0x40 | v14 & 0xBF;
      *((_BYTE *)v7 - 7) = v15;
      *((_BYTE *)v7 - 7) = *((_BYTE *)v8 - 7) & 0x10 | v15 & 0xEF;
      *((_DWORD *)v7 - 1) = *((_DWORD *)v8 - 1);
    }
    while ( *a2 > v9 );
  }
  return v24;
}
