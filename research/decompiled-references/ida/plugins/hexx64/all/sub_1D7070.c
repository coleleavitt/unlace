__int64 __fastcall sub_1D7070(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        int a6,
        __m128i a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v13; // rdi
  __int64 result; // rax
  int flags; // edx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  char v21; // r13
  _QWORD *v22; // rax
  __int64 func; // rax
  __int64 fchunk; // rax
  __int64 not_tail; // rbx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  char v33; // al
  __int64 (*v34)(); // rax
  __int64 v35; // r14
  _QWORD *v36; // r13
  bool v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int16 v46; // cx
  __int64 v47; // r13
  _QWORD *v48; // rax
  unsigned __int64 v49; // rdx
  _QWORD *v50; // r14
  unsigned __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned int *v55; // rdx
  char v56; // al
  __int64 v57; // rdx
  __m128i v58; // xmm0
  bool i; // al
  bool v60; // al
  int v61; // eax
  __int64 j; // rdx
  __int64 v63; // rdx
  __int64 first_cref_from; // rax
  unsigned int *v65; // r8
  unsigned int v66; // edx
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // ecx
  int v71; // eax
  char v72; // al
  __int64 v73; // [rsp+0h] [rbp-108h]
  unsigned int v74; // [rsp+0h] [rbp-108h]
  unsigned int v75; // [rsp+0h] [rbp-108h]
  unsigned int v76; // [rsp+0h] [rbp-108h]
  unsigned int v77; // [rsp+0h] [rbp-108h]
  __int64 v78; // [rsp+8h] [rbp-100h]
  _QWORD *v79; // [rsp+10h] [rbp-F8h]
  _QWORD *v80; // [rsp+18h] [rbp-F0h]
  __int64 v81; // [rsp+28h] [rbp-E0h]
  char v82; // [rsp+32h] [rbp-D6h]
  unsigned __int64 v83; // [rsp+40h] [rbp-C8h]
  __int64 v84; // [rsp+48h] [rbp-C0h]
  __int64 v85; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+58h] [rbp-B0h]
  __int64 v87; // [rsp+68h] [rbp-A0h]
  __int64 v88; // [rsp+70h] [rbp-98h]
  __int64 v89; // [rsp+78h] [rbp-90h]
  __int64 v90; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v91; // [rsp+88h] [rbp-80h]
  __int64 v92; // [rsp+90h] [rbp-78h]
  __int64 v93; // [rsp+98h] [rbp-70h]
  __int64 v94; // [rsp+A0h] [rbp-68h]
  __int64 v95; // [rsp+A8h] [rbp-60h]
  __int128 v96; // [rsp+B0h] [rbp-58h]
  __int64 v97; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v98; // [rsp+C8h] [rbp-40h]

  v13 = *(_QWORD *)(a1 + 1496);
  v80 = a4;
  v79 = a5;
  v98 = __readfsqword(0x28u);
  result = sub_33E140(v13, 2u, a1, a3, a4);
  if ( (_DWORD)result )
    return result;
  if ( *(int *)(a1 + 312) > 0 )
    return result;
  if ( sub_1CE9E0(a1) )
  {
    flags = get_flags_ex();
    result = 4294967290LL;
    if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
      return result;
  }
  v16 = a1 + 8;
  sub_1BD580((__int64)&v85, (__int64 **)(a1 + 8));
  v17 = getseg();
  v20 = *(unsigned int *)(a3 + 96);
  v83 = *(_QWORD *)(v17 + 8);
  if ( (int)v20 <= 0 )
  {
LABEL_128:
    result = sub_1C0C30((__int64)&v85, (_QWORD *)a2, a1, *(double *)a7.m128i_i64);
    goto LABEL_62;
  }
  v82 = 0;
  v81 = 0;
  while ( 1 )
  {
    HIDWORD(v78) = v81;
    if ( (a6 & 0x10) == 0 )
    {
      v16 = (unsigned int)v81;
      for ( i = sub_64930(v80, v81); !i; i = sub_64930(v80, v81) )
      {
        if ( *(_DWORD *)(a3 + 96) <= (int)++v81 )
          goto LABEL_128;
        HIDWORD(v78) = v81;
        v16 = (unsigned int)v81;
      }
    }
    v21 = callui(27, v16, &callui, v20, v18, v19, v73, v78, v79, v80);
    if ( v21 )
    {
      result = 4294967278LL;
      goto LABEL_62;
    }
    v22 = (_QWORD *)(*(_QWORD *)(a3 + 72) + (v81 << 6));
    *(_QWORD *)(a2 + 400) = *v22;
    *(_QWORD *)(a2 + 408) = v22[1];
    func = get_func();
    if ( *(_QWORD *)(a1 + 8) )
    {
      v20 = (__int64)v79;
      if ( (_QWORD *)func != v79 )
        break;
    }
LABEL_20:
    *(_QWORD *)(a2 + 16) = 0;
    if ( !v82 )
      v87 = 0;
    v26 = *(_QWORD *)(a2 + 400);
    if ( v26 < *(_QWORD *)(a2 + 408) )
    {
      do
      {
        while ( 1 )
        {
          if ( a6 >= 0 && *(_QWORD *)(a1 + 136) < sub_1CFBB0(a1, v26, *(double *)a7.m128i_i64) )
          {
            if ( !under_debugger )
              sub_383060(0xCA08u, *(double *)a7.m128i_i64);
            BUG();
          }
          if ( !*(_QWORD *)(a2 + 16) )
          {
            v38 = sub_67FD0(a1, *(_QWORD *)(a2 + 400), 0, v20, *(double *)a7.m128i_i64);
            *(_QWORD *)(a2 + 16) = v38;
            if ( !v38 )
            {
              result = 4294967293LL;
              goto LABEL_62;
            }
          }
          v73 = a2 + 24;
          result = sub_1D5CD0((_QWORD *)(a2 + 392), a2 + 24);
          if ( (_DWORD)result )
          {
            *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 400);
            goto LABEL_62;
          }
          result = sub_1D5F60((_QWORD *)a1, v73, a3, SHIDWORD(v78), *(double *)a7.m128i_i64, a8);
          if ( (_DWORD)result )
            goto LABEL_62;
          if ( *(_QWORD *)(a2 + 416) != -1 )
          {
            result = sub_1D5F60((_QWORD *)a1, a2 + 424, a3, SHIDWORD(v78), *(double *)a7.m128i_i64, a8);
            if ( (_DWORD)result )
              goto LABEL_62;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 976LL) += *(unsigned __int16 *)(a2 + 50);
          ++*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 984LL);
          v27 = *(_QWORD *)(a2 + 16);
          *(_BYTE *)(a2 + 384) = 0;
          v82 = sub_1B8E00((_QWORD **)&v85, *(_QWORD *)(a2 + 40), *(_DWORD *)(v27 + 72));
          if ( v82 )
          {
            v28 = *(_QWORD *)(a2 + 16);
            v26 = *(_QWORD *)(a2 + 400);
            v82 = 0;
            goto LABEL_31;
          }
          v32 = *(_QWORD *)(a2 + 40);
          v33 = netnode_charval();
          *(_BYTE *)(a2 + 384) = v33;
          if ( v33 == 1 )
          {
            *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
          }
          else if ( v33 == 2 )
          {
            if ( *(_QWORD *)(a1 + 56) == -1 )
              *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 40);
          }
          else
          {
            v32 = a2;
            sub_1B8E80(&v85, a2);
          }
          v34 = *(__int64 (**)())(*(_QWORD *)a2 + 48LL);
          if ( v34 != sub_1D3370 )
          {
            result = ((__int64 (__fastcall *)(__int64, __int64))v34)(a2, v32);
            if ( (_DWORD)result )
              goto LABEL_62;
          }
          v35 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 832LL);
          v36 = *(_QWORD **)v35;
          if ( !(8LL * *(_QWORD *)(v35 + 8)) )
            goto LABEL_162;
          do
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v36 + 16LL))(*v36, a2) )
            {
              result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v36 + 24LL))(*v36, a2);
              v37 = (_DWORD)result == -2;
            }
            else
            {
              v37 = 1;
              result = 4294967294LL;
            }
            ++v36;
            v32 = *(_QWORD *)v35 + 8LL * *(_QWORD *)(v35 + 8);
          }
          while ( v36 != (_QWORD *)v32 && v37 );
          if ( (_DWORD)result == -2 )
          {
LABEL_162:
            result = sub_3C76B0(a2, *(double *)a7.m128i_i64, a8);
            if ( (_DWORD)result == -2 )
              result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, v32);
          }
          if ( !(_DWORD)result )
            break;
          if ( (_DWORD)result == 1 )
            goto LABEL_74;
          if ( (_DWORD)result != -4 )
          {
            *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 40);
            goto LABEL_62;
          }
          v16 = *(_QWORD *)(a2 + 16);
          sub_67E00(a1, v16);
          *(_QWORD *)(a2 + 16) = 0;
          v26 = *(_QWORD *)(a2 + 400);
          v31 = *(_QWORD *)(a2 + 408);
LABEL_38:
          if ( v26 >= v31 )
            goto LABEL_127;
        }
        v28 = *(_QWORD *)(a2 + 16);
        v26 = *(_QWORD *)(a2 + 400);
        v54 = *(_QWORD *)(v28 + 40);
        if ( v54 == -1 || v54 < v26 )
        {
          *(_QWORD *)(v28 + 40) = v26;
          v28 = *(_QWORD *)(a2 + 16);
        }
        if ( v26 >= *(_QWORD *)(a2 + 408) )
          goto LABEL_75;
        v55 = *(unsigned int **)(v28 + 56);
      }
      while ( !v55 );
      v16 = 0;
      v84 = *(_QWORD *)(v28 + 56);
      if ( sub_32ED40(*v55, 0) )
      {
LABEL_74:
        v28 = *(_QWORD *)(a2 + 16);
        v26 = *(_QWORD *)(a2 + 400);
        goto LABEL_75;
      }
      if ( (unsigned int)(*(_DWORD *)v84 - 56) > 1 )
      {
LABEL_36:
        v26 = *(_QWORD *)(a2 + 400);
LABEL_37:
        v31 = *(_QWORD *)(a2 + 408);
        goto LABEL_38;
      }
      v56 = is_call_insn();
      v26 = *(_QWORD *)(a2 + 400);
      if ( !v56 && *(_BYTE *)(v84 + 64) == 8 && (*(_BYTE *)(*(_QWORD *)(v84 + 72) + 280LL) & 8) == 0 )
        goto LABEL_37;
      v28 = *(_QWORD *)(a2 + 16);
LABEL_75:
      if ( (*(_BYTE *)(v28 + 25) & 0x20) != 0 )
      {
LABEL_31:
        v29 = *(_QWORD *)(v28 + 40);
        if ( v29 != -1 && v29 >= v26 )
        {
LABEL_34:
          a7 = 0;
          v16 = (__int64)&v90;
          v91 = 0;
          v92 = 0;
          v93 = 0;
          v94 = 0;
          v90 = (__int64)off_4DE3D8;
          v95 = 0;
          v97 = 0;
          v96 = 0;
          sub_31EDC0(v28, (__int64)&v90);
          v30 = v95;
          *(_QWORD *)(a2 + 16) = 0;
          v90 = (__int64)off_4DE3D8;
          if ( v30 )
          {
            *(_QWORD *)&v96 = 0;
            qfree(v30);
          }
          goto LABEL_36;
        }
LABEL_33:
        *(_QWORD *)(v28 + 40) = v26;
        v28 = *(_QWORD *)(a2 + 16);
        goto LABEL_34;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
      {
        if ( !HIDWORD(v26) )
          goto LABEL_78;
        goto LABEL_31;
      }
      if ( v26 == -1 )
        goto LABEL_33;
LABEL_78:
      v45 = get_flags_ex();
      v46 = v45;
      if ( (v45 & 0x10000) != 0 )
      {
        v26 = *(_QWORD *)(a2 + 400);
      }
      else
      {
        v73 = v45;
        first_cref_from = get_first_cref_from();
        v26 = *(_QWORD *)(a2 + 400);
        v46 = v73;
        if ( v26 != first_cref_from )
        {
          v28 = *(_QWORD *)(a2 + 16);
          if ( v26 < v83 )
            goto LABEL_31;
          v65 = *(unsigned int **)(v28 + 56);
          if ( v65 )
          {
            v66 = *v65;
            if ( *v65 > 0x39 )
            {
              if ( v66 == 58 )
                goto LABEL_31;
            }
            else if ( v66 > 0x37 )
            {
              v72 = sub_11C750(*(int **)(v28 + 56), *(_QWORD *)(a1 + 1504), 0);
              v26 = *(_QWORD *)(a2 + 400);
              v46 = v73;
              if ( v72 )
                goto LABEL_139;
            }
            else if ( v66 - 53 <= 2 )
            {
              goto LABEL_31;
            }
          }
        }
      }
      if ( *(_QWORD *)(a1 + 40) == v26 )
      {
        sub_1D6200((__int64 *)a2, v26);
        sub_B52C0(*(_QWORD **)(a2 + 16), *(_QWORD *)(a2 + 400), 1, v68, *(double *)a7.m128i_i64);
        v26 = *(_QWORD *)(a2 + 400);
        v82 = 1;
        *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL) = v26;
        v28 = *(_QWORD *)(a2 + 16);
        goto LABEL_31;
      }
      if ( (~v46 & 0x600) != 0
        || (v67 = sub_330F80((_QWORD *)a1, v26), v82 = sub_332920(a1 + 8, v67), v26 = *(_QWORD *)(a2 + 400), !v82) )
      {
        v47 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 56LL);
        sub_1D6200((__int64 *)a2, v26);
        v48 = (_QWORD *)get_func();
        v49 = *(_QWORD *)(a2 + 400);
        if ( v48 && *v48 == v49 )
        {
          v69 = *(_QWORD *)(a1 + 1504);
          v90 = -4294967290LL;
          v70 = 8 * *(_DWORD *)(v69 + 84);
          if ( (unsigned __int64)v70 <= 0x3F )
            v49 &= ~(-1LL << v70);
          v91 = v49;
          sub_1D6450(a2, 55, (unsigned __int8 *)&v90, nullptr, nullptr, a7, a8, a9);
          if ( *(_WORD *)(a2 + 50) > 1u )
            ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 56LL) + 24LL);
          if ( v47
            && (unsigned int)(*(_DWORD *)v47 - 42) <= 0xA
            && *(_BYTE *)(v47 + 64) == 6
            && *(_QWORD *)(v47 + 72) == *(_QWORD *)(a2 + 400) )
          {
            v71 = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 72LL);
            *(_BYTE *)(v47 + 64) = 7;
            *(_DWORD *)(v47 + 72) = v71;
          }
          sub_11CDA0((__int64)&v90);
          v82 = 1;
          v28 = *(_QWORD *)(a2 + 16);
          v26 = *(_QWORD *)(a2 + 400);
        }
        else
        {
          v50 = *(_QWORD **)(a2 + 16);
          v51 = *(_QWORD *)(a2 + 40);
          v52 = sub_68FD0(v50[8], v51, v49, 1, *(double *)a7.m128i_i64);
          if ( !v52 )
          {
            *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 40);
            result = 4294967292LL;
            goto LABEL_62;
          }
          sub_B52C0(v50, v51, *(unsigned int *)(v52 + 72), v53, *(double *)a7.m128i_i64);
          v28 = *(_QWORD *)(a2 + 16);
          v82 = 1;
          v26 = *(_QWORD *)(a2 + 400);
        }
        goto LABEL_31;
      }
      if ( *(_BYTE *)(a2 + 384) == 3 )
      {
        if ( (unsigned __int8)netnode_charval() != 3 )
          sub_1B8FE0((__int64)&v85, a2);
        v28 = *(_QWORD *)(a2 + 16);
        v26 = *(_QWORD *)(a2 + 400);
        goto LABEL_31;
      }
LABEL_139:
      v28 = *(_QWORD *)(a2 + 16);
      goto LABEL_31;
    }
LABEL_127:
    if ( *(_DWORD *)(a3 + 96) <= (int)++v81 )
      goto LABEL_128;
  }
  fchunk = get_fchunk();
  if ( !fchunk || *(char *)(fchunk + 17) >= 0 )
    goto LABEL_15;
  v90 = 0;
  func_parent_iterator_set();
  v60 = v21;
  LODWORD(v91) = 0;
  if ( v90 && *(char *)(v90 + 17) < 0 )
    v60 = *(_DWORD *)(v90 + 32) > 0;
  if ( v60 )
  {
    v16 = (__int64)v79;
    v61 = 1;
    for ( j = 0; ; j = 8 * v63 )
    {
      v20 = *(_QWORD *)(v90 + 40);
      if ( *(_QWORD *)(v20 + j) == *v79 )
        break;
      if ( *(_DWORD *)(v90 + 32) <= v61 )
        goto LABEL_122;
      v63 = v61;
      LODWORD(v91) = v61++;
    }
    if ( v90 )
    {
      v16 = 0;
      lock_func_range();
    }
    goto LABEL_20;
  }
LABEL_122:
  if ( v90 )
    lock_func_range();
LABEL_15:
  not_tail = *(_QWORD *)(a2 + 408) - 1LL;
  if ( (get_flags_ex() & 0x600) == 0x200 )
    not_tail = prev_not_tail();
  *(_QWORD *)(a1 + 488) = not_tail;
  result = 4294967292LL;
LABEL_62:
  v39 = v88;
  if ( v88 )
  {
    v40 = *(_QWORD *)v88;
    if ( v89 )
    {
      if ( (*(_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v76 = result;
        sub_1D44F0((__int64 *)(v40 & 0xFFFFFFFFFFFFFFFCLL));
        v39 = v88;
        result = v76;
        v40 = *(_QWORD *)v88;
      }
      *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | v40 & 3;
      *(__m128i *)(v88 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v88, (__m128i)(unsigned __int64)v88);
      *(_QWORD *)v88 &= ~1uLL;
      *(_QWORD *)v88 |= 2uLL;
      v89 = 0;
    }
    else
    {
      *(_QWORD *)v88 = v88 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v88 & 3LL;
      *(__m128i *)(v88 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v88, (__m128i)(unsigned __int64)v88);
      *(_QWORD *)v88 &= ~1uLL;
      *(_QWORD *)v88 |= 2uLL;
    }
    if ( v88 )
    {
      v74 = result;
      qfree(v88);
      result = v74;
    }
  }
  v41 = v85;
  if ( v85 )
  {
    v42 = *(_QWORD *)v85;
    if ( v86 )
    {
      if ( (*(_BYTE *)(v42 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v77 = result;
        sub_1D4620((__int64 *)(v42 & 0xFFFFFFFFFFFFFFFCLL));
        v41 = v85;
        result = v77;
        v42 = *(_QWORD *)v85;
      }
      *(_QWORD *)v41 = v41 & 0xFFFFFFFFFFFFFFFCLL | v42 & 3;
      v57 = v85;
      v58 = (__m128i)(unsigned __int64)v85;
      *(_QWORD *)v85 &= ~1uLL;
      *(__m128i *)(v57 + 8) = _mm_unpacklo_epi64(v58, v58);
      *(_QWORD *)v85 |= 2uLL;
      v86 = 0;
    }
    else
    {
      *(_QWORD *)v85 = v85 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v85 & 3LL;
      v43 = v85;
      v44 = (__m128i)(unsigned __int64)v85;
      *(_QWORD *)v85 &= ~1uLL;
      *(__m128i *)(v43 + 8) = _mm_unpacklo_epi64(v44, v44);
      *(_QWORD *)v85 |= 2uLL;
    }
    if ( v85 )
    {
      v75 = result;
      qfree(v85);
      return v75;
    }
  }
  return result;
}

