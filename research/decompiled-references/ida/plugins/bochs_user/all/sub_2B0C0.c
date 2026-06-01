__int64 __fastcall sub_2B0C0(const char **a1, unsigned __int8 *a2, __int64 *a3)
{
  unsigned __int8 *v4; // rax
  char *v5; // r12
  unsigned __int8 *v6; // rbp
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rax
  unsigned __int8 *v10; // rax
  char *v11; // r12
  int v12; // eax
  unsigned __int64 v13; // r8
  __int16 v14; // r11
  __int64 v15; // rax
  int v16; // r10d
  __int16 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  int v21; // [rsp+2Ch] [rbp-18Ch]
  unsigned __int64 v22; // [rsp+30h] [rbp-188h]
  __int16 v23; // [rsp+38h] [rbp-180h]
  __int16 v24; // [rsp+3Ch] [rbp-17Ch]
  char v25; // [rsp+4Fh] [rbp-169h]
  unsigned int v26; // [rsp+50h] [rbp-168h]
  int v27; // [rsp+54h] [rbp-164h]
  char *s1; // [rsp+58h] [rbp-160h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-158h]
  int v30; // [rsp+68h] [rbp-150h]
  __int16 v31; // [rsp+6Ch] [rbp-14Ch]
  __int16 v32; // [rsp+6Eh] [rbp-14Ah]
  unsigned __int64 v33; // [rsp+178h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v4 = sub_2A250(a2, a1, (const char **)&s1);
  v5 = s1;
  v6 = v4;
  v7 = strcmp(s1, "Num Type           Disp Enb Address");
  result = 2;
  if ( !v7 )
  {
    if ( *a3 )
    {
      a3[1] = 0;
      qfree();
      *a3 = 0;
      a3[2] = 0;
    }
    if ( *v5 )
    {
      do
      {
        v10 = sub_2A250(v6, a1, (const char **)&s1);
        v11 = s1;
        v6 = v10;
        if ( (unsigned int)qsscanf() != 4 )
          break;
        HIBYTE(v32) = v25 == 121;
        if ( (_BYTE)v32 == 118 )
        {
          v20 = qsscanf();
          if ( v20 == 3 )
          {
            v14 = v31;
            v13 = v26 | (unsigned __int64)((__int64)v27 << 32);
            v29 = v13;
          }
          else
          {
            if ( v20 != 2 )
              return 0;
            v13 = v27;
            v14 = v31;
            v29 = v27;
          }
        }
        else
        {
          if ( (((_BYTE)v32 - 108) & 0xFB) != 0 )
            return 4;
          v12 = qsscanf();
          if ( v12 == 2 )
          {
            v13 = v26 | (unsigned __int64)((__int64)v27 << 32);
          }
          else
          {
            if ( v12 != 1 )
              return 0;
            v13 = v27;
          }
          v29 = v13;
          v14 = 0;
          v31 = 0;
        }
        v15 = a3[1];
        v16 = v30;
        v17 = v32;
        v18 = *a3;
        if ( a3[2] < (unsigned __int64)(v15 + 1) )
        {
          v24 = v14;
          v22 = v13;
          v23 = v32;
          v21 = v30;
          v19 = qvector_reserve();
          v14 = v24;
          v13 = v22;
          v18 = v19;
          v17 = v23;
          v16 = v21;
          *a3 = v19;
          v15 = a3[1];
        }
        v9 = v18 + 16 * v15;
        *(_QWORD *)v9 = v13;
        *(_DWORD *)(v9 + 8) = v16;
        *(_WORD *)(v9 + 12) = v14;
        *(_WORD *)(v9 + 14) = v17;
        ++a3[1];
      }
      while ( *v11 );
    }
    return 0;
  }
  return result;
}

