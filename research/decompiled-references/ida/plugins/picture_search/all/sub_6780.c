unsigned __int64 __fastcall sub_6780(__int64 a1)
{
  __m128i si128; // xmm1
  char **v2; // rbp
  __int64 i; // r13
  struct _Unwind_Exception *v4; // r12
  char *v5; // r15
  __int64 *v6; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rax
  char *v11; // r9
  size_t v12; // r12
  _QWORD *v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r11
  __int64 v16; // rsi
  __int64 v17; // rax
  char *v18; // rbp
  const char *v19; // rdx
  const char *v20; // rcx
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-258h]
  unsigned __int64 v26; // [rsp+0h] [rbp-258h]
  __int64 *srca; // [rsp+8h] [rbp-250h]
  char *srcb; // [rsp+8h] [rbp-250h]
  void *srcc; // [rsp+8h] [rbp-250h]
  __int64 *src; // [rsp+8h] [rbp-250h]
  unsigned __int64 v31; // [rsp+10h] [rbp-248h]
  _QWORD *v32; // [rsp+10h] [rbp-248h]
  char *v33; // [rsp+10h] [rbp-248h]
  unsigned __int64 v34; // [rsp+10h] [rbp-248h]
  unsigned __int64 v35; // [rsp+18h] [rbp-240h]
  _QWORD *v36; // [rsp+18h] [rbp-240h]
  unsigned __int64 v37; // [rsp+18h] [rbp-240h]
  unsigned __int64 v38; // [rsp+28h] [rbp-230h]
  __int64 v39; // [rsp+30h] [rbp-228h] BYREF
  __int128 v40; // [rsp+38h] [rbp-220h]
  __int64 v41; // [rsp+48h] [rbp-210h]
  __int128 v42; // [rsp+50h] [rbp-208h]
  __int64 v43; // [rsp+60h] [rbp-1F8h]
  __int128 v44; // [rsp+68h] [rbp-1F0h]
  int v45; // [rsp+78h] [rbp-1E0h]
  _QWORD v46[50]; // [rsp+80h] [rbp-1D8h] BYREF
  char v47; // [rsp+210h] [rbp-48h] BYREF
  unsigned __int64 v48; // [rsp+218h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  *(_QWORD *)(a1 + 24) = get_eah();
  si128 = _mm_load_si128((const __m128i *)&xmmword_8940);
  *(_QWORD *)a1 = off_A870;
  *(_QWORD *)(a1 + 104) = off_A8A0;
  *(_QWORD *)(a1 + 152) = off_A760;
  *(_QWORD *)(a1 + 192) = off_A708;
  *(_QWORD *)(a1 + 216) = &off_A7B8;
  *(_QWORD *)(a1 + 240) = &off_A810;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 160) = 1;
  *(_QWORD *)(a1 + 168) = a1;
  *(_DWORD *)(a1 + 200) = 1;
  *(_QWORD *)(a1 + 208) = a1;
  *(_DWORD *)(a1 + 224) = 1;
  *(_QWORD *)(a1 + 232) = a1;
  *(_DWORD *)(a1 + 248) = 1;
  *(_QWORD *)(a1 + 256) = a1;
  *(_DWORD *)(a1 + 272) = 1;
  *(_QWORD *)(a1 + 280) = a1;
  *(_QWORD *)(a1 + 264) = off_A840;
  v39 = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(__m128i *)(a1 + 176) = si128;
  v40 = 0;
  v41 = 0;
  v43 = 0;
  v45 = -1;
  v42 = 0;
  v44 = 0;
  sub_65E0((__int64 *)(a1 + 120), 5u, (__int64)&v39);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  v2 = off_A8E0;
  for ( i = 0; i != 400; i += 80 )
  {
    v4 = (struct _Unwind_Exception *)v2[5];
    if ( (unsigned __int64)v4 > 0xB )
    {
      if ( !under_debugger )
      {
        interr();
        sub_5F80(v2);
        sub_5300((__int64 *)(a1 + 120));
        *(_QWORD *)(a1 + 104) = &off_ACB0;
        remove_event_listener();
        _Unwind_Resume(v4);
      }
      BUG();
    }
    if ( v4 )
    {
      v5 = v2[2];
      v6 = (__int64 *)(i + *(_QWORD *)(a1 + 120));
      v7 = v6[1];
      v8 = (unsigned __int64)v4 + v7;
      if ( __CFADD__(v7, v4) )
      {
        if ( v7 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v7 != 0x7FFFFFFFFFFFFFFFLL )
            v6[1] = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_14;
        }
        v8 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v9 = *v6;
      v10 = v6[1];
      if ( v6[2] < v8 )
      {
        v37 = v6[1];
        v34 = v8;
        src = (__int64 *)(i + *(_QWORD *)(a1 + 120));
        v24 = qvector_reserve();
        v6 = src;
        v9 = v24;
        v7 = v37;
        v8 = v34;
        *src = v24;
        v10 = src[1];
      }
      v31 = v7;
      srca = v6;
      v25 = v8;
      memset((void *)(v9 + v10), 0, v8 - v10);
      v6 = srca;
      v7 = v31;
      srca[1] = v25;
LABEL_14:
      memcpy((void *)(v7 + *v6), v5, (size_t)v4);
    }
    v11 = v2[3];
    if ( v11 )
    {
      v12 = (size_t)v2[6];
      if ( v12 )
      {
        v13 = (_QWORD *)(i + *(_QWORD *)(a1 + 120));
        v14 = v13[4];
        v15 = v14 + v12;
        if ( __CFADD__(v14, v12) )
        {
          if ( v14 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v16 = v13[3];
            v17 = v13[4];
            v15 = 0x7FFFFFFFFFFFFFFFLL;
            if ( v13[5] < 0x7FFFFFFFFFFFFFFFuLL )
              goto LABEL_35;
            goto LABEL_19;
          }
          if ( v14 != 0x7FFFFFFFFFFFFFFFLL )
            v13[4] = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v16 = v13[3];
          v17 = v13[4];
          if ( v13[5] >= v15 )
            goto LABEL_19;
LABEL_35:
          v38 = v13[4];
          v36 = (_QWORD *)(i + *(_QWORD *)(a1 + 120));
          v33 = v2[3];
          srcc = (void *)v15;
          v23 = qvector_reserve();
          v13 = v36;
          v16 = v23;
          v14 = v38;
          v11 = v33;
          v15 = (unsigned __int64)srcc;
          v36[3] = v23;
          v17 = v36[4];
LABEL_19:
          v26 = v15;
          v35 = v14;
          v32 = v13;
          srcb = v11;
          memset((void *)(v16 + v17), 0, v15 - v17);
          v13 = v32;
          v11 = srcb;
          v14 = v35;
          v32[4] = v26;
        }
        memcpy((void *)(v14 + v13[3]), v11, v12);
      }
    }
    v2 += 7;
  }
  hook_event_listener();
  memset(v46, 0, sizeof(v46));
  LODWORD(v46[0]) = 64;
  v46[8] = "Search/All error operands";
  *(__m128i *)&v46[1] = _mm_unpacklo_epi64(
                          _mm_loadl_epi64((const __m128i *)off_AA00),
                          (__m128i)(unsigned __int64)"Search for pictures");
  v46[18] = "View/Open subviews/Bookmarks";
  v18 = (char *)v46;
  v46[25] = "Ctrl+Shift+O";
  *(__m128i *)&v46[11] = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)off_AA08),
                           (__m128i)(unsigned __int64)"Open picture");
  v46[28] = "Edit/Other/";
  v46[38] = "Edit/Other/";
  v19 = "Jump to address";
  *(__m128i *)&v46[21] = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)off_AA10),
                           (__m128i)(unsigned __int64)"Open picture in default viewer");
  v46[7] = 0x4FFFFFFFFLL;
  v46[17] = 0x4FFFFFFFFLL;
  *(__m128i *)&v46[31] = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)off_AA18),
                           (__m128i)(unsigned __int64)"Save picture");
  v46[27] = 0x4FFFFFFFFLL;
  v46[37] = 0x4FFFFFFFFLL;
  v46[47] = 0x4FFFFFFFFLL;
  v46[35] = "Ctrl+S";
  v20 = "Ctrl+Shift+J";
  v46[3] = a1 + 192;
  LODWORD(v46[9]) = 1;
  LODWORD(v46[10]) = 64;
  LODWORD(v46[19]) = 1;
  LODWORD(v46[20]) = 64;
  LODWORD(v46[30]) = 64;
  LODWORD(v46[40]) = 64;
  v46[45] = "Ctrl+Shift+J";
  *(__m128i *)&v46[41] = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)&off_AA20),
                           (__m128i)(unsigned __int64)"Jump to address");
  v46[4] = a1;
  v46[13] = a1 + 152;
  v46[23] = a1 + 240;
  v46[33] = a1 + 216;
  v46[14] = a1;
  v46[24] = a1;
  v46[34] = a1;
  v46[43] = a1 + 264;
  v46[44] = a1;
  do
  {
    if ( (unsigned __int8)callui(127, v18, v19, v20) )
    {
      v21 = *((_QWORD *)v18 + 8);
      if ( v21 )
        callui(129, v21, *((_QWORD *)v18 + 1), *((unsigned int *)v18 + 18));
    }
    v18 += 80;
  }
  while ( &v47 != v18 );
  return v48 - __readfsqword(0x28u);
}

