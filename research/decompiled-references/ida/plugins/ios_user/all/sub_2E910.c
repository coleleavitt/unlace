unsigned __int64 __fastcall sub_2E910(__int64 a1, const char *a2)
{
  __int64 v3; // r12
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  __int64 v7; // rbp
  char *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbp
  bool v19; // cc
  __int64 v20; // r12
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rax
  const char *v23; // rsi
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-260h] BYREF
  char *v31; // [rsp+10h] [rbp-258h]
  __int128 v32; // [rsp+18h] [rbp-250h]
  char s1[72]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v34; // [rsp+78h] [rbp-1F0h]
  unsigned __int64 v35; // [rsp+238h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 88);
  v35 = __readfsqword(0x28u);
  if ( !v3 || !*(_QWORD *)(a1 + 96) )
  {
    if ( !a2 )
      return v35 - __readfsqword(0x28u);
    v32 = 0;
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v31 = (char *)qvector_reserve();
    *(_QWORD *)&v32 = v5;
    memmove(v31, a2, v6);
    v31[v6] = 0;
    v7 = v32;
    if ( (_QWORD)v32 )
    {
      v10 = v32 + 7;
      v9 = v32 + 8;
      v8 = v31;
      v7 = v32 - 1;
      if ( *((_QWORD *)&v32 + 1) >= (unsigned __int64)(v32 + 8) )
        goto LABEL_6;
    }
    else
    {
      v8 = v31;
      v9 = 9;
      v10 = 8;
      if ( *((_QWORD *)&v32 + 1) >= 9u )
      {
LABEL_6:
        *(_QWORD *)&v32 = v9;
        v8[v10] = 0;
        *(_QWORD *)&v31[v7] = 0x736C6F626D79732ELL;
        v11 = open_linput();
        *(_QWORD *)(a1 + 752) = v11;
        if ( v11 )
        {
          *(_BYTE *)(a1 + 775) = 1;
          if ( qlread() == 512 )
          {
            if ( !strncmp(s1, (const char *)(a1 + 16), 0x10u) )
            {
              v3 = v34;
              if ( v31 )
              {
                *(_QWORD *)&v32 = 0;
                qfree();
              }
              if ( v3 != qlseek() )
                return v35 - __readfsqword(0x28u);
              goto LABEL_16;
            }
            v23 = s;
            if ( (_QWORD)v32 )
              v23 = v31;
            sub_13170((__int64)"Error loading %s: magic does not match\n", v23);
          }
        }
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree();
        }
        return v35 - __readfsqword(0x28u);
      }
    }
    v31 = (char *)qvector_reserve();
    v8 = v31;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 752) = *(_QWORD *)(a1 + 8);
  if ( v3 != qlseek() )
    return v35 - __readfsqword(0x28u);
LABEL_16:
  if ( qlread() == 24 )
  {
    v13 = DWORD1(v32);
    v14 = *(_QWORD *)(a1 + 752);
    v15 = v3 + (unsigned int)v32;
    *(_QWORD *)(a1 + 808) = v3 + (unsigned int)v31;
    *(_QWORD *)(a1 + 816) = HIDWORD(v31);
    v16 = sub_2E790(v14, v15, v13, 1);
    v17 = DWORD2(v32);
    *(_QWORD *)(a1 + 824) = v16;
    *(_QWORD *)(a1 + 776) = v16;
    v18 = v3 + v17;
    v19 = *(_DWORD *)(a1 + 32) <= 0x187u;
    v20 = *(_QWORD *)(a1 + 752);
    v30 = HIDWORD(v32);
    if ( v19 )
    {
      if ( !HIDWORD(v32) )
        return v35 - __readfsqword(0x28u);
      if ( v18 != -1 )
        qlseek();
      sub_2E3A0(v20, &v30, 0xCu, "local symbols size", v18, -1);
      v24 = v30;
      v25 = *(_QWORD *)(a1 + 712);
      if ( v25 < v30 )
      {
        v26 = *(_QWORD *)(a1 + 704);
        if ( *(_QWORD *)(a1 + 720) < v30 )
        {
          v28 = qvector_reserve();
          *(_QWORD *)(a1 + 704) = v28;
          v26 = v28;
          v25 = *(_QWORD *)(a1 + 712);
        }
        memset((void *)(v26 + 12 * v25), 0, 12 * (v24 - v25));
        *(_QWORD *)(a1 + 712) = v24;
      }
      else if ( v30 != v25 )
      {
        *(_QWORD *)(a1 + 712) = v30;
      }
    }
    else
    {
      if ( !HIDWORD(v32) )
        return v35 - __readfsqword(0x28u);
      if ( v18 != -1 )
        qlseek();
      sub_2E3A0(v20, &v30, 0x10u, "local symbols size", v18, -1);
      v21 = v30;
      v22 = *(_QWORD *)(a1 + 736);
      if ( v22 < v30 )
      {
        v27 = *(_QWORD *)(a1 + 728);
        if ( *(_QWORD *)(a1 + 744) < v30 )
        {
          v29 = qvector_reserve();
          *(_QWORD *)(a1 + 728) = v29;
          v27 = v29;
          v22 = *(_QWORD *)(a1 + 736);
        }
        memset((void *)(v27 + 16 * v22), 0, 16 * (v21 - v22));
        *(_QWORD *)(a1 + 736) = v21;
      }
      else if ( v30 != v22 )
      {
        *(_QWORD *)(a1 + 736) = v30;
      }
    }
    qlread();
  }
  return v35 - __readfsqword(0x28u);
}

