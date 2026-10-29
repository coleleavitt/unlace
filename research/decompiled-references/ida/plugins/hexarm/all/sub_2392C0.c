__int64 __fastcall sub_2392C0(__int64 a1, unsigned __int64 a2, _QWORD *a3, char a4)
{
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  _QWORD *v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // r14d
  int v21; // r15d
  __int64 v22; // rdi
  unsigned __int8 v23; // r15
  int v24; // r15d
  bool v25; // al
  __int64 v26; // rdx
  __int64 v27; // r10
  __int16 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r11
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r15d
  __int64 v38; // r10
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r15
  int v42; // edx
  _QWORD *v43; // rdi
  __int32 v44; // eax
  int v45; // eax
  __m128i v46; // xmm0
  int v47; // eax
  __m128i *v48; // rdi
  __m128 v49; // xmm1
  char v50; // dl
  char tinfo_property; // al
  __int16 v52; // dx
  int v53; // [rsp+0h] [rbp-B0h]
  __int64 v54; // [rsp+8h] [rbp-A8h]
  __int16 v55; // [rsp+14h] [rbp-9Ch]
  __int64 v56; // [rsp+18h] [rbp-98h]
  unsigned int v57; // [rsp+20h] [rbp-90h]
  __int64 v58; // [rsp+28h] [rbp-88h]
  int v59; // [rsp+30h] [rbp-80h] BYREF
  int v60; // [rsp+34h] [rbp-7Ch] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-78h] BYREF
  __m128i v62; // [rsp+40h] [rbp-70h] BYREF
  __int64 v63; // [rsp+50h] [rbp-60h]
  __int64 v64; // [rsp+58h] [rbp-58h]
  __m128i v65; // [rsp+60h] [rbp-50h]
  int v66; // [rsp+70h] [rbp-40h]
  char v67; // [rsp+74h] [rbp-3Ch]
  unsigned __int64 v68; // [rsp+78h] [rbp-38h]

  v58 = a2;
  v68 = __readfsqword(0x28u);
  if ( *(char *)(*(_QWORD *)(a1 + 32) + 4LL) < 0
    || !(unsigned __int8)sub_32F650(a2, &v61)
    || !(unsigned __int8)sub_229640(*(_QWORD *)(a1 + 8), v61, a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), v8, v9) )
  {
    return 0;
  }
  v13 = **(_QWORD ***)(a1 + 64);
  if ( !v13 )
    goto LABEL_13;
  v14 = *v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v14 )
    return 0;
  if ( (*(_BYTE *)v14 & 2) != 0 )
    goto LABEL_13;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v14 + 24);
    if ( a2 < v10 )
    {
      v14 = *(_QWORD *)(v14 + 8);
      goto LABEL_11;
    }
    if ( v10 >= a2 )
      break;
    v14 = *(_QWORD *)(v14 + 16);
LABEL_11:
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v58 = a2;
      goto LABEL_13;
    }
  }
  v58 = a2;
  if ( v13 != (_QWORD *)v14 )
    return 0;
LABEL_13:
  v15 = v61;
  if ( (v61 & 0x8000000000000000LL) != 0LL )
  {
    sub_331510(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), 27, v10, v11, v12);
    v15 = 0x7FFFFFFFFFFFFFFFLL;
    v61 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v16 = **(_QWORD **)(a1 + 56);
  if ( !(unsigned __int8)sub_1F0FD0(*(_QWORD *)(a1 + 16), v15, 1) && !sub_1F0D90(*(_QWORD *)(a1 + 8), (char *)v58, -1) )
    v16 += 104LL * *(int *)(a1 + 80);
  v17 = *(_QWORD **)(a1 + 56);
  if ( v16 == *v17 + 104LL * v17[1] )
    goto LABEL_29;
  while ( 2 )
  {
    v18 = *(_QWORD *)(a1 + 72);
    if ( v18 != -1 )
    {
      if ( *(_QWORD *)(v16 + 16) == v18 )
        goto LABEL_22;
LABEL_19:
      v16 += 104;
      if ( v16 == *v17 + 104LL * v17[1] )
        goto LABEL_29;
      continue;
    }
    break;
  }
  if ( (*(_BYTE *)(v16 + 26) & 1) != 0 )
    goto LABEL_19;
LABEL_22:
  v19 = sub_229170(*(_QWORD **)(a1 + 8), v16, v61);
  if ( !(unsigned int)sub_1C30F0(v16, *(_QWORD *)(a1 + 48), v61, 1, v19, nullptr, nullptr) )
  {
    v17 = *(_QWORD **)(a1 + 56);
    goto LABEL_19;
  }
  if ( v16 != **(_QWORD **)(a1 + 56) + 104LL * *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) )
    goto LABEL_60;
LABEL_29:
  v20 = *(_DWORD *)(v58 + 4);
  if ( v20 != -1 )
  {
    v20 = -1;
    if ( *(_BYTE *)v58 != 10 )
    {
      v21 = sub_1FC260(*(_QWORD *)(a1 + 48), v58, *(_QWORD *)(a1 + 32));
      v20 = round_up_power2();
      if ( *(_DWORD *)(v58 + 4) < v20 )
        v20 = v21;
    }
  }
  v22 = *(_QWORD *)(a1 + 8);
  v56 = *(_QWORD *)(a1 + 72);
  if ( v56 == -1 )
  {
    v56 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    if ( a4 )
      v56 = (*(_DWORD *)v22 & 1) + *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
  }
  v62.m128i_i64[0] = 0;
  if ( a3 && *(_QWORD *)(v22 + 144) > (signed __int64)v61 )
  {
    copy_tinfo_t();
    v22 = *(_QWORD *)(a1 + 8);
  }
  v23 = sub_242B30(v22, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), v58, &v62, 0);
  v24 = (32 * v23) | (8 * sub_122100(*(_QWORD *)(a1 + 32), v58));
  v25 = sub_229440(*(_QWORD *)(a1 + 8), v61, v20, 0);
  v26 = *(_QWORD *)(a1 + 72);
  v27 = v61;
  v28 = v24 | (v25 << 7);
  if ( v26 != -1 )
  {
    v26 = v56;
    v28 |= 0x40u;
  }
  v29 = *(_QWORD *)(a1 + 8);
  v30 = *(_QWORD *)(v29 + 1256);
  v31 = v30 + 96LL * *(_QWORD *)(v29 + 1264);
  if ( v30 == v31 )
  {
LABEL_106:
    v37 = v20;
    goto LABEL_58;
  }
  while ( 2 )
  {
    v32 = v30 + 96;
    if ( v26 != *(_QWORD *)(v30 + 16) )
    {
      if ( v26 == -1 )
      {
        while ( (*(_BYTE *)(v32 - 8) & 2) != 0 )
        {
          if ( v31 == v32 )
          {
            v29 = *(_QWORD *)(a1 + 8);
            v37 = v20;
            goto LABEL_58;
          }
          v30 = v32;
          if ( *(_QWORD *)(v32 + 16) == -1 )
          {
            v30 = v32 + 96;
            goto LABEL_46;
          }
          v32 += 96;
        }
        break;
      }
      v30 += 96;
LABEL_43:
      if ( v30 == v31 )
      {
        v29 = *(_QWORD *)(a1 + 8);
        v37 = v20;
        goto LABEL_58;
      }
      continue;
    }
    break;
  }
  v33 = v30;
  v30 = v32;
  v32 = v33;
LABEL_46:
  if ( *(_DWORD *)(v30 - 96) != 1 )
    goto LABEL_43;
  v34 = *(_QWORD *)(v30 - 16);
  if ( v34 <= 0 )
    goto LABEL_43;
  v35 = *(_QWORD *)(v30 - 88);
  if ( v35 != v61
    && (v20 == -1 || (v35 < v61 || !v20 || v61 + v20 - 1 < v35) && (v61 < v35 || v34 + v35 - 1 < v61 + v20 - 1)) )
  {
    goto LABEL_43;
  }
  v29 = *(_QWORD *)(a1 + 8);
  if ( !v32 )
    goto LABEL_106;
  v36 = *(_QWORD *)(v32 + 80);
  v37 = v36;
  if ( *(_DWORD *)v32 == 1 )
    v38 = *(_QWORD *)(v32 + 8);
  else
    v38 = -1;
  v53 = v36;
  v54 = v38;
  v55 = v28;
  copy_tinfo_t();
  v27 = v54;
  if ( v20 == v53 )
  {
    v29 = *(_QWORD *)(a1 + 8);
    v28 = v55 | 0x10;
  }
  else
  {
    tinfo_property = get_tinfo_property();
    v29 = *(_QWORD *)(a1 + 8);
    v27 = v54;
    v52 = v55 | 0x18;
    if ( (tinfo_property & 0xF) != 9 )
      v52 = v55 & 0xFFE7 | 0x10;
    v28 = v52;
  }
LABEL_58:
  v39 = sub_233050(v29, v27, v37, (__int64)&v62, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL), v56, v28, (_BYTE *)(a1 + 85));
  if ( v39 == -1 )
  {
    clear_tinfo_t();
  }
  else
  {
    v16 = **(_QWORD **)(a1 + 56) + 104LL * v39;
    clear_tinfo_t();
LABEL_60:
    v57 = sub_229170(*(_QWORD **)(a1 + 8), v16, v61);
    v40 = (int)sub_1C30F0(v16, *(_QWORD *)(a1 + 48), v61, 1, v57, &v59, &v60);
    if ( !(_DWORD)v40 )
    {
      v40 = (int)sub_1C30F0(v16, *(_QWORD *)(a1 + 48), v61, *(_DWORD *)(v58 + 4), v57, &v59, &v60);
      if ( !(_DWORD)v40 )
      {
        if ( !under_debugger )
          sub_3835A0(51141);
        goto LABEL_111;
      }
    }
    if ( v40 != -1 && v60 >= 0 && v59 >= 0 )
    {
      v41 = 0x4EC4EC4EC4EC4EC5LL * ((v16 - **(_QWORD **)(a1 + 56)) >> 3);
      if ( v59 < *(_DWORD *)(v16 + 88) )
        goto LABEL_71;
      if ( *(_DWORD *)v16 == 1 )
      {
        v42 = *(_DWORD *)(v58 + 4);
        v43 = *(_QWORD **)(a1 + 8);
        v44 = v42 + v59;
        if ( v42 == -1 )
          v44 = *(_DWORD *)(v43[188] + 80LL);
        v62.m128i_i32[0] = v44;
        v45 = sub_232BB0(v43, v62.m128i_i32, *(_QWORD *)(v16 + 8), a3);
        if ( v45 )
        {
          if ( v45 == 2 || v45 == 1 && (*(_BYTE *)(**(_QWORD **)(a1 + 56) + 104LL * (int)v41 + 24) & 8) != 0 )
          {
LABEL_91:
            *(_BYTE *)(a1 + 85) = 1;
            return 4294967260LL;
          }
        }
        else
        {
          sub_1F4970(*(_QWORD *)(a1 + 8), -1, v16);
          *(_DWORD *)(v16 + 24) |= 0x400u;
        }
LABEL_71:
        if ( *(_BYTE *)(a1 + 85) )
          return 4294967260LL;
        v46 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        v47 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
        v48 = *(__m128i **)(a1 + 64);
        LODWORD(v64) = v41;
        v49 = _mm_loadh_ps((const double *)(a1 + 8));
        v63 = v59;
        v66 = v47;
        v67 = a4;
        v62 = (__m128i)v49;
        v65 = v46;
        sub_239120(v48, &v62);
        if ( v50 )
        {
          if ( v59 )
          {
            v62.m128i_i64[1] = *(_QWORD *)(a1 + 8);
            v63 = *(_QWORD *)(a1 + 16);
            v64 = *(_QWORD *)(a1 + 24);
            v65.m128i_i64[0] = *(_QWORD *)(a1 + 32);
            v62.m128i_i64[0] = (__int64)off_4D9430;
            if ( (unsigned __int8)sub_208900((__int64)&v62, v58, a4, v59, v16) )
              goto LABEL_91;
          }
          else if ( !a4 && (**(_DWORD **)(a1 + 8) & 0x40000) == 0 && (unsigned __int8)sub_207A60(a1, v58) )
          {
            return 4294967260LL;
          }
          return 0;
        }
        if ( !under_debugger )
          sub_3835A0(52928);
      }
      else if ( !under_debugger )
      {
        sub_3835A0(50364);
      }
LABEL_111:
      BUG();
    }
  }
  return 4294967286LL;
}

