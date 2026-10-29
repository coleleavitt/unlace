__int64 __fastcall sub_F65D0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rbp
  int v5; // eax
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  void *v17; // rax
  size_t na; // [rsp+8h] [rbp-110h]
  size_t n; // [rsp+8h] [rbp-110h]
  char v20[8]; // [rsp+18h] [rbp-100h] BYREF
  __int64 v21; // [rsp+20h] [rbp-F8h]
  __int64 v22; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+30h] [rbp-E8h]
  __int128 v24; // [rsp+38h] [rbp-E0h]
  void *v25; // [rsp+48h] [rbp-D0h]
  __int128 v26; // [rsp+50h] [rbp-C8h]
  __int64 v27; // [rsp+60h] [rbp-B8h]
  __int64 v28; // [rsp+68h] [rbp-B0h]
  __int64 v29; // [rsp+70h] [rbp-A8h]
  __int128 v30; // [rsp+78h] [rbp-A0h]
  __int64 v31; // [rsp+88h] [rbp-90h]
  __int64 v32; // [rsp+90h] [rbp-88h]
  __int64 v33; // [rsp+98h] [rbp-80h]
  __int128 v34; // [rsp+A0h] [rbp-78h]
  __int64 v35; // [rsp+B0h] [rbp-68h]
  __int128 v36; // [rsp+B8h] [rbp-60h]
  char v37; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+D8h] [rbp-40h]

  v3 = 1;
  v4 = a3;
  v38 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 72);
  if ( (unsigned int)(v5 - 208) > 0x2F )
  {
    v29 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v35 = 0;
    v30 = 0;
    v34 = 0;
    v36 = 0;
    if ( (v5 & 0xFFFFFF0F) != 0 || v5 == 192 )
    {
      HIDWORD(v31) = v5;
      LOBYTE(v5) = -64;
    }
    v37 = v5;
    v7 = a3 + 1;
    if ( a3 == -1 )
    {
      sub_327F40(v20, *(_QWORD *)(a1 + 1504), *(unsigned int *)(*(_QWORD *)(a1 + 1504) + 80LL));
    }
    else
    {
      v24 = 0;
      v28 = 0;
      LODWORD(v21) = 0;
      v22 = 0;
      src = nullptr;
      v25 = nullptr;
      v27 = 0;
      v26 = 0;
      v8 = v30;
      v29 = qvector_reserve();
      v9 = v29;
      if ( (unsigned __int64)v30 < v7 )
      {
        while ( 1 )
        {
          v10 = 80 * v8 + v9;
          *(_DWORD *)v10 = 0;
          copy_argloc();
          *(_QWORD *)(v10 + 16) = 0;
          *(_OWORD *)(v10 + 24) = 0;
          if ( (_QWORD)v24 )
          {
            na = v24;
            v11 = (void *)qalloc_or_throw();
            *(_QWORD *)(v10 + 16) = v11;
            *(_QWORD *)(v10 + 32) = na;
            memcpy(v11, src, na);
            *(_QWORD *)(v10 + 24) = na;
          }
          *(_QWORD *)(v10 + 40) = 0;
          *(_OWORD *)(v10 + 48) = 0;
          if ( (_QWORD)v26 )
          {
            n = v26;
            v17 = (void *)qalloc_or_throw();
            *(_QWORD *)(v10 + 40) = v17;
            *(_QWORD *)(v10 + 56) = n;
            memcpy(v17, v25, n);
            *(_QWORD *)(v10 + 48) = n;
          }
          *(_QWORD *)(v10 + 64) = 0;
          copy_tinfo_t();
          ++v8;
          *(_DWORD *)(v10 + 72) = v28;
          if ( v7 == v8 )
            break;
          v9 = v29;
        }
      }
      *(_QWORD *)&v30 = (int)v4 + 1;
      clear_tinfo_t();
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree();
      }
      if ( src )
      {
        *(_QWORD *)&v24 = 0;
        qfree();
      }
      cleanup_argloc();
      sub_327F40(v20, *(_QWORD *)(a1 + 1504), *(unsigned int *)(*(_QWORD *)(a1 + 1504) + 80LL));
      if ( (int)v4 > 0 )
      {
        v12 = 0;
        do
        {
          copy_tinfo_t();
          v12 += 80;
        }
        while ( 80 * v4 != v12 );
      }
    }
    copy_tinfo_t();
    v21 = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v3 = calc_arglocs();
    clear_tinfo_t();
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v13 = v29;
    if ( v29 )
    {
      v14 = v30;
      if ( (_QWORD)v30 )
      {
        v15 = 0;
        do
        {
          v16 = (_QWORD *)(v13 + 80 * v15);
          clear_tinfo_t();
          if ( v16[5] )
          {
            v16[6] = 0;
            qfree();
          }
          if ( v16[2] )
          {
            v16[3] = 0;
            qfree();
          }
          ++v15;
          cleanup_argloc();
          v13 = v29;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v30 = 0;
      qfree();
    }
  }
  return v3;
}

