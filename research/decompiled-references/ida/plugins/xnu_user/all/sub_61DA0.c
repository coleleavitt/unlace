__int64 __fastcall sub_61DA0(
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
  __int64 v23; // rdx
  _QWORD *v24; // r14
  __int64 *v25; // r15
  int v26; // r9d
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
  __int64 v44; // rax
  size_t v45; // r12
  void *v46; // rdi
  __int64 v47; // rax

  if ( s && (v16 = strlen(s), (v17 = v16) != 0) )
  {
    v35 = *(void **)(a1 + 584);
    v36 = v16 + 1;
    if ( *(_QWORD *)(a1 + 600) < v16 + 1 )
    {
      v44 = qvector_reserve();
      *(_QWORD *)(a1 + 584) = v44;
      v35 = (void *)v44;
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
  v20 = (_QWORD *)sub_644F0(a2, v18);
  v23 = *v20;
  v24 = v20;
  v25 = v20;
  if ( !*v20 )
    return 4294967293LL;
  do
  {
    ++v25;
    sub_70460(a1, (unsigned int)"ARG: %s\n", v23, v21, v22);
    v23 = *v25;
    ++v19;
  }
  while ( *v25 );
  if ( !v19 )
    return 4294967293LL;
  sub_65C90(*(_QWORD *)(a1 + 864), (unsigned int)"ARG: %s\n", 0, v21, v22, v26);
  v27 = sub_5FB20(a1, 0, 0xFFFFFFFF, a7, a8);
  if ( v27 == -1 )
    goto LABEL_20;
  if ( v27 != 1 || *(_DWORD *)(a1 + 1360) == 6 )
  {
    sub_67970(*(_QWORD *)(a1 + 864), (a6 >> 7) & 1);
    v33 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 1369) = 0;
    v34 = *(__int64 (**)())(v33 + 720);
    if ( v34 == sub_18B30 )
    {
      qfree();
      return 4294967293LL;
    }
    v41 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *))v34)(a1, v19, v24);
    qfree();
    if ( !v41 )
      return 4294967293LL;
    v42 = sub_5FB20(a1, 1, 0xFFFFFFFF, a7, a8);
    if ( v42 != -1 )
    {
      if ( (v42 & 1) == 0 || *(_DWORD *)(a1 + 1360) == 6 )
        return 4294967293LL;
      result = sub_61340(a1, -2, a2, a13, v43, a7, a8, a9, a10);
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
        v45 = v39 + 1;
        v46 = (void *)*a13;
        if ( a13[2] < v39 + 1 )
        {
          v47 = qvector_reserve();
          *a13 = v47;
          v46 = (void *)v47;
        }
        a13[1] = v45;
        memmove(v46, v38, v40);
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
    && (int)sub_14DE0(
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

