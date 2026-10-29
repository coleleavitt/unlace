bool __fastcall sub_71760(unsigned __int64 **a1, _QWORD *a2, __int64 a3, __int64 a4, double a5)
{
  char v8; // r12
  bool result; // al
  unsigned __int64 *v10; // rsi
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rax
  __int64 (*v15)(); // rax
  char *v16; // rdi
  int v17; // r14d
  unsigned __int64 v18; // rax
  char *v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 *v23; // rax
  __int64 v24; // rax
  unsigned __int64 *v25; // rdx
  __int64 v26; // rsi
  unsigned int v27; // r15d
  __int64 (__fastcall *v28)(__int64, __int64); // rcx
  __int64 v29; // rsi
  __int64 (*v30)(); // rax
  int v31; // eax
  char *v32; // rdi
  char *v33; // rax
  int v34; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v35; // [rsp+8h] [rbp-60h]
  __int128 v36; // [rsp+10h] [rbp-58h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v8 = a4;
  if ( ((_BYTE)a1[100] & 0x10) != 0
    && (*((_DWORD *)a2 + 8) == 4 || a1 + 77 == (unsigned __int64 **)sub_71660(a1, *a2, *((_DWORD *)a2 + 107), a4)) )
  {
LABEL_3:
    result = 1;
    if ( (v8 & 2) == 0 )
      return ((int (__fastcall *)(unsigned __int64 **, __int64))(*a1)[21])(a1, a3) > 0;
    return result;
  }
  v10 = a1[54];
  v11 = a1[55];
  v12 = *a2;
  v13 = &v10[(_QWORD)v11];
  v14 = v10;
  if ( v10 != v13 )
  {
    while ( v12 != *v14 )
    {
      if ( v13 == ++v14 )
        goto LABEL_12;
    }
    if ( v13 != v14 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
  }
LABEL_12:
  if ( a1[56] < (unsigned __int64 *)((char *)v11 + 1) )
  {
    v24 = qvector_reserve();
    v25 = a1[55];
    a1[54] = (unsigned __int64 *)v24;
    v13 = (unsigned __int64 *)(v24 + 8LL * (_QWORD)v25);
  }
  *v13 = v12;
  a1[55] = (unsigned __int64 *)((char *)a1[55] + 1);
  if ( (v8 & 1) != 0 )
  {
LABEL_15:
    v15 = (__int64 (*)())(*a1)[1];
    if ( v15 == sub_6E1C0 )
      goto LABEL_16;
    v17 = ((__int64 (__fastcall *)(unsigned __int64 **, _QWORD))v15)(a1, *(unsigned int *)(a3 + 4));
    if ( v17 <= 0 )
    {
      v16 = (char *)a1[54];
      v18 = *a2;
      v19 = &v16[8 * (_QWORD)a1[55]];
      if ( v19 == v16 )
        return 0;
LABEL_19:
      while ( v18 != *(_QWORD *)v16 )
      {
        v16 += 8;
        if ( v19 == v16 )
          goto LABEL_22;
      }
      if ( v16 != v19 )
      {
        memmove(v16, v16 + 8, v19 - v16 - 8);
        a1[55] = (unsigned __int64 *)((char *)a1[55] - 1);
      }
      goto LABEL_22;
    }
    v26 = *((unsigned int *)a2 + 8);
    if ( (_DWORD)v26 == 4 )
      v27 = *((_DWORD *)a2 + 12);
    else
      v27 = *((_DWORD *)a2 + 107);
    v17 = ((__int64 (__fastcall *)(unsigned __int64 **, __int64, _QWORD, _QWORD, _QWORD))(*a1)[40])(
            a1,
            v26,
            *a2,
            a2[5],
            v27);
    if ( v17 <= 0 )
    {
LABEL_38:
      v29 = *(unsigned int *)(a3 + 4);
      v30 = (__int64 (*)())(*a1)[2];
      if ( v30 == sub_6E1D0 )
      {
LABEL_39:
        sub_6FF00((__int64)a1, (__int64)"%d: could not resume suspended threads\n", v29);
LABEL_16:
        v16 = (char *)a1[54];
        v17 = 0;
        v18 = *a2;
        v19 = &v16[8 * (_QWORD)a1[55]];
        if ( v16 != v19 )
          goto LABEL_19;
        return 0;
      }
      if ( ((int (__fastcall *)(unsigned __int64 **, __int64))v30)(a1, v29) <= 0 )
      {
        LODWORD(v29) = *(_DWORD *)(a3 + 4);
        goto LABEL_39;
      }
      v16 = (char *)a1[54];
      v18 = *a2;
      v19 = &v16[8 * (_QWORD)a1[55]];
      if ( v16 != v19 )
        goto LABEL_19;
LABEL_22:
      if ( v17 <= 0 )
        return 0;
      if ( (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) != 6 )
        return 0;
      goto LABEL_3;
    }
    v28 = (__int64 (__fastcall *)(__int64, __int64))**a1;
    if ( v28 == sub_71230 )
    {
      if ( ((int (__fastcall *)(unsigned __int64 **, _QWORD, __int64))(*a1)[27])(a1, *(unsigned int *)(a3 + 4), 1) <= 0 )
        goto LABEL_35;
      v31 = sub_711A0((__int64)a1, a3);
    }
    else
    {
      v31 = ((__int64 (__fastcall *)(unsigned __int64 **, __int64, _QWORD *))v28)(a1, a3, a2 + 8);
    }
    if ( v31 > 0 )
    {
LABEL_36:
      if ( ((int (__fastcall *)(unsigned __int64 **, _QWORD, _QWORD, _QWORD, _QWORD))(*a1)[39])(
             a1,
             0,
             *((unsigned int *)a2 + 8),
             *a2,
             v27) <= 0 )
      {
        v17 = 0;
        sub_6FF00((__int64)a1, (__int64)"%a: could not restore deleted bpt\n", a5);
      }
      goto LABEL_38;
    }
LABEL_35:
    v17 = 0;
    sub_1BF10((__int64)a1, (__int64)"%a: failed to single step\n", a5);
    goto LABEL_36;
  }
  v20 = *a2;
  a5 = 0.0;
  v21 = *(unsigned int *)(a3 + 4);
  v34 = -2;
  v22 = *((unsigned int *)a1 + 196);
  v35 = v20;
  v23 = *a1;
  v36 = 0;
  if ( ((int (__fastcall *)(unsigned __int64 **, __int64, __int64, int *, _QWORD))v23[29])(a1, v21, v22, &v34, 0) > 0 )
  {
    if ( v34 >= -1 && v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree();
    }
    goto LABEL_15;
  }
  v32 = (char *)a1[54];
  v33 = &v32[8 * (_QWORD)a1[55]];
  if ( v32 != v33 )
  {
    while ( *a2 != *(_QWORD *)v32 )
    {
      v32 += 8;
      if ( v33 == v32 )
        goto LABEL_53;
    }
    if ( v32 != v33 )
    {
      memmove(v32, v32 + 8, v33 - v32 - 8);
      a1[55] = (unsigned __int64 *)((char *)a1[55] - 1);
    }
  }
LABEL_53:
  if ( v34 < -1 || !v35 )
    return 0;
  *(_QWORD *)&v36 = 0;
  qfree();
  return 0;
}

