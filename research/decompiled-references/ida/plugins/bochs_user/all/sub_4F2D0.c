__int64 __fastcall sub_4F2D0(
        __int64 a1,
        const char *a2,
        _QWORD *a3,
        char a4,
        __int64 *a5,
        char a6,
        double a7,
        double a8)
{
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // r13
  __int64 v17; // rdi
  _QWORD *v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  size_t v22; // r15
  char *v23; // rsi
  _QWORD *v24; // rbx
  const char *v25; // r13
  const char *v26; // rdi
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rsi
  _QWORD *v30; // r8
  const char *v31; // rsi
  char *v32; // rdi
  int v33; // eax
  char *v34; // rcx
  __int64 v35; // rax
  size_t v36; // rax
  size_t v37; // rbx
  size_t v38; // rax
  size_t v39; // rbx
  void *v40; // rdi
  size_t v41; // r14
  void *v42; // rdi
  size_t v43; // r14
  __int64 v44; // rax
  __int64 v45; // rax
  char *s; // [rsp+0h] [rbp-20A8h]
  char *sa; // [rsp+0h] [rbp-20A8h]
  unsigned int sb; // [rsp+0h] [rbp-20A8h]
  _QWORD *v49; // [rsp+18h] [rbp-2090h]
  __int64 v50; // [rsp+20h] [rbp-2088h]
  char **p_s2; // [rsp+38h] [rbp-2070h] BYREF
  char *s2; // [rsp+40h] [rbp-2068h] BYREF
  __int128 v53; // [rsp+48h] [rbp-2060h]
  char v54[4096]; // [rsp+60h] [rbp-2048h] BYREF
  char v55[4104]; // [rsp+1060h] [rbp-1048h] BYREF
  unsigned __int64 v56; // [rsp+2068h] [rbp-40h]

  v11 = a1;
  v56 = __readfsqword(0x28u);
  v13 = sub_4B8A0((_QWORD *)a1, a2, 0);
  if ( v13 )
  {
    v14 = v13;
    if ( a3 )
      *a3 = *(_QWORD *)(v13 + 820);
    if ( a4 )
    {
      sa = (char *)v13;
      sub_36780(v13);
      v14 = (__int64)sa;
      if ( !a5 )
        return 0;
    }
    else if ( !a5 )
    {
      return 0;
    }
    *a5 = v14;
    return 0;
  }
  if ( a6 )
  {
    if ( (unsigned __int8)qfileexist() )
    {
      qstrncpy();
      qstrncpy();
      goto LABEL_12;
    }
    return 28;
  }
  if ( (unsigned int)sub_4B420(a1, a2) )
    return 28;
LABEL_12:
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"loading %s (%s)\n", v55, v54);
  v16 = operator new(0x39Cu);
  sub_369F0(v16);
  *(_DWORD *)(v16 + 792) = *(_DWORD *)(a1 + 136);
  result = sub_39E60((__int64 *)v16);
  if ( !(_DWORD)result )
  {
    if ( a6 )
      *(_BYTE *)(a1 + 57) = *(_WORD *)(v16 + 104) == 523;
    v17 = *(_QWORD *)(a1 + 112);
    v18 = (_QWORD *)(v11 + 96);
    v19 = *(_QWORD *)(v16 + 820);
    if ( v17 != v11 + 96 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v17 + 56);
        v21 = *(_QWORD *)(v20 + 820);
        if ( v19 >= v21 && v19 < *(unsigned int *)(v20 + 816) + v21 )
          break;
        v17 = std::_Rb_tree_increment();
        if ( (_QWORD *)v17 == v18 )
          goto LABEL_21;
      }
      if ( (unsigned int)sub_4EFC0(v11, v16, a7, a8) )
      {
        if ( v16 )
        {
          sub_37960(v16);
          operator delete((void *)v16, 0x39Cu);
        }
        return 37;
      }
    }
LABEL_21:
    v53 = 0;
    v22 = strlen(v54);
    s2 = (char *)qvector_reserve();
    *(_QWORD *)&v53 = v22 + 1;
    memmove(s2, v54, v22);
    s2[v22] = 0;
    if ( *(_QWORD *)(v11 + 104) )
    {
      v23 = (char *)s1;
      s = (char *)v16;
      v50 = v11;
      v24 = *(_QWORD **)(v11 + 104);
      if ( (_QWORD)v53 )
        v23 = s2;
      v49 = v18;
      v25 = v23;
      do
      {
        while ( 1 )
        {
          v26 = s1;
          if ( v24[5] )
            v26 = (const char *)v24[4];
          v27 = strcasecmp(v26, v25);
          v28 = v24[2];
          v29 = v24[3];
          if ( v27 >= 0 )
            break;
          v24 = (_QWORD *)v24[3];
          if ( !v29 )
            goto LABEL_30;
        }
        v18 = v24;
        v24 = (_QWORD *)v24[2];
      }
      while ( v28 );
LABEL_30:
      v30 = v18;
      v16 = (__int64)s;
      v11 = v50;
      if ( v18 != v49 )
      {
        v31 = s1;
        if ( v18[5] )
          v31 = (const char *)v18[4];
        v32 = (char *)s1;
        if ( (_QWORD)v53 )
          v32 = s2;
        v33 = strcasecmp(v32, v31);
        v34 = s2;
        v30 = v18;
        if ( v33 >= 0 )
          goto LABEL_37;
      }
    }
    else
    {
      v30 = (_QWORD *)(v11 + 96);
    }
    p_s2 = &s2;
    v35 = sub_4E740((_QWORD *)(v11 + 88), v30, (__int64 **)&p_s2);
    v34 = s2;
    v30 = (_QWORD *)v35;
LABEL_37:
    v30[7] = v16;
    if ( v34 )
    {
      *(_QWORD *)&v53 = 0;
      qfree();
    }
    v36 = strlen(v55);
    v37 = v36;
    if ( v36 )
    {
      v40 = *(void **)(v16 + 852);
      v41 = v36 + 1;
      if ( *(_QWORD *)(v16 + 868) < v36 + 1 )
      {
        v44 = qvector_reserve();
        *(_QWORD *)(v16 + 852) = v44;
        v40 = (void *)v44;
      }
      *(_QWORD *)(v16 + 860) = v41;
      memmove(v40, v55, v37);
      *(_BYTE *)(*(_QWORD *)(v16 + 852) + v37) = 0;
    }
    else
    {
      *(_QWORD *)(v16 + 860) = 0;
    }
    if ( !*(_DWORD *)(v16 + 752) )
    {
      qsplitfile();
      v38 = strlen(v55);
      v39 = v38;
      if ( v38 )
      {
        v42 = *(void **)(v16 + 876);
        v43 = v38 + 1;
        if ( *(_QWORD *)(v16 + 892) < v38 + 1 )
        {
          v45 = qvector_reserve();
          *(_QWORD *)(v16 + 876) = v45;
          v42 = (void *)v45;
        }
        *(_QWORD *)(v16 + 884) = v43;
        memmove(v42, v55, v39);
        *(_BYTE *)(*(_QWORD *)(v16 + 876) + v39) = 0;
      }
      else
      {
        *(_QWORD *)(v16 + 884) = 0;
      }
    }
    if ( a3 )
      *a3 = *(_QWORD *)(v16 + 820);
    if ( a5 )
      *a5 = v16;
    return 0;
  }
  if ( v16 )
  {
    sb = result;
    sub_37960(v16);
    operator delete((void *)v16, 0x39Cu);
    return sb;
  }
  return result;
}

