__int64 __fastcall sub_7DFA0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rax
  void *v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 j; // rbp
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r12d
  void **v14; // rbp
  void **v15; // rbx
  void *v16; // rdi
  void (*v17)(void); // rax
  void (__fastcall *v18)(_QWORD *); // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 i; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  void *v25; // rdi
  __int64 v27; // rdi
  signed __int64 v28; // r12
  signed __int64 v29; // rax
  bool v30; // cf
  unsigned __int64 v31; // r12
  char *v32; // r12
  void *v33; // rax
  char *v34; // rax
  char *v35; // rsi
  __int64 v36; // rdi
  char *v37; // rcx
  void (*v38)(void); // rax
  __int64 v39; // [rsp+0h] [rbp-88h]
  char *v40; // [rsp+8h] [rbp-80h]
  void *v41; // [rsp+8h] [rbp-80h]
  char *v42; // [rsp+10h] [rbp-78h]
  signed __int64 v43; // [rsp+18h] [rbp-70h]
  void *v44; // [rsp+28h] [rbp-60h] BYREF
  void *v45[2]; // [rsp+30h] [rbp-58h] BYREF
  char *v46; // [rsp+40h] [rbp-48h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = a1 + 152;
  v4 = operator new(0x208u);
  v5 = (void *)(v4 + 56);
  v6 = (_QWORD *)v4;
  *(_QWORD *)(v4 + 16) = 1;
  *(_QWORD *)(v4 + 8) = v4 + 56;
  v7 = v4 + 72;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 1065353216;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = a1 + 152;
  *(_QWORD *)v4 = &off_B23A8;
  sub_7F080(v4 + 72, v2, 0);
  v6[58] = v2;
  v6[59] = 0;
  v6[62] = 0;
  *((_OWORD *)v6 + 30) = 0;
  *(_OWORD *)(v6 + 63) = 0;
  if ( (unsigned int)sub_81340(v6) )
  {
    if ( v6 )
    {
      v18 = *(void (__fastcall **)(_QWORD *))(*v6 + 8LL);
      if ( v18 == sub_7DD80 )
      {
        v19 = v6[62];
        v6[58] = 0;
        *v6 = &off_B23A8;
        if ( v19 )
        {
          v20 = v6[63];
          if ( v20 )
          {
            for ( i = 0; i != v20; ++i )
            {
              v22 = (__int64 *)(v19 + 24 * i);
              v23 = *v22;
              if ( *v22 )
              {
                v22[1] = 0;
                qfree(v23);
                v19 = v6[62];
              }
            }
          }
          v6[63] = 0;
          qfree(v19);
        }
        v24 = v6[59];
        if ( v24 )
        {
          v6[60] = 0;
          qfree(v24);
        }
        sub_7E9F0(v7);
        v6[8] = 0;
        *v6 = &unk_B2CD0;
        sub_57B40((__int64)(v6 + 1));
        v25 = (void *)v6[1];
        if ( v5 != v25 )
          operator delete(v25, 8LL * v6[2]);
        operator delete(v6, 0x208u);
      }
      else
      {
        v18(v6);
      }
    }
    return (unsigned int)-1;
  }
  v8 = v6[60];
  v9 = v6[59];
  v46 = nullptr;
  *(_OWORD *)v45 = 0;
  for ( j = v9 + 16 * v8; j != v9; v9 += 16 )
  {
    if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
    {
      sub_81260(&v44, v6, v9);
      if ( v45[1] == v46 )
      {
        v28 = ((char *)v45[1] - (char *)v45[0]) >> 3;
        if ( v28 == 0xFFFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v29 = 1;
        if ( v28 )
          v29 = ((char *)v45[1] - (char *)v45[0]) >> 3;
        v30 = __CFADD__(v29, v28);
        v31 = v29 + v28;
        if ( v30 )
        {
          v39 = 0x7FFFFFFFFFFFFFF8LL;
        }
        else
        {
          if ( v31 > 0xFFFFFFFFFFFFFFFLL )
            v31 = 0xFFFFFFFFFFFFFFFLL;
          v39 = 8 * v31;
        }
        v43 = (char *)v45[1] - (char *)v45[0];
        v42 = (char *)v45[0];
        v40 = (char *)v45[1];
        v32 = (char *)operator new(v39);
        v33 = v44;
        v44 = nullptr;
        *(_QWORD *)&v32[v43] = v33;
        if ( v40 == v42 )
        {
          v37 = v32;
        }
        else
        {
          v34 = v42;
          v35 = v32;
          do
          {
            v36 = *(_QWORD *)v34;
            v34 += 8;
            v35 += 8;
            *((_QWORD *)v35 - 1) = v36;
          }
          while ( v40 != v34 );
          v37 = &v32[v40 - v42];
        }
        v41 = v37 + 8;
        if ( v42 )
        {
          operator delete(v42, v46 - v42);
          v45[0] = v32;
          v45[1] = v41;
          v46 = &v32[v39];
          if ( v44 )
          {
            v38 = *(void (**)(void))(*(_QWORD *)v44 + 8LL);
            if ( (char *)v38 == (char *)sub_54910 )
              operator delete(v44, 0x40u);
            else
              v38();
          }
        }
        else
        {
          v45[0] = v32;
          v45[1] = v37 + 8;
          v46 = &v32[v39];
        }
      }
      else
      {
        *(_QWORD *)v45[1] = v44;
        v45[1] = (char *)v45[1] + 8;
      }
    }
  }
  v11 = operator new(0x360u);
  *(_QWORD *)(v11 + 16) = 0;
  *(_OWORD *)v11 = 0;
  *(_QWORD *)(v11 + 24) = v11 + 72;
  *(_QWORD *)(v11 + 80) = v11 + 128;
  *(_WORD *)(v11 + 136) = 0;
  *(_QWORD *)(v11 + 168) = v11 + 216;
  *(_QWORD *)(v11 + 224) = v11 + 272;
  *(_QWORD *)(v11 + 32) = 1;
  *(_QWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = 1065353216;
  *(_QWORD *)(v11 + 64) = 0;
  *(_QWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 88) = 1;
  *(_QWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 104) = 0;
  *(_DWORD *)(v11 + 112) = 1065353216;
  *(_QWORD *)(v11 + 120) = 0;
  *(_QWORD *)(v11 + 128) = 0;
  *(_BYTE *)(v11 + 138) = 0;
  *(_QWORD *)(v11 + 144) = 0;
  *(_QWORD *)(v11 + 176) = 1;
  *(_QWORD *)(v11 + 184) = 0;
  *(_QWORD *)(v11 + 192) = 0;
  *(_DWORD *)(v11 + 200) = 1065353216;
  *(_QWORD *)(v11 + 208) = 0;
  *(_QWORD *)(v11 + 216) = 0;
  *(_QWORD *)(v11 + 232) = 1;
  *(_QWORD *)(v11 + 240) = 0;
  *(_QWORD *)(v11 + 248) = 0;
  *(_DWORD *)(v11 + 256) = 1065353216;
  *(_OWORD *)(v11 + 152) = 0;
  *(_QWORD *)(v11 + 264) = 0;
  *(_QWORD *)(v11 + 280) = v11 + 328;
  *(_QWORD *)(v11 + 360) = v11 + 408;
  *(_QWORD *)(v11 + 416) = v11 + 464;
  *(_QWORD *)(v11 + 472) = v11 + 520;
  *(_QWORD *)(v11 + 272) = 0;
  *(_QWORD *)(v11 + 288) = 1;
  *(_QWORD *)(v11 + 296) = 0;
  *(_QWORD *)(v11 + 304) = 0;
  *(_DWORD *)(v11 + 312) = 1065353216;
  *(_QWORD *)(v11 + 320) = 0;
  *(_QWORD *)(v11 + 368) = 1;
  *(_QWORD *)(v11 + 376) = 0;
  *(_QWORD *)(v11 + 384) = 0;
  *(_DWORD *)(v11 + 392) = 1065353216;
  *(_QWORD *)(v11 + 400) = 0;
  *(_QWORD *)(v11 + 408) = 0;
  *(_QWORD *)(v11 + 424) = 1;
  *(_QWORD *)(v11 + 432) = 0;
  *(_QWORD *)(v11 + 440) = 0;
  *(_DWORD *)(v11 + 448) = 1065353216;
  *(_QWORD *)(v11 + 456) = 0;
  *(_QWORD *)(v11 + 464) = 0;
  *(_QWORD *)(v11 + 480) = 1;
  *(_QWORD *)(v11 + 488) = 0;
  *(_QWORD *)(v11 + 496) = 0;
  *(_QWORD *)(v11 + 504) = 1065353216;
  *(_QWORD *)(v11 + 512) = 0;
  *(_QWORD *)(v11 + 520) = 0;
  *(_QWORD *)(v11 + 528) = 0;
  *(_WORD *)(v11 + 544) = -1;
  *(_OWORD *)(v11 + 328) = 0;
  *(_OWORD *)(v11 + 344) = 0;
  *(_QWORD *)(v11 + 552) = 0;
  *(_QWORD *)(v11 + 680) = v11 + 664;
  *(_QWORD *)(v11 + 688) = v11 + 664;
  *(_QWORD *)(v11 + 728) = v11 + 712;
  *(_QWORD *)(v11 + 736) = v11 + 712;
  *(_QWORD *)(v11 + 776) = v11 + 760;
  *(_QWORD *)(v11 + 784) = v11 + 760;
  *(_QWORD *)(v11 + 824) = v11 + 808;
  *(_QWORD *)(v11 + 832) = v11 + 808;
  v12 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(v11 + 576) = 0;
  *(_QWORD *)(v11 + 600) = v3;
  *(_QWORD *)(v11 + 608) = v6;
  *(_QWORD *)(v11 + 624) = 0;
  *(_QWORD *)(v11 + 632) = 0;
  *(_DWORD *)(v11 + 664) = 0;
  *(_QWORD *)(v11 + 672) = 0;
  *(_QWORD *)(v11 + 696) = 0;
  *(_DWORD *)(v11 + 712) = 0;
  *(_QWORD *)(v11 + 720) = 0;
  *(_QWORD *)(v11 + 744) = 0;
  *(_DWORD *)(v11 + 760) = 0;
  *(_QWORD *)(v11 + 768) = 0;
  *(_QWORD *)(v11 + 792) = 0;
  *(_DWORD *)(v11 + 808) = 0;
  *(_QWORD *)(v11 + 816) = 0;
  *(_QWORD *)(v11 + 840) = 0;
  *(_QWORD *)(v11 + 848) = 0;
  *(_BYTE *)(v11 + 856) = 0;
  *(_QWORD *)(a1 + 144) = v11;
  *(_OWORD *)(v11 + 560) = 0;
  *(_OWORD *)(v11 + 584) = 0;
  *(_OWORD *)(v11 + 640) = 0;
  *(_QWORD *)(v11 + 536) = v12;
  if ( (unsigned __int8)sub_58700(v11, (__int64 *)v45) )
  {
    if ( (unsigned __int8)sub_5A960(*(_QWORD *)(a1 + 144)) )
    {
      v13 = 1;
      if ( !(unsigned __int8)sub_55B30(
                               *(_QWORD *)(a1 + 144),
                               (__int64 *)(a1 + 24),
                               (__m128i *)(a1 + 72),
                               (_DWORD *)(a1 + 92)) )
      {
        sub_72150(*(_QWORD **)(a1 + 144));
        v13 = 0;
      }
      goto LABEL_9;
    }
    sub_244A0();
    v27 = *(_QWORD *)(a1 + 152);
    if ( v27 )
    {
      *(_QWORD *)(a1 + 160) = 0;
      qfree(v27);
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 168) = 0;
    }
  }
  v13 = -1;
LABEL_9:
  v14 = (void **)v45[1];
  v15 = (void **)v45[0];
  if ( v45[1] != v45[0] )
  {
    while ( 1 )
    {
      v16 = *v15;
      if ( !*v15 )
        goto LABEL_12;
      v17 = *(void (**)(void))(*(_QWORD *)v16 + 8LL);
      if ( (char *)v17 == (char *)sub_54910 )
      {
        operator delete(v16, 0x40u);
LABEL_12:
        if ( v14 == ++v15 )
          goto LABEL_16;
      }
      else
      {
        v17();
        if ( v14 == ++v15 )
        {
LABEL_16:
          v15 = (void **)v45[0];
          break;
        }
      }
    }
  }
  if ( v15 )
    operator delete(v15, v46 - (char *)v15);
  return v13;
}

