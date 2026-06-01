__int64 __fastcall sub_1C69A0(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4, double a5)
{
  unsigned int v7; // ebx
  __int64 v8; // r12
  unsigned int v9; // r13d
  __int64 v10; // rsi
  _WORD *v11; // rdx
  int v12; // r15d
  int v14; // r14d
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r12d
  char *v19; // r15
  __int64 v20; // rax
  signed __int64 v21; // r8
  unsigned int v22; // eax
  unsigned __int16 v23; // ax
  __int64 v24; // rdx
  char *v25; // rsi
  char *v26; // rax
  char *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rbp
  __int64 v32; // r12
  void *v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r14
  _DWORD *v39; // r13
  char *v40; // rbx
  unsigned int v41; // [rsp+4h] [rbp-C4h]
  __int16 v42; // [rsp+4h] [rbp-C4h]
  char *v43; // [rsp+18h] [rbp-B0h]
  signed __int64 v44; // [rsp+18h] [rbp-B0h]
  char v45; // [rsp+23h] [rbp-A5h]
  void *src; // [rsp+30h] [rbp-98h] BYREF
  __int128 v49; // [rsp+38h] [rbp-90h]
  int v50; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-70h]
  int v52; // [rsp+60h] [rbp-68h]
  _DWORD v53[4]; // [rsp+70h] [rbp-58h] BYREF
  int v54; // [rsp+80h] [rbp-48h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v7 = a3;
  v55 = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v8 = (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*a2 + 184LL))(a2, a3);
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, v8);
  v10 = v7;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v7, a4);
  if ( v12 != -1 )
  {
    if ( (int)v9 >= (int)a4 )
    {
LABEL_3:
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 8) = v12;
      return a1;
    }
LABEL_5:
    if ( 2 * v9 == a4 )
    {
      v10 = v9 + v7;
      v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 176LL))(a2, v10, v9);
      if ( v15 != -1 )
      {
        *(_DWORD *)a1 = 4;
        *(_DWORD *)(a1 + 8) = v12 | (v15 << 16);
        return a1;
      }
    }
    v14 = 0;
LABEL_19:
    v16 = a2[12];
    v17 = (__int64)&v50;
    src = nullptr;
    v42 = 0;
    LOBYTE(v16) = *(_BYTE *)(v16 + 145);
    v49 = 0;
    v45 = v16;
    v18 = a4;
    if ( a4 )
    {
      while ( 1 )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v7, v9);
        if ( v22 == -1 )
          break;
        v50 = 3;
        LOWORD(v52) = v42;
        v51 = (unsigned int)(v14 << 16) | (unsigned __int64)v22;
        v23 = v9 - v14;
        if ( (int)(v9 - v14) > v18 )
          v23 = v18;
        v7 += v9;
        HIWORD(v52) = v23;
        v18 -= v23;
        v42 += v23;
        if ( v45 )
        {
          v19 = (char *)src;
          v53[0] = 0;
          copy_argloc();
          v54 = v52;
          v20 = v49;
          v21 = v19 - (_BYTE *)src;
          if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
          {
            v44 = v19 - (_BYTE *)src;
            v27 = (char *)qvector_reserve((__int64)&src, (__int64)src, v49 + 1, 24);
            v21 = v44;
            src = v27;
            v19 = &v27[v44];
            v20 = v49;
          }
          memmove(v19 + 24, v19, 24 * v20 - v21);
          v10 = (__int64)v53;
          *(_DWORD *)v19 = 0;
          copy_argloc();
          *(_QWORD *)&v49 = v49 + 1;
          *((_DWORD *)v19 + 4) = v54;
          cleanup_argloc();
        }
        else
        {
          v53[0] = 0;
          copy_argloc();
          v24 = v49;
          v25 = (char *)src;
          v54 = v52;
          if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)(v49 + 1) )
          {
            src = (void *)qvector_reserve((__int64)&src, (__int64)src, v49 + 1, 24);
            v24 = v49;
            v25 = (char *)src;
          }
          v26 = &v25[24 * v24];
          v10 = (__int64)v53;
          *(_DWORD *)v26 = 0;
          v43 = v26;
          copy_argloc();
          *(_QWORD *)&v49 = v49 + 1;
          *((_DWORD *)v43 + 4) = v54;
          cleanup_argloc();
        }
        v14 = 0;
        cleanup_argloc();
        if ( !v18 )
        {
          if ( v45 )
          {
            v11 = src;
            v10 = (__int64)src + 24 * v49;
            if ( 24LL * (_QWORD)v49 )
            {
              do
              {
                v17 = (unsigned __int16)a4;
                LOWORD(v17) = a4 - v11[9] - v11[8];
                v11 += 12;
                *(v11 - 4) = v17;
              }
              while ( v11 != (_WORD *)v10 );
            }
          }
          goto LABEL_35;
        }
      }
    }
    else
    {
LABEL_35:
      v28 = qalloc_or_throw(24, v10, (__int64)v11, v17);
      *(_QWORD *)v28 = 0;
      v31 = (__int64 *)v28;
      *(_OWORD *)(v28 + 8) = 0;
      v32 = v49;
      if ( (_QWORD)v49 )
      {
        v36 = qalloc_or_throw(24 * v49, v10, v29, v30);
        *v31 = v36;
        v37 = v36;
        v38 = 0;
        v31[2] = v32;
        while ( 1 )
        {
          v39 = (_DWORD *)(24 * v38 + v37);
          v40 = (char *)src + 24 * v38;
          *v39 = 0;
          copy_argloc();
          ++v38;
          v39[4] = *((_DWORD *)v40 + 4);
          if ( v32 == v38 )
            break;
          v37 = *v31;
        }
        v31[1] = v32;
      }
      if ( v31 )
      {
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v31;
      }
    }
    v33 = src;
    if ( src )
    {
      v34 = v49;
      if ( (_QWORD)v49 )
      {
        v35 = 0;
        do
        {
          ++v35;
          cleanup_argloc();
          v33 = src;
        }
        while ( v34 != v35 );
      }
      *(_QWORD *)&v49 = 0;
      qfree((__int64)v33);
    }
    return a1;
  }
  v14 = 0;
  v41 = v7 + a4;
  if ( (int)v7 > (int)v8 )
  {
    while ( 1 )
    {
      v10 = v7;
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v7, v41 - v7);
      if ( v12 != -1 )
        break;
      --v7;
      ++v14;
      if ( (_DWORD)v8 == v7 )
        goto LABEL_16;
    }
LABEL_11:
    if ( v14 >= (int)v9 )
      return a1;
    if ( (int)(v14 + a4) <= (int)v9 )
    {
      v12 |= v14 << 16;
      goto LABEL_3;
    }
    if ( v14 )
      goto LABEL_19;
    goto LABEL_5;
  }
  if ( v7 != (_DWORD)v8 )
  {
    if ( !under_debugger )
      sub_383060(0xC978u, a5);
    BUG();
  }
LABEL_16:
  v10 = v7;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v7, v9);
  if ( v12 != -1 )
    goto LABEL_11;
  return a1;
}

