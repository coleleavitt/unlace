unsigned __int64 __fastcall sub_5BD70(__m128i *a1)
{
  __int64 v2; // rax
  int v4; // eax
  size_t v5; // r12
  const void *v6; // r13
  char *v7; // rdi
  char v8; // al
  unsigned __int8 *v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // [rsp+0h] [rbp-70h] BYREF
  char *s1; // [rsp+8h] [rbp-68h] BYREF
  __int128 v13; // [rsp+10h] [rbp-60h]
  unsigned __int8 *v14; // [rsp+28h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h]
  unsigned __int64 v16; // [rsp+40h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  a1[10] = _mm_shuffle_epi32(_mm_cvtsi32_si128(2u), 0);
  v15 = 0;
  v2 = qvector_reserve();
  v14 = (unsigned __int8 *)v2;
  *(_QWORD *)&v15 = 7;
  *(_WORD *)(v2 + 4) = 16244;
  *(_DWORD *)v2 = 1852785526;
  v14[6] = 0;
  if ( (unsigned int)sub_5ABF0((__int64)a1, &v14) == 1 )
  {
    v4 = sub_5AB40((__int64)a1);
    a1[1].m128i_i8[0] = 0;
    if ( v4 != 1 )
    {
      if ( !v14 )
        return v16 - __readfsqword(0x28u);
      goto LABEL_3;
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
    v5 = a1[2].m128i_u64[0];
    v6 = (const void *)a1[1].m128i_i64[1];
    s1 = nullptr;
    v13 = 0;
    if ( v5 )
    {
      v7 = nullptr;
      if ( v5 != -1 )
      {
        s1 = (char *)qvector_reserve();
        v7 = s1;
      }
      *(_QWORD *)&v13 = v5 + 1;
      memmove(v7, v6, v5);
      s1[v5] = 0;
      if ( (unsigned __int64)v13 > 6 && !strncmp(s1, "vCont;", 6u) )
      {
        v11 = 6;
        if ( (unsigned __int64)(v13 - 1) > 6 )
        {
          while ( 1 )
          {
            v15 = 0;
            v14 = nullptr;
            v8 = sub_593F0((__int64 *)&v14, &s1, &v11, 59);
            v9 = v14;
            if ( !v8 )
              break;
            if ( (_QWORD)v15 )
            {
              v10 = *v14;
              if ( v10 != 99 || v14[1] )
              {
                if ( v10 != 67 || v14[1] )
                {
                  if ( v10 != 115 || v14[1] )
                  {
                    if ( v10 == 83 && !v14[1] )
                      a1[10].m128i_i32[3] = 1;
                  }
                  else
                  {
                    a1[10].m128i_i32[2] = 1;
                  }
                }
                else
                {
                  a1[10].m128i_i32[1] = 1;
                }
              }
              else
              {
                a1[10].m128i_i32[0] = 1;
              }
            }
            if ( v9 )
              qfree();
            if ( !(_QWORD)v13 || v11 >= (__int64)v13 - 1 )
              goto LABEL_25;
          }
          if ( v14 )
            qfree();
        }
LABEL_25:
        if ( s1 )
        {
          *(_QWORD *)&v13 = 0;
          qfree();
        }
      }
      else if ( s1 )
      {
        *(_QWORD *)&v13 = 0;
        qfree();
      }
    }
  }
  else if ( v14 )
  {
LABEL_3:
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

