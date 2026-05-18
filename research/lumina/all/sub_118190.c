__int64 __fastcall sub_118190(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  bool v6; // zf
  __int64 v7; // r14
  __int16 v8; // dx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // r13
  bool v13; // cc
  int v14; // eax
  int v15; // r15d
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 i; // rax
  __int64 v21; // r15
  _BYTE *v22; // rdi
  __int64 v23; // r12
  int v24; // ebp
  int v25; // esi
  int v26; // esi
  signed int v27; // edi
  char *v28; // r8
  int v29; // esi
  int v30; // eax
  char *v31; // rax
  unsigned int v32; // r15d
  Elf64_Rela *v33; // rcx
  _DWORD *v34; // rbp
  int v35; // edx
  int v36; // esi
  __int64 v37; // r11
  int v38; // ecx
  __int64 v39; // rbx
  int v40; // esi
  int v41; // r13d
  int v42; // r15d
  char *v43; // r8
  unsigned int v44; // r15d
  unsigned int v45; // r13d
  unsigned int v46; // eax
  _DWORD *v47; // rax
  unsigned int v48; // r10d
  unsigned int v49; // r9d
  _DWORD *v50; // r11
  int v51; // eax
  void *v52; // rax
  char *src; // [rsp+8h] [rbp-E0h]
  _DWORD *v55; // [rsp+10h] [rbp-D8h]
  _DWORD *v56; // [rsp+18h] [rbp-D0h]
  __int64 v57; // [rsp+20h] [rbp-C8h]
  _DWORD *v58; // [rsp+28h] [rbp-C0h]
  int v60; // [rsp+34h] [rbp-B4h]
  __int64 v61; // [rsp+50h] [rbp-98h]
  __int64 v62; // [rsp+58h] [rbp-90h]
  unsigned int v63; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v64; // [rsp+64h] [rbp-84h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int32 v66; // [rsp+6Ch] [rbp-7Ch] BYREF
  _QWORD v67[2]; // [rsp+70h] [rbp-78h] BYREF
  char *v68; // [rsp+80h] [rbp-68h]
  __int16 v69; // [rsp+8Ch] [rbp-5Ch]
  char v70; // [rsp+8Eh] [rbp-5Ah]
  char v71; // [rsp+92h] [rbp-56h]
  int v72; // [rsp+94h] [rbp-54h]
  int v73; // [rsp+98h] [rbp-50h]
  unsigned __int64 v74; // [rsp+A8h] [rbp-40h]

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 8);
  v74 = __readfsqword(0x28u);
  v6 = (*(_BYTE *)(a1 + 1) & 0x20) == 0;
  v64 = a4;
  v7 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v11 = sub_115FA0(*(_QWORD *)(v7 + 16), *(unsigned int *)(a1 + 80), a1);
    v63 = v11;
    if ( v11 )
      return v11;
    if ( v64 )
    {
      LODWORD(v33) = 75733;
      if ( *(char *)(a1 + 84) < 0 )
      {
LABEL_53:
        v11 = 11;
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          (_DWORD)v33,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        return v11;
      }
    }
  }
  if ( *(_BYTE *)a1 > 2u )
  {
    v11 = sub_EC330(a1);
    v63 = v11;
    if ( (v11 & 0xFFFFFFEF) != 0 )
      return v11;
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    if ( !v64 )
    {
      if ( (a3 & 2) != 0 )
        goto LABEL_64;
      v8 = *(_WORD *)(a2 + 32);
      if ( v8 )
      {
        v67[0] = *(_QWORD *)(a1 + 128);
        v9 = *(_QWORD *)(a2 + 24);
        v69 = v8;
        v70 = 0;
        v71 = 0;
        v67[1] = v9;
        v10 = sub_116C30(a1, (__int64)v67, (int *)&v64);
      }
      else
      {
        v10 = sub_1170D0(a1, *(char **)a2, *(_QWORD *)(a2 + 8), (a3 >> 3) & 1, (int *)&v64);
      }
      v11 = v10;
      v63 = v10;
      if ( v10 )
        return v11;
      if ( !v64 )
      {
LABEL_64:
        sub_C7ED0(a1);
        if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a2 + 8) )
        {
          v72 = *(_QWORD *)(a1 + 48);
          v73 = 0;
          v68 = *(char **)a2;
          return (unsigned int)sub_1127B0(a1, (__int64)v67);
        }
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(v5 + 19) )
    {
      v17 = *(_DWORD *)(a1 + 80);
      v18 = *(_QWORD *)(a2 + 8);
      v19 = *(_QWORD *)(v5 + 8);
      *(_BYTE *)(v5 + 19) = 0;
      for ( i = *(_QWORD *)(v19 + 16); i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_BYTE *)(i + 1) & 0x10) != 0 )
        {
          *(_BYTE *)(v5 + 19) = 1;
          if ( v17 == *(_DWORD *)(i + 80) && v18 == *(_QWORD *)(i + 48) )
            *(_BYTE *)i = 1;
        }
      }
    }
    if ( (*(_BYTE *)(a1 + 1) & 2) != 0 && *(_QWORD *)(a2 + 8) == *(_QWORD *)(a1 + 48) )
    {
      if ( *(_WORD *)(a1 + 70) && *(_DWORD *)(a1 + 64) == *(_DWORD *)(a2 + 36) + *(_DWORD *)(a2 + 40) )
        return (unsigned int)sub_1127B0(a1, a2);
    }
    else if ( !v64 )
    {
      v11 = sub_117600(a1, *(_QWORD *)(a2 + 8), (a3 & 8) != 0, (int *)&v64);
      v63 = v11;
      if ( v11 )
        return v11;
    }
  }
  v12 = *(_QWORD *)(a1 + 136);
  if ( *(int *)(v12 + 20) < 0 )
  {
    if ( *(_BYTE *)a1 > 1u )
    {
      v33 = &stru_12850;
      goto LABEL_53;
    }
    v11 = sub_E9270(*(_QWORD *)(a1 + 136));
    v63 = v11;
    if ( v11 )
      return v11;
  }
  v55 = *(_DWORD **)(v7 + 136);
  if ( (a3 & 0x80u) == 0 )
  {
    v21 = *(unsigned __int8 *)(v12 + 10);
    v22 = (char *)v55 + v21;
    if ( *(_BYTE *)(v12 + 1) )
    {
      LODWORD(v23) = *(_DWORD *)(a2 + 36);
      v24 = v23 + *(_DWORD *)(a2 + 40);
      src = *(char **)(a2 + 16);
      if ( (unsigned int)v24 > 0x7F )
      {
        v25 = (unsigned __int8)sub_CB6C0(v22, v24);
      }
      else
      {
        *v22 = v24;
        v25 = 1;
      }
      v26 = v25 + v21 + sub_CB6C0((_BYTE *)v55 + v25 + (int)v21, *(_QWORD *)(a2 + 8));
    }
    else
    {
      v23 = *(_QWORD *)(a2 + 8);
      v24 = v23;
      src = *(char **)a2;
      if ( (unsigned int)v23 > 0x7F )
      {
        v36 = (unsigned __int8)sub_CB6C0(v22, (int)v23);
      }
      else
      {
        *v22 = v23;
        v36 = 1;
      }
      v26 = v21 + v36;
    }
    v27 = *(unsigned __int16 *)(v12 + 14);
    v28 = (char *)v55 + v26;
    if ( v27 >= v24 )
    {
      v29 = v24 + v26;
      v30 = 4;
      if ( v29 >= 4 )
        v30 = v29;
      v60 = v30;
      v31 = (char *)memcpy(v28, src, (int)v23);
      memset(&v31[(int)v23], 0, v24 - (int)v23);
      v63 = 0;
      goto LABEL_41;
    }
    v37 = *(_QWORD *)(v12 + 72);
    v38 = *(unsigned __int16 *)(v12 + 16);
    v61 = v12;
    v62 = v4;
    v66 = 0;
    v57 = 0;
    v39 = v37;
    if ( v27 >= (int)(v38 + (v24 - v38) % (unsigned int)(*(_DWORD *)(v37 + 56) - 4)) )
      v38 += (v24 - v38) % (unsigned int)(*(_DWORD *)(v37 + 56) - 4);
    v40 = v38 + v26;
    v41 = v38;
    v60 = v40 + 4;
    v58 = (_DWORD *)((char *)v55 + v40);
    v56 = (_DWORD *)(v37 + 52);
LABEL_78:
    v42 = v41;
    if ( v24 <= v41 )
      v42 = v24;
    if ( (int)v23 < v42 )
    {
LABEL_81:
      if ( (int)v23 <= 0 )
      {
        v43 = (char *)memset(v28, 0, v42);
      }
      else
      {
        v42 = v23;
        v43 = (char *)memcpy(v28, src, (int)v23);
      }
      goto LABEL_83;
    }
    while ( 1 )
    {
      v43 = (char *)memcpy(v28, src, v42);
LABEL_83:
      v24 -= v42;
      if ( v24 <= 0 )
      {
        v12 = v61;
        v4 = v62;
        if ( v57 )
          sub_C36A0(*(_QWORD *)(v57 + 112));
        v63 = 0;
        goto LABEL_41;
      }
      LODWORD(v23) = v23 - v42;
      src += v42;
      v41 -= v42;
      if ( v41 )
      {
        v28 = &v43[v42];
        goto LABEL_78;
      }
      v67[0] = 0;
      v44 = v66;
      v45 = v66;
      if ( *(_BYTE *)(v39 + 33) )
      {
        v48 = dword_241470;
        v49 = *(_DWORD *)(v39 + 52);
        v50 = (_DWORD *)(v39 + 56);
        v51 = v66;
        while ( 1 )
        {
          v45 = v51 + 1;
          v51 = 0;
          v66 = v45;
          if ( v45 > 1 )
            v51 = sub_CCA10(v56, v50, v45);
          if ( v45 != v51 )
          {
            v51 = v48 / v49 + 1;
            if ( v45 != v51 )
              break;
          }
        }
      }
      v46 = sub_110FD0(v39, (__int64)v67, &v66, v45, 0);
      v6 = *(_BYTE *)(v39 + 33) == 0;
      v65 = v46;
      if ( v6 || v46 )
        goto LABEL_88;
      sub_111970(v39, v66, (v44 != 0) + 3, v44, (int *)&v65);
      if ( v65 )
        break;
LABEL_89:
      *v58 = _byteswap_ulong(v66);
      if ( v57 )
        sub_C36A0(*(_QWORD *)(v57 + 112));
      v57 = v67[0];
      v47 = *(_DWORD **)(v67[0] + 80LL);
      *v47 = 0;
      v58 = v47;
      v41 = *(_DWORD *)(v39 + 56) - 4;
      v28 = (char *)(*(_QWORD *)(v67[0] + 80LL) + 4LL);
      v42 = v41;
      if ( v24 <= v41 )
        v42 = v24;
      if ( (int)v23 < v42 )
        goto LABEL_81;
    }
    if ( !v67[0] )
    {
LABEL_124:
      v12 = v61;
      v4 = v62;
      if ( v57 )
        sub_C36A0(*(_QWORD *)(v57 + 112));
      v11 = v65;
      v63 = v65;
      goto LABEL_19;
    }
    sub_C36A0(*(_QWORD *)(v67[0] + 112LL));
    v46 = v65;
LABEL_88:
    if ( v46 )
      goto LABEL_124;
    goto LABEL_89;
  }
  v13 = *(_DWORD *)(v7 + 144) < 4;
  v14 = 4;
  v63 = 0;
  if ( !v13 )
    v14 = *(_DWORD *)(v7 + 144);
  v15 = v14;
  v60 = v14;
  if ( *(_BYTE *)(v7 + 33) && *(unsigned __int16 *)(v12 + 14) < v14 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *))(v12 + 128))(v12, v55, v67);
    if ( (_DWORD)v68 != WORD2(v68) )
      sub_111970(v7, _byteswap_ulong(*(_DWORD *)((char *)v55 + v15 - 4)), 3, *(_DWORD *)(v12 + 4), (int *)&v63);
    v11 = v63;
LABEL_19:
    if ( v11 )
      return v11;
  }
LABEL_41:
  v32 = *(unsigned __int16 *)(v4 + 86);
  if ( v64 )
  {
    if ( (v64 & 0x80000000) != 0 && *(_WORD *)(v12 + 24) )
    {
      LOWORD(v32) = v32 + 1;
      *(_BYTE *)(v4 + 1) &= ~2u;
      *(_WORD *)(v4 + 86) = v32;
      v32 = (unsigned __int16)v32;
    }
  }
  else
  {
    LODWORD(v33) = 75892;
    if ( (unsigned __int16)v32 >= *(_WORD *)(v12 + 24) )
      goto LABEL_53;
    v11 = sub_10D290(*(_QWORD *)(v12 + 112), v64);
    v63 = v11;
    if ( v11 )
      return v11;
    v34 = (_DWORD *)(*(_QWORD *)(v12 + 80)
                   + (unsigned __int16)(*(_WORD *)(v12 + 26)
                                      & __ROL2__(*(_WORD *)(*(_QWORD *)(v12 + 96) + (int)(2 * v32)), 8)));
    if ( !*(_BYTE *)(v12 + 8) )
      *v55 = *v34;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *))(v12 + 128))(v12, v34, v67);
    if ( WORD2(v68) == (_DWORD)v68 )
      v63 = 0;
    else
      v63 = sub_112DB0(*(_QWORD *)(v12 + 72), *(_QWORD *)(v12 + 88), (__int64)v34, (int)v68, WORD2(v68), HIWORD(v68));
    v35 = HIWORD(v68);
    *(_BYTE *)(v4 + 1) &= ~4u;
    if ( v35 == v60 && WORD2(v68) == (_DWORD)v68 && (!*(_BYTE *)(v7 + 33) || *(unsigned __int16 *)(v12 + 16) > v60) )
    {
      LODWORD(v33) = 75919;
      if ( (unsigned __int64)v34 >= *(_QWORD *)(v12 + 80) + (unsigned __int64)*(unsigned __int8 *)(v12 + 9) + 10 )
      {
        LODWORD(v33) = 75922;
        if ( *(_QWORD *)(v12 + 88) >= (unsigned __int64)v34 + (unsigned __int16)v35 )
        {
          memcpy(v34, v55, (unsigned __int16)v35);
          return v11;
        }
      }
      goto LABEL_53;
    }
    v11 = v63;
    if ( v63 )
      return v11;
    sub_E96F0(v12, v32, v35, &v63);
    v11 = v63;
    if ( v63 )
      return v11;
  }
  sub_112FD0(v12, v32, v55, v60, nullptr, 0, (int *)&v63);
  *(_WORD *)(v4 + 70) = 0;
  if ( !*(_BYTE *)(v12 + 12) )
    return v63;
  *(_BYTE *)(v4 + 1) &= ~2u;
  v11 = sub_114FD0(v4, v32);
  v63 = v11;
  *(_BYTE *)(*(_QWORD *)(v4 + 136) + 12LL) = 0;
  *(_BYTE *)v4 = 1;
  if ( (a3 & 2) != 0 && !v11 )
  {
    if ( *(char *)(v4 + 84) >= 0 )
      sub_CCD80(v4);
    if ( *(_QWORD *)(v4 + 128) )
    {
      v11 = 7;
      v52 = (void *)sub_D1E10(*(_QWORD *)(a2 + 8), v32);
      *(_QWORD *)(v4 + 24) = v52;
      if ( !v52 )
      {
LABEL_119:
        *(_BYTE *)v4 = 3;
        *(_QWORD *)(v4 + 72) = *(_QWORD *)(a2 + 8);
        return v11;
      }
      memcpy(v52, *(const void **)a2, *(_QWORD *)(a2 + 8));
    }
    v11 = v63;
    goto LABEL_119;
  }
  return v11;
}
