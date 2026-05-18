__int64 __fastcall sub_5CB00(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, time_t a5, char a6)
{
  _BYTE *v9; // r15
  char *v10; // rsi
  char v11; // al
  _BYTE *v12; // rbp
  char *v13; // rdi
  __int16 v14; // ax
  char *v15; // r8
  _BYTE *v16; // rbp
  char *v17; // rdi
  char *v18; // r15
  _BYTE *v19; // rax
  char *v20; // rbp
  __int64 v21; // r15
  char *v22; // rdi
  size_t v23; // rax
  size_t v24; // r12
  unsigned int v25; // ebx
  unsigned __int64 v27; // r12
  char *v28; // rax
  const void *v29; // r14
  void *v30; // rax
  __int64 v31; // rax
  size_t v32; // r13
  void *v33; // rdi
  __int64 *v34; // r15
  const void *v35; // rsi
  __int64 v36; // rax
  char *v37; // [rsp+0h] [rbp-90h] BYREF
  time_t v38; // [rsp+8h] [rbp-88h]
  __int64 *v39; // [rsp+10h] [rbp-80h]
  __int64 v40; // [rsp+18h] [rbp-78h] BYREF
  __int64 v41; // [rsp+20h] [rbp-70h]
  time_t v42; // [rsp+30h] [rbp-60h] BYREF
  char *nptr; // [rsp+38h] [rbp-58h] BYREF
  __int128 v44; // [rsp+40h] [rbp-50h]
  unsigned __int64 v45; // [rsp+50h] [rbp-40h]

  v39 = a3;
  v38 = a5;
  v45 = __readfsqword(0x28u);
  v44 = 0;
  nptr = nullptr;
  v9 = sub_5C990(a1, (__int64)&nptr);
  v10 = nptr;
  if ( !(_QWORD)v44 )
    v10 = (char *)s1;
  v41 = a2 + 6;
  sub_1998A0(a2 + 6, v10, 16);
  if ( !a6 )
  {
    v11 = *(_BYTE *)(a2 + 9);
    if ( v11 == 65 )
    {
      if ( *(_BYTE *)(a2 + 10) == 68 && *(_BYTE *)(a2 + 11) == 86 )
      {
        *(_BYTE *)(a2 + 11) = 79;
        *(_WORD *)(a2 + 9) = 21072;
      }
    }
    else if ( v11 == 83 && *(_BYTE *)(a2 + 10) == 84 && *(_BYTE *)(a2 + 11) == 68 )
    {
      *(_BYTE *)(a2 + 11) = 65;
    }
  }
  v12 = sub_5C990((__int64)v9, (__int64)&nptr);
  v13 = (char *)s1;
  v37 = nptr;
  if ( (_QWORD)v44 )
    v13 = nptr;
  v40 = *((_QWORD *)&v44 + 1);
  v14 = strtol(v13, nullptr, 10);
  v15 = v37;
  *(_WORD *)(a2 + 22) = v14;
  if ( v14 <= 0 )
  {
    v20 = *(char **)a4;
    *(_QWORD *)a4 = v15;
    v25 = 4;
    *(__m128 *)(a4 + 8) = _mm_loadh_ps((const double *)&v40);
  }
  else
  {
    v16 = sub_5C990((__int64)v12, (__int64)&nptr);
    v17 = (char *)s1;
    v37 = (char *)v44;
    v18 = nptr;
    if ( (_QWORD)v44 )
      v17 = nptr;
    v40 = *((_QWORD *)&v44 + 1);
    if ( (unsigned __int8)sub_5C880(v17, &v42) )
    {
      if ( a6 )
        v38 = v42;
      *(_QWORD *)(a2 + 24) = v38;
      v19 = sub_5C990((__int64)v16, (__int64)&nptr);
      v20 = nptr;
      v21 = (__int64)v19;
      v22 = (char *)s1;
      if ( (_QWORD)v44 )
        v22 = nptr;
      v37 = *((char **)&v44 + 1);
      if ( (unsigned __int8)sub_5C880(v22, (time_t *)(a2 + 32)) )
      {
        if ( a6 )
        {
          sub_5C990(v21, a2 + 40);
          v25 = 0;
        }
        else if ( *(_BYTE *)(a2 + 6) == 73 && *(_BYTE *)(v41 + 1) == 68 && *(_BYTE *)(v41 + 2) == 65 )
        {
          v23 = strlen((const char *)a2);
          v24 = v23;
          if ( !v23 )
          {
            v39[1] = 0;
LABEL_26:
            v25 = 0;
            goto LABEL_28;
          }
          v32 = v23 + 1;
          v33 = (void *)*v39;
          if ( v39[2] < v23 + 1 )
          {
            v36 = sub_1987B0(v39, *v39, v32, 1);
            *v39 = v36;
            v33 = (void *)v36;
          }
          v34 = v39;
          v35 = (const void *)a2;
          v25 = 0;
          v39[1] = v32;
          memmove(v33, v35, v24);
          *(_BYTE *)(*v34 + v24) = 0;
        }
        else
        {
          if ( (__int64 *)(a2 + 40) == v39 )
            goto LABEL_26;
          v27 = v39[1];
          if ( v27 > 1 )
          {
            v29 = (const void *)*v39;
            v30 = *(void **)(a2 + 40);
            if ( *(_QWORD *)(a2 + 56) < v27 )
            {
              v30 = (void *)sub_1987B0(a2 + 40, *(_QWORD *)(a2 + 40), v27, 1);
              *(_QWORD *)(a2 + 40) = v30;
            }
            *(_QWORD *)(a2 + 48) = v27;
            memmove(v30, v29, v27 - 1);
            v31 = *(_QWORD *)(a2 + 40);
            v25 = 0;
            *(_BYTE *)(v31 + v27 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 48) = 0;
            v25 = 0;
          }
        }
      }
      else
      {
        v28 = *(char **)a4;
        *(_QWORD *)a4 = v20;
        v25 = 6;
        *(__m128 *)(a4 + 8) = _mm_loadh_ps((const double *)&v37);
        v20 = v28;
      }
    }
    else
    {
      v20 = *(char **)a4;
      v25 = 5;
      *(_QWORD *)a4 = v18;
      *(__m128 *)(a4 + 8) = _mm_loadh_ps((const double *)&v40);
    }
  }
LABEL_28:
  if ( v20 )
    j__free(v20);
  return v25;
}
