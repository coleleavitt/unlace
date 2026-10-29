__int64 __fastcall sub_14660(__int64 a1, _QWORD *a2, const char *a3)
{
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 v7; // r15
  _QWORD *v8; // rbx
  size_t v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  char *v14; // rdi
  const void *v16; // r14
  void *v17; // rdi
  __int64 v18; // rax
  const char *v19; // [rsp+0h] [rbp-98h]
  unsigned __int8 v20; // [rsp+Fh] [rbp-89h]
  char *s1; // [rsp+20h] [rbp-78h]

  v4 = qword_6AC60;
  if ( qword_6AC60 )
  {
    v6 = xmmword_6AC68;
    if ( (_QWORD)xmmword_6AC68 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v4 + 80 * v7);
        if ( v8[5] )
        {
          v8[6] = 0;
          qfree();
        }
        if ( v8[2] )
        {
          v8[3] = 0;
          qfree();
        }
        ++v7;
        v4 = qword_6AC60;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&xmmword_6AC68 = 0;
    qfree();
    qword_6AC60 = 0;
    *((_QWORD *)&xmmword_6AC68 + 1) = 0;
  }
  sub_12BC0(qword_6AC88);
  qword_6AC88 = nullptr;
  qword_6AC90 = (__int64)&dword_6AC80;
  qword_6AC98 = (__int64)&dword_6AC80;
  qword_6ACA0 = 0;
  if ( dest )
  {
    *(_QWORD *)&xmmword_6AC48 = 0;
    qfree();
    dest = nullptr;
    *((_QWORD *)&xmmword_6AC48 + 1) = 0;
  }
  s1 = nullptr;
  if ( a3 )
  {
    v9 = strlen(a3);
    if ( v9 )
    {
      s1 = (char *)qvector_reserve();
      memmove(s1, a3, v9);
      s1[v9] = 0;
    }
  }
  else
  {
    v19 = "gdb_arch.cfg";
    v20 = choose_ioport_device();
    if ( !v20 )
    {
      v14 = nullptr;
      goto LABEL_21;
    }
  }
  if ( read_ioports() < 0 )
  {
    v20 = 0;
  }
  else
  {
    qword_6AC58 = -1;
    sub_139A0((__int64)&dest);
    if ( (void **)a1 != &dest )
    {
      v13 = xmmword_6AC48;
      if ( (unsigned __int64)xmmword_6AC48 > 1 )
      {
        v16 = dest;
        v17 = *(void **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)xmmword_6AC48 )
        {
          v18 = qvector_reserve();
          *(_QWORD *)a1 = v18;
          v17 = (void *)v18;
        }
        *(_QWORD *)(a1 + 8) = v13;
        memmove(v17, v16, v13 - 1);
        *(_BYTE *)(*(_QWORD *)a1 + v13 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
    ((void (__fastcall *)(__int64, __int64 *, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64, __int64, const char *))callui)(
      1084,
      &qword_6AC60,
      &callui,
      v10,
      v11,
      v12,
      v19);
    v20 = 1;
    *a2 = qword_6AC58;
  }
  v14 = s1;
LABEL_21:
  if ( v14 )
    qfree();
  return v20;
}

