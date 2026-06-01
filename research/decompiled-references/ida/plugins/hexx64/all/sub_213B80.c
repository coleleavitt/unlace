unsigned __int64 __fastcall sub_213B80(_QWORD *a1, __int64 *a2, const void *a3)
{
  unsigned __int64 **v4; // r13
  __int64 *v5; // r15
  __int64 *v7; // rbx
  const char *v8; // rcx
  size_t v9; // rax
  size_t v10; // rbx
  unsigned __int64 v11; // rax
  void *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 *v16; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  char *s2; // [rsp+10h] [rbp-58h]
  char *s1; // [rsp+18h] [rbp-50h]
  __int64 *v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v4 = (unsigned __int64 **)(a1 + 109);
  v5 = (__int64 *)a1[109];
  v21 = __readfsqword(0x28u);
  v16 = a2 + 4;
  if ( v5 )
  {
    v7 = (__int64 *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v7 )
      goto LABEL_19;
    if ( (*(_BYTE *)v7 & 2) == 0 )
    {
      v17 = a2[5];
      do
      {
        if ( v7[4] )
        {
          v8 = (const char *)v7[3];
          if ( !v17 )
          {
            if ( !*v8 )
              goto LABEL_18;
LABEL_8:
            v7 = (__int64 *)v7[1];
            continue;
          }
        }
        else
        {
          if ( !v17 )
            goto LABEL_18;
          v8 = ::s1;
        }
        s1 = (char *)v8;
        s2 = (char *)a2[4];
        if ( strcmp(s2, v8) < 0 )
          goto LABEL_8;
        if ( strcmp(s1, s2) >= 0 )
        {
LABEL_18:
          if ( v5 != v7 )
LABEL_19:
            sub_1F4D60(v4, v7);
          break;
        }
        v7 = (__int64 *)v7[2];
      }
      while ( (*(_BYTE *)v7 & 2) == 0 );
    }
  }
  if ( a3 && (v9 = strlen((const char *)a3), (v10 = v9) != 0) )
  {
    v13 = (void *)a2[4];
    v14 = v9 + 1;
    if ( a2[6] < v9 + 1 )
    {
      v15 = qvector_reserve((__int64)v16, a2[4], v9 + 1, 1);
      a2[4] = v15;
      v13 = (void *)v15;
    }
    a2[5] = v14;
    memmove(v13, a3, v10);
    *(_BYTE *)(a2[4] + v10) = 0;
  }
  else
  {
    a2[5] = 0;
  }
  v11 = a1[54];
  if ( (unsigned __int64)a2 >= v11 && (unsigned __int64)a2 < v11 + 104LL * a1[55] )
  {
    v20 = a2 + 4;
    sub_213800((__m128i *)v4, (__int64)v16, (__int64 *)&v20);
  }
  return v21 - __readfsqword(0x28u);
}

