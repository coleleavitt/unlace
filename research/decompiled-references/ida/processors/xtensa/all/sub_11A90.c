__int64 __fastcall sub_11A90(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  _BYTE *v10; // rax
  void *v11; // r15
  size_t v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int32 v16; // edx
  int v17; // eax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // cx
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v26; // cx
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // edx
  int v36; // edx
  __int32 v37; // eax
  bool v38; // zf
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // rbx
  _QWORD *v42; // rax
  void *v43; // r15
  void *v44; // r15
  __int16 v46; // [rsp+14h] [rbp-7Ch] BYREF
  __int16 v47; // [rsp+16h] [rbp-7Ah] BYREF
  __int16 v48; // [rsp+18h] [rbp-78h] BYREF
  __int16 v49; // [rsp+1Ah] [rbp-76h] BYREF
  __int16 v50; // [rsp+1Ch] [rbp-74h] BYREF
  __int16 v51; // [rsp+1Eh] [rbp-72h] BYREF
  __int64 v52; // [rsp+20h] [rbp-70h] BYREF
  __int128 v53; // [rsp+28h] [rbp-68h]
  void *src; // [rsp+40h] [rbp-50h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-48h]
  unsigned __int64 v56; // [rsp+58h] [rbp-38h]

  v56 = __readfsqword(0x28u);
  result = 1;
  if ( a2 )
    return result;
  v53 = 0;
  v52 = 0;
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve();
  strcpy((char *)src, "NONE");
  v44 = (void *)qalloc_or_throw();
  memcpy(v44, src, 5u);
  v52 = qvector_reserve();
  v6 = v52 + 24 * v53;
  *(_QWORD *)v6 = v44;
  *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64((__m128i)5uLL, (__m128i)5uLL);
  *(_QWORD *)&v53 = v53 + 1;
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve();
  strcpy((char *)src, "WINDOWED");
  v43 = (void *)qalloc_or_throw();
  memcpy(v43, src, 9u);
  v7 = v53;
  v8 = v52;
  if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
  {
    v52 = qvector_reserve();
    v7 = v53;
    v8 = v52;
  }
  v9 = v8 + 24 * v7;
  *(_QWORD *)v9 = v43;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)9uLL, (__m128i)9uLL);
  *(_QWORD *)&v53 = v53 + 1;
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  *(_OWORD *)n = 0;
  v10 = (_BYTE *)qvector_reserve();
  src = v10;
  v11 = nullptr;
  n[0] = 6;
  *(_DWORD *)v10 = 1280065859;
  v10[4] = 48;
  *((_BYTE *)src + 5) = 0;
  v12 = n[0];
  if ( n[0] )
  {
    v11 = (void *)qalloc_or_throw();
    memcpy(v11, src, n[0]);
  }
  v13 = v53;
  v14 = v52;
  if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
  {
    v52 = qvector_reserve();
    v13 = v53;
    v14 = v52;
  }
  v15 = v14 + 24 * v13;
  *(_QWORD *)v15 = v11;
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  *(_QWORD *)&v53 = v53 + 1;
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v16 = a1[37].m128i_u32[1];
  LODWORD(src) = a1[37].m128i_i32[0];
  v46 = a1[37].m128i_u8[9];
  v47 = a1[37].m128i_u8[10];
  v48 = 0;
  v49 = 0;
  if ( (v16 & 0x400000) == 0 )
  {
    if ( (v16 & 0x800000) != 0 )
      v48 = 2;
    if ( (v16 & 0x2000) != 0 )
      goto LABEL_20;
LABEL_122:
    if ( (v16 & 0x4000) != 0 )
    {
      v49 = 2;
    }
    else if ( (v16 & 0x800) != 0 )
    {
      v49 = 3;
    }
    goto LABEL_21;
  }
  v48 = 1;
  if ( (v16 & 0x2000) == 0 )
    goto LABEL_122;
LABEL_20:
  v49 = 1;
LABEL_21:
  v17 = (v16 >> 6) & 1 | 2;
  if ( (v16 & 0x80u) == 0 )
    v17 = (v16 >> 6) & 1;
  if ( (v16 & 0x100) != 0 )
    LOWORD(v17) = v17 | 4;
  if ( (v16 & 0x8000000) != 0 )
    LOWORD(v17) = v17 | 8;
  if ( (v16 & 0x1000) != 0 )
    LOWORD(v17) = v17 | 0x10;
  if ( (v16 & 8) != 0 )
    LOWORD(v17) = v17 | 0x20;
  if ( (v16 & 0x10000) != 0 )
    LOWORD(v17) = v17 | 0x40;
  HIBYTE(v18) = BYTE1(v17);
  if ( (v16 & 0x10000000) != 0 )
  {
    LOBYTE(v18) = v17 | 0x80;
    LOWORD(v17) = v18;
  }
  LOBYTE(v19) = v17;
  if ( (v16 & 0x2000000) != 0 )
  {
    HIBYTE(v19) = BYTE1(v17) | 1;
    LOWORD(v17) = v19;
  }
  LOBYTE(v20) = v17;
  if ( (v16 & 0x40000) != 0 )
  {
    HIBYTE(v20) = BYTE1(v17) | 2;
    LOWORD(v17) = v20;
  }
  LOBYTE(v21) = v17;
  if ( (v16 & 0x20000) != 0 )
  {
    HIBYTE(v21) = BYTE1(v17) | 4;
    LOWORD(v17) = v21;
  }
  v50 = v17;
  v22 = (v16 >> 20) & 1 | 2;
  if ( (v16 & 0x20000000) == 0 )
    v22 = (v16 >> 20) & 1;
  if ( (v16 & 0x80000) != 0 )
    LOWORD(v22) = v22 | 4;
  if ( (v16 & 0x10) != 0 )
    LOWORD(v22) = v22 | 8;
  if ( (v16 & 0x200) != 0 )
    LOWORD(v22) = v22 | 0x10;
  if ( (v16 & 0x200000) != 0 )
    LOWORD(v22) = v22 | 0x20;
  if ( (v16 & 0x400) != 0 )
    LOWORD(v22) = v22 | 0x40;
  HIBYTE(v23) = BYTE1(v22);
  if ( (v16 & 0x8000) != 0 )
  {
    LOBYTE(v23) = v22 | 0x80;
    LOWORD(v22) = v23;
  }
  LOBYTE(v24) = v22;
  if ( (v16 & 4) != 0 )
  {
    HIBYTE(v24) = BYTE1(v22) | 1;
    LOWORD(v22) = v24;
  }
  LOBYTE(v25) = v22;
  if ( (v16 & 0x1000000) != 0 )
  {
    HIBYTE(v25) = BYTE1(v22) | 2;
    LOWORD(v22) = v25;
  }
  LOBYTE(v26) = v22;
  if ( (v16 & 0x4000000) != 0 )
  {
    HIBYTE(v26) = BYTE1(v22) | 4;
    LOWORD(v22) = v26;
  }
  v51 = v22;
  if ( (unsigned int)sub_11710(
                       (__int64)"Xtensa Options\n"
                                "\n"
                                "\n"
                                "<~A~BI:b9:0:::>                 <~R~eset to Defaults:B:1:::>\n"
                                "<~S~implify instructions:C>1>   <Use register ~n~ame aliases:C>2>\n"
                                "\n"
                                "<##Region/Memory Protection Instructions#None:R> <##Floating Point Instructions#None:r>\n"
                                "<Region Protection:R>                            <Floating Point (newer):r>\n"
                                "<Memory Protection:R>3>                          <Floating Point 2000 (older):r>\n"
                                "                                                 <Deposit Bits (no floating point):r>4>\n"
                                "\n"
                                "<##Optional Instructions 1#16-bit Integer Multiply:C>  <##Optional Instructions 2#High-P"
                                "riority Interrupt:c>\n"
                                "<32-bit Integer Multiply:C>  <Instruction Cache:c>\n"
                                "<32-bit Integer Divide:C>    <Interrupt:c>\n"
                                "<Block Prefetch:C>           <Loop:c>\n"
                                "<Boolean:C>                  <MAC16:c>\n"
                                "<Code Density:C>             <Memory ECC/Parity:c>\n"
                                "<Conditional Store:C>        <Miscellaneous Operations:c>\n"
                                "<Data Cache:C>               <Multiprocessor Synchronization:c>\n"
                                "<Debug:C>                    <Other:c>\n"
                                "<Exception:C>                <Windowed Register:c>\n"
                                "<Exclusive Access:C>5>       <Xtensa Instruction Set Simulator:c>6>\n"
                                "\n",
                       &v52,
                       &src,
                       sub_11500,
                       &v46,
                       &v47,
                       &v48,
                       &v49,
                       &v50,
                       &v51,
                       &v52,
                       &src) == 1 )
  {
    v27 = 4194305;
    if ( v48 != 1 )
    {
      v27 = 8388609;
      if ( v48 != 2 )
        v27 = 1;
    }
    if ( v49 == 1 )
    {
      BYTE1(v27) |= 0x20u;
    }
    else if ( v49 == 2 )
    {
      BYTE1(v27) |= 0x40u;
    }
    else
    {
      v28 = v27;
      if ( v49 == 3 )
      {
        BYTE1(v28) = BYTE1(v27) | 8;
        v27 = v28;
      }
    }
    v29 = v27 | ((v50 & 1) << 6);
    v30 = v29;
    if ( (v50 & 2) != 0 )
    {
      LOBYTE(v30) = v27 | ((v50 & 1) << 6) | 0x80;
      v29 = v30;
    }
    v31 = v29;
    if ( (v50 & 4) != 0 )
    {
      BYTE1(v31) = BYTE1(v29) | 1;
      v29 = v31;
    }
    if ( (v50 & 8) != 0 )
      v29 |= 0x8000000u;
    v32 = v29;
    if ( (v50 & 0x10) != 0 )
    {
      BYTE1(v32) = BYTE1(v29) | 0x10;
      v29 = v32;
    }
    if ( (v50 & 0x20) != 0 )
      v29 |= 8u;
    if ( (v50 & 0x40) != 0 )
      v29 |= 0x10000u;
    if ( (v50 & 0x80u) != 0 )
      v29 |= 0x10000000u;
    if ( (v50 & 0x100) != 0 )
      v29 |= 0x2000000u;
    if ( (v50 & 0x200) != 0 )
      v29 |= 0x40000u;
    if ( (v50 & 0x400) != 0 )
      v29 |= 0x20000u;
    v33 = v29 | ((v51 & 1) << 20);
    if ( (v51 & 2) != 0 )
      v33 |= 0x20000000u;
    if ( (v51 & 4) != 0 )
      v33 |= 0x80000u;
    if ( (v51 & 8) != 0 )
      v33 |= 0x10u;
    v34 = v33;
    if ( (v51 & 0x10) != 0 )
    {
      BYTE1(v34) = BYTE1(v33) | 2;
      v33 = v34;
    }
    if ( (v51 & 0x20) != 0 )
      v33 |= 0x200000u;
    v35 = v33;
    if ( (v51 & 0x40) != 0 )
    {
      BYTE1(v35) = BYTE1(v33) | 4;
      v33 = v35;
    }
    v36 = v33;
    if ( (v51 & 0x80u) != 0 )
    {
      BYTE1(v36) = BYTE1(v33) | 0x80;
      v33 = v36;
    }
    if ( (v51 & 0x100) != 0 )
      v33 |= 4u;
    if ( (v51 & 0x200) != 0 )
      v33 |= 0x1000000u;
    if ( (v51 & 0x400) != 0 )
      v33 |= 0x4000000u;
    a1[37].m128i_i32[1] = v33;
    v37 = (int)src;
    if ( (int)src < 0 )
      v37 = 0;
    a1[37].m128i_i8[9] = v46 != 0;
    v38 = v47 == 0;
    a1[37].m128i_i32[0] = v37;
    a1[37].m128i_i8[10] = !v38;
    sub_118C0(a1);
    if ( a5 )
      sub_117E0();
  }
  v39 = v52;
  if ( v52 )
  {
    v40 = v53;
    if ( (_QWORD)v53 )
    {
      v41 = 0;
      do
      {
        v42 = (_QWORD *)(v39 + 24 * v41);
        if ( *v42 )
        {
          v42[1] = 0;
          qfree();
          v39 = v52;
        }
        ++v41;
      }
      while ( v40 != v41 );
    }
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  return 0;
}

