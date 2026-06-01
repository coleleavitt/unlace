__int64 __fastcall sub_91F70(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rdi
  char *v5; // rdi
  char *v6; // r15
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // si
  int v15; // r10d
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  char *v19; // r10
  char *v20; // rax
  __int64 v21; // rdx
  size_t v22; // rax
  char *v23; // r10
  size_t v24; // r11
  void *v25; // rdi
  void *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // r15
  __int64 v33; // r8
  __int64 v34; // r10
  __int64 v35; // r13
  __int64 v36; // r12
  unsigned __int64 v37; // r9
  size_t v38; // r11
  void *v39; // rax
  __int64 v40; // rax
  size_t v41; // [rsp+8h] [rbp-108h]
  char *v42; // [rsp+10h] [rbp-100h]
  int v43; // [rsp+18h] [rbp-F8h]
  int v44; // [rsp+1Ch] [rbp-F4h]
  int v45; // [rsp+20h] [rbp-F0h]
  size_t v46; // [rsp+20h] [rbp-F0h]
  char *src; // [rsp+28h] [rbp-E8h]
  _BYTE *srcc; // [rsp+28h] [rbp-E8h]
  void *srce; // [rsp+28h] [rbp-E8h]
  int srca; // [rsp+28h] [rbp-E8h]
  void *srcb; // [rsp+28h] [rbp-E8h]
  void *srcd; // [rsp+28h] [rbp-E8h]
  unsigned __int16 v53; // [rsp+30h] [rbp-E0h]
  __int64 v54; // [rsp+30h] [rbp-E0h]
  __int64 v55; // [rsp+30h] [rbp-E0h]
  int v56; // [rsp+38h] [rbp-D8h]
  unsigned __int64 v57; // [rsp+38h] [rbp-D8h]
  unsigned __int64 v58; // [rsp+38h] [rbp-D8h]
  void *v59; // [rsp+40h] [rbp-D0h]
  int v61; // [rsp+5Ch] [rbp-B4h] BYREF
  __int64 v62; // [rsp+60h] [rbp-B0h] BYREF
  char *v63; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+70h] [rbp-A0h] BYREF
  char *s; // [rsp+78h] [rbp-98h] BYREF
  __int64 v66; // [rsp+80h] [rbp-90h] BYREF
  __int128 v67; // [rsp+88h] [rbp-88h]
  __int64 v68; // [rsp+A0h] [rbp-70h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-68h]
  unsigned __int64 v70; // [rsp+C0h] [rbp-50h] BYREF
  __int128 v71; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v72; // [rsp+D8h] [rbp-38h]

  v72 = __readfsqword(0x28u);
  if ( !dbg )
  {
    v2 = 0;
    if ( (debug & 0x400000) != 0 )
      sub_88B80((__int64)"No debugger module loaded; cannot send IOCTL.\n");
    return v2;
  }
  v66 = 0;
  v1 = *(_QWORD *)a1;
  v67 = 0;
  v2 = sub_8A270(&v66, &v62, v1);
  if ( (_BYTE)v2 )
  {
    v63 = nullptr;
    v64 = 0;
    if ( (unsigned int)sub_69510(dbg, 37, 16777217, v66, (_QWORD)v67, &v63, &v64, 0) )
    {
      sub_17110((__int64)"Received IOCTL failure code: %d.\n");
    }
    else
    {
      v5 = v63;
      s = v63;
      if ( v63 )
      {
        v6 = &v63[v64];
        if ( v63 >= &v63[v64] || (v7 = *v63, s = v63 + 1, !v7) )
        {
          v2 = 0;
          goto LABEL_28;
        }
        v44 = unpack_dd(&s, &v63[v64]);
        v43 = unpack_dd(&s, v6);
        v8 = unpack_dq(&s, v6);
        v9 = v62;
        *(_QWORD *)(v62 + 64) = v8;
        *(_DWORD *)(v9 + 72) = unpack_dd(&s, v6);
        v45 = unpack_dd(&s, v6);
        v68 = 0;
        v70 = 0;
        v69 = 0;
        v71 = 0;
        if ( !v45 )
          goto LABEL_44;
        v10 = 0;
        v11 = 1;
        v53 = 0;
        v56 = 0;
LABEL_24:
        v68 = qvector_reserve(&v68, v10, v11, 120);
        v21 = v69;
        v10 = v68;
        while ( 1 )
        {
          v12 = v10 + 120 * v21;
          *(_QWORD *)v12 = 0;
          *(_QWORD *)(v12 + 112) = 0;
          memset(
            (void *)((v12 + 8) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * (((unsigned int)v12 - (((_DWORD)v12 + 8) & 0xFFFFFFF8) + 120) >> 3));
          *(_QWORD *)&v69 = v69 + 1;
          *(_QWORD *)v12 = unpack_dq(&s, v6);
          *(_DWORD *)(v12 + 8) = unpack_dq(&s, v6);
          v13 = unpack_dw(&s, v6);
          v14 = v53;
          v15 = v13;
          v61 = v13;
          if ( v53 < v13 )
            v14 = v13;
          v16 = v71;
          v53 = v14;
          v17 = v70;
          v18 = v71 + 1;
          if ( (unsigned __int64)&v61 < v70 || (unsigned __int64)&v61 >= v70 + 4LL * *((_QWORD *)&v71 + 1) )
          {
            if ( *((_QWORD *)&v71 + 1) < v18 )
            {
              v70 = qvector_reserve(&v70, v70, v71 + 1, 4);
              v17 = v70;
              v15 = v61;
              v16 = v71;
            }
          }
          else if ( *((_QWORD *)&v71 + 1) < v18 )
          {
            srca = v15;
            v70 = qvector_reserve(&v70, v70, v71 + 1, 4);
            v17 = v70;
            v15 = srca;
            v16 = v71;
          }
          *(_DWORD *)(v17 + 4 * v16) = v15;
          v19 = s;
          *(_QWORD *)&v71 = v71 + 1;
          v20 = s;
          do
          {
            if ( v20 >= v6 )
              goto LABEL_21;
            ++v20;
          }
          while ( *(v20 - 1) );
          s = v20;
          if ( !v19 || (src = v19, v22 = strlen(v19), v23 = src, (v24 = v22) == 0) )
          {
LABEL_21:
            *(_QWORD *)(v12 + 24) = 0;
            goto LABEL_22;
          }
          v25 = *(void **)(v12 + 16);
          v26 = (void *)(v22 + 1);
          if ( *(_QWORD *)(v12 + 32) < v22 + 1 )
          {
            v41 = v22;
            v42 = src;
            srcb = (void *)(v22 + 1);
            v40 = qvector_reserve(v12 + 16, v25, v26, 1);
            *(_QWORD *)(v12 + 16) = v40;
            v24 = v41;
            v25 = (void *)v40;
            v23 = v42;
            v26 = srcb;
          }
          *(_QWORD *)(v12 + 24) = v26;
          srcc = (_BYTE *)v24;
          memmove(v25, v23, v24);
          srcc[*(_QWORD *)(v12 + 16)] = 0;
LABEL_22:
          ++v56;
          v21 = v69;
          if ( v45 == v56 )
            break;
          v11 = v69 + 1;
          v10 = v68;
          if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
            goto LABEL_24;
        }
        if ( (_QWORD)v69 )
        {
          *(_BYTE *)(a1 + 168) = v44 != 0;
          *(_BYTE *)(a1 + 169) = v43 != 0;
          sub_91C70((__int64 *)(a1 + 104), v53 + 1LL);
          if ( (int)v69 > 0 )
          {
            v32 = 0;
            v33 = 0;
            v34 = 4LL * (unsigned int)(v69 - 1) + 4;
            do
            {
              v35 = v33 + v68;
              v36 = *(_QWORD *)(a1 + 104) + 120LL * *(int *)(v70 + v32);
              *(_QWORD *)v36 = *(_QWORD *)(v33 + v68);
              *(_DWORD *)(v36 + 8) = *(_DWORD *)(v35 + 8);
              if ( v36 + 16 != v35 + 16 )
              {
                v37 = *(_QWORD *)(v35 + 24);
                if ( !v37 || (v38 = v37 - 1, v37 == 1) )
                {
                  *(_QWORD *)(v36 + 24) = 0;
                }
                else
                {
                  v59 = *(void **)(v35 + 16);
                  v39 = *(void **)(v36 + 16);
                  if ( *(_QWORD *)(v36 + 32) < v37 )
                  {
                    v46 = v37 - 1;
                    srcd = (void *)v34;
                    v55 = v33;
                    v58 = *(_QWORD *)(v35 + 24);
                    v39 = (void *)qvector_reserve(v36 + 16, *(_QWORD *)(v36 + 16), v37, 1);
                    *(_QWORD *)(v36 + 16) = v39;
                    v38 = v46;
                    v34 = (__int64)srcd;
                    v33 = v55;
                    v37 = v58;
                  }
                  *(_QWORD *)(v36 + 24) = v37;
                  srce = (void *)v34;
                  v54 = v33;
                  v57 = v37;
                  memmove(v39, v59, v38);
                  v33 = v54;
                  v34 = (__int64)srce;
                  *(_BYTE *)(*(_QWORD *)(v36 + 16) + v57 - 1) = 0;
                }
              }
              v32 += 4;
              v33 += 120;
              *(_DWORD *)(v36 + 40) = *(_DWORD *)(v35 + 40);
              *(_DWORD *)(v36 + 44) = *(_DWORD *)(v35 + 44);
              *(_QWORD *)(v36 + 48) = *(_QWORD *)(v35 + 48);
              *(_QWORD *)(v36 + 56) = *(_QWORD *)(v35 + 56);
              *(_QWORD *)(v36 + 64) = *(_QWORD *)(v35 + 64);
              *(__m128i *)(v36 + 72) = _mm_loadu_si128((const __m128i *)(v35 + 72));
              *(__m128i *)(v36 + 88) = _mm_loadu_si128((const __m128i *)(v35 + 88));
              *(__m128i *)(v36 + 104) = _mm_loadu_si128((const __m128i *)(v35 + 104));
            }
            while ( v32 != v34 );
          }
        }
        else
        {
LABEL_44:
          if ( (debug & 0x400000) != 0 )
            sub_88B80((__int64)"No DWARF sections found.\n");
          v2 = 0;
        }
        if ( v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v70);
        }
        v27 = v68;
        if ( v68 )
        {
          v28 = v69;
          if ( (_QWORD)v69 )
          {
            v29 = 0;
            v30 = 0;
            do
            {
              v31 = *(_QWORD *)(v27 + v29 + 16);
              if ( v31 )
              {
                *(_QWORD *)(v27 + v29 + 24) = 0;
                qfree(v31);
                v27 = v68;
              }
              v29 += 120;
              ++v30;
            }
            while ( v28 != v30 );
          }
          *(_QWORD *)&v69 = 0;
          qfree(v27);
        }
LABEL_40:
        v5 = v63;
        if ( !v63 )
        {
          v3 = v66;
          if ( !v66 )
            return v2;
          goto LABEL_4;
        }
LABEL_28:
        qfree(v5);
        v3 = v66;
        v63 = nullptr;
        if ( !v66 )
          return v2;
        goto LABEL_4;
      }
      sub_17110((__int64)"Expected data back.\n");
    }
    v2 = 0;
    goto LABEL_40;
  }
  v3 = v66;
  if ( v66 )
  {
LABEL_4:
    *(_QWORD *)&v67 = 0;
    qfree(v3);
  }
  return v2;
}
