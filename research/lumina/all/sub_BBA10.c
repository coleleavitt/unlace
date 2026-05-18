_QWORD *__fastcall sub_BBA10(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // r12
  bool v6; // zf
  unsigned int v7; // eax
  const char *v8; // rax
  const char *v9; // r12
  size_t v10; // rax
  size_t v11; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  void (__fastcall *v16)(_QWORD *); // rdx
  void (__fastcall *v17)(_QWORD *); // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // r13
  void (__fastcall *v21)(_QWORD *); // rdx
  void (__fastcall *v22)(_QWORD *); // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __m128i si128; // xmm0
  unsigned __int64 v26; // rax
  char *v27; // rdi
  size_t v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-50h] BYREF
  void *v32; // [rsp+8h] [rbp-48h] BYREF
  __int128 v33; // [rsp+10h] [rbp-40h]
  unsigned __int64 v34; // [rsp+20h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v32 = nullptr;
  v33 = 0;
  v32 = (void *)sub_1987B0(&v32, 0, 12, 1);
  *(_QWORD *)&v33 = 12;
  strcpy((char *)v32, "Data Source");
  v5 = (_QWORD *)sub_C09E0(a2, &v32);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    j__free(v32);
  }
  if ( !v5 )
  {
    if ( !a3 )
      goto LABEL_11;
    v24 = *a3;
    if ( (unsigned __int64)a3[2] <= 0x2A )
    {
      v29 = sub_1987B0(a3, v24, 43, 1);
      *a3 = v29;
      v24 = v29;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B7070);
    a3[1] = 43;
    *(__m128i *)v24 = si128;
    *(__m128i *)(v24 + 16) = _mm_load_si128((const __m128i *)&xmmword_1B7080);
    *(__m128i *)(v24 + 26) = _mm_load_si128((const __m128i *)&xmmword_1B7090);
    *(_BYTE *)(*a3 + 42) = 0;
    v26 = a3[1];
    *((_DWORD *)a3 + 6) = -1;
    goto LABEL_35;
  }
  v6 = v5[1] == 0;
  v31 = 0;
  if ( v6 )
  {
    v7 = sub_1657F0(s1, &v31);
    if ( v7 )
    {
LABEL_6:
      if ( !a3 )
      {
LABEL_11:
        *a1 = 0;
        return a1;
      }
      v8 = (const char *)sub_D1C00(v7);
      v9 = v8;
      if ( !v8 || (v10 = strlen(v8), (v11 = v10) == 0) )
      {
        a3[1] = 0;
        *((_DWORD *)a3 + 6) = -1;
LABEL_10:
        sub_299F0((char **)a3);
        goto LABEL_11;
      }
      v27 = (char *)*a3;
      v28 = v10 + 1;
      if ( a3[2] < v10 + 1 )
      {
        v30 = sub_1987B0(a3, *a3, v10 + 1, 1);
        *a3 = v30;
        v27 = (char *)v30;
      }
      a3[1] = v28;
      memmove(v27, v9, v11);
      *(_BYTE *)(*a3 + v11) = 0;
      v26 = a3[1];
      *((_DWORD *)a3 + 6) = -1;
LABEL_35:
      if ( v26 > 1 )
        goto LABEL_11;
      goto LABEL_10;
    }
  }
  else
  {
    v7 = sub_1657F0(*v5, &v31);
    if ( v7 )
      goto LABEL_6;
  }
  sub_D1C10(v31, 30000);
  v13 = operator new(0x18u);
  v14 = v31;
  *(_DWORD *)(v13 + 8) = 1;
  *(_QWORD *)(v13 + 16) = v14;
  *(_QWORD *)v13 = &off_239C40;
  *a1 = v13;
  unk_241E58(&v32, a1);
  if ( !v32 || !(unsigned __int8)unk_241E68(&v32, 0) )
  {
    if ( !unk_2439A0 )
      sub_198E10(2797);
    BUG();
  }
  v15 = v32;
  if ( v32 )
  {
    v6 = (*((_DWORD *)v32 + 2))-- == 1;
    if ( v6 )
    {
      v16 = *(void (__fastcall **)(_QWORD *))*v15;
      if ( v16 == sub_BA820 )
      {
        v17 = *(void (__fastcall **)(_QWORD *))(*v15 + 16LL);
        if ( v17 == sub_BA600 )
        {
          v18 = v15[3];
          *v15 = &off_239C90;
          if ( v18 )
          {
            sub_11E660();
            v15[3] = 0;
          }
          v19 = v15[2];
          if ( v19 )
          {
            v6 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v6 )
            {
              v20 = (_QWORD *)v15[2];
              v21 = *(void (__fastcall **)(_QWORD *))*v20;
              if ( v21 == sub_BA500 )
              {
                if ( v20 )
                {
                  v22 = *(void (__fastcall **)(_QWORD *))(*v20 + 16LL);
                  if ( v22 == sub_BA4D0 )
                  {
                    v23 = v20[2];
                    *v20 = &off_239C40;
                    if ( v23 )
                      sub_11D2D0();
                    operator delete(v20, 0x18u);
                  }
                  else
                  {
                    v22((_QWORD *)v15[2]);
                  }
                }
              }
              else
              {
                v21((_QWORD *)v15[2]);
              }
            }
          }
          operator delete(v15, 0x20u);
        }
        else
        {
          v17(v15);
        }
      }
      else
      {
        v16(v15);
      }
    }
  }
  return a1;
}
