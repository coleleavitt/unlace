__int64 __fastcall sub_459B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __m128i v4; // xmm1
  __int64 v5; // rbx
  __m128i v6; // xmm2
  int v7; // r13d
  __int64 v8; // r12
  size_t v9; // rax
  size_t v10; // rax
  char v11; // r15
  char v12; // r14
  __m128i si128; // xmm3
  __m128i v15; // xmm4
  char *v16; // rax
  size_t v17; // r12
  __int64 v18; // r12
  size_t v19; // r15
  void *v20; // rax
  const void *v21; // rsi
  size_t v22; // r15
  void *v23; // rax
  const void *v24; // rsi
  void *v25; // rdi
  void *v26; // r13
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-D0h] BYREF
  void *src[2]; // [rsp+10h] [rbp-C0h] BYREF
  __int16 v32; // [rsp+2Eh] [rbp-A2h] BYREF
  __m128i v33; // [rsp+30h] [rbp-A0h]
  int v34; // [rsp+40h] [rbp-90h]
  __m128i v35; // [rsp+44h] [rbp-8Ch]
  __int64 v36; // [rsp+54h] [rbp-7Ch]
  void *v37; // [rsp+60h] [rbp-70h]
  __int128 v38; // [rsp+68h] [rbp-68h]
  void *v39; // [rsp+78h] [rbp-58h]
  __int128 v40; // [rsp+80h] [rbp-50h]
  char v41; // [rsp+90h] [rbp-40h]
  char v42; // [rsp+91h] [rbp-3Fh]
  unsigned __int64 v43; // [rsp+98h] [rbp-38h]

  v2 = *a2;
  v43 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 72))(a2);
  v37 = nullptr;
  v4 = _mm_loadu_si128((const __m128i *)(v3 + 296));
  v5 = v3;
  v38 = 0;
  v6 = _mm_loadu_si128((const __m128i *)(v3 + 316));
  v7 = *(_DWORD *)(v3 + 312);
  v8 = *(_QWORD *)(v3 + 332);
  v32 = 0;
  v9 = *(_QWORD *)(v3 + 352);
  *(__m128i *)src = v4;
  v34 = v7;
  v36 = v8;
  v33 = v4;
  v30 = v6;
  v35 = v6;
  if ( v9 )
  {
    v22 = v9;
    v23 = (void *)qalloc_or_throw();
    v24 = *(const void **)(v5 + 344);
    *((_QWORD *)&v38 + 1) = v22;
    v37 = v23;
    memcpy(v23, v24, v22);
    *(_QWORD *)&v38 = v22;
  }
  v10 = *(_QWORD *)(v5 + 376);
  v39 = nullptr;
  v40 = 0;
  if ( v10 )
  {
    v19 = v10;
    v20 = (void *)qalloc_or_throw();
    v21 = *(const void **)(v5 + 368);
    v39 = v20;
    *((_QWORD *)&v40 + 1) = v19;
    memcpy(v20, v21, v19);
    *(_QWORD *)&v40 = v19;
  }
  v11 = *(_BYTE *)(v5 + 392);
  v12 = *(_BYTE *)(v5 + 393);
  v41 = v11;
  v42 = v12;
  if ( (int)sub_438C0(
              (__int64)"STARTITEM 1\n"
                       "@0:1350[]\n"
                       "ARM architecture options\n"
                       "%/%*\n"
                       " <##Base architecture##ARMv4:R>     <##VFP instructions##None:r>\n"
                       " <ARMv4T:R>                         <VFPv1:r>\n"
                       " <ARMv5T:R>                         <VFPv2:r>\n"
                       " <ARMv5TEJ:R>                       <VFPv3:r>\n"
                       " <XScale:R>                         <VFPv4:r>\n"
                       " <ARMv6:R>                          <VFPv8:r>2>\n"
                       " <ARMv6T2:R>   <##Other options#Image is BE-8 format \\: big-endian data but little-endian code#B"
                       "E-8 code (ARMB):C>7>\n"
                       " <ARMv6-M:R>   <##Thumb instructions##No:r>\n"
                       " <ARMv7-M:R>   <Thumb:r>                   \n"
                       " <ARMv7-A&R:R> <Thumb-2:r>3>\n"
                       " <ARMv8-A:R>     <##ARM instructions##No:r>\n"
                       " <ARMv8-M:R>   <Yes:r>4>\n"
                       " <ARMv9:R>\n"
                       " <Any:R>1>\n"
                       " <##Advanced SIMD (NEON)##No:R>   <##Wireless MMX##None:r>\n"
                       " <Yes:R>                          <WMMXv1:r>\n"
                       " <Yes with FMA:R>                 <WMMXv2:r>6>\n"
                       " <v8:R>5>\n"
                       " <##M-Profile Vector Extension (Helium)##No:R>\n"
                       " <MVE-I (integer):R>\n"
                       " <MVE-F (integer and floating point):R>8>\n"
                       " <##Coprocessors with enabled Custom Datapath##0:C><1:C><2:C><3:C><4:C><5:C><6:C><7:C>9>\n",
              sub_46610,
              v5,
              &v32,
              &v32,
              &v32,
              &v32,
              &v32,
              &v32,
              &v32,
              &v32,
              &v32) <= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)src);
    v15 = _mm_load_si128(&v30);
    *(_DWORD *)(v5 + 312) = v7;
    v16 = (char *)v38;
    *(_QWORD *)(v5 + 332) = v8;
    *(__m128i *)(v5 + 296) = si128;
    src[0] = v16;
    *(__m128i *)(v5 + 316) = v15;
    if ( v16 && (v17 = (size_t)(v16 - 1), v16 != (_BYTE *)&dword_0 + 1) )
    {
      v26 = v37;
      v27 = *(void **)(v5 + 344);
      if ( *(_QWORD *)(v5 + 360) < (unsigned __int64)v16 )
      {
        v29 = qvector_reserve();
        *(_QWORD *)(v5 + 344) = v29;
        v27 = (void *)v29;
      }
      *(void **)(v5 + 352) = src[0];
      memmove(v27, v26, v17);
      *((_BYTE *)src[0] + *(_QWORD *)(v5 + 344) - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v5 + 352) = 0;
    }
    v18 = v40;
    src[0] = v39;
    if ( (unsigned __int64)v40 > 1 )
    {
      v25 = *(void **)(v5 + 368);
      if ( *(_QWORD *)(v5 + 384) < (unsigned __int64)v40 )
      {
        v28 = qvector_reserve();
        *(_QWORD *)(v5 + 368) = v28;
        v25 = (void *)v28;
      }
      *(_QWORD *)(v5 + 376) = v18;
      memmove(v25, src[0], v18 - 1);
      *(_BYTE *)(*(_QWORD *)(v5 + 368) + v18 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v5 + 376) = 0;
    }
    *(_BYTE *)(v5 + 392) = v11;
    *(_BYTE *)(v5 + 393) = v12;
  }
  else
  {
    src[0] = v39;
  }
  if ( src[0] )
    qfree();
  if ( v37 )
    qfree();
  return 0;
}

