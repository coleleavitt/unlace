unsigned __int64 __fastcall sub_19D360(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx
  __m128i v9; // xmm0
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64 *, __int64); // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  int v19; // edx
  __int64 v20; // rbx
  int v21; // edx
  __int64 v22; // r15
  int v23; // edx
  __int64 v24; // r13
  _QWORD *v25; // r10
  int v26; // eax
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // edi
  int v33; // r11d
  __int64 v34; // r9
  __int64 v35; // r8
  int v36; // edi
  __int64 *v37; // rax
  int v38; // edx
  __int64 *v39; // rdi
  int v40; // edx
  __int64 v41; // r12
  _QWORD *v42; // rax
  __int64 v43; // rcx
  int v44; // edx
  int v45; // esi
  __int64 v46; // r10
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  int v50; // esi
  __int64 v51; // r15
  __int64 v52; // r13
  int v53; // edx
  int v54; // eax
  int v55; // eax
  __int64 v57; // rax
  __int64 v58; // [rsp+8h] [rbp-128h]
  __int64 v59; // [rsp+10h] [rbp-120h]
  __int64 v60; // [rsp+18h] [rbp-118h]
  __int64 v61; // [rsp+20h] [rbp-110h]
  __int64 v62; // [rsp+28h] [rbp-108h]
  __int64 v63; // [rsp+30h] [rbp-100h]
  __int64 v64; // [rsp+38h] [rbp-F8h]
  __int64 v65; // [rsp+38h] [rbp-F8h]
  int v66; // [rsp+38h] [rbp-F8h]
  int v67; // [rsp+38h] [rbp-F8h]
  __int64 v68; // [rsp+40h] [rbp-F0h]
  __int64 v69; // [rsp+48h] [rbp-E8h]
  __m128i v70; // [rsp+50h] [rbp-E0h] BYREF
  __int64 v71; // [rsp+60h] [rbp-D0h]
  __int64 v72; // [rsp+68h] [rbp-C8h]
  __int64 v73; // [rsp+70h] [rbp-C0h] BYREF
  int v74; // [rsp+78h] [rbp-B8h]
  __m128i v75; // [rsp+80h] [rbp-B0h]
  __int64 v76; // [rsp+90h] [rbp-A0h]
  int v77; // [rsp+98h] [rbp-98h]
  __int64 (__fastcall **v78)(); // [rsp+A0h] [rbp-90h]
  __int64 v79; // [rsp+A8h] [rbp-88h]
  int v80; // [rsp+B0h] [rbp-80h]
  __int128 v81; // [rsp+B8h] [rbp-78h]
  __int64 v82; // [rsp+C8h] [rbp-68h]
  __int64 v83; // [rsp+D0h] [rbp-60h]
  __int128 v84; // [rsp+D8h] [rbp-58h]
  __int64 v85; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v86; // [rsp+F8h] [rbp-38h]

  v72 = a1;
  v3 = *(__int64 **)(a1 + 16);
  v4 = v3[35];
  v86 = __readfsqword(0x28u);
  v6 = *v3;
  v70 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4AF770, (__m128i)(unsigned __int64)off_4AF750);
  v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 24))(v3);
  v8 = *(_DWORD *)(a1 + 184);
  v9 = _mm_load_si128(&v70);
  v71 = v7;
  if ( v8 == -1 )
  {
    v63 = -1;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 176);
    v63 = v10;
    if ( v10 != -1 )
      v63 = v8 * *(char *)(v7 + 12) + v10;
  }
  v11 = *(_DWORD *)(v72 + 208);
  if ( v11 == -1 )
  {
    v69 = -1;
  }
  else
  {
    v12 = *(_QWORD *)(v72 + 200);
    v69 = v12;
    if ( v12 != -1 )
      v69 = v11 * *(char *)(v71 + 13) + v12;
  }
  v75 = v9;
  v81 = -1;
  v13 = *(_QWORD *)(v72 + 224);
  v80 = -1;
  v79 = -1;
  v58 = v13;
  v14 = *(_QWORD *)(v72 + 16);
  v82 = -1;
  v83 = 0;
  v85 = 0;
  v84 = 0;
  v73 = 0;
  v74 = 0;
  v76 = -1;
  v77 = -1;
  v78 = off_4AF750;
  v15 = *(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v14 + 56LL);
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
  v15(v14, &v73, v16);
  if ( v76 == -1 )
    v76 = *(_QWORD *)(v72 + 176);
  if ( v79 == -1 )
    v79 = *(_QWORD *)(v72 + 200);
  if ( v77 == -1 )
  {
    v59 = -1;
  }
  else
  {
    v59 = v76;
    if ( v76 != -1 )
      v59 = v77 * *(char *)(v71 + 12) + v76;
  }
  if ( v80 == -1 )
  {
    v62 = -1;
  }
  else
  {
    v62 = v79;
    if ( v79 != -1 )
      v62 = v80 * *(char *)(v71 + 13) + v79;
  }
  if ( *(_BYTE *)(v4 + 320) )
  {
    v57 = (int)sub_EE1C0(v4);
    if ( v58 <= (int)v57 )
      v57 = v58;
    v58 = v57;
  }
  v70.m128i_i32[0] = 0;
  v68 = v58;
  v17 = 0;
  v61 = v72 + 424;
  v60 = v72 + 456;
  if ( a2[1] )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(*a2 + 8 * v17);
      if ( *(_QWORD *)(v20 + 32) == -1 )
        *(_QWORD *)(v20 + 32) = *(_QWORD *)(v72 + 176);
      if ( *(_QWORD *)(v20 + 56) == -1 )
        *(_QWORD *)(v20 + 56) = *(_QWORD *)(v72 + 200);
      v21 = *(_DWORD *)(v72 + 184);
      if ( v21 == -1 )
      {
        v22 = -1;
      }
      else
      {
        v22 = *(_QWORD *)(v72 + 176);
        if ( v22 != -1 )
          v22 += v21 * *(char *)(v71 + 12);
      }
      v23 = *(_DWORD *)(v72 + 208);
      if ( v23 == -1 )
      {
        v24 = -1;
      }
      else
      {
        v24 = *(_QWORD *)(v72 + 200);
        if ( v24 != -1 )
          v24 += v23 * *(char *)(v71 + 13);
      }
      if ( *(_DWORD *)(*(_QWORD *)v20 + 72LL) != 1 )
        break;
      v53 = *(_DWORD *)(v20 + 8);
      if ( (v53 & 3) != 0 )
        break;
      if ( (v53 & 4) != 0 )
      {
        LODWORD(v25) = 0;
        goto LABEL_84;
      }
      v27 = a2[1];
      v25 = nullptr;
      if ( (v53 & 0x20) != 0 )
        goto LABEL_82;
LABEL_40:
      if ( !v27 )
        goto LABEL_82;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      do
      {
        while ( 1 )
        {
          v31 = *(_QWORD *)(*a2 + 8 * v30);
          if ( !*(_QWORD *)(v31 + 120) )
            goto LABEL_42;
          if ( (*(_BYTE *)(v31 + 8) & 0x22) != 0 )
            goto LABEL_42;
          v32 = *(_DWORD *)(v31 + 40);
          if ( v32 > *(_DWORD *)(v20 + 40) )
            goto LABEL_42;
          v33 = *(_DWORD *)(v31 + 64);
          if ( v33 > *(_DWORD *)(v20 + 64) )
            goto LABEL_42;
          v34 = *(_QWORD *)(v31 + 80);
          if ( v34 > *(_QWORD *)(v20 + 80) )
            goto LABEL_42;
          if ( !v29 )
          {
            v29 = v31;
            goto LABEL_42;
          }
          v35 = *(_QWORD *)(v29 + 80);
          if ( v35 == v34 && *(_DWORD *)(v29 + 40) == v32 )
          {
            v36 = *(_DWORD *)(v29 + 64);
            if ( v36 == v33 || (*(_BYTE *)(v29 + 8) & 2) != 0 )
              goto LABEL_42;
          }
          else
          {
            if ( (*(_BYTE *)(v29 + 8) & 2) != 0 || v32 < *(_DWORD *)(v29 + 40) )
              goto LABEL_42;
            v36 = *(_DWORD *)(v29 + 64);
          }
          if ( v35 <= v34 )
            break;
LABEL_42:
          v30 = ++v28;
          if ( v28 >= v27 )
            goto LABEL_57;
        }
        if ( v36 <= v33 )
          v29 = v31;
        v30 = ++v28;
      }
      while ( v28 < v27 );
LABEL_57:
      if ( !v29 )
        goto LABEL_82;
      if ( *(_QWORD *)(v29 + 80) != *(_QWORD *)(v72 + 224) || *(_DWORD *)(v29 + 40) != *(_DWORD *)(v72 + 184) )
      {
        if ( !v25 )
          goto LABEL_89;
        goto LABEL_60;
      }
      if ( *(_DWORD *)(v29 + 64) == *(_DWORD *)(v72 + 208) )
      {
LABEL_82:
        v66 = (int)v25;
        v54 = sub_19C8A0(v20, 0);
        v41 = v58;
        v39 = sub_196850(v20, v54, v66, (int)"va_start", 25);
        goto LABEL_68;
      }
      if ( !v25 )
LABEL_89:
        v25 = *(_QWORD **)(v29 + 120);
LABEL_60:
      if ( !*(_QWORD *)v20 )
      {
        if ( !under_debugger )
          sub_37CFE0(51371);
        goto LABEL_121;
      }
      v37 = sub_195DC0(*(_QWORD *)v20, (__int64)v25, v25[3], *(_QWORD *)(v29 + 72), *(_QWORD *)(v20 + 72), 1);
      v38 = *(_DWORD *)(v29 + 40);
      v39 = v37;
      if ( v38 == -1 )
      {
        v22 = -1;
      }
      else
      {
        v22 = *(_QWORD *)(v29 + 32);
        if ( v22 != -1 )
          v22 += v38 * *(char *)(v71 + 12);
      }
      v40 = *(_DWORD *)(v29 + 64);
      if ( v40 == -1 )
      {
        v24 = -1;
      }
      else
      {
        v24 = *(_QWORD *)(v29 + 56);
        if ( v24 != -1 )
          v24 += v40 * *(char *)(v71 + 13);
      }
      v41 = *(_QWORD *)(v29 + 80);
LABEL_68:
      v42 = *(_QWORD **)(v72 + 16);
      v43 = *(int *)(v72 + 184);
      if ( v43 != v42[13] )
      {
        v44 = *(_DWORD *)(v20 + 40);
        v45 = *(char *)(v71 + 12);
        if ( v44 == -1 )
        {
          v46 = -1;
        }
        else
        {
          v46 = *(_QWORD *)(v20 + 32);
          if ( v46 != -1 )
            v46 += v45 * v44;
        }
        v65 = v46;
        v39 = sub_19D070(v39, v20, v42 + 12, v22, v63, v59, v46, v43, v45, v72 + 448, v72 + 400);
        v63 = v65;
        v42 = *(_QWORD **)(v72 + 16);
      }
      v47 = v42 + 15;
      v48 = *(int *)(v72 + 208);
      if ( v48 == v42[16] )
      {
        v51 = v69;
      }
      else
      {
        v49 = *(_DWORD *)(v20 + 64);
        v50 = *(char *)(v71 + 13);
        if ( v49 == -1 )
        {
          v51 = -1;
        }
        else
        {
          v51 = *(_QWORD *)(v20 + 56);
          if ( v51 != -1 )
            v51 += v50 * v49;
        }
        v39 = sub_19D070(v39, v20, v47, v24, v69, v62, v51, v48, v50, v60, v61);
      }
      v52 = *(_QWORD *)(v20 + 80);
      *(_QWORD *)(v20 + 120) = sub_19CE40(v72, v39, v20, v41, v68, v52);
      v68 = v52;
      v69 = v51;
LABEL_24:
      v17 = ++v70.m128i_i32[0];
      if ( (unsigned __int64)v70.m128i_i32[0] >= a2[1] )
        goto LABEL_95;
    }
    if ( !*(_QWORD *)(v20 + 104) )
    {
      if ( !under_debugger )
        sub_37CFE0(51196);
      goto LABEL_121;
    }
    v25 = *(_QWORD **)(**(_QWORD **)(v20 + 96) + 16LL);
    v26 = *(_DWORD *)(v20 + 8);
    if ( (v26 & 4) != 0 )
    {
LABEL_84:
      v67 = (int)v25;
      v55 = sub_19C8A0(v20, 0);
      v25 = sub_196850(v20, v55, v67, (int)"va_end", 26);
      v26 = *(_DWORD *)(v20 + 8);
    }
    if ( (v26 & 2) != 0 )
    {
      if ( (v26 & 0x20) != 0 )
      {
        if ( !under_debugger )
          sub_37CFE0(52219);
      }
      else
      {
        v64 = (__int64)v25;
        v18 = *(_QWORD *)(v20 + 88);
        v19 = sub_19C8A0(v20, 0);
        if ( (*(_BYTE *)(v20 + 8) & 0x20) != 0 )
        {
          if ( !under_debugger )
            sub_37CFE0(52218);
        }
        else
        {
          if ( *(_QWORD *)v20 )
          {
            sub_195DC0(*(_QWORD *)v20, v64, v19, v18, *(_QWORD *)(v20 + 72), 1);
            goto LABEL_24;
          }
          if ( !under_debugger )
            sub_37CFE0(51371);
        }
      }
LABEL_121:
      BUG();
    }
    v27 = a2[1];
    if ( (v26 & 0x20) != 0 )
      goto LABEL_82;
    goto LABEL_40;
  }
LABEL_95:
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree();
  }
  return v86 - __readfsqword(0x28u);
}

