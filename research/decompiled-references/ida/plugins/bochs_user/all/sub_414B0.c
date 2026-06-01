__int64 __fastcall sub_414B0(__int64 a1, const char *a2, char *const *a3)
{
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  __pid_t v10; // eax
  int v11; // edi
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdi
  int pipedes[2]; // [rsp+8h] [rbp-30h] BYREF
  int fd[2]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 36) )
    return 20;
  if ( pipe(pipedes) || pipe(fd) )
  {
    v5 = 6;
  }
  else
  {
    v10 = fork();
    *(_DWORD *)(a1 + 36) = v10;
    if ( v10 == -1 )
    {
      v5 = 7;
    }
    else
    {
      v11 = pipedes[0];
      if ( !v10 )
      {
        dup2(pipedes[0], 0);
        dup2(fd[1], 1);
        dup2(fd[1], 2);
        if ( pipedes[0] )
          close(pipedes[0]);
        if ( pipedes[1] )
          close(pipedes[1]);
        if ( fd[0] )
          close(fd[0]);
        if ( fd[1] )
          close(fd[1]);
        setbuf(stdin, nullptr);
        setbuf(stdout, nullptr);
        setbuf(stderr, nullptr);
        execv(a2, a3);
        exit(-7);
      }
      v12 = _mm_cvtsi32_si128(pipedes[1]);
      v13 = _mm_cvtsi32_si128(fd[0]);
      *(_DWORD *)(a1 + 28) = fd[1];
      *(_QWORD *)(a1 + 20) = _mm_unpacklo_epi32(v13, v12).m128i_u64[0];
      close(v11);
      *(_QWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 32) = 1;
      v14 = qthread_create();
      *(_QWORD *)a1 = v14;
      if ( v14 )
      {
        *(_QWORD *)(a1 + 8) = qthread_create();
        return 0;
      }
      v15 = a1;
      v5 = 8;
      sub_41300(v15);
    }
  }
  if ( pipedes[0] )
  {
    close(pipedes[0]);
    v6 = pipedes[1];
    if ( !pipedes[1] )
    {
LABEL_6:
      v7 = fd[0];
      if ( !fd[0] )
        goto LABEL_7;
LABEL_15:
      close(v7);
      v8 = fd[1];
      if ( !fd[1] )
        return v5;
      goto LABEL_14;
    }
  }
  else
  {
    v6 = pipedes[1];
    if ( !pipedes[1] )
      goto LABEL_6;
  }
  close(v6);
  v7 = fd[0];
  if ( fd[0] )
    goto LABEL_15;
LABEL_7:
  v8 = fd[1];
  if ( fd[1] )
LABEL_14:
    close(v8);
  return v5;
}

