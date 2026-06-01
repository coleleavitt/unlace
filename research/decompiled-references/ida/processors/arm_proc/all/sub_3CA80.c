__int64 __fastcall sub_3CA80(_WORD *a1, __int64 a2, double a3)
{
  char v3; // dl
  __int64 v6; // rcx
  __int64 v7; // r12
  __int16 v8; // ax
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int16 v15; // ax
  void *v17; // rax
  int v18; // esi
  __int16 v19; // ax
  int v20; // esi
  __int64 v21; // rax
  char *v22; // rsi
  __int16 v23; // si
  __int16 v24; // ax
  char v25; // cl
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rbp
  int v30; // eax
  __int64 v31; // rax
  size_t v32; // rbp
  __int64 v33; // r12
  __int64 v34; // r14
  unsigned __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // rax
  const void *v38; // r13
  const char *v39; // rdi
  size_t v40; // rax
  size_t v41; // r15
  size_t v42; // r12
  const char *v43; // rsi
  __int64 v44; // rbp
  char *v45; // rbp
  void *src; // [rsp+0h] [rbp-68h] BYREF
  __int128 v47; // [rsp+8h] [rbp-60h] BYREF
  __int64 v48; // [rsp+18h] [rbp-50h]
  int v49; // [rsp+20h] [rbp-48h]
  unsigned __int64 v50; // [rsp+28h] [rbp-40h]

  v3 = *(_BYTE *)(a2 + 1);
  v50 = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 0:
      return 0;
    case 1:
      v23 = *(_WORD *)(a2 + 6);
      if ( v23 == 15 )
      {
        v24 = a1[124];
        v25 = v24 - 90;
        if ( (unsigned __int16)(v24 - 1114) <= 0xBu
          && (((1LL << v25) & 0x333) != 0 || ((1LL << v25) & 0xCCC) != 0 && *(_BYTE *)a2 > 1u) )
        {
          (*(void (__fastcall **)(_WORD *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "APSR_nzcv", 33);
          return 1;
        }
      }
      sub_3C5C0(a1, v23, a2);
      if ( (a1[126] & 0x40) == 0 )
        return 1;
      goto LABEL_59;
    case 2:
    case 7:
      v6 = *(_QWORD *)(a2 + 16);
      v7 = v6 + 16LL * *((_QWORD *)a1 + 28);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 77) + 184LL) & 2) != 0 )
        goto LABEL_44;
      if ( v3 != 2 )
        goto LABEL_44;
      v8 = a1[124];
      if ( v8 != 480 && (unsigned __int16)(v8 - 113) > 1u && (unsigned __int16)(v8 - 30) > 1u )
      {
        LOBYTE(v8) = v8 & 0x7F;
        if ( v8 != 344 )
          goto LABEL_44;
      }
      src = nullptr;
      v48 = 0;
      v49 = 0;
      v47 = 0;
      if ( (unsigned __int8)sub_262E0((__int64)(a1 + 112), (_BYTE *)a2, v7, &v47, 0) )
      {
        v9 = *(_BYTE *)(a2 + 5);
        BYTE4(src) = 8;
        BYTE5(src) = v9;
        v10 = *((_QWORD *)a1 + 79);
        v11 = *(_QWORD *)(v10 + 184);
        *(_QWORD *)(v10 + 184) = 0;
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 61);
        v12 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 2) = v7;
        *((_DWORD *)a1 + 36) |= 0x20000u;
        v13 = *((_QWORD *)a1 + 90);
        *((_QWORD *)a1 + 90) = get_flags_ex();
        (*(void (__fastcall **)(_WORD *, void **, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, &src, 0);
        v14 = *((_QWORD *)a1 + 79);
        *((_QWORD *)a1 + 2) = v12;
        *((_QWORD *)a1 + 90) = v13;
        *(_QWORD *)(v14 + 184) = v11;
        return 1;
      }
      v6 = *(_QWORD *)(a2 + 16);
LABEL_44:
      v26 = (unsigned __int16)a1[124];
      LOWORD(v26) = v26 - 1109;
      if ( (unsigned __int16)v26 > 4u || (v27 = 21, !_bittest64(&v27, v26)) || *(_BYTE *)a2 == 1 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_WORD *, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
                a1,
                a2,
                v7,
                v6) )
          goto LABEL_48;
      }
      else
      {
        src = nullptr;
        v47 = 0;
        if ( get_name_expr() <= 0 )
        {
LABEL_48:
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
          (*(void (__fastcall **)(_WORD *, _QWORD, __int64))(*(_QWORD *)a1 + 104LL))(a1, *(_QWORD *)(a2 + 16), 16);
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
          remember_problem();
          return 1;
        }
        if ( (_QWORD)v47 )
        {
          v31 = v47 - 1;
          v32 = v47 - 1;
          if ( (_QWORD)v47 != 1 )
          {
            v33 = (*((_QWORD *)a1 + 4) == 0) + *((_QWORD *)a1 + 4) - 1LL;
            v34 = v31 + v33;
            v35 = v31 + (*((_QWORD *)a1 + 4) == 0) + *((_QWORD *)a1 + 4);
            if ( *((_QWORD *)a1 + 5) < v35 )
              *((_QWORD *)a1 + 3) = qvector_reserve();
            v36 = *((_QWORD *)a1 + 3);
            *((_QWORD *)a1 + 4) = v35;
            *(_BYTE *)(v36 + v34) = 0;
            memcpy((void *)(v33 + *((_QWORD *)a1 + 3)), src, v32);
            if ( src )
            {
              *(_QWORD *)&v47 = 0;
              qfree();
            }
          }
        }
      }
      return 1;
    case 3:
      if ( *((char *)a1 + 254) < 0 && *(_WORD *)(a2 + 6) == 162 )
      {
        sub_3A770(a1, a2, 0);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
        sub_3A770(a1, a2, 1);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        (*(void (__fastcall **)(_WORD *, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 64);
      }
      else
      {
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
        sub_3A770(a1, a2, 0);
        if ( *(_BYTE *)(a2 + 34) )
          sub_38590((__int64)a1);
        if ( *((char *)a1 + 252) < 0 )
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        if ( (a1[126] & 0x10) != 0 )
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
        sub_3A770(a1, a2, 1);
        sub_3A810((__int64)a1, a2);
      }
      goto LABEL_56;
    case 4:
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      sub_3A770(a1, a2, 0);
      if ( *(_BYTE *)(a2 + 34) )
        sub_38590((__int64)a1);
      if ( *((char *)a1 + 252) < 0 )
      {
        if ( (unsigned __int8)is_stkvar() )
          (*(void (__fastcall **)(_WORD *, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 70);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
        if ( *(_QWORD *)(a2 + 16) )
        {
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
          v29 = *(_QWORD *)(a2 + 16);
          v30 = v29;
          if ( (int)v29 < 0 )
          {
            (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
            v30 = -(int)v29;
          }
          (*(void (__fastcall **)(_WORD *, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(a1, v30, 16);
        }
      }
      else if ( *(_QWORD *)(a2 + 16)
             || (unsigned __int8)is_off()
             || (unsigned __int8)is_stkvar()
             || (unsigned __int8)is_enum()
             || (unsigned __int8)is_stroff() )
      {
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
        (*(void (__fastcall **)(_WORD *, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 196);
        sub_3A810((__int64)a1, a2);
      }
LABEL_56:
      v28 = *((_DWORD *)a1 + 63);
      if ( (v28 & 0x80u) == 0 )
      {
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
        v28 = *((_DWORD *)a1 + 63);
      }
      if ( (v28 & 0x20) != 0 )
LABEL_59:
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 33);
      return 1;
    case 5:
      v15 = a1[124];
      if ( (unsigned __int16)(v15 - 85) <= 3u || v15 == 2 )
      {
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 123);
        (*(void (__fastcall **)(_WORD *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, 0);
        sub_3A810((__int64)a1, a2);
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 125);
        return 1;
      }
      if ( v15 == 286 )
      {
        if ( *(_QWORD *)(a2 + 8) == 15 )
          return 1;
LABEL_80:
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
LABEL_81:
        (*(void (__fastcall **)(_WORD *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, 0);
        sub_3A810((__int64)a1, a2);
        return 1;
      }
      if ( (unsigned __int16)(v15 - 284) > 1u && v15 != 958 )
        goto LABEL_92;
      if ( (unsigned __int8)is_defarg()
        || (v37 = *(_QWORD *)(a2 + 8), (unsigned __int64)(v37 - 1) > 0xE)
        || (v38 = (const void *)qword_A09E0[v37]) == nullptr )
      {
        v15 = a1[124];
LABEL_92:
        if ( (unsigned __int16)(v15 - 36) <= 0x84u && v15 != 80 )
          goto LABEL_81;
        goto LABEL_80;
      }
      v39 = (const char *)qword_A09E0[v37];
      v47 = 0;
      v40 = strlen(v39);
      v41 = v40 + 1;
      v42 = v40;
      src = (void *)qvector_reserve();
      *(_QWORD *)&v47 = v41;
      memmove(src, v38, v42);
      *((_BYTE *)src + v42) = 0;
      if ( a1[124] == 284 && *(_BYTE *)(a2 + 32) )
      {
        v44 = ((_QWORD)v47 == 0) + (_QWORD)v47 - 1LL;
        if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v44 + 4) )
          src = (void *)qvector_reserve();
        *(_QWORD *)&v47 = v44 + 4;
        *((_BYTE *)src + v44 + 3) = 0;
        v45 = (char *)src + v44;
        *(_WORD *)v45 = 22606;
        v45[2] = 83;
      }
      v43 = &s1;
      if ( (_QWORD)v47 )
        v43 = (const char *)src;
      (*(void (__fastcall **)(_WORD *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v43, 32);
      if ( src )
      {
        *(_QWORD *)&v47 = 0;
        qfree();
      }
      return 1;
    case 8:
      sub_3C5C0(a1, *(_WORD *)(a2 + 6), a2);
      sub_3A810((__int64)a1, a2);
      return 1;
    case 9:
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 123);
      v17 = *(void **)(a2 + 24);
      LOBYTE(v47) = 0;
      src = v17;
      sub_3BE20((__int64)a1, (unsigned __int64 *)&src);
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 125);
      if ( *(_BYTE *)(a2 + 32) )
        (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 94);
      return 1;
    case 10:
      v18 = *(unsigned __int16 *)(a2 + 6);
      if ( (unsigned __int16)(a1[124] - 83) <= 1u )
        sub_3AE40((__int64)a1, v18);
      else
        sub_3A6C0(a1, v18, -1);
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v19 = a1[124];
      v20 = *(char *)(a2 + 32);
      if ( (unsigned __int16)(v19 - 93) > 1u && (unsigned __int16)(v19 - 167) > 1u )
        sub_3AE40((__int64)a1, v20);
      else
        sub_3A6C0(a1, v20, -1);
      (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      sub_3AE40((__int64)a1, *(char *)(a2 + 33));
      return 1;
    case 11:
      sub_3AE40((__int64)a1, *(unsigned __int16 *)(a2 + 6));
      return 1;
    case 12:
      sub_3C8D0((__int64 *)a1, a2);
      return 1;
    case 13:
      (*(void (__fastcall **)(_WORD *, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2 + 8, 32);
      return 1;
    case 14:
      v21 = *(_QWORD *)(a2 + 8) & 0xFLL;
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 77) + 24LL) + 4LL) & 1) != 0 )
        v22 = (&off_A0B20)[v21];
      else
        v22 = (char *)*(&off_A0BA0 + v21);
      (*(void (__fastcall **)(_WORD *, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v22, 32);
      return 1;
    default:
      sub_22E50((__int64)"out: %a: bad optype %d", a3, *((_QWORD *)a1 + 30));
      return 1;
  }
}

