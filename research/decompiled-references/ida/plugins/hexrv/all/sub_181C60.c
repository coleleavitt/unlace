__int64 __fastcall sub_181C60(__int64 a1, __int64 a2, __int64 a3, int a4, _BYTE *a5, unsigned int a6)
{
  unsigned __int64 v8; // rbp
  char *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v23; // ecx
  int v24; // edx
  int v25; // ebx
  int v26; // eax
  int v27; // eax
  signed int j; // r13d
  __int64 v29; // rbp
  char *v30; // r15
  char v31; // dl
  __int64 v32; // rax
  int v33; // ecx
  int v34; // ecx
  __m128i *v35; // r15
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  _DWORD *v42; // rdi
  __int64 v43; // [rsp-10h] [rbp-B8h]
  __int64 v44; // [rsp-8h] [rbp-B0h]
  int v45; // [rsp+0h] [rbp-A8h]
  int v46; // [rsp+8h] [rbp-A0h]
  __int64 v47; // [rsp+8h] [rbp-A0h]
  int v48; // [rsp+10h] [rbp-98h]
  int v49; // [rsp+14h] [rbp-94h]
  int v50; // [rsp+18h] [rbp-90h]
  __int64 i; // [rsp+18h] [rbp-90h]
  __int64 v54; // [rsp+38h] [rbp-70h]
  __m128i si128; // [rsp+40h] [rbp-68h] BYREF
  __int64 v56; // [rsp+50h] [rbp-58h] BYREF
  __int128 v57; // [rsp+58h] [rbp-50h]
  unsigned __int64 v58; // [rsp+68h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v8 = a6;
  switch ( a6 )
  {
    case 2u:
      v9 = "memset";
      break;
    case 5u:
      v9 = "memcpy";
      break;
    case 6u:
      v9 = "strcpy";
      break;
    case 0x22u:
      v9 = "wmemcpy";
      break;
    case 0x23u:
      v9 = "wmemset";
      break;
    default:
      v9 = "wcscpy";
      break;
  }
  v10 = sub_330570(
          *(_QWORD *)(a1 + 64),
          *(_QWORD *)(a2 + 24),
          (_DWORD)v9,
          (int)a5 + 24,
          a4,
          (_DWORD)a5,
          1,
          v44,
          v45,
          v46,
          v48,
          v50);
  v13 = *(_QWORD *)(v10 + 72);
  v54 = v13;
  *(_DWORD *)(v13 + 284) = v8;
  if ( (*(_BYTE *)(a3 + 136) & 0x20) != 0 )
  {
    *(_DWORD *)(v13 + 280) |= 0x80u;
    if ( *a5 == 10 )
      goto LABEL_5;
  }
  else if ( *a5 == 10 )
  {
    goto LABEL_5;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  sub_311AB0(v13 + 216, &si128, v43, a3, v11, v12);
  si128 = 0u;
  v56 = 0;
  v57 = 0;
  v56 = qvector_reserve();
  *(__m128i *)(v56 + 16 * v57) = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  *(_QWORD *)&v57 = v57 + 1;
  sub_5FF00((__int64 *)(v54 + 136), si128.m128i_i64);
  sub_311BB0(v54 + 152, &v56);
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  qfree();
  sub_F3750((int *)v54, a1);
LABEL_5:
  sub_1193D0(v10, a2);
  if ( v10 )
  {
    sub_1188E0(v10 + 64);
    sub_1188E0(v10 + 48);
    sub_1188E0(v10 + 32);
    j__qfree();
  }
  v14 = 0x1000000040LL;
  v15 = *(_QWORD *)(a3 + 48);
  if ( _bittest64(&v14, v8) )
  {
    v23 = *(_DWORD *)(a3 + 128);
    if ( v23 != -1 )
    {
      v24 = *(_DWORD *)(a3 + 124);
      if ( v24 <= 0 )
        v24 = 1;
      v25 = v24 + v23;
      if ( *(_DWORD *)(a3 + 4) > v24 + v23 )
      {
        if ( v15 )
        {
          v16 = *(_QWORD *)(a3 + 40);
          v47 = *(_QWORD *)(v16 + 8 * v15 - 8);
          v26 = *(_DWORD *)v47;
          if ( *(_DWORD *)v47 == 4 || v26 == 1 )
          {
            v27 = *(_DWORD *)(v47 + 36);
LABEL_26:
            v49 = v27 - v25;
            if ( v27 != v25 )
            {
              for ( i = v47; ; i = v29 )
              {
                for ( j = round_down_power2(); v25 % j; j /= 2 )
                  ;
                v29 = j__qalloc_or_throw();
                v30 = (char *)(v29 + 32);
                *(_QWORD *)(v29 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v29 + 40) = 0;
                *(_QWORD *)(v29 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v29 + 56) = 0;
                *(_QWORD *)(v29 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v29 + 72) = 0;
                *(_OWORD *)(v29 + 8) = 0;
                sub_120EE0(v29, v47);
                if ( *(_DWORD *)v29 == 2 )
                {
                  if ( !(unsigned __int8)sub_1286E0(v29, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v25) )
                  {
                    if ( !under_debugger )
                      sub_37DDE0(52489);
                    goto LABEL_80;
                  }
                }
                else
                {
                  v31 = sub_11B8C0(v30, &si128, 0);
                  v32 = *(_QWORD *)(a1 + 480);
                  if ( v31 )
                  {
                    v33 = v25;
                    if ( *(_BYTE *)(v32 + 145) )
                      v33 = *(_DWORD *)(v29 + 36) - j - v25;
                    v34 = 8 * v33;
                    v35 = *(__m128i **)(v29 + 40);
                    v36 = 0;
                    if ( (unsigned __int64)v34 <= 0x3F )
                      v36 = (unsigned __int64)si128.m128i_i64[0] >> v34;
                    v37 = sub_325910(v36, (unsigned int)j, 0);
                    v35[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
                  }
                  else
                  {
                    v41 = *(_QWORD *)(v32 + 112);
                    if ( *(_BYTE *)(v29 + 32) == 4 && (v42 = *(_DWORD **)(v29 + 40), *v42 == 2) )
                    {
                      if ( !(unsigned __int8)sub_1286E0((__int64)v42, v41, v25) )
                      {
                        if ( !under_debugger )
                          sub_37DDE0(52501);
                        goto LABEL_80;
                      }
                      *(_DWORD *)(*(_QWORD *)(v29 + 40) + 68LL) = j;
                    }
                    else if ( !(unsigned __int8)sub_122A50((unsigned __int64)v30, v41, v25) )
                    {
                      if ( !under_debugger )
                        sub_37DDE0(52490);
                      goto LABEL_80;
                    }
                  }
                  *(_DWORD *)(v29 + 36) = j;
                }
                v38 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                if ( *(_DWORD *)v47 == 1 )
                {
                  sub_9E640((__int64)&si128, v38, *(_QWORD *)(v47 + 24), v47 + 64, v25, 1);
                  sub_120CC0(v29 + 64, (unsigned __int8 *)&si128);
                  sub_1188E0((__int64)&si128);
                }
                else
                {
                  if ( !(unsigned __int8)sub_122A50(v29 + 64, v38, v25) )
                  {
                    if ( !under_debugger )
                      sub_37DDE0(52491);
                    goto LABEL_80;
                  }
                  *(_DWORD *)(v29 + 68) = j;
                }
                v25 += j;
                sub_9ECA0(a1, (_QWORD *)v29, i);
                v49 -= j;
                if ( !v49 )
                {
                  v15 = *(_QWORD *)(a3 + 48);
                  goto LABEL_8;
                }
              }
            }
            goto LABEL_10;
          }
          if ( v26 == 2 )
          {
            v27 = *(_DWORD *)(v47 + 68);
            goto LABEL_26;
          }
          if ( !under_debugger )
            sub_37DDE0(52488);
        }
        else if ( !under_debugger )
        {
          sub_37DDE0(52492);
        }
LABEL_80:
        BUG();
      }
    }
  }
LABEL_8:
  if ( !v15 )
    goto LABEL_13;
  v16 = *(_QWORD *)(a3 + 40);
LABEL_10:
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    ++v17;
    sub_1190E0(*(_QWORD *)(v16 + 8 * v18));
    v18 = v17;
    if ( (unsigned __int64)v17 >= *(_QWORD *)(a3 + 48) )
      break;
    v16 = *(_QWORD *)(a3 + 40);
  }
LABEL_13:
  v19 = *(_DWORD *)(a1 + 24);
  BYTE1(v19) &= ~2u;
  LOBYTE(v19) = v19 | 0x80;
  *(_DWORD *)(a1 + 24) = v19;
  v20 = *(_QWORD *)(v54 + 24);
  if ( *(_BYTE *)v20 == 10 )
  {
    v40 = *(_QWORD *)(v20 + 8);
    if ( *(_BYTE *)v40 == 5 )
      sub_1893D0(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(v40 + 8) + 8LL));
  }
  if ( *(_BYTE *)(a2 + 64) == 8 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL) == 2 )
      return v58 - __readfsqword(0x28u);
    v21 = *(_QWORD *)(v54 + 24);
    if ( *(_BYTE *)(v21 + 80) != 10 )
      return v58 - __readfsqword(0x28u);
  }
  else
  {
    v21 = *(_QWORD *)(v54 + 24);
    if ( *(_BYTE *)(v21 + 80) != 10 )
      return v58 - __readfsqword(0x28u);
  }
  v39 = *(_QWORD *)(v21 + 88);
  if ( *(_BYTE *)v39 != 5 )
    return v58 - __readfsqword(0x28u);
  return sub_1893D0(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(v39 + 8) + 8LL));
}

