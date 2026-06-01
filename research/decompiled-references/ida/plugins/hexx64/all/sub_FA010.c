__int64 __fastcall sub_FA010(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rbp
  int v5; // eax
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  void *v22; // rax
  size_t na; // [rsp+8h] [rbp-110h]
  size_t n; // [rsp+8h] [rbp-110h]
  char v25[8]; // [rsp+18h] [rbp-100h] BYREF
  _QWORD v26[2]; // [rsp+20h] [rbp-F8h] BYREF
  void *src; // [rsp+30h] [rbp-E8h]
  __int128 v28; // [rsp+38h] [rbp-E0h]
  void *v29; // [rsp+48h] [rbp-D0h]
  __int128 v30; // [rsp+50h] [rbp-C8h]
  __int64 v31; // [rsp+60h] [rbp-B8h]
  __int64 v32; // [rsp+68h] [rbp-B0h]
  __int64 v33; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+78h] [rbp-A0h]
  __int64 v35; // [rsp+88h] [rbp-90h]
  __int64 v36; // [rsp+90h] [rbp-88h]
  __int64 v37; // [rsp+98h] [rbp-80h]
  __int128 v38; // [rsp+A0h] [rbp-78h]
  __int64 v39; // [rsp+B0h] [rbp-68h]
  __int128 v40; // [rsp+B8h] [rbp-60h]
  char v41; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v3 = 1;
  v4 = a3;
  v42 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 72);
  if ( (unsigned int)(v5 - 208) > 0x2F )
  {
    v33 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v39 = 0;
    v34 = 0;
    v38 = 0;
    v40 = 0;
    if ( (v5 & 0xFFFFFF0F) != 0 || v5 == 192 )
    {
      HIDWORD(v35) = v5;
      LOBYTE(v5) = -64;
    }
    v41 = v5;
    v7 = a3 + 1;
    if ( a3 == -1 )
    {
      sub_32C270(v25, *(_QWORD *)(a1 + 1504), *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL));
    }
    else
    {
      v28 = 0;
      v32 = 0;
      LODWORD(v26[0]) = 0;
      v26[1] = 0;
      src = nullptr;
      v29 = nullptr;
      v31 = 0;
      v30 = 0;
      v8 = qvector_reserve((__int64)&v33, 0, a3 + 1, 80);
      v9 = v34;
      v33 = v8;
      v10 = v8;
      if ( (unsigned __int64)v34 < v7 )
      {
        while ( 1 )
        {
          v11 = v26;
          v12 = 80 * v9 + v10;
          *(_DWORD *)v12 = 0;
          copy_argloc();
          *(_QWORD *)(v12 + 16) = 0;
          *(_OWORD *)(v12 + 24) = 0;
          if ( (_QWORD)v28 )
          {
            na = v28;
            v14 = (void *)qalloc_or_throw(v28, (__int64)v26, v28, v13);
            *(_QWORD *)(v12 + 16) = v14;
            *(_QWORD *)(v12 + 32) = na;
            v11 = src;
            memcpy(v14, src, na);
            *(_QWORD *)(v12 + 24) = na;
          }
          *(_QWORD *)(v12 + 40) = 0;
          *(_OWORD *)(v12 + 48) = 0;
          if ( (_QWORD)v30 )
          {
            n = v30;
            v22 = (void *)qalloc_or_throw(v30, (__int64)v11, v30, v13);
            *(_QWORD *)(v12 + 40) = v22;
            *(_QWORD *)(v12 + 56) = n;
            memcpy(v22, v29, n);
            *(_QWORD *)(v12 + 48) = n;
          }
          *(_QWORD *)(v12 + 64) = 0;
          copy_tinfo_t();
          ++v9;
          *(_DWORD *)(v12 + 72) = v32;
          if ( v7 == v9 )
            break;
          v10 = v33;
        }
      }
      *(_QWORD *)&v34 = (int)v4 + 1;
      clear_tinfo_t();
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree((__int64)v29);
      }
      if ( src )
      {
        *(_QWORD *)&v28 = 0;
        qfree((__int64)src);
      }
      cleanup_argloc();
      sub_32C270(v25, *(_QWORD *)(a1 + 1504), *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL));
      if ( (int)v4 > 0 )
      {
        v15 = 0;
        do
        {
          copy_tinfo_t();
          v15 += 80;
        }
        while ( 80 * v4 != v15 );
      }
    }
    copy_tinfo_t();
    v26[0] = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v3 = calc_arglocs();
    clear_tinfo_t();
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v16 = v33;
    if ( v33 )
    {
      v17 = v34;
      if ( (_QWORD)v34 )
      {
        v18 = 0;
        do
        {
          v19 = (_QWORD *)(v16 + 80 * v18);
          clear_tinfo_t();
          v20 = v19[5];
          if ( v20 )
          {
            v19[6] = 0;
            qfree(v20);
          }
          v21 = v19[2];
          if ( v21 )
          {
            v19[3] = 0;
            qfree(v21);
          }
          ++v18;
          cleanup_argloc();
          v16 = v33;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v34 = 0;
      qfree(v16);
    }
  }
  return v3;
}

