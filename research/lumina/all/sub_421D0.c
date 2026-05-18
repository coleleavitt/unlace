unsigned __int64 __fastcall sub_421D0(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // r12
  __int64 v4; // rax
  unsigned __int8 *v5; // rbp
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  bool v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  bool v12; // zf
  void (__fastcall ***v13)(void *); // rdi
  const char *v14; // rdx
  void (__fastcall ***v15)(_QWORD); // rdi
  __int64 v16; // r15
  void *v17; // r12
  __m128i v18; // xmm1
  __m128i v19; // xmm1
  unsigned int v20; // r12d
  unsigned int v21; // eax
  __int64 v22; // rcx
  void *v23; // rsi
  void *v24; // r14
  void *v25; // r13
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  __m128i *v29; // rsi
  __m128i si128; // xmm0
  _BYTE *v31; // rax
  __m128i v32; // [rsp+0h] [rbp-108h] BYREF
  void *v33; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v34; // [rsp+18h] [rbp-F0h] BYREF
  void *v35; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v36; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+48h] [rbp-C0h]
  int v38[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h]
  void *src; // [rsp+70h] [rbp-98h] BYREF
  __int128 v41; // [rsp+78h] [rbp-90h]
  void *v42; // [rsp+88h] [rbp-80h] BYREF
  __int128 v43; // [rsp+90h] [rbp-78h]
  int v44; // [rsp+A0h] [rbp-68h]
  __int32 v45; // [rsp+A8h] [rbp-60h]
  void *v46; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v47; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 504);
    sub_19A520(v2);
    v3 = *(_BYTE *)(a1 + 512);
    sub_19A570(v2);
    if ( !v3 )
      break;
    v4 = sub_3A190(a1);
    v5 = (unsigned __int8 *)v4;
    if ( !v4 )
      break;
    *(_QWORD *)v38 = v4;
    v39 = 0;
    src = nullptr;
    v42 = nullptr;
    v44 = -1;
    v45 = -1;
    v46 = nullptr;
    v41 = 0;
    v43 = 0;
    v47 = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 312) + 56LL))(
        *(_QWORD *)(a1 + 312),
        a1 + 376,
        *(unsigned int *)(a1 + 496));
      v8 = (unsigned int)v5[8] - 14;
      if ( (unsigned int)v8 > 0x22 )
        goto LABEL_6;
      v21 = dword_1B6840[v8];
      v22 = v21 & *(_DWORD *)(*(_QWORD *)(a1 + 304) + 256LL);
      if ( (_DWORD)v22 != v21 )
      {
LABEL_42:
        v23 = src;
        if ( *((_QWORD *)&v41 + 1) <= 0xFu )
        {
          src = (void *)sub_1987B0(&src, src, 16, 1);
          v23 = src;
        }
        *(_QWORD *)&v41 = 16;
        qmemcpy(v23, "Unknown command", 15);
        *((_BYTE *)src + 15) = 0;
        goto LABEL_7;
      }
      if ( (v21 & 0x40000000) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 488) & 1) == 0 )
          goto LABEL_42;
        if ( !*(_BYTE *)(a1 + 500) )
        {
          if ( (v21 & 1) != 0 )
          {
LABEL_77:
            sub_41850(a1, (__int64)v38, (unsigned int)v22, v22, v6, v7);
            goto LABEL_7;
          }
          goto LABEL_71;
        }
      }
      else if ( !*(_BYTE *)(a1 + 500) )
      {
        if ( ((unsigned __int8)v21 & *(_BYTE *)(*(_QWORD *)(a1 + 304) + 256LL) & 1) != 0 )
          goto LABEL_77;
        if ( ((unsigned __int8)v21 & *(_BYTE *)(*(_QWORD *)(a1 + 304) + 256LL) & 2) != 0 )
          sub_30E50(a1, v38);
LABEL_71:
        if ( (v21 & 4) != 0 )
          sub_30E30(a1, v38);
LABEL_6:
        sub_35B60(a1, (__int64)v38);
        goto LABEL_7;
      }
      if ( (v21 & 7) == 0 )
        goto LABEL_6;
      v29 = (__m128i *)src;
      if ( *((_QWORD *)&v41 + 1) <= 0x41u )
      {
        src = (void *)sub_1987B0(&src, src, 66, 1);
        v29 = (__m128i *)src;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B6B20);
      v29[4].m128i_i8[0] = 41;
      *(_QWORD *)&v41 = 66;
      *v29 = si128;
      v29[1] = _mm_load_si128((const __m128i *)&xmmword_1B6B30);
      v31 = src;
      v29[2] = _mm_load_si128((const __m128i *)&xmmword_1B6B40);
      v29[3] = _mm_load_si128((const __m128i *)&xmmword_1B6B50);
      v31[65] = 0;
LABEL_7:
      v9 = sub_38BA0(v38, a1);
      if ( !v3 || !v9 || !(unsigned __int8)unk_241EB8(&v42) )
        goto LABEL_27;
      sub_2F0E0(a1, (__int64)"Lost connection to the database. Will attempt to re-create it and try again (once)\n");
      v10 = *(_QWORD *)(a1 + 304);
      v35 = nullptr;
      v36 = 0;
      LODWORD(v37) = -1;
      unk_241E50(&v33, v10 + 208, &v35);
      if ( !v33 )
        break;
      sub_2F0E0(a1, (__int64)"Connection re-created; will run request again\n");
      v11 = *(_QWORD *)(a1 + 368);
      if ( v11 )
      {
        v12 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v12 )
          (***(void (__fastcall ****)(_QWORD))(a1 + 368))(*(_QWORD *)(a1 + 368));
      }
      v13 = (void (__fastcall ***)(void *))v33;
      *(_QWORD *)(a1 + 368) = v33;
      if ( v13 && !*((_DWORD *)v13 + 2) )
        (**v13)(v13);
      if ( v35 )
      {
        v36.m128i_i64[0] = 0;
        j__free(v35);
      }
      v3 = 0;
    }
    v14 = s1;
    if ( v36.m128i_i64[0] )
      v14 = (const char *)v35;
    sub_2F0E0(a1, (__int64)"Couldn't re-create the connection (%s)\n", v14);
    v15 = (void (__fastcall ***)(_QWORD))v33;
    if ( v33 )
    {
      v12 = (*((_DWORD *)v33 + 2))-- == 1;
      if ( v12 )
        (**v15)(v15);
    }
    if ( v35 )
    {
      v36.m128i_i64[0] = 0;
      j__free(v35);
    }
LABEL_27:
    if ( !v47.m128i_i64[0] )
    {
      v16 = v41;
      if ( !v45 )
      {
        if ( (unsigned __int64)v41 <= 1 )
        {
          v34.m128i_i8[0] = 10;
          v33 = off_236EB8;
          sub_306F0((__int64)&v35, a1, (unsigned __int8 *)&v33);
          v17 = v35;
          v35 = nullptr;
          v18 = _mm_loadu_si128(&v36);
          v36 = 0;
          if ( v46 )
          {
            v32 = v18;
            v47.m128i_i64[0] = 0;
            j__free(v46);
            v19 = _mm_load_si128(&v32);
            v46 = v17;
            v47 = v19;
            if ( v35 )
            {
              v36.m128i_i64[0] = 0;
              j__free(v35);
            }
          }
          else
          {
            v46 = v17;
            v47 = v18;
          }
          nullsub_22(&v33);
          goto LABEL_34;
        }
        if ( !unk_2439A0 )
          sub_198E10(1568);
LABEL_78:
        BUG();
      }
      if ( (unsigned __int64)v41 <= 1 )
      {
        if ( !unk_2439A0 )
          sub_198E10(1569);
        goto LABEL_78;
      }
      v36.m128i_i8[0] = 11;
      v36.m128i_i64[1] = 0;
      v24 = src;
      v36.m128i_i32[1] = v45;
      v35 = &off_236EE8;
      v37 = 0;
      v36.m128i_i64[1] = sub_1987B0(&v36.m128i_u64[1], 0, v41, 1);
      *(_QWORD *)&v37 = v16;
      memmove((void *)v36.m128i_i64[1], v24, v16 - 1);
      *(_BYTE *)(v36.m128i_i64[1] + v16 - 1) = 0;
      sub_306F0((__int64)&v33, a1, (unsigned __int8 *)&v35);
      v25 = v33;
      v33 = nullptr;
      v26 = _mm_loadu_si128(&v34);
      v34 = 0;
      if ( v46 )
      {
        v32 = v26;
        v47.m128i_i64[0] = 0;
        j__free(v46);
        v27 = _mm_load_si128(&v32);
        v46 = v25;
        v47 = v27;
        if ( v33 )
        {
          v34.m128i_i64[0] = 0;
          j__free(v33);
        }
      }
      else
      {
        v46 = v25;
        v47 = v26;
      }
      sub_65FD0(&v35);
    }
LABEL_34:
    v20 = v5[8];
    (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v5 + 8LL))(v5);
    if ( (unsigned int)sub_317E0(a1, v20, &v46) )
    {
      if ( v46 )
      {
        v47.m128i_i64[0] = 0;
        j__free(v46);
      }
      if ( v42 )
      {
        *(_QWORD *)&v43 = 0;
        j__free(v42);
      }
      if ( src )
      {
        *(_QWORD *)&v41 = 0;
        j__free(src);
      }
      return v48 - __readfsqword(0x28u);
    }
    if ( v46 )
    {
      v47.m128i_i64[0] = 0;
      j__free(v46);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      j__free(v42);
    }
    if ( src )
    {
      *(_QWORD *)&v41 = 0;
      j__free(src);
    }
  }
  return v48 - __readfsqword(0x28u);
}
