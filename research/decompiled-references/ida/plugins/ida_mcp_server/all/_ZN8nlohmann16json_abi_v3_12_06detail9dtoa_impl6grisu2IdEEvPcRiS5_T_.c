unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::dtoa_impl::grisu2<double>(
        __int64 a1,
        int *a2,
        _DWORD *a3,
        double a4)
{
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r10
  int v8; // ecx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edi
  int v13; // edi
  int v14; // edx
  bool v15; // sf
  unsigned __int64 v16; // r8
  int v17; // edi
  int v18; // ecx
  int v19; // edi
  __int64 v20; // rdi
  __int64 v21; // r11
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned int v29; // ebx
  unsigned __int64 v30; // rdi
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  char v33; // cl
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r10
  unsigned int v42; // eax
  bool v43; // cc
  int v44; // edx
  int v45; // r12d
  __int64 v46; // r8
  int v47; // ebp
  unsigned __int64 v48; // r8
  __int64 v49; // r8
  unsigned int v50; // r13d
  unsigned int v51; // edx
  __int64 v52; // r8
  unsigned int v53; // edx
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned int v56; // edx
  __int64 v57; // r8
  unsigned int v58; // eax
  unsigned int v59; // edx
  unsigned int v60; // eax
  __int64 v61; // r8
  unsigned int v62; // edx
  unsigned int v63; // eax
  __int64 v64; // r8
  unsigned int v65; // edx
  unsigned int v66; // eax
  __int64 v67; // r8
  unsigned int v68; // edx
  unsigned int v69; // eax
  __int64 v70; // r8
  unsigned int v71; // edx
  __int64 v72; // rax
  int v73; // edx
  __int64 v74; // rdi
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rdi
  unsigned __int64 result; // rax
  __int64 v78; // rsi
  unsigned __int64 i; // rdx
  unsigned int v80; // [rsp+8h] [rbp-50h]
  unsigned __int64 v81; // [rsp+10h] [rbp-48h]

  v5 = *(_QWORD *)&a4 & 0xFFFFFFFFFFFFFLL;
  v6 = *(_QWORD *)&a4 >> 52;
  if ( *(_QWORD *)&a4 >> 52 )
  {
    v12 = v6 - 1076;
    if ( !v5 && v6 != 1 )
    {
      v11 = 0x3FFFFFFFFFFFFFLL;
      LOBYTE(v8) = v6 - 53;
      v7 = 0x20000000000000LL;
      v10 = 0x20000000000001LL;
      goto LABEL_4;
    }
    v8 = v6 - 1076;
    v7 = 2 * (v5 + 0x10000000000000LL);
    v9 = v7;
    v10 = v7 + 1;
  }
  else
  {
    v7 = 2 * v5;
    v8 = -1075;
    v9 = v7;
    v10 = v7 + 1;
  }
  v11 = v9 - 1;
  v12 = v8;
LABEL_4:
  v13 = v12 - 1;
  do
  {
    v14 = v13--;
    v15 = (v10 & 0x4000000000000000LL) != 0;
    v10 *= 2LL;
  }
  while ( !v15 );
  v16 = v11 << ((unsigned __int8)v8 - (unsigned __int8)v14);
  while ( v7 >= 0 )
    v7 *= 2;
  v17 = (v14 < -61) + 78913 * (-61 - v14) / 0x40000;
  v18 = v17 + 314;
  v19 = v17 + 307;
  if ( v19 >= 0 )
    v18 = v19;
  v20 = (unsigned int)v7;
  v21 = (unsigned int)v7;
  v22 = (unsigned __int64 *)((char *)&nlohmann::json_abi_v3_12_0::detail::dtoa_impl::get_cached_power_for_binary_exponent(int)::kCachedPowers
                           + 16 * (v18 >> 3));
  v23 = v22[1];
  v24 = *v22;
  v25 = HIDWORD(v7);
  v26 = (unsigned int)v24;
  v24 >>= 32;
  v81 = (((unsigned int)(v26 * v25) + (unsigned int)(v24 * v21) + ((unsigned __int64)(v26 * v20) >> 32) + 0x80000000) >> 32)
      + ((v26 * v25) >> 32)
      + ((v24 * v21) >> 32)
      + v24 * v25;
  v27 = (unsigned int)v16;
  v28 = HIDWORD(v16);
  v29 = v24 * v27;
  LODWORD(v21) = v26 * v28;
  v30 = ((unsigned __int64)(v26 * HIDWORD(v10)) >> 32)
      + v24 * HIDWORD(v10)
      + ((v24 * (unsigned int)v10) >> 32)
      - 1
      + (((unsigned int)(v24 * v10)
        + ((v26 * (unsigned __int64)(unsigned int)v10) >> 32)
        + 0x80000000
        + (unsigned int)(v26 * HIDWORD(v10))) >> 32);
  *a3 = -HIDWORD(v23);
  v31 = v30 - v24 * v28 - 1 - ((v26 * v28) >> 32) - ((v24 * v27) >> 32);
  v32 = v26 * v27;
  v33 = -64 - (v23 + v14);
  v34 = v30 >> v33;
  v35 = v29 + HIDWORD(v32);
  v36 = 1LL << v33;
  v37 = (unsigned int)v21 + v35 + 0x80000000;
  v38 = (1LL << v33) - 1;
  v39 = v30 - v81;
  v40 = v38 & v30;
  v41 = v31 - HIDWORD(v37);
  v42 = v30 >> v33;
  if ( v42 > 0x3B9AC9FF )
  {
    v80 = 1000000000;
    v45 = 10;
  }
  else if ( (unsigned int)v34 > 0x5F5E0FF )
  {
    v80 = 100000000;
    v45 = 9;
  }
  else if ( (unsigned int)v34 > 0x98967F )
  {
    v80 = 10000000;
    v45 = 8;
  }
  else if ( (unsigned int)v34 > 0xF423F )
  {
    v80 = 1000000;
    v45 = 7;
  }
  else if ( (unsigned int)v34 > 0x1869F )
  {
    v80 = 100000;
    v45 = 6;
  }
  else if ( (unsigned int)v34 > 0x270F )
  {
    v80 = 10000;
    v45 = 5;
  }
  else if ( (unsigned int)v34 > 0x3E7 )
  {
    v80 = 1000;
    v45 = 4;
  }
  else if ( (unsigned int)v34 > 0x63 )
  {
    v80 = 100;
    v45 = 3;
  }
  else
  {
    v43 = (unsigned int)v34 <= 9;
    v44 = 10;
    v45 = 1;
    if ( v43 )
      v44 = 1;
    v80 = v44;
    if ( !v43 )
      v45 = 2;
  }
  v46 = *a2;
  *a2 = v46 + 1;
  v47 = v45 - 1;
  *(_BYTE *)(a1 + v46) = v42 / v80 + 48;
  v48 = v40 + ((unsigned __int64)(v42 % v80) << v33);
  if ( v41 < v48 )
  {
    if ( v45 == 1 )
      goto LABEL_47;
    v49 = *a2;
    *a2 = v49 + 1;
    v47 = v45 - 2;
    v50 = v80 / 0xA;
    v51 = v42 % v80 % (v80 / 0xA);
    *(_BYTE *)(a1 + v49) = v42 % v80 / (v80 / 0xA) + 48;
    v48 = v40 + ((unsigned __int64)v51 << v33);
    if ( v41 >= v48 )
      goto LABEL_57;
    if ( v45 == 2 )
      goto LABEL_47;
    v52 = *a2;
    v50 = v80 / 0x64;
    *a2 = v52 + 1;
    v47 = v45 - 3;
    v53 = v51 % (v80 / 0x64);
    *(_BYTE *)(a1 + v52) = v42 % v80 % (v80 / 0xA) / (v80 / 0x64) + 48;
    v48 = v40 + ((unsigned __int64)v53 << v33);
    if ( v41 >= v48 )
      goto LABEL_57;
    if ( v45 == 3 )
      goto LABEL_47;
    v54 = v53;
    v55 = *a2;
    v50 = v80 / 0x3E8;
    *a2 = v55 + 1;
    v47 = v45 - 4;
    v56 = v53 % (v80 / 0x3E8);
    *(_BYTE *)(a1 + v55) = v54 / (v80 / 0x3E8) + 48;
    v48 = v40 + ((unsigned __int64)v56 << v33);
    if ( v41 >= v48 )
      goto LABEL_57;
    if ( v45 == 4 )
      goto LABEL_47;
    v57 = *a2;
    v50 = v80 / 0x2710;
    v58 = v56 / (v80 / 0x2710);
    v59 = v56 % (v80 / 0x2710);
    *a2 = v57 + 1;
    v47 = v45 - 5;
    *(_BYTE *)(a1 + v57) = v58 + 48;
    v48 = v40 + ((unsigned __int64)v59 << v33);
    if ( v41 >= v48 )
      goto LABEL_57;
    if ( v45 == 5 )
      goto LABEL_47;
    v60 = v59;
    v61 = *a2;
    v50 = v80 / 0x186A0;
    *a2 = v61 + 1;
    v47 = v45 - 6;
    v62 = v59 % (v80 / 0x186A0);
    *(_BYTE *)(a1 + v61) = v60 / (v80 / 0x186A0) + 48;
    v48 = v40 + ((unsigned __int64)v62 << v33);
    if ( v41 >= v48 )
      goto LABEL_57;
    if ( v45 == 6 )
      goto LABEL_47;
    v63 = v62;
    v64 = *a2;
    v50 = v80 / 0xF4240;
    *a2 = v64 + 1;
    v47 = v45 - 7;
    v65 = v62 % (v80 / 0xF4240);
    *(_BYTE *)(a1 + v64) = v63 / (v80 / 0xF4240) + 48;
    v48 = v40 + ((unsigned __int64)v65 << v33);
    if ( v41 >= v48 )
      goto LABEL_57;
    if ( v45 == 7 )
      goto LABEL_47;
    v66 = v65;
    v67 = *a2;
    v50 = v80 / 0x989680;
    *a2 = v67 + 1;
    v47 = v45 - 8;
    v68 = v65 % (v80 / 0x989680);
    *(_BYTE *)(a1 + v67) = v66 / (v80 / 0x989680) + 48;
    v48 = v40 + ((unsigned __int64)v68 << v33);
    if ( v41 >= v48 )
      goto LABEL_57;
    if ( v45 == 8 )
      goto LABEL_47;
    v69 = v68;
    v70 = *a2;
    v50 = v80 / 0x5F5E100;
    *a2 = v70 + 1;
    v47 = v45 - 9;
    v71 = v68 % (v80 / 0x5F5E100);
    *(_BYTE *)(a1 + v70) = v69 / (v80 / 0x5F5E100) + 48;
    v48 = v40 + ((unsigned __int64)v71 << v33);
    if ( v41 >= v48 )
    {
LABEL_57:
      v80 = v50;
    }
    else
    {
      if ( v45 == 9 || (v72 = *a2, *a2 = v72 + 1, *(_BYTE *)(a1 + v72) = v71 + 48, v41 < v40) )
      {
LABEL_47:
        v73 = 0;
        do
        {
          v74 = *a2;
          ++v73;
          v75 = 10 * v40;
          v40 = (10 * v40) & v38;
          *a2 = v74 + 1;
          *(_BYTE *)(a1 + v74) = (v75 >> v33) + 48;
          v76 = 10 * v41;
          result = 10 * v39;
          v41 = v76;
          v39 *= 10LL;
        }
        while ( v76 < v40 );
        *a3 -= v73;
        if ( v40 < result )
        {
          v78 = *a2;
          while ( v76 - v40 >= v36 )
          {
            if ( v36 + v40 >= result )
            {
              if ( v36 + v40 - result >= result - v40 )
                return result;
              goto LABEL_54;
            }
            --*(_BYTE *)(a1 + v78 - 1);
            v40 += v36;
          }
        }
        return result;
      }
      v48 = v38 & v30;
      v47 = 0;
      v80 /= 0x3B9ACA00u;
    }
  }
  result = (unsigned __int64)a3;
  *a3 += v47;
  if ( v48 < v39 )
  {
    v78 = *a2;
    for ( i = (unsigned __int64)v80 << v33; ; v48 += i )
    {
      result = v41 - v48;
      if ( v41 - v48 < i )
        break;
      if ( i + v48 >= v39 )
      {
        result = v81 - v30 + i + v48;
        if ( result < v39 - v48 )
LABEL_54:
          --*(_BYTE *)(a1 + v78 - 1);
        return result;
      }
      --*(_BYTE *)(a1 + v78 - 1);
    }
  }
  return result;
}

