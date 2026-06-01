__int64 __fastcall sub_4C990(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // r15
  int v7; // eax
  int v8; // eax
  unsigned int v9; // r13d
  size_t v10; // r14
  __int64 v11; // rax
  __m128i v12; // xmm0
  bool v13; // zf
  __int64 v14; // rdx
  size_t v15; // rax
  __int16 v16; // ax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v22; // r8
  void *v23; // r9
  unsigned __int64 v24; // r10
  char *v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v28; // [rsp+20h] [rbp-630h]
  unsigned __int64 v29; // [rsp+20h] [rbp-630h]
  void *srca; // [rsp+28h] [rbp-628h]
  void *src; // [rsp+28h] [rbp-628h]
  __int64 v32; // [rsp+30h] [rbp-620h]
  __int64 v33; // [rsp+30h] [rbp-620h]
  __int64 v34; // [rsp+40h] [rbp-610h] BYREF
  void *v35; // [rsp+48h] [rbp-608h] BYREF
  size_t n[3]; // [rsp+50h] [rbp-600h]
  char *v37; // [rsp+68h] [rbp-5E8h] BYREF
  __int128 v38; // [rsp+70h] [rbp-5E0h]
  _OWORD v39[17]; // [rsp+88h] [rbp-5C8h] BYREF
  __int128 v40; // [rsp+198h] [rbp-4B8h] BYREF
  __int128 v41; // [rsp+1A8h] [rbp-4A8h]
  __int64 v42; // [rsp+1B8h] [rbp-498h]
  char v43[60]; // [rsp+1C8h] [rbp-488h] BYREF
  int v44; // [rsp+204h] [rbp-44Ch]
  char v45[1032]; // [rsp+208h] [rbp-448h] BYREF
  unsigned __int64 v46; // [rsp+610h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 820);
  v46 = __readfsqword(0x28u);
  sub_4C8B0(a1, v4, (__int64)v45, 1024, nullptr, nullptr, nullptr);
  if ( (unsigned __int8)qfileexist() )
  {
    if ( *(_QWORD *)(a2 + 700) )
    {
      v5 = operator new(0x39Cu);
      sub_39000(v5, a2);
      v6 = *(_QWORD *)(v5 + 684);
      v35 = nullptr;
      v37 = nullptr;
      *(_OWORD *)n = 0;
      v38 = 0;
      if ( v6 == v5 + 668 )
      {
        v8 = 4096;
      }
      else
      {
        v7 = 0;
        do
        {
          *(_DWORD *)(v6 + 80) = v7 + 4096;
          sub_4BB60(a1, v5, v6 + 32, v6 + 56, (__int64 *)&v37);
          v6 = std::_Rb_tree_increment();
          v7 = v38;
        }
        while ( v6 != v5 + 668 );
        v8 = v38 + 4096;
      }
      LODWORD(v34) = v8;
      v9 = sub_37940(v5, (int *)&v34, (__int64 *)&v35);
      if ( v9 )
        goto LABEL_49;
      v10 = n[0];
      if ( !n[0] )
      {
LABEL_9:
        if ( qfopen() )
        {
          qfread();
          if ( *(_BYTE *)(a1 + 57) )
          {
            qmemcpy(v39, (const void *)(a2 + 328), 0x108u);
          }
          else
          {
            v11 = *(_QWORD *)(a2 + 320);
            v39[0] = _mm_loadu_si128((const __m128i *)(a2 + 80));
            v12 = _mm_loadu_si128((const __m128i *)(a2 + 96));
            *(_QWORD *)&v39[15] = v11;
            v39[1] = v12;
            v39[2] = _mm_loadu_si128((const __m128i *)(a2 + 112));
            v39[3] = _mm_loadu_si128((const __m128i *)(a2 + 128));
            v39[4] = _mm_loadu_si128((const __m128i *)(a2 + 144));
            v39[5] = _mm_loadu_si128((const __m128i *)(a2 + 160));
            v39[6] = _mm_loadu_si128((const __m128i *)(a2 + 176));
            v39[7] = _mm_loadu_si128((const __m128i *)(a2 + 192));
            v39[8] = _mm_loadu_si128((const __m128i *)(a2 + 208));
            v39[9] = _mm_loadu_si128((const __m128i *)(a2 + 224));
            v39[10] = _mm_loadu_si128((const __m128i *)(a2 + 240));
            v39[11] = _mm_loadu_si128((const __m128i *)(a2 + 256));
            v39[12] = _mm_loadu_si128((const __m128i *)(a2 + 272));
            v39[13] = _mm_loadu_si128((const __m128i *)(a2 + 288));
            v39[14] = _mm_loadu_si128((const __m128i *)(a2 + 304));
          }
          qfclose();
          v13 = *(_BYTE *)(a1 + 57) == 0;
          v42 = 0;
          v44 = 64;
          v40 = 0;
          v41 = 0;
          if ( v13 )
          {
            DWORD2(v39[2]) = 4096;
            LODWORD(v39[3]) = 0;
            memset(&v39[8], 0, 0x78u);
            HIDWORD(v39[3]) = 512;
            WORD3(v39[0]) = 1;
            *((_QWORD *)&v39[7] + 1) = v34;
            *(_QWORD *)((char *)&v39[1] + 12) = 0;
            *(_QWORD *)&v39[6] = 0;
          }
          else
          {
            WORD3(v39[0]) = 1;
            DWORD2(v39[2]) = 4096;
            memset(&v39[9], 0, 0x78u);
            LODWORD(v39[3]) = 0;
            HIDWORD(v39[3]) = 512;
            *((_QWORD *)&v39[8] + 1) = v34;
            *(_QWORD *)((char *)&v39[1] + 12) = 0;
            v39[6] = 0;
          }
          DWORD1(v39[5]) = WORD2(v39[1]) + 128;
          LODWORD(v39[5]) = (v38 + DWORD2(v39[3]) - 1 + DWORD1(v39[5])) & -DWORD2(v39[3]);
          qstrncpy();
          HIDWORD(v40) = 4096;
          HIDWORD(v42) = 1610612832;
          DWORD1(v41) = (HIDWORD(v39[3]) + DWORD1(v39[5]) - 1) & -HIDWORD(v39[3]);
          LODWORD(v41) = v38;
          DWORD2(v40) = (DWORD2(v39[3]) + v38 - 1) & -DWORD2(v39[3]);
          qstrncpy();
          if ( *(_QWORD *)(v5 + 612) )
          {
            *(_QWORD *)(v5 + 620) = 0;
            qfree();
            *(_QWORD *)(v5 + 612) = 0;
            *(_QWORD *)(v5 + 628) = 0;
          }
          sub_4ACC0((__int64 *)(v5 + 612), v43, 0x40u);
          if ( *(_BYTE *)(a1 + 57) )
            sub_4ACC0((__int64 *)(v5 + 612), v39, 0x108u);
          else
            sub_4ACC0((__int64 *)(v5 + 612), v39, 0xF8u);
          sub_4ACC0((__int64 *)(v5 + 612), &v40, 0x28u);
          if ( SDWORD1(v41) != *(_QWORD *)(v5 + 620) )
            sub_4ACC0((__int64 *)(v5 + 612), &unk_61FA0, SDWORD1(v41) - *(_QWORD *)(v5 + 620));
          v14 = v38;
          if ( (_QWORD)v38 )
          {
            sub_4ACC0((__int64 *)(v5 + 612), v37, v38);
            v14 = v38;
          }
          v15 = ((v14 + HIDWORD(v39[3]) - 1) & -HIDWORD(v39[3])) - v14;
          if ( v15 )
          {
            sub_4ACC0((__int64 *)(v5 + 612), &unk_61FA0, v15);
            LODWORD(v14) = v38;
          }
          v16 = *(_WORD *)(v5 + 172);
          v17 = v14 + 4096;
          *(_DWORD *)(v5 + 812) = 4096;
          if ( (unsigned __int16)(v16 - 10) > 3u )
          {
            if ( *(_DWORD *)(v5 + 136) == 4096 || (v18 = *(_DWORD *)(v5 + 140)) == 0 )
            {
              v20 = -512;
              v19 = 511;
            }
            else
            {
              v19 = v18 - 1;
              v20 = -v18;
            }
            v17 = v20 & (v19 + v17);
          }
          *(_DWORD *)(v5 + 816) = v17;
          *a3 = v5;
          goto LABEL_30;
        }
        v9 = 28;
LABEL_49:
        sub_37960(v5);
        operator delete((void *)v5, 0x39Cu);
LABEL_30:
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree();
        }
        if ( v35 )
        {
          n[0] = 0;
          qfree();
        }
        return v9;
      }
      v22 = v38;
      v23 = v35;
      v24 = v38 + n[0];
      if ( __CFADD__((_QWORD)v38, n[0]) )
      {
        if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_45;
        }
        v24 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v25 = v37;
      v26 = v38;
      if ( *((_QWORD *)&v38 + 1) < v24 )
      {
        v33 = v38;
        src = v35;
        v29 = v24;
        v37 = (char *)qvector_reserve();
        v25 = v37;
        v22 = v33;
        v26 = v38;
        v23 = src;
        v24 = v29;
      }
      v32 = v22;
      srca = v23;
      v28 = v24;
      memset(&v25[v26], 0, v24 - v26);
      v23 = srca;
      v22 = v32;
      *(_QWORD *)&v38 = v28;
LABEL_45:
      memcpy(&v37[v22], v23, v10);
      goto LABEL_9;
    }
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
      sub_E960((__int64)"imitate_dll: no exports in this module\n");
    return 33;
  }
  else
  {
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
      sub_E960((__int64)"imitate_dll: file not found <%s>\n", v45);
    return 28;
  }
}

