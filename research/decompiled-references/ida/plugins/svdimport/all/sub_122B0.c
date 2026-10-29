unsigned __int64 __fastcall sub_122B0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r15
  const char *v12; // rbp
  int v13; // eax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  const void *v21; // r13
  void *v22; // rax
  unsigned __int64 v23; // r15
  const void *v24; // r13
  void *v25; // rax
  char *s1; // [rsp+0h] [rbp-88h]
  __int64 v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+10h] [rbp-78h]
  _QWORD *v29; // [rsp+10h] [rbp-78h]
  void **v30; // [rsp+18h] [rbp-70h]
  char v31; // [rsp+27h] [rbp-61h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h] BYREF
  void *dest; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v2 = a2[1];
  v35 = __readfsqword(0x28u);
  v4 = *a2;
  v5 = v2;
  if ( a2[2] < (unsigned __int64)(v2 + 1) )
  {
    v19 = qvector_reserve();
    v5 = a2[1];
    *a2 = v19;
    v4 = v19;
  }
  v6 = 224 * v5 + v4;
  *(_BYTE *)v6 = 0;
  *(_QWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_QWORD *)(v6 + 104) = 0;
  *(_QWORD *)(v6 + 128) = 0;
  *(_QWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 192) = 0;
  *(_QWORD *)(v6 + 200) = 0;
  *(_OWORD *)(v6 + 40) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 80) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  *(_OWORD *)(v6 + 136) = 0;
  *(_OWORD *)(v6 + 160) = 0;
  *(_OWORD *)(v6 + 176) = 0;
  *(_OWORD *)(v6 + 208) = 0;
  v7 = *a2;
  ++a2[1];
  v27 = 224 * v2;
  *(_BYTE *)(v7 + 224 * v2) = 1;
  dest = nullptr;
  v34 = 0;
  while ( (unsigned __int8)sub_10B00(a1, &v31) )
  {
    v8 = a1[3];
    v9 = a1[2];
    v10 = v9 + 80 * v8 - 80;
    v11 = *(_QWORD *)(v10 + 8);
    if ( v31 )
    {
      if ( v11 )
      {
        v12 = *(const char **)v10;
        if ( !strcmp(*(const char **)v10, "cluster") )
        {
          sub_122B0(a1, *a2 + v27 + 152);
        }
        else if ( !strcmp(v12, "register") )
        {
          sub_11AF0(a1, (__int64 *)(*a2 + v27 + 152));
        }
      }
    }
    else
    {
      if ( v11 )
      {
        v28 = a1[2];
        s1 = *(char **)v10;
        v13 = strcmp(*(const char **)v10, "cluster");
        v9 = v28;
        if ( !v13 )
          break;
      }
      else
      {
        s1 = (char *)::s1;
      }
      if ( v8 > 1 )
      {
        v14 = 16 * (5 * v8 - 10);
        v15 = v14 + v9 == 0;
        v16 = v14 + v9;
        v17 = v16;
        if ( !v15 && *(_QWORD *)(v16 + 8) && !strcmp(*(const char **)v16, "cluster") )
        {
          v30 = (void **)(v10 + 24);
          v29 = (_QWORD *)(*a2 + v27);
          if ( !strcmp(s1, "name") )
          {
            if ( v29 + 1 != v30 )
            {
              v20 = *(_QWORD *)(v10 + 32);
              if ( v20 > 1 )
              {
                v21 = *(const void **)(v10 + 24);
                v22 = (void *)v29[1];
                if ( v29[3] < v20 )
                {
                  v22 = (void *)qvector_reserve();
                  v29[1] = v22;
                }
                v29[2] = v20;
                memmove(v22, v21, v20 - 1);
                *(_BYTE *)(v29[1] + v20 - 1) = 0;
              }
              else
              {
                v29[2] = 0;
              }
            }
          }
          else if ( !strcmp(s1, "dim") )
          {
            if ( *(_QWORD *)(v10 + 32) > 1u )
            {
              sub_10460(&v32, *(char **)(v10 + 24));
              v29[11] = v32;
            }
          }
          else if ( !strcmp(s1, "dimIncrement") )
          {
            if ( *(_QWORD *)(v10 + 32) > 1u )
            {
              sub_10460(&v32, *(char **)(v10 + 24));
              v29[12] = v32;
            }
          }
          else if ( !strcmp(s1, "dimIndex") )
          {
            if ( v30 != &dest )
            {
              v23 = *(_QWORD *)(v10 + 32);
              if ( v23 > 1 )
              {
                v24 = *(const void **)(v10 + 24);
                v25 = dest;
                if ( *((_QWORD *)&v34 + 1) < v23 )
                {
                  v25 = (void *)qvector_reserve();
                  dest = v25;
                }
                *(_QWORD *)&v34 = v23;
                memmove(v25, v24, v23 - 1);
                *((char *)dest + v23 - 1) = 0;
              }
              else
              {
                *(_QWORD *)&v34 = 0;
              }
            }
          }
          else if ( !strcmp(s1, "addressOffset") )
          {
            if ( *(_QWORD *)(v10 + 32) > 1u )
              sub_10460(v29 + 10, *(char **)(v10 + 24));
          }
          else if ( !strcmp(s1, "size") && *(_QWORD *)(v10 + 32) > 1u )
          {
            sub_10460(&v32, *(char **)(v10 + 24));
            *(_QWORD *)(v17 + 72) = (unsigned __int64)(v32 + 7) >> 3;
          }
        }
      }
    }
  }
  if ( (unsigned __int64)v34 > 1 )
    sub_110C0((__int64)a1, (__int64 *)(*a2 + v27 + 128), *(_QWORD *)(*a2 + v27 + 88));
  if ( dest )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  return v35 - __readfsqword(0x28u);
}

