__int64 __fastcall sub_35F60(
        __int64 a1,
        const void *a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10,
        char *s,
        int a12,
        __int64 *a13)
{
  size_t v16; // rax
  size_t v17; // r12
  __int64 v18; // rsi
  unsigned int v19; // ebp
  _QWORD *v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdx
  _QWORD *v25; // r14
  __int64 *v26; // r15
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rsi
  bool v30; // zf
  __int64 (__fastcall *v31)(__int64, __int64, _QWORD, _QWORD, __int64 *); // rax
  __int64 result; // rax
  __int64 v33; // rax
  __int64 (*v34)(); // rax
  void *v35; // rdi
  size_t v36; // r15
  const char *v37; // rax
  const char *v38; // rbx
  size_t v39; // rax
  size_t v40; // rbp
  char v41; // bp
  int v42; // eax
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  size_t v46; // r12
  void *v47; // rdi
  __int64 v48; // rax

  if ( s && (v16 = strlen(s), (v17 = v16) != 0) )
  {
    v35 = *(void **)(a1 + 584);
    v36 = v16 + 1;
    if ( *(_QWORD *)(a1 + 600) < v16 + 1 )
    {
      v45 = qvector_reserve();
      *(_QWORD *)(a1 + 584) = v45;
      v35 = (void *)v45;
    }
    *(_QWORD *)(a1 + 592) = v36;
    memmove(v35, s, v17);
    *(_BYTE *)(*(_QWORD *)(a1 + 584) + v17) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 592) = 0;
  }
  *(_BYTE *)(a1 + 861) = a6;
  v18 = a3;
  v19 = 0;
  *(_BYTE *)(a1 + 861) &= 1u;
  v20 = (_QWORD *)sub_38A20(a2, v18);
  v24 = *v20;
  v25 = v20;
  v26 = v20;
  if ( !*v20 )
    return 4294967293LL;
  do
  {
    ++v26;
    sub_48620(a1, (unsigned int)"ARG: %s\n", v24, v21, v22, v23);
    v24 = *v26;
    ++v19;
  }
  while ( *v26 );
  if ( !v19 )
    return 4294967293LL;
  sub_3A3E0(*(_QWORD *)(a1 + 864), (unsigned int)"ARG: %s\n", 0, v21, v22, v23);
  v27 = sub_33D00(a1, 0, 0xFFFFFFFF, a7, a8);
  if ( v27 == -1 )
    goto LABEL_20;
  if ( v27 != 1 || *(_DWORD *)(a1 + 1360) == 6 )
  {
    sub_3C300(*(_QWORD *)(a1 + 864), (a6 >> 7) & 1);
    v33 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 1369) = 0;
    v34 = *(__int64 (**)())(v33 + 720);
    if ( v34 == sub_1A4B0 )
    {
      qfree();
      return 4294967293LL;
    }
    v41 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *))v34)(a1, v19, v25);
    qfree();
    if ( !v41 )
      return 4294967293LL;
    v42 = sub_33D00(a1, 1, 0xFFFFFFFF, a7, a8);
    if ( v42 != -1 )
    {
      if ( (v42 & 1) == 0 || *(_DWORD *)(a1 + 1360) == 6 )
        return 4294967293LL;
      result = sub_35500(a1, -2, a2, a13, v43, v44, a7, a8, a9, a10);
      if ( (_DWORD)result == 1 )
      {
        *(_BYTE *)(a1 + 1368) = 1;
        *(_BYTE *)(a1 + 1370) = 0;
        return result;
      }
      if ( (_DWORD)result != -1 )
      {
        if ( (_DWORD)result != -2 )
          return 0xFFFFFFFFLL;
        return 4294967293LL;
      }
    }
LABEL_20:
    if ( a13 )
    {
      v37 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 864) + 56LL))(*(_QWORD *)(a1 + 864));
      v38 = v37;
      if ( v37 && (v39 = strlen(v37), (v40 = v39) != 0) )
      {
        v46 = v39 + 1;
        v47 = (void *)*a13;
        if ( a13[2] < v39 + 1 )
        {
          v48 = qvector_reserve();
          *a13 = v48;
          v47 = (void *)v48;
        }
        a13[1] = v46;
        memmove(v47, v38, v40);
        *(_BYTE *)(*a13 + v40) = 0;
      }
      else
      {
        a13[1] = 0;
      }
    }
    return 4294967294LL;
  }
  if ( !*(_QWORD *)(a1 + 960)
    && (int)sub_E8D0(
              1u,
              (__int64)"HIDECANCEL\nThere is already a process being debugged by remote.\nDo you want to attach to it?") <= 0 )
  {
    return 0xFFFFFFFFLL;
  }
  v28 = *(_QWORD *)a1;
  v29 = 0;
  v30 = *(_DWORD *)(a1 + 856) == 5;
  *(_BYTE *)(a1 + 1369) = 1;
  v31 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *))(v28 + 144);
  if ( v30 )
    v29 = 100001;
  return v31(a1, v29, 0, 0, a13);
}

