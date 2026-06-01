__int64 __fastcall sub_1C2320(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r12
  unsigned int v8; // r13d
  int v9; // r15d
  int v11; // r14d
  int v12; // eax
  int v13; // r12d
  _DWORD *v14; // r15
  __int64 v15; // rax
  unsigned __int16 v16; // ax
  __int64 v17; // rdx
  _DWORD *v18; // rsi
  _WORD *v19; // rdx
  __int16 v20; // cx
  __int64 v21; // rax
  __int64 *v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r14
  _DWORD *v27; // r13
  char *v28; // rbx
  unsigned int v29; // [rsp+4h] [rbp-C4h]
  __int16 v30; // [rsp+4h] [rbp-C4h]
  _DWORD *v31; // [rsp+18h] [rbp-B0h]
  char v32; // [rsp+23h] [rbp-A5h]
  _DWORD *src; // [rsp+30h] [rbp-98h]
  __int128 v35; // [rsp+38h] [rbp-90h]
  int v36; // [rsp+60h] [rbp-68h]

  v6 = a3;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*a2 + 184LL))(a2, a3);
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, v7);
  v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, a4);
  if ( v9 != -1 )
  {
    if ( (int)v8 >= (int)a4 )
    {
LABEL_3:
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 8) = v9;
      return a1;
    }
LABEL_5:
    if ( 2 * v8 == a4 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v8 + v6, v8);
      if ( v12 != -1 )
      {
        *(_DWORD *)a1 = 4;
        *(_DWORD *)(a1 + 8) = v9 | (v12 << 16);
        return a1;
      }
    }
    v11 = 0;
LABEL_19:
    src = nullptr;
    v30 = 0;
    v35 = 0;
    v32 = *(_BYTE *)(a2[12] + 145LL);
    v13 = a4;
    if ( a4 )
    {
      while ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v8) != -1 )
      {
        LOWORD(v36) = v30;
        v16 = v8 - v11;
        if ( (int)(v8 - v11) > v13 )
          v16 = v13;
        v6 += v8;
        HIWORD(v36) = v16;
        v13 -= v16;
        v30 += v16;
        if ( v32 )
        {
          v14 = src;
          copy_argloc();
          v15 = v35;
          if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
          {
            src = (_DWORD *)qvector_reserve();
            v14 = src;
            v15 = v35;
          }
          memmove(v14 + 6, v14, 24 * v15);
          *v14 = 0;
          copy_argloc();
          *(_QWORD *)&v35 = v35 + 1;
          v14[4] = v36;
          cleanup_argloc();
        }
        else
        {
          copy_argloc();
          v17 = v35;
          v18 = src;
          if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
          {
            src = (_DWORD *)qvector_reserve();
            v17 = v35;
            v18 = src;
          }
          v18[6 * v17] = 0;
          v31 = &v18[6 * v17];
          copy_argloc();
          *(_QWORD *)&v35 = v35 + 1;
          v31[4] = v36;
          cleanup_argloc();
        }
        v11 = 0;
        cleanup_argloc();
        if ( !v13 )
        {
          if ( v32 )
          {
            v19 = src;
            if ( 24LL * (_QWORD)v35 )
            {
              do
              {
                v20 = a4 - v19[9] - v19[8];
                v19 += 12;
                *(v19 - 4) = v20;
              }
              while ( v19 != (_WORD *)&src[6 * (_QWORD)v35] );
            }
          }
          goto LABEL_35;
        }
      }
    }
    else
    {
LABEL_35:
      v21 = qalloc_or_throw();
      *(_QWORD *)v21 = 0;
      v22 = (__int64 *)v21;
      *(_OWORD *)(v21 + 8) = 0;
      if ( (_QWORD)v35 )
      {
        v24 = qalloc_or_throw();
        *v22 = v24;
        v25 = v24;
        v26 = 0;
        v22[2] = v35;
        while ( 1 )
        {
          v27 = (_DWORD *)(24 * v26 + v25);
          v28 = (char *)&src[6 * v26];
          *v27 = 0;
          copy_argloc();
          ++v26;
          v27[4] = *((_DWORD *)v28 + 4);
          if ( (_QWORD)v35 == v26 )
            break;
          v25 = *v22;
        }
        v22[1] = v35;
      }
      if ( v22 )
      {
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v22;
      }
    }
    if ( src )
    {
      if ( (_QWORD)v35 )
      {
        v23 = 0;
        do
        {
          ++v23;
          cleanup_argloc();
        }
        while ( (_QWORD)v35 != v23 );
      }
      qfree();
    }
    return a1;
  }
  v11 = 0;
  v29 = v6 + a4;
  if ( (int)v6 > (int)v7 )
  {
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v29 - v6);
      if ( v9 != -1 )
        break;
      --v6;
      ++v11;
      if ( (_DWORD)v7 == v6 )
        goto LABEL_16;
    }
LABEL_11:
    if ( v11 >= (int)v8 )
      return a1;
    if ( (int)(v11 + a4) <= (int)v8 )
    {
      v9 |= v11 << 16;
      goto LABEL_3;
    }
    if ( v11 )
      goto LABEL_19;
    goto LABEL_5;
  }
  if ( v6 != (_DWORD)v7 )
  {
    if ( !under_debugger )
      sub_37DDE0(51576);
    BUG();
  }
LABEL_16:
  v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, v6, v8);
  if ( v9 != -1 )
    goto LABEL_11;
  return a1;
}

