unsigned __int64 __fastcall sub_ABA0(__int64 a1, int a2, __int64 a3)
{
  void *v3; // r14
  size_t v7; // r13
  __m128i si128; // xmm0
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  _BOOL8 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _BOOL8 v16; // rcx
  char v17; // al
  char v18; // al
  __int64 v19; // rax
  const void *v20; // r15
  void *v21; // rax
  __int64 v22; // rdi
  bool v23; // zf
  unsigned int v24; // r14d
  const char *v25; // rax
  __int64 v26; // r13
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int16 v33; // ax
  char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  _BOOL8 v37; // rcx
  unsigned __int16 v38; // ax
  const char *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  int v46[4]; // [rsp+0h] [rbp-498h] BYREF
  _BYTE v47[45]; // [rsp+10h] [rbp-488h] BYREF
  unsigned int v48; // [rsp+3Dh] [rbp-45Bh]
  char src[1032]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v50; // [rsp+458h] [rbp-40h]

  v3 = nullptr;
  v50 = __readfsqword(0x28u);
  *(_BYTE *)(a3 + 36) = 0;
  *(_DWORD *)(a3 + 45) = 0;
  v7 = *(_QWORD *)(a1 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v7 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    *(__m128i *)v46 = si128;
    v3 = (void *)qalloc_or_throw(v22);
    memcpy(v3, *(const void **)a1, v7);
    si128 = _mm_load_si128((const __m128i *)v46);
  }
  if ( qword_143C0 )
  {
    *(__m128i *)v46 = si128;
    *(_QWORD *)&xmmword_143C8 = 0;
    qfree(qword_143C0);
    si128 = _mm_load_si128((const __m128i *)v46);
  }
  qword_143C0 = (__int64)v3;
  xmmword_143C8 = (__int128)si128;
  if ( (void **)(a1 + 24) != &dest )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 > 1 )
    {
      v20 = *(const void **)(a1 + 24);
      v21 = dest;
      if ( *((_QWORD *)&xmmword_143E0 + 1) < v9 )
      {
        v21 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 32), 1);
        dest = v21;
      }
      *(_QWORD *)&xmmword_143E0 = v9;
      memmove(v21, v20, v9 - 1);
      *((char *)dest + v9 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_143E0 = 0;
    }
  }
  qword_143F0 = *(_QWORD *)(a1 + 48);
  dword_143F8 = *(_DWORD *)(a1 + 56);
  byte_143FC = *(_BYTE *)(a1 + 60);
  *(_BYTE *)(a3 + 49) = sub_5EE0(a1, -1);
  *(_BYTE *)(a3 + 50) = sub_5EE0(a1, -1);
  *(_BYTE *)(a3 + 51) = sub_5EE0(a1, -1);
  if ( dword_145C8 || (*(_BYTE *)(a1 + 58) & 1) != 0 )
  {
    v10 = -1;
    sub_5890(a1, -1, 4);
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(unsigned int *)(*(_QWORD *)a1 + v12);
    v14 = v12 + 4;
  }
  else
  {
    v10 = -1;
    sub_5890(a1, -1, 2);
    v19 = *(_QWORD *)(a1 + 48);
    v13 = *(unsigned __int16 *)(*(_QWORD *)a1 + v19);
    v14 = v19 + 2;
  }
  *(_QWORD *)(a1 + 48) = v14;
  *(_DWORD *)(a3 + 32) = v13;
  *(_QWORD *)(a3 + 24) = (unsigned __int16)sub_6A10(a1, -1, v13, v11);
  BYTE2(dword_143F8) = (*(_BYTE *)(a3 + 49) & 2) == 0 ? -96 : -94;
  v17 = *(_BYTE *)(a3 + 49);
  *(_QWORD *)(a3 + 16) = 1;
  *(_BYTE *)(a3 + 36) = (v17 & 4) != 0;
  v18 = *(_BYTE *)(a3 + 50) & 0xF;
  *(__m128i *)a3 = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
  switch ( v18 )
  {
    case 0:
      *(_QWORD *)a3 = (unsigned __int16)sub_6A10(a1, -1, v15, v16);
      v38 = sub_6A10(a1, -1, v36, v37);
      v15 = v38;
      *(_QWORD *)(a3 + 8) = v38;
      if ( v38 )
      {
        *(_QWORD *)(a3 + 16) = 0;
      }
      else
      {
        v10 = -1;
        sub_5890(a1, -1, 2);
        v45 = *(_QWORD *)(a1 + 48);
        v15 = *(unsigned __int16 *)(*(_QWORD *)a1 + v45);
        *(_QWORD *)(a1 + 48) = v45 + 2;
        *(_QWORD *)(a3 + 16) = (unsigned __int16)v15;
      }
      goto LABEL_19;
    case 1:
      v23 = byte_143A5 == 0;
      *(_QWORD *)(a3 + 8) = -1;
      if ( v23 )
        sub_4680(-1);
      byte_143A5 = 1;
      goto LABEL_19;
    case 2:
      v23 = byte_143A4 == 0;
      *(_QWORD *)(a3 + 8) = -2;
      if ( v23 )
        sub_4680(-2);
      byte_143A4 = 1;
      goto LABEL_19;
    case 3:
      v23 = byte_143A3 == 0;
      *(_QWORD *)(a3 + 8) = -3;
      if ( v23 )
        sub_4680(-3);
      byte_143A3 = 1;
      goto LABEL_19;
    case 4:
      v23 = byte_143A2 == 0;
      *(_QWORD *)(a3 + 8) = -4;
      if ( v23 )
        sub_4680(-4);
      byte_143A2 = 1;
      src[0] = 0;
      if ( byte_145C0 )
        goto LABEL_32;
      goto LABEL_20;
    default:
      v10 = (__int64)"comdat";
      sub_4FB0((__int64)"An unexpected condition occurred (%s)", "comdat");
LABEL_19:
      src[0] = 0;
      if ( byte_145C0 )
      {
LABEL_32:
        v33 = sub_6A10(a1, v10, v15, v16);
        v34 = "";
        v24 = v33;
        v26 = v33;
        if ( v33 )
        {
          if ( v33 < (unsigned __int64)xmmword_14598 )
          {
            v34 = (char *)::src;
            v35 = qword_14590 + 32LL * v33;
            if ( *(_QWORD *)(v35 + 8) )
              v34 = *(char **)v35;
          }
        }
        qstrncpy(src, v34, 1024);
        if ( !a2 )
        {
LABEL_24:
          if ( netnode_supval(qword_144C8, v26, v47, 52, 83) <= 0 )
            sub_52E0("read_comdat");
          v27 = v48;
          v28 = *(_QWORD *)&v47[37];
          *(_DWORD *)(a3 + 45) = v48;
          *(_QWORD *)(a3 + 37) = v28;
          v29 = *(_QWORD *)(a1 + 48);
          v30 = *(_QWORD *)(a1 + 8);
          if ( v29 < v30 )
          {
            v31 = v30 - v29;
            qword_14420 = v28;
            qword_14408 = v31;
            qword_14400 = v29;
            if ( !a2 )
            {
LABEL_27:
              netnode_supdel_all(qword_143B0, 83);
              dword_143AC = 1;
              return v50 - __readfsqword(0x28u);
            }
LABEL_49:
            v44 = *(unsigned int *)(a3 + 32);
            if ( v27 < v31 + v44 )
            {
              *(_DWORD *)(a3 + 45) = v31 + v44;
              netnode_supset(qword_144C8, v24, a3, 52, 83);
            }
            goto LABEL_27;
          }
          return v50 - __readfsqword(0x28u);
        }
      }
      else
      {
LABEL_20:
        if ( !a2 )
        {
          v39 = sub_7530(a1, 0xFFFFFFFFFFFFFFFFLL);
          qstrncpy(src, v39, 1024);
          v24 = netnode_altval(qword_144C0, qword_145E0, 65);
          v26 = v24;
          goto LABEL_24;
        }
        v24 = xmmword_14508;
        v25 = sub_7530(a1, 0xFFFFFFFFFFFFFFFFLL);
        qstrncpy(src, v25, 1024);
        sub_A940(src, 0, (*(_BYTE *)(a3 + 49) & 4) != 0);
      }
      if ( !src[0] )
        sub_52E0("comdat");
      v26 = v24;
      sub_4C10(src);
      *(_QWORD *)v47 = v24;
      netnode_supset(qword_144C0, qword_145E0, v47, 8, 65);
      if ( (*(_BYTE *)(a3 + 49) & 1) != 0 )
        goto LABEL_24;
      *(_QWORD *)v47 = v24;
      netnode_supset(qword_144C8, qword_144B8, v47, 8, 65);
      v40 = qword_144B8 + 0x2000;
      v41 = qword_144B8 + 1;
      *(_QWORD *)(a3 + 37) = qword_144B8 + 0x2000;
      v42 = *(_QWORD *)(a1 + 48);
      qword_144B8 = v41;
      v43 = *(_QWORD *)(a1 + 8);
      if ( v42 < v43 )
      {
        v31 = v43 - v42;
        qword_14420 = v40;
        qword_14408 = v31;
        qword_14400 = v42;
        v27 = *(unsigned int *)(a3 + 45);
        goto LABEL_49;
      }
      return v50 - __readfsqword(0x28u);
  }
}
