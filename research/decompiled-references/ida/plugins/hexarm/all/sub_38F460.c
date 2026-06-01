unsigned __int64 __fastcall sub_38F460(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // r13
  const char *v4; // rdi
  __int64 v5; // rax
  char v6; // dl
  int v7; // ebx
  __int64 i; // rax
  unsigned int utf8_char; // eax
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // rsi
  int v23; // r15d
  const char *v24; // [rsp+0h] [rbp-60h]
  __int64 v25; // [rsp+8h] [rbp-58h]
  __int128 v26; // [rsp+10h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-50h]
  unsigned __int64 v28; // [rsp+20h] [rbp-40h]

  v1 = a1[4];
  v28 = __readfsqword(0x28u);
  v26 = 0;
  v25 = 0;
  if ( *(_QWORD *)(v1 + 136) )
  {
    v3 = 0;
    do
    {
      v4 = s1;
      v5 = *(_QWORD *)(v1 + 128) + 32 * v3;
      if ( *(_QWORD *)(v5 + 8) )
        v4 = *(const char **)v5;
      v6 = *v4;
      v7 = 0;
LABEL_6:
      if ( v6 != 1 || v4[1] != 12 || v4[2] != 47 || v4[3] != 47 )
      {
        for ( i = tag_skipcodes(); ; i = tag_skipcodes() )
        {
          v24 = (const char *)i;
          utf8_char = get_utf8_char();
          if ( utf8_char - 1 > 0xFFFFFFFD )
            break;
          v4 = v24;
          v6 = *v24;
          if ( *v24 != 2 )
            goto LABEL_27;
          if ( v24[1] == 9 )
          {
            if ( utf8_char == 93 )
              goto LABEL_20;
            if ( utf8_char > 0x5D )
            {
              if ( utf8_char == 123 )
                goto LABEL_36;
              if ( utf8_char == 125 )
              {
LABEL_20:
                v10 = 2;
LABEL_21:
                v11 = a1[18];
                v12 = a1[17];
                if ( a1[19] < (unsigned __int64)(v11 + 1) )
                {
                  v21 = qvector_reserve();
                  a1[17] = v21;
                  v12 = v21;
                  v11 = a1[18];
                }
                v13 = 16 * v11 + v12;
                *(_OWORD *)v13 = -1;
                ++a1[18];
                *(_DWORD *)v13 = v7;
                *(_DWORD *)(v13 + 4) = v3;
                v14 = v26;
                if ( v10 != 1 )
                {
                  if ( (_QWORD)v26 )
                  {
                    v15 = *(int *)(v25 + 4 * v26 - 4);
                    *(_QWORD *)&v26 = v26 - 1;
                    v16 = a1[17] + 16 * v15;
                    *(_DWORD *)(v16 + 8) = v7;
                    *(_DWORD *)(v16 + 12) = v3;
                    *(_QWORD *)(v13 + 8) = *(_QWORD *)v16;
                  }
                  v4 = v24;
                  v6 = *v24;
LABEL_27:
                  ++v7;
                  goto LABEL_6;
                }
                v22 = v25;
                v23 = *((_DWORD *)a1 + 36) - 1;
                if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
                {
                  v25 = qvector_reserve();
                  v14 = v26;
                  v22 = v25;
                }
                *(_DWORD *)(v22 + 4 * v14) = v23;
                v4 = v24;
                ++v7;
                *(_QWORD *)&v26 = v26 + 1;
                v6 = *v24;
                goto LABEL_6;
              }
            }
            else
            {
              if ( utf8_char == 41 )
                goto LABEL_20;
              if ( utf8_char == 91 || utf8_char == 40 )
              {
LABEL_36:
                v10 = 1;
                goto LABEL_21;
              }
            }
          }
          ++v7;
        }
      }
      v1 = a1[4];
      ++v3;
    }
    while ( v3 < *(_QWORD *)(v1 + 136) );
    v17 = v26;
    if ( (_QWORD)v26 )
    {
      do
      {
        v18 = *(_DWORD *)(v25 + 4 * v17 - 4);
        v27 = v17 - 1;
        v19 = a1[17] + 16LL * v18;
        memmove((void *)v19, (const void *)(v19 + 16), 16 * (a1[18] - v18) - 16LL);
        v17 = v27;
        --a1[18];
      }
      while ( v27 );
    }
    if ( v25 )
      qfree();
  }
  return v28 - __readfsqword(0x28u);
}

