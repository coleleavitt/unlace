__int64 __fastcall sub_FDC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  const char *v7; // r13
  char v8; // al
  const char *v9; // rsi
  size_t v10; // rdx
  __int64 v11; // rdx
  size_t v12; // rdx
  __int64 v14; // rax

  if ( !(_BYTE)byte_28688 && __cxa_guard_acquire(&byte_28688) )
  {
    xmmword_28698 = 0;
    qword_28690 = nullptr;
    v14 = qvector_reserve(&qword_28690, 0, 7, 1);
    qword_28690 = (char *)v14;
    *(_QWORD *)&xmmword_28698 = 7;
    *(_WORD *)(v14 + 4) = 15481;
    *(_DWORD *)v14 = 1634890305;
    qword_28690[6] = 0;
    __cxa_atexit((void (*)(void *))sub_72D0, &qword_28690, &off_274A0);
    __cxa_guard_release(&byte_28688);
  }
  if ( !(_BYTE)byte_28668 && __cxa_guard_acquire(&byte_28668) )
  {
    xmmword_28678 = 0;
    qword_28670 = nullptr;
    qword_28670 = (char *)qvector_reserve(&qword_28670, 0, 12, 1);
    *(_QWORD *)&xmmword_28678 = 12;
    strcpy(qword_28670, "Dictionary<");
    __cxa_atexit((void (*)(void *))sub_72D0, &qword_28670, &off_274A0);
    __cxa_guard_release(&byte_28668);
  }
  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0;
  if ( !v5 )
    return v6;
  v7 = *(const char **)a3;
  LOBYTE(v6) = v5 != 1 && *v7 == 91;
  if ( (_BYTE)v6 )
  {
    v8 = v7[v5 - 2];
    if ( v8 == 93 )
      goto LABEL_21;
    if ( !(_QWORD)xmmword_28678 )
      goto LABEL_10;
    v9 = qword_28670;
    v10 = xmmword_28678 - 1;
    if ( (_QWORD)xmmword_28678 != 1 && qword_28670 )
    {
      if ( v5 - 1 < v10 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_9:
    v8 = v7[v5 - 2];
LABEL_10:
    if ( v8 == 62 )
      goto LABEL_21;
LABEL_16:
    v11 = xmmword_28698;
    if ( !(_QWORD)xmmword_28698 )
      goto LABEL_20;
    goto LABEL_17;
  }
  if ( !(_QWORD)xmmword_28678 || (v9 = qword_28670, v10 = xmmword_28678 - 1, (_QWORD)xmmword_28678 == 1) || !qword_28670 )
  {
    if ( v5 == 1 )
      return v6;
    goto LABEL_9;
  }
  if ( v5 - 1 >= v10 )
  {
LABEL_15:
    if ( strncmp(v7, v9, v10) )
      goto LABEL_16;
    goto LABEL_9;
  }
  v11 = xmmword_28698;
  if ( (_QWORD)xmmword_28698 )
  {
LABEL_17:
    v12 = v11 - 1;
    LOBYTE(v6) = qword_28690 == nullptr || v12 == 0;
    if ( !(_BYTE)v6 )
    {
      if ( v5 - 1 < v12 || strncmp(v7, qword_28690, v12) )
        return v6;
      goto LABEL_20;
    }
  }
  if ( v5 == 1 )
    return 0;
LABEL_20:
  v6 = 0;
  if ( v7[v5 - 2] == 62 )
  {
LABEL_21:
    *(_DWORD *)(a2 + 64) = 11;
    v6 = 1;
    sub_FC40(a1, a2);
  }
  return v6;
}

