__int64 __fastcall sub_1A2870(__int64 a1, char **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v11; // r12d
  __int64 v13; // r14
  const char *v14; // rax
  const char *v15; // r13
  size_t v16; // rbp
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r9
  char *v19; // rax
  char *v20; // rsi
  const void *v21; // r13
  size_t v22; // rax
  size_t v23; // r8
  char *v24; // rax
  __m128i *v25; // rdi
  size_t v26; // r15
  __m128i *v27; // rax
  size_t v29; // [rsp+0h] [rbp-58h]
  size_t v30; // [rsp+0h] [rbp-58h]
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  _QWORD v33[9]; // [rsp+10h] [rbp-48h] BYREF

  v33[1] = __readfsqword(0x28u);
  v11 = sub_1A26F0(a1, (__m128i **)a6);
  if ( (_BYTE)v11 )
  {
    v33[0] = 0;
    v13 = sub_1A2790(a1, a3, a4, a5);
    v14 = (const char *)(*(__int64 (__fastcall **)(char **, __int64, _QWORD, _QWORD *))(a1 + 56))(
                          &off_23D060,
                          v13,
                          0,
                          v33);
    v15 = v14;
    LOBYTE(v11) = v14 != nullptr;
    if ( !v14 )
    {
      if ( a6 && v33[0] )
      {
        v21 = *(const void **)(v33[0] + 8LL);
        if ( v21 && (v22 = strlen(*(const char **)(v33[0] + 8LL)), (v23 = v22) != 0) )
        {
          v25 = *(__m128i **)a6;
          v26 = v22 + 1;
          if ( *(_QWORD *)(a6 + 16) < v22 + 1 )
          {
            v30 = v22;
            v27 = (__m128i *)sub_1987B0(a6, *(void **)a6, v22 + 1, 1u);
            v23 = v30;
            *(_QWORD *)a6 = v27;
            v25 = v27;
          }
          *(_QWORD *)(a6 + 8) = v26;
          v29 = v23;
          memmove(v25, v21, v23);
          *(_BYTE *)(*(_QWORD *)a6 + v29) = 0;
        }
        else
        {
          *(_QWORD *)(a6 + 8) = 0;
        }
      }
      goto LABEL_11;
    }
    v16 = strlen(v14);
    if ( !v16 )
    {
LABEL_10:
      (*(void (__fastcall **)(const char *))(a1 + 64))(v15);
LABEL_11:
      (*(void (__fastcall **)(__int64))(a1 + 152))(v13);
      return v11;
    }
    v17 = (unsigned __int64)a2[1];
    v18 = v17 + v16;
    if ( __CFADD__(v17, v16) )
    {
      if ( v17 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v17 != 0x7FFFFFFFFFFFFFFFLL )
          a2[1] = (char *)0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = a2[1];
    v20 = *a2;
    if ( (unsigned __int64)a2[2] < v18 )
    {
      v32 = v18;
      v24 = (char *)sub_1987B0((__int64)a2, v20, v18, 1u);
      v18 = v32;
      v20 = v24;
      *a2 = v24;
      v19 = a2[1];
    }
    v31 = v18;
    memset(&v19[(_QWORD)v20], 0, v18 - (_QWORD)v19);
    a2[1] = (char *)v31;
LABEL_9:
    memcpy(&(*a2)[v17], v15, v16);
    goto LABEL_10;
  }
  return v11;
}
