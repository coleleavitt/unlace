const char *__fastcall sub_53CC0(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r12
  _BYTE *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  size_t v11; // rax
  size_t v12; // r12
  size_t v13; // rax
  size_t v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rsi
  void *v19; // rdi
  size_t v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rdi
  size_t v27; // r12
  __int64 v28; // rax
  int v29; // [rsp+4h] [rbp-844h] BYREF
  __int64 v30; // [rsp+8h] [rbp-840h] BYREF
  char s[8]; // [rsp+10h] [rbp-838h] BYREF
  char v32; // [rsp+18h] [rbp-830h]
  char v33; // [rsp+40Fh] [rbp-439h]
  __int64 v34; // [rsp+410h] [rbp-438h] BYREF
  char v35; // [rsp+418h] [rbp-430h]
  char v36; // [rsp+80Fh] [rbp-39h]
  unsigned __int64 v37; // [rsp+818h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  v33 = 0;
  v36 = 0;
  if ( (unsigned int)qsscanf(a3, "spr %1023s %lli%n", s, &v30, &v29) == 2 )
  {
    v5 = skip_spaces(&a3[v29]);
    v6 = (_QWORD *)a1[12];
    v7 = (_BYTE *)v5;
    v8 = v6[48];
    v9 = v6[47];
    if ( v6[49] < (unsigned __int64)(v8 + 1) )
    {
      v24 = qvector_reserve(v6 + 47, v9, v8 + 1, 88);
      v8 = v6[48];
      v6[47] = v24;
      v9 = v24;
    }
    v10 = v9 + 88 * v8;
    *(_QWORD *)v10 = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 32) = 0;
    *(_QWORD *)(v10 + 56) = 0;
    *(_QWORD *)(v10 + 80) = 0;
    *(_OWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 40) = 0;
    *(_OWORD *)(v10 + 64) = 0;
    ++v6[48];
    goto LABEL_20;
  }
  if ( (unsigned int)qsscanf(a3, "dcr %1023s %lli%n", s, &v30, &v29) == 2 )
  {
    v15 = skip_spaces(&a3[v29]);
    v16 = (_QWORD *)a1[12];
    v7 = (_BYTE *)v15;
    v17 = v16[51];
    v18 = v16[50];
    if ( v16[52] < (unsigned __int64)(v17 + 1) )
    {
      v25 = qvector_reserve(v16 + 50, v18, v17 + 1, 88);
      v17 = v16[51];
      v16[50] = v25;
      v18 = v25;
    }
    v10 = v18 + 88 * v17;
    *(_QWORD *)v10 = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 32) = 0;
    *(_QWORD *)(v10 + 56) = 0;
    *(_QWORD *)(v10 + 80) = 0;
    *(_OWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 40) = 0;
    *(_OWORD *)(v10 + 64) = 0;
    ++v16[51];
LABEL_20:
    *(_QWORD *)v10 = v30;
    v11 = strlen(s);
    v12 = v11;
    if ( v11 )
    {
      v19 = *(void **)(v10 + 8);
      v20 = v11 + 1;
      if ( *(_QWORD *)(v10 + 24) < v11 + 1 )
      {
        v23 = qvector_reserve(v10 + 8, *(_QWORD *)(v10 + 8), v20, 1);
        *(_QWORD *)(v10 + 8) = v23;
        v19 = (void *)v23;
      }
      *(_QWORD *)(v10 + 16) = v20;
      memmove(v19, s, v12);
      *(_BYTE *)(*(_QWORD *)(v10 + 8) + v12) = 0;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = 0;
    }
    if ( !*v7 )
      return nullptr;
    if ( v7 && (v13 = strlen(v7), (v14 = v13) != 0) )
    {
      v26 = *(void **)(v10 + 32);
      v27 = v13 + 1;
      if ( *(_QWORD *)(v10 + 48) < v13 + 1 )
      {
        v28 = qvector_reserve(v10 + 32, *(_QWORD *)(v10 + 32), v27, 1);
        *(_QWORD *)(v10 + 32) = v28;
        v26 = (void *)v28;
      }
      *(_QWORD *)(v10 + 40) = v27;
      memmove(v26, v7, v14);
      *(_BYTE *)(*(_QWORD *)(v10 + 32) + v14) = 0;
      return nullptr;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = 0;
      return nullptr;
    }
  }
  if ( (unsigned int)qsscanf(a3, "%1023[^=] = %1023s", s, &v34) != 2 )
    return sub_53A20(a1, a3);
  if ( *(_DWORD *)s == 1145915731 && !s[4] )
  {
    if ( v34 != 0x43455649544C41LL )
    {
      if ( (_DWORD)v34 == 4542547 )
      {
        *(_DWORD *)(a1[12] + 460) = *(_DWORD *)(a1[12] + 460) & 0xFFFFFFF0 | 1;
        return nullptr;
      }
      else if ( (_DWORD)v34 == 1380532560 && *(_DWORD *)((char *)&v34 + 3) == 4474194 )
      {
        *(_DWORD *)(a1[12] + 460) = *(_DWORD *)(a1[12] + 460) & 0xFFFFFFF0 | 3;
        return nullptr;
      }
      else if ( (_DWORD)v34 == 5264204 )
      {
        *(_DWORD *)(a1[12] + 460) = *(_DWORD *)(a1[12] + 460) & 0xFFFFFFF0 | 4;
        return nullptr;
      }
      else if ( (_DWORD)v34 == 827870550 && *(_DWORD *)((char *)&v34 + 3) == 3682865 )
      {
        *(_DWORD *)(a1[12] + 460) = *(_DWORD *)(a1[12] + 460) & 0xFFFFFFF0 | 2;
        return nullptr;
      }
      else
      {
        return "Invalid SIMD";
      }
    }
    *(_DWORD *)(a1[12] + 460) &= 0xFFFFFFF0;
    return nullptr;
  }
  if ( *(_QWORD *)s == 0x454C49464F5250LL )
  {
    if ( (_DWORD)v34 == 1448232275 && *(_DWORD *)((char *)&v34 + 3) == 5391702 )
    {
      *(_DWORD *)(a1[12] + 460) |= 0x20u;
      return nullptr;
    }
    else if ( v34 != 0x4445444445424D45LL || v35 )
    {
      return "PROFILE should be SERVER or EMBEDDED";
    }
    else
    {
      *(_DWORD *)(a1[12] + 460) &= ~0x20u;
      return nullptr;
    }
  }
  if ( *(_QWORD *)s != 0x455341424F494D4DLL || v32 )
    return sub_53A20(a1, a3);
  if ( (unsigned int)qsscanf(&v34, "%lli", &v30) != 1 )
    return nullptr;
  v21 = a1[12];
  v22 = v30;
  if ( v30 == *(_QWORD *)(*(_QWORD *)(v21 + 32) + 16LL) )
    v22 = -1;
  *(_QWORD *)(v21 + 440) = v22;
  return nullptr;
}

