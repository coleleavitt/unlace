__int64 __fastcall sub_3EB3A0(__int64 a1, char a2, __int16 a3, int a4, unsigned __int8 a5, double a6)
{
  char v6; // r14
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  int dtype_size; // eax
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // esi
  _DWORD *v21; // rdi
  __int64 (*v22)(void); // rax
  int v23; // r12d
  int v24; // eax
  int v25; // r14d
  __int64 result; // rax
  char v27; // al
  __int64 v28; // rax
  int v29; // edx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r15
  unsigned int v33; // r12d
  double v34; // xmm0_8
  __int64 v35; // rax
  int v36; // r15d
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(_DWORD *, unsigned int); // rax
  __int64 v39; // rax
  int v40; // r8d
  char v41; // r12
  int v42; // eax
  __int64 v43; // rax
  int v44; // esi
  __int64 v45; // rax
  int v46; // r12d
  int v47; // eax
  _QWORD *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rsi
  _QWORD *v51; // r12
  __int64 v52; // rax
  __int64 v53; // rsi
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  _DWORD *v57; // rdi
  __int64 (__fastcall *v58)(_DWORD *, unsigned int); // rax
  int v59; // eax
  int v60; // edx
  int v61; // esi
  int v62; // eax
  __int64 v63; // r15
  int v64; // eax
  _DWORD *v65; // rdi
  __int64 v66; // rsi
  __int64 (__fastcall *v67)(_DWORD *, unsigned int); // rax
  int v68; // r15d
  int v69; // eax
  int v70; // eax
  char v71; // [rsp+Eh] [rbp-A2h]
  int v73; // [rsp+1Ch] [rbp-94h]
  __int64 v74; // [rsp+20h] [rbp-90h]
  __int64 v75; // [rsp+28h] [rbp-88h]
  __int64 v76; // [rsp+30h] [rbp-80h]
  int v78; // [rsp+38h] [rbp-78h]
  int v79; // [rsp+38h] [rbp-78h]
  char v80; // [rsp+40h] [rbp-70h]
  unsigned int v81; // [rsp+40h] [rbp-70h]
  signed int v83; // [rsp+48h] [rbp-68h]
  unsigned __int16 v84; // [rsp+48h] [rbp-68h]
  unsigned __int8 v86[16]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v87[10]; // [rsp+60h] [rbp-50h] BYREF

  v6 = 7;
  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(_DWORD *)(v9 + 80) == 8;
  v80 = a5;
  v87[3] = __readfsqword(0x28u);
  if ( !v10 )
    v6 = 2;
  v11 = *(_QWORD *)(v9 + 4464);
  if ( !v11
    || (v12 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v11 - 4),
        *(_QWORD *)(v9 + 4464) = v11 - 1,
        sub_3EB290(a1, a1 + 104, v12),
        v13 = *(_QWORD *)(a1 + 832),
        (v14 = *(_QWORD *)(v13 + 4464)) == 0) )
  {
    sub_3E6800(a6);
  }
  v15 = *(_DWORD *)(*(_QWORD *)(v13 + 4456) + 4 * v14 - 4);
  *(_QWORD *)(v13 + 4464) = v14 - 1;
  v83 = v15;
  if ( (a3 & 4) == 0 )
  {
    if ( ((*(_BYTE *)(a1 + 105) - 2) & 0xFD) == 0 )
    {
      sub_3E9DD0(a1, (unsigned __int8 *)(a1 + 104), v6, *(_QWORD *)(a1 + 120), v15);
      v76 = v83;
      dtype_size = get_dtype_size();
      sub_1D2710(a1, 0xCu, dtype_size, v12, v83, v83, 0);
      goto LABEL_8;
    }
    if ( !under_debugger )
      sub_37EEE0(0xC8D4u, a6);
LABEL_81:
    BUG();
  }
  if ( (a3 & 0x100) != 0 )
  {
    v70 = get_dtype_size();
    v76 = v83;
    sub_1D2710(a1, 4u, v70, v12, 0x3BEA45E214ADDC55LL, v83, 0);
  }
  else
  {
    v27 = *(_BYTE *)(a1 + 105);
    if ( v27 != 1 && (!*(_BYTE *)(a1 + 138) || v27 != 5 || *(_QWORD *)(a1 + 112)) || *(_BYTE *)(a1 + 145) != 1 )
    {
      if ( !under_debugger )
        sub_37EEE0(0xC8D3u, a6);
      goto LABEL_81;
    }
    v65 = *(_DWORD **)(a1 + 832);
    v66 = *(unsigned __int16 *)(a1 + 150);
    v67 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v65 + 168LL);
    if ( v67 == sub_3E59C0 )
      v68 = sub_3E59C0(v65, v66);
    else
      v68 = v67(v65, v66);
    v69 = get_dtype_size();
    v76 = v83;
    sub_1D2710(a1, 0xCu, v69, v12, v68, v83, 0);
  }
LABEL_8:
  v17 = *(_QWORD **)(a1 + 832);
  v18 = v17[558];
  v19 = v17[557];
  if ( v17[559] < (unsigned __int64)(v18 + 1) )
  {
    v55 = qvector_reserve();
    v17[557] = v55;
    v19 = v55;
    v18 = v17[558];
  }
  *(_DWORD *)(v19 + 4 * v18) = v12;
  ++v17[558];
  if ( (a3 & 2) != 0 )
  {
    v20 = *(unsigned __int16 *)(a1 + 110);
    if ( (_WORD)v20 != 1 )
    {
      v21 = *(_DWORD **)(a1 + 832);
      v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 168LL);
      if ( (char *)v22 == (char *)sub_3E59C0 )
        v23 = sub_3E59C0(v21, v20);
      else
        v23 = v22();
      v24 = get_dtype_size();
      sub_1D2710(a1, 4u, v24, v76, 0x3BEA45E214ADDC55LL, v23, 0);
    }
  }
  if ( (a3 & 0x2000) != 0 )
  {
    v25 = 32 - *(unsigned __int16 *)(a1 + 70);
    v80 = a5 & (v25 > 1);
    goto LABEL_17;
  }
  if ( (a3 & 0x4000) == 0 )
  {
    v25 = 1;
    goto LABEL_31;
  }
  v28 = *(_QWORD *)(a1 + 152);
  v25 = 8;
  if ( !(_DWORD)v28 )
  {
LABEL_17:
    result = 0;
    if ( v80 )
      return result;
    goto LABEL_31;
  }
  v29 = v28 + 2;
  v30 = v28 - 1;
  if ( v30 < 0 )
    v30 = v29;
  v25 = (v30 >> 2) + 1;
  result = 0;
  if ( (a5 & (v25 > 1)) == 0 )
  {
LABEL_31:
    v31 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)v86 = 1;
    v32 = *(_QWORD *)(a1 + 40);
    v87[1] = 0;
    v33 = *(_DWORD *)(v31 + 80);
    v81 = (unsigned __int8)a2;
    v87[0] = 0xFFFFFFFF00000000LL;
    *(_QWORD *)&v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v83)).m128i_u64[0];
    *(double *)&v86[4] = v34;
    v35 = get_dtype_size();
    sub_11CFD0((__int64)v87, *(_QWORD *)(a1 + 832), v35, v33, v32, 0);
    v71 = 4;
    v84 = *(_WORD *)(a1 + 70);
    if ( a3 >= 0 )
    {
      v71 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
        v71 = 7;
    }
    v36 = 0;
    if ( v25 > 0 )
    {
      while ( 1 )
      {
        v37 = *(_QWORD *)(a1 + 832);
        if ( v25 != 1 )
        {
          v38 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v37 + 168LL);
          if ( v38 == sub_3E59C0 )
          {
            a4 = sub_3E59C0((_DWORD *)v37, v84);
          }
          else
          {
            a4 = v38((_DWORD *)v37, v84);
            v37 = *(_QWORD *)(a1 + 832);
          }
        }
        if ( (a3 & 0x1000) != 0 )
        {
          v43 = *(_QWORD *)(v37 + 4464);
          if ( !v43 )
            sub_3E6800(v34);
          v44 = *(_DWORD *)(*(_QWORD *)(v37 + 4456) + 4 * v43 - 4);
          *(_QWORD *)(v37 + 4464) = v43 - 1;
          v45 = *(_QWORD *)(a1 + 832);
          v46 = v44;
          v79 = *(_DWORD *)(v45 + 84);
          v75 = *(int *)(v45 + 64);
          v47 = get_dtype_size();
          sub_1D2710(a1, 2u, v47, v75, v76, v44, v79);
          if ( (a3 & 0x10) != 0 )
          {
            sub_1D2B40(a1, v81, 4, v44, a4, 67);
          }
          else if ( v71 <= a2 )
          {
            v54 = get_dtype_size();
            sub_1D2710(a1, 4u, v54, v44, 0x3BEA45E214ADDC55LL, a4, 0);
          }
          else
          {
            sub_1D2C40(a1, v81, (unsigned int)v71, v44, a4, a3 & 1);
          }
          v48 = *(_QWORD **)(a1 + 832);
          v49 = v48[558];
          v50 = v48[557];
          if ( v48[559] < (unsigned __int64)(v49 + 1) )
          {
            v50 = qvector_reserve();
            v48[557] = v50;
            v49 = v48[558];
          }
          *(_DWORD *)(v50 + 4 * v49) = v46;
          ++v48[558];
        }
        else
        {
          if ( (a3 & 0x10) != 0 )
          {
            v39 = *(_QWORD *)(v37 + 4464);
            if ( !v39 )
              sub_3E6800(v34);
            v40 = *(_DWORD *)(*(_QWORD *)(v37 + 4456) + 4 * v39 - 4);
            *(_QWORD *)(v37 + 4464) = v39 - 1;
            v78 = v40;
            sub_1D2B40(a1, 4, v81, a4, v40, 67);
            v37 = *(_QWORD *)(a1 + 832);
            v41 = 1;
          }
          else
          {
            v41 = 0;
            v78 = a4;
          }
          v73 = *(_DWORD *)(v37 + 84);
          v74 = *(int *)(v37 + 64);
          v42 = get_dtype_size();
          sub_1D2710(a1, 1u, v42, v78, v74, v76, v73);
          if ( v41 )
          {
            v51 = *(_QWORD **)(a1 + 832);
            v52 = v51[558];
            v53 = v51[557];
            if ( v51[559] < (unsigned __int64)(v52 + 1) )
            {
              v56 = qvector_reserve();
              v51[557] = v56;
              v53 = v56;
              v52 = v51[558];
            }
            *(_DWORD *)(v53 + 4 * v52) = v78;
            ++v51[558];
          }
        }
        if ( ++v36 == v25 )
          break;
        v84 = ((_BYTE)v84 + 1) & 0x1F;
        sub_1D2850(a1, 12, v86, (unsigned __int8 *)v87, v86);
      }
    }
    if ( (a3 & 2) != 0 && *(_WORD *)(a1 + 110) == 1 )
    {
      v57 = *(_DWORD **)(a1 + 832);
      v58 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v57 + 168LL);
      if ( v58 == sub_3E59C0 )
      {
        v59 = v57[103];
        v60 = v57[88];
        v61 = v57[1102];
        if ( v59 > v60 )
          v62 = v60 + v61;
        else
          v62 = 30 * v61 + v59;
      }
      else
      {
        v62 = v58(v57, 1u);
      }
      v63 = v62;
      v64 = get_dtype_size();
      sub_1D2710(a1, 4u, v64, v76, 0x3BEA45E214ADDC55LL, v63, 0);
    }
    sub_119360((__int64)v87);
    sub_119360((__int64)v86);
    return 1;
  }
  return result;
}

