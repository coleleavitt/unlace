__int64 __fastcall sub_1D27C0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, int a6)
{
  __int64 v10; // rdi
  __int64 result; // rax
  int flags; // edx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  char v18; // r13
  _QWORD *v19; // rax
  __int64 func; // rax
  __int64 fchunk; // rax
  __int64 not_tail; // rbx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  char v30; // al
  __int64 (*v31)(); // rax
  __int64 v32; // r14
  _QWORD *v33; // r13
  bool v34; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 *v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 *v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int16 v43; // cx
  __int64 v44; // r13
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // r14
  __int64 v48; // r13
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned int *v51; // rdx
  char v52; // al
  unsigned __int64 *v53; // rdx
  __m128i v54; // xmm0
  bool i; // al
  bool v56; // al
  int v57; // eax
  __int64 j; // rdx
  __int64 v59; // rdx
  __int64 first_cref_from; // rax
  unsigned int *v61; // r8
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // ecx
  int v66; // eax
  char v67; // al
  __int64 v68; // [rsp+0h] [rbp-108h]
  unsigned int v69; // [rsp+0h] [rbp-108h]
  unsigned int v70; // [rsp+0h] [rbp-108h]
  unsigned int v71; // [rsp+0h] [rbp-108h]
  unsigned int v72; // [rsp+0h] [rbp-108h]
  __int64 v73; // [rsp+8h] [rbp-100h]
  _QWORD *v74; // [rsp+10h] [rbp-F8h]
  _QWORD *v75; // [rsp+18h] [rbp-F0h]
  __int64 v76; // [rsp+28h] [rbp-E0h]
  char v77; // [rsp+32h] [rbp-D6h]
  unsigned __int64 v78; // [rsp+40h] [rbp-C8h]
  __int64 v79; // [rsp+48h] [rbp-C0h]
  unsigned __int64 *v80; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v81; // [rsp+58h] [rbp-B0h]
  __int64 v82; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v83; // [rsp+70h] [rbp-98h]
  __int64 v84; // [rsp+78h] [rbp-90h]
  __int64 v85; // [rsp+80h] [rbp-88h] BYREF
  __int64 v86; // [rsp+88h] [rbp-80h]
  __int64 v87; // [rsp+90h] [rbp-78h]
  __int64 v88; // [rsp+98h] [rbp-70h]
  __int64 v89; // [rsp+A0h] [rbp-68h]
  __int64 v90; // [rsp+A8h] [rbp-60h]
  __int128 v91; // [rsp+B0h] [rbp-58h]
  __int64 v92; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v93; // [rsp+C8h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 1496);
  v75 = a4;
  v74 = a5;
  v93 = __readfsqword(0x28u);
  result = sub_339220(v10, 2, a1, a3, (_DWORD)a4, a6);
  if ( (_DWORD)result )
    return result;
  if ( *(int *)(a1 + 312) > 0 )
    return result;
  if ( sub_1CA620(a1) )
  {
    flags = get_flags_ex();
    result = 4294967290LL;
    if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
      return result;
  }
  v13 = a1 + 8;
  sub_1B91C0((__int64)&v80, (__int64 **)(a1 + 8));
  v14 = getseg();
  v17 = (_QWORD *)*(unsigned int *)(a3 + 96);
  v78 = *(_QWORD *)(v14 + 8);
  if ( (int)v17 <= 0 )
  {
LABEL_128:
    result = sub_1BC870((__int64)&v80, (_QWORD *)a2, a1);
    goto LABEL_62;
  }
  v77 = 0;
  v76 = 0;
  while ( 1 )
  {
    HIDWORD(v73) = v76;
    if ( (a6 & 0x10) == 0 )
    {
      v13 = (unsigned int)v76;
      for ( i = sub_60730(v75, v76); !i; i = sub_60730(v75, v76) )
      {
        if ( *(_DWORD *)(a3 + 96) <= (int)++v76 )
          goto LABEL_128;
        HIDWORD(v73) = v76;
        v13 = (unsigned int)v76;
      }
    }
    v18 = callui(27, v13, &callui, v17, v15, v16, v68, v73, v74, v75);
    if ( v18 )
    {
      result = 4294967278LL;
      goto LABEL_62;
    }
    v19 = (_QWORD *)(*(_QWORD *)(a3 + 72) + (v76 << 6));
    *(_QWORD *)(a2 + 400) = *v19;
    *(_QWORD *)(a2 + 408) = v19[1];
    func = get_func();
    if ( *(_QWORD *)(a1 + 8) )
    {
      v17 = v74;
      if ( (_QWORD *)func != v74 )
        break;
    }
LABEL_20:
    *(_QWORD *)(a2 + 16) = 0;
    if ( !v77 )
      v82 = 0;
    v23 = *(_QWORD *)(a2 + 400);
    if ( v23 < *(_QWORD *)(a2 + 408) )
    {
      do
      {
        while ( 1 )
        {
          if ( a6 >= 0 && *(_QWORD *)(a1 + 136) < sub_1CB7F0(a1, v23) )
          {
            if ( !under_debugger )
              sub_37E160(51720);
            BUG();
          }
          if ( !*(_QWORD *)(a2 + 16) )
          {
            v35 = sub_63DD0(a1, *(_QWORD *)(a2 + 400), 0);
            *(_QWORD *)(a2 + 16) = v35;
            if ( !v35 )
            {
              result = 4294967293LL;
              goto LABEL_62;
            }
          }
          v68 = a2 + 24;
          result = sub_1D1950((_QWORD *)(a2 + 392), a2 + 24);
          if ( (_DWORD)result )
          {
            *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 400);
            goto LABEL_62;
          }
          result = sub_1D1BE0((_QWORD *)a1, v68, a3, SHIDWORD(v73));
          if ( (_DWORD)result )
            goto LABEL_62;
          if ( *(_QWORD *)(a2 + 416) != -1 )
          {
            result = sub_1D1BE0((_QWORD *)a1, a2 + 424, a3, SHIDWORD(v73));
            if ( (_DWORD)result )
              goto LABEL_62;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 976LL) += *(unsigned __int16 *)(a2 + 50);
          ++*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 984LL);
          v24 = *(_QWORD *)(a2 + 16);
          *(_BYTE *)(a2 + 384) = 0;
          v77 = sub_1B4A40(&v80, *(_QWORD *)(a2 + 40), *(_DWORD *)(v24 + 72));
          if ( v77 )
          {
            v25 = *(_QWORD *)(a2 + 16);
            v23 = *(_QWORD *)(a2 + 400);
            v77 = 0;
            goto LABEL_31;
          }
          v29 = *(_QWORD *)(a2 + 40);
          v30 = netnode_charval();
          *(_BYTE *)(a2 + 384) = v30;
          if ( v30 == 1 )
          {
            *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
          }
          else if ( v30 == 2 )
          {
            if ( *(_QWORD *)(a1 + 56) == -1 )
              *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 40);
          }
          else
          {
            v29 = a2;
            sub_1B4AC0(&v80, a2);
          }
          v31 = *(__int64 (**)())(*(_QWORD *)a2 + 48LL);
          if ( v31 != sub_1CEFF0 )
          {
            result = ((__int64 (__fastcall *)(__int64, __int64))v31)(a2, v29);
            if ( (_DWORD)result )
              goto LABEL_62;
          }
          v32 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 832LL);
          v33 = *(_QWORD **)v32;
          if ( !(8LL * *(_QWORD *)(v32 + 8)) )
            goto LABEL_162;
          do
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v33 + 16LL))(*v33, a2) )
            {
              result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v33 + 24LL))(*v33, a2);
              v34 = (_DWORD)result == -2;
            }
            else
            {
              v34 = 1;
              result = 4294967294LL;
            }
            ++v33;
            v29 = *(_QWORD *)v32 + 8LL * *(_QWORD *)(v32 + 8);
          }
          while ( v33 != (_QWORD *)v29 && v34 );
          if ( (_DWORD)result == -2 )
          {
LABEL_162:
            result = sub_3C27B0(a2, v29);
            if ( (_DWORD)result == -2 )
              result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
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
          v13 = *(_QWORD *)(a2 + 16);
          sub_63C00(a1, v13);
          *(_QWORD *)(a2 + 16) = 0;
          v23 = *(_QWORD *)(a2 + 400);
          v28 = *(_QWORD *)(a2 + 408);
LABEL_38:
          if ( v23 >= v28 )
            goto LABEL_127;
        }
        v25 = *(_QWORD *)(a2 + 16);
        v23 = *(_QWORD *)(a2 + 400);
        v50 = *(_QWORD *)(v25 + 40);
        if ( v50 == -1 || v50 < v23 )
        {
          *(_QWORD *)(v25 + 40) = v23;
          v25 = *(_QWORD *)(a2 + 16);
        }
        if ( v23 >= *(_QWORD *)(a2 + 408) )
          goto LABEL_75;
        v51 = *(unsigned int **)(v25 + 56);
      }
      while ( !v51 );
      v13 = 0;
      v79 = *(_QWORD *)(v25 + 56);
      if ( (unsigned __int8)sub_329E00(*v51, 0) )
      {
LABEL_74:
        v25 = *(_QWORD *)(a2 + 16);
        v23 = *(_QWORD *)(a2 + 400);
        goto LABEL_75;
      }
      if ( (unsigned int)(*(_DWORD *)v79 - 56) > 1 )
      {
LABEL_36:
        v23 = *(_QWORD *)(a2 + 400);
LABEL_37:
        v28 = *(_QWORD *)(a2 + 408);
        goto LABEL_38;
      }
      v52 = is_call_insn();
      v23 = *(_QWORD *)(a2 + 400);
      if ( !v52 && *(_BYTE *)(v79 + 64) == 8 && (*(_BYTE *)(*(_QWORD *)(v79 + 72) + 280LL) & 8) == 0 )
        goto LABEL_37;
      v25 = *(_QWORD *)(a2 + 16);
LABEL_75:
      if ( (*(_BYTE *)(v25 + 25) & 0x20) != 0 )
      {
LABEL_31:
        v26 = *(_QWORD *)(v25 + 40);
        if ( v26 != -1 && v26 >= v23 )
        {
LABEL_34:
          v13 = (__int64)&v85;
          v86 = 0;
          v87 = 0;
          v88 = 0;
          v89 = 0;
          v85 = (__int64)off_4BEB58;
          v90 = 0;
          v92 = 0;
          v91 = 0;
          sub_31A040(v25, &v85);
          v27 = v90;
          *(_QWORD *)(a2 + 16) = 0;
          v85 = (__int64)off_4BEB58;
          if ( v27 )
          {
            *(_QWORD *)&v91 = 0;
            qfree();
          }
          goto LABEL_36;
        }
LABEL_33:
        *(_QWORD *)(v25 + 40) = v23;
        v25 = *(_QWORD *)(a2 + 16);
        goto LABEL_34;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
      {
        if ( !HIDWORD(v23) )
          goto LABEL_78;
        goto LABEL_31;
      }
      if ( v23 == -1 )
        goto LABEL_33;
LABEL_78:
      v42 = get_flags_ex();
      v43 = v42;
      if ( (v42 & 0x10000) != 0 )
      {
        v23 = *(_QWORD *)(a2 + 400);
      }
      else
      {
        v68 = v42;
        first_cref_from = get_first_cref_from();
        v23 = *(_QWORD *)(a2 + 400);
        v43 = v68;
        if ( v23 != first_cref_from )
        {
          v25 = *(_QWORD *)(a2 + 16);
          if ( v23 < v78 )
            goto LABEL_31;
          v61 = *(unsigned int **)(v25 + 56);
          if ( v61 )
          {
            v62 = *v61;
            if ( *v61 > 0x39 )
            {
              if ( v62 == 58 )
                goto LABEL_31;
            }
            else if ( v62 > 0x37 )
            {
              v67 = sub_118550(*(int **)(v25 + 56), *(_QWORD *)(a1 + 1504), 0);
              v23 = *(_QWORD *)(a2 + 400);
              v43 = v68;
              if ( v67 )
                goto LABEL_139;
            }
            else if ( v62 - 53 <= 2 )
            {
              goto LABEL_31;
            }
          }
        }
      }
      if ( *(_QWORD *)(a1 + 40) == v23 )
      {
        sub_1D1E40((__int64 *)a2, v23);
        sub_B10C0(*(_QWORD **)(a2 + 16), *(_QWORD *)(a2 + 400), 1);
        v23 = *(_QWORD *)(a2 + 400);
        v77 = 1;
        *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL) = v23;
        v25 = *(_QWORD *)(a2 + 16);
        goto LABEL_31;
      }
      if ( (~v43 & 0x600) != 0
        || (v63 = sub_32BF20(a1), v77 = sub_32D8E0(a1 + 8, v63), v23 = *(_QWORD *)(a2 + 400), !v77) )
      {
        v44 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 56LL);
        sub_1D1E40((__int64 *)a2, v23);
        v45 = (_QWORD *)get_func();
        v46 = *(_QWORD *)(a2 + 400);
        if ( v45 && *v45 == v46 )
        {
          v64 = *(_QWORD *)(a1 + 1504);
          v85 = -4294967290LL;
          v65 = 8 * *(_DWORD *)(v64 + 84);
          if ( (unsigned __int64)v65 <= 0x3F )
            v46 &= ~(-1LL << v65);
          v86 = v46;
          sub_1D2090(a2, 55, (unsigned __int8 *)&v85, nullptr, nullptr);
          if ( *(_WORD *)(a2 + 50) > 1u )
            ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 56LL) + 24LL);
          if ( v44
            && (unsigned int)(*(_DWORD *)v44 - 42) <= 0xA
            && *(_BYTE *)(v44 + 64) == 6
            && *(_QWORD *)(v44 + 72) == *(_QWORD *)(a2 + 400) )
          {
            v66 = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 72LL);
            *(_BYTE *)(v44 + 64) = 7;
            *(_DWORD *)(v44 + 72) = v66;
          }
          sub_118BA0((__int64)&v85);
          v77 = 1;
          v25 = *(_QWORD *)(a2 + 16);
          v23 = *(_QWORD *)(a2 + 400);
        }
        else
        {
          v47 = *(_QWORD **)(a2 + 16);
          v48 = *(_QWORD *)(a2 + 40);
          v49 = sub_64DD0(v47[8], v48, v46, 1);
          if ( !v49 )
          {
            *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 40);
            result = 4294967292LL;
            goto LABEL_62;
          }
          sub_B10C0(v47, v48, *(_DWORD *)(v49 + 72));
          v25 = *(_QWORD *)(a2 + 16);
          v77 = 1;
          v23 = *(_QWORD *)(a2 + 400);
        }
        goto LABEL_31;
      }
      if ( *(_BYTE *)(a2 + 384) == 3 )
      {
        if ( (unsigned __int8)netnode_charval() != 3 )
          sub_1B4C20((__int64)&v80, a2);
        v25 = *(_QWORD *)(a2 + 16);
        v23 = *(_QWORD *)(a2 + 400);
        goto LABEL_31;
      }
LABEL_139:
      v25 = *(_QWORD *)(a2 + 16);
      goto LABEL_31;
    }
LABEL_127:
    if ( *(_DWORD *)(a3 + 96) <= (int)++v76 )
      goto LABEL_128;
  }
  fchunk = get_fchunk();
  if ( !fchunk || *(char *)(fchunk + 17) >= 0 )
    goto LABEL_15;
  v85 = 0;
  func_parent_iterator_set();
  v56 = v18;
  LODWORD(v86) = 0;
  if ( v85 && *(char *)(v85 + 17) < 0 )
    v56 = *(_DWORD *)(v85 + 32) > 0;
  if ( v56 )
  {
    v13 = (__int64)v74;
    v57 = 1;
    for ( j = 0; ; j = v59 )
    {
      v17 = *(_QWORD **)(v85 + 40);
      if ( v17[j] == *v74 )
        break;
      if ( *(_DWORD *)(v85 + 32) <= v57 )
        goto LABEL_122;
      v59 = v57;
      LODWORD(v86) = v57++;
    }
    if ( v85 )
    {
      v13 = 0;
      lock_func_range();
    }
    goto LABEL_20;
  }
LABEL_122:
  if ( v85 )
    lock_func_range();
LABEL_15:
  not_tail = *(_QWORD *)(a2 + 408) - 1LL;
  if ( (get_flags_ex() & 0x600) == 0x200 )
    not_tail = prev_not_tail();
  *(_QWORD *)(a1 + 488) = not_tail;
  result = 4294967292LL;
LABEL_62:
  v36 = v83;
  if ( v83 )
  {
    v37 = *(_QWORD *)v83;
    if ( v84 )
    {
      if ( (*(_BYTE *)(v37 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v71 = result;
        sub_1D0170((__int64 *)(v37 & 0xFFFFFFFFFFFFFFFCLL));
        v36 = v83;
        result = v71;
        v37 = *(_QWORD *)v83;
      }
      *(_QWORD *)v36 = v36 & 0xFFFFFFFFFFFFFFFCLL | v37 & 3;
      *(__m128i *)(v83 + 8) = _mm_unpacklo_epi64((__m128i)v83, (__m128i)v83);
      *(_QWORD *)v83 &= ~1uLL;
      *(_QWORD *)v83 |= 2uLL;
      v84 = 0;
    }
    else
    {
      *(_QWORD *)v83 = v83 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v83 & 3LL;
      *(__m128i *)(v83 + 8) = _mm_unpacklo_epi64((__m128i)v83, (__m128i)v83);
      *(_QWORD *)v83 &= ~1uLL;
      *(_QWORD *)v83 |= 2uLL;
    }
    if ( v83 )
    {
      v69 = result;
      qfree();
      result = v69;
    }
  }
  v38 = v80;
  if ( v80 )
  {
    v39 = *v80;
    if ( v81 )
    {
      if ( (*(_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v72 = result;
        sub_1D02A0((__int64 *)(v39 & 0xFFFFFFFFFFFFFFFCLL));
        v38 = v80;
        result = v72;
        v39 = *v80;
      }
      *v38 = (unsigned __int64)v38 & 0xFFFFFFFFFFFFFFFCLL | v39 & 3;
      v53 = v80;
      v54 = (__m128i)(unsigned __int64)v80;
      *v80 &= ~1uLL;
      *(__m128i *)(v53 + 1) = _mm_unpacklo_epi64(v54, v54);
      *v80 |= 2u;
      v81 = 0;
    }
    else
    {
      *v80 = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFFCLL | *v80 & 3;
      v40 = v80;
      v41 = (__m128i)(unsigned __int64)v80;
      *v80 &= ~1uLL;
      *(__m128i *)(v40 + 1) = _mm_unpacklo_epi64(v41, v41);
      *v80 |= 2u;
    }
    if ( v80 )
    {
      v70 = result;
      qfree();
      return v70;
    }
  }
  return result;
}

