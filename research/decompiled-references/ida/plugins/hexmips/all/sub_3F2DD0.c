__int64 __fastcall sub_3F2DD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rax
  char *v12; // r15
  char v13; // dl
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _DWORD *v22; // r15
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  int v25; // r13d
  __int64 v26; // r12
  _DWORD *v27; // rax
  unsigned __int8 *v28; // r14
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-70h]
  unsigned __int64 v35; // [rsp+20h] [rbp-50h] BYREF
  __int64 v36; // [rsp+28h] [rbp-48h]
  unsigned __int64 v37; // [rsp+38h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a4 )
  {
    case 0xC:
      v12 = (char *)(a4 + 48);
      v13 = sub_11BB80((char *)(a4 + 48), nullptr, 1u);
      v14 = *(_BYTE *)(a4 + 32);
      if ( v13 )
      {
        if ( v14 != 4 )
          return 0;
        v15 = a4 + 32;
        do
        {
          v16 = *(_QWORD *)(v15 + 8);
          if ( (unsigned int)(*(_DWORD *)v16 - 12) > 1 || *(_DWORD *)(v15 + 4) != *(_DWORD *)(a4 + 52) )
            break;
          if ( (unsigned __int8)sub_11BB80((char *)(v16 + 48), nullptr, 1u) )
          {
            v29 = *(_QWORD *)(v16 + 56);
            v30 = *(_QWORD *)(*(_QWORD *)(a4 + 56) + 16LL);
            v31 = *(_QWORD *)(v29 + 16) - v30;
            if ( *(_DWORD *)v16 == *(_DWORD *)a4 )
              v31 = v30 + *(_QWORD *)(v29 + 16);
            v32 = sub_325C90(v31, *(_DWORD *)(v16 + 52), 0);
            *(__m128i *)(v29 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)v32);
            v33 = *(_QWORD *)(a4 + 40);
            *(_DWORD *)a4 = *(_DWORD *)v33;
            sub_118810(v12, (char *)(v33 + 48));
            sub_118810((char *)(a4 + 32), (char *)(*(_QWORD *)(a4 + 40) + 32LL));
            return 1;
          }
          v15 = v16 + 32;
        }
        while ( *(_BYTE *)(v16 + 32) == 4 );
        v14 = *(_BYTE *)(a4 + 32);
      }
      if ( v14 == 4 )
      {
        v17 = *(_QWORD *)(a4 + 40);
        if ( *(_DWORD *)v17 == 9
          && *(_BYTE *)(v17 + 32) == 4
          && **(_DWORD **)(v17 + 40) == 34
          && *(_BYTE *)(a4 + 48) == 4 )
        {
          v18 = *(_DWORD **)(a4 + 56);
          if ( *v18 == 13 )
          {
            if ( sub_9E150((__int64)(v18 + 12), 1, 1u) )
            {
              v36 = 0;
              v35 = 0xFFFFFFFF00000000LL;
              sub_118810((char *)&v35, (char *)(*(_QWORD *)(a4 + 56) + 32LL));
              sub_118810((char *)(a4 + 32), (char *)&v35);
              sub_118810(v12, (char *)&v35);
              v19 = *(_QWORD *)(a4 + 56);
              *(_DWORD *)a4 = 13;
              **(_DWORD **)(v19 + 40) = 35;
              sub_118BA0((__int64)&v35);
              return 1;
            }
          }
        }
      }
      return 0;
    case 0xD:
      if ( *(_BYTE *)(a4 + 48) != 4
        || (v24 = *(_DWORD **)(a4 + 56), *v24 != 9)
        || *(_DWORD *)(a4 + 36) != 2 * v24[9]
        || !(unsigned __int8)sub_123220((__int64)(v24 + 8), a1, (unsigned __int8 *)(a4 + 32)) )
      {
        if ( *(_BYTE *)(a4 + 32) != 14 )
          return 0;
        v20 = *(_QWORD *)(a4 + 40);
        if ( *(_BYTE *)(v20 + 16) != 4 )
          return 0;
        if ( *(_BYTE *)(a4 + 48) != 4 )
          return 0;
        v21 = *(_QWORD *)(a4 + 56);
        if ( *(_DWORD *)v21 != 9 || *(_DWORD *)(v21 + 36) != *(_DWORD *)(v20 + 4) )
          return 0;
        v22 = *(_DWORD **)(v20 + 24);
        if ( *v22 == 13 )
        {
          v23 = v22 + 12;
        }
        else
        {
          if ( *v22 != 5 )
            return 0;
          v23 = v22 + 8;
        }
        v34 = (__int64)v23;
        v36 = 0;
        v35 = 0xFFFFFFFF00000000LL;
        sub_118810((char *)&v35, (char *)(v21 + 32));
        sub_AD320(a2, a3, a4 + 48, a3, (__int64)&v35, a3, v34, 0);
        sub_118BA0((__int64)&v35);
        if ( *v22 == 13 )
        {
          sub_AD320(a2, a3, a4 + 32, a3, *(_QWORD *)(a4 + 40), a3, (__int64)(v22 + 8), 0);
        }
        else
        {
          sub_118810((char *)&v35, *(char **)(a4 + 40));
          sub_118810((char *)(a4 + 32), (char *)&v35);
          sub_11C5E0((char *)(a4 + 32), a1, 9, *(_QWORD *)(a4 + 24), *(_DWORD *)(a4 + 52));
        }
        sub_118BA0((__int64)&v35);
        return 1;
      }
      v25 = *(_DWORD *)(*(_QWORD *)(a4 + 56) + 36LL);
      if ( !(unsigned __int8)sub_123650(a4 + 32, a1, v25, 0) )
        return 0;
      v26 = j__qalloc_or_throw();
      *(_QWORD *)(v26 + 8) = 0;
      *(_QWORD *)v26 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v26 + 16) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v26 + 24) = 0;
      sub_118810((char *)(v26 + 16), (char *)(a4 + 32));
      sub_11C810(v26, a1, 0, v25, *(_QWORD *)(*(_QWORD *)(a4 + 56) + 24LL), 0);
      *(_BYTE *)(a4 + 32) = 14;
      *(_QWORD *)(a4 + 40) = v26;
      *(_DWORD *)(a4 + 36) = 2 * v25;
      *(_DWORD *)a4 = 4;
      sub_118BA0(a4 + 48);
      return 1;
    case 0x13:
    case 0x14:
      if ( *(_BYTE *)(a4 + 32) != 10 )
        return 0;
      if ( **(_BYTE **)(a4 + 40) != 6 )
        return 0;
      if ( *(_BYTE *)(a4 + 48) != 2 )
        return 0;
      v7 = sub_325C90(*(_QWORD *)(*(_QWORD *)(a4 + 56) + 16LL), *(_DWORD *)(a4 + 52), 0);
      if ( (_WORD)v7 )
        return 0;
      v8 = *(_QWORD *)(*(_QWORD *)(a4 + 40) + 8LL);
      v9 = v8 | v7;
      if ( *(_DWORD *)a4 == 20 )
        v9 = v8 & v7;
      sub_11C810(a4 + 32, a1, v9, *(_DWORD *)(a4 + 68), *(_QWORD *)(a4 + 24), 0);
      *(_DWORD *)a4 = 4;
      sub_118BA0(a4 + 48);
      return 1;
    case 0x23:
      if ( (*(_BYTE *)(a4 + 4) & 0x10) != 0 )
        return 0;
      if ( *(_BYTE *)(a4 + 32) != 4 )
        return 0;
      v27 = *(_DWORD **)(a4 + 40);
      if ( *v27 != 12 )
        return 0;
      v28 = (unsigned __int8 *)(a4 + 48);
      if ( !sub_121960((unsigned __int8 *)(a4 + 48), (__int64)(v27 + 8), 0)
        && !sub_121960(v28, *(_QWORD *)(a4 + 40) + 48LL, 0) )
      {
        return 0;
      }
      sub_118810((char *)v28, (char *)(*(_QWORD *)(a4 + 40) + 48LL));
      v36 = 0;
      v35 = 0xFFFFFFFF00000000LL;
      sub_118810((char *)&v35, (char *)(*(_QWORD *)(a4 + 40) + 32LL));
      sub_118810((char *)(a4 + 32), (char *)&v35);
      *(_DWORD *)a4 = 25;
      sub_118BA0((__int64)&v35);
      return 1;
    case 0x38:
      if ( *(_BYTE *)(a4 + 32) != 11 )
        return 0;
      if ( *(_DWORD *)(a4 + 68) != 4 )
        return 0;
      if ( strcmp(*(const char **)(a4 + 40), "__ROR4__") )
        return 0;
      v10 = *(_QWORD *)(a4 + 72);
      v11 = *(_QWORD *)(v10 + 24);
      if ( *(_BYTE *)v11 != 4
        || !(unsigned __int8)sub_11C360(*(_QWORD *)(v11 + 8), "_wsbh")
        || !sub_9E150(*(_QWORD *)(v10 + 24) + 80LL, 16, 1u) )
      {
        return 0;
      }
      v36 = 0;
      v35 = 0xFFFFFFFF00000000LL;
      sub_118810((char *)&v35, *(char **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL) + 72LL) + 24LL));
      *(_DWORD *)(v10 + 8) = 1;
      sub_7E240((__int64 *)(v10 + 24), 1u);
      sub_118810(*(char **)(v10 + 24), (char *)&v35);
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)(v10 + 144) = 0;
      sub_3F2DA0((_QWORD *)(v10 + 152));
      sub_3F2DA0((_QWORD *)(v10 + 216));
      *(_QWORD *)(v10 + 280) = 0xC00000015LL;
      sub_1192A0(a4 + 32);
      sub_118BA0((__int64)&v35);
      return 1;
    default:
      return 0;
  }
}

