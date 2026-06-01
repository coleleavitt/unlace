__int64 __fastcall sub_21A0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v6; // r12
  int v9; // r14d
  unsigned __int64 v10; // r13
  char v11; // al
  unsigned int v12; // r10d
  __int64 v14; // r13
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r13
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rcx
  char v20; // edx^2
  unsigned __int64 v21; // r13
  unsigned int v22; // r15d
  __int64 v23; // rbp
  int dword; // eax
  unsigned __int8 v25; // di
  unsigned __int64 v26; // rdx
  unsigned __int8 v27; // r8
  __int16 v28; // r8
  __int64 v29; // r15
  __int64 v30; // rsi
  char v31; // al
  __int64 v32; // rsi
  int v33; // edi
  __int64 v34; // rax
  char v35; // dl
  int v36; // eax
  int v37; // [rsp+8h] [rbp-90h]
  unsigned int v38; // [rsp+8h] [rbp-90h]
  unsigned __int64 v39; // [rsp+10h] [rbp-88h]
  __int16 v40; // [rsp+18h] [rbp-80h]
  bool v41; // [rsp+1Fh] [rbp-79h]
  unsigned int v42; // [rsp+2Ch] [rbp-6Ch] BYREF
  int v43; // [rsp+30h] [rbp-68h] BYREF
  int v44; // [rsp+34h] [rbp-64h]
  __m128i si128; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+48h] [rbp-50h]
  __int64 v47; // [rsp+50h] [rbp-48h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v5 = a4;
  v6 = a3;
  v48 = __readfsqword(0x28u);
  if ( !getnseg(a5) )
    return sub_1600((__int64)"relocation data for missing segment %d ignored\n", a5);
  v9 = *(_DWORD *)(a2 + 56);
  if ( a5 == 1 )
    v9 = *(_DWORD *)(a2 + 52);
  v10 = (unsigned __int64)(2863311531LL * v5) >> 35;
  v42 = v10;
  v11 = sub_1DA0(a1, &v42, 0xCu, v6, -1);
  v12 = v42;
  if ( !v11 )
  {
    v38 = v42;
    v36 = sub_16D0(
            1u,
            (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
            "Relocation count",
            (unsigned int)v10,
            v42,
            ". Do you want to continue with the new value?");
    v12 = v38;
    if ( v36 != 1 )
      sub_1870(0);
  }
  if ( !v12 )
    return v48 - __readfsqword(0x28u);
  v14 = v12;
  v37 = v12;
  v39 = qcalloc(v12, 12);
  if ( !v39 )
    sub_1870((__int64)"Unable to allocate relocation table for %u entries\n", v37);
  qlseek(a1, v6, 0);
  v15 = v39 + 12 * v14;
  v16 = v39;
  if ( v39 < v15 )
  {
    do
    {
      v17 = *(unsigned __int8 *)(a2 + 88);
      v43 = 0;
      lreadbytes(a1, v16, 4, v17);
      lreadbytes(a1, &v43, 4, *(unsigned __int8 *)(a2 + 88));
      lreadbytes(a1, v16 + 8, 4, *(unsigned __int8 *)(a2 + 88));
      v18 = v43;
      v19 = v16;
      v16 += 12LL;
      v20 = BYTE2(v43);
      *(_BYTE *)(v19 + 4) = BYTE1(v43);
      *(_BYTE *)(v16 - 7) = v20;
      *(_BYTE *)(v16 - 6) = HIBYTE(v18);
      *(_BYTE *)(v16 - 5) = *(_BYTE *)(v16 - 5) & 6 | ((unsigned __int8)v18 >> 7) | (8 * v18);
    }
    while ( v16 < v15 );
    v21 = v39;
    v41 = a5 == 2;
    while ( 1 )
    {
      v22 = v9 + *(_DWORD *)v21;
      v23 = v22;
      dword = get_dword(v22);
      v25 = *(_BYTE *)(v21 + 7);
      if ( (v25 & 1) == 0 )
        break;
      v26 = *(unsigned __int16 *)(v21 + 4) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 6) << 16);
      if ( (unsigned int)v26 < *(_DWORD *)(a2 + 48) )
      {
        v22 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 12 * v26 + 8) + *(_DWORD *)(v21 + 8);
LABEL_14:
        v27 = v25 >> 3;
        if ( v25 > 0x5Fu )
        {
LABEL_16:
          sub_1600((__int64)"Unsupported sparc relocation type 0x%02X, ignored\n", v27);
        }
        else
        {
          switch ( v27 )
          {
            case 0u:
            case 1u:
            case 3u:
            case 4u:
            case 5u:
            case 9u:
            case 0xAu:
              goto LABEL_16;
            case 2u:
              v29 = dword + v22;
              v28 = 4;
              v30 = (unsigned int)v29;
              break;
            case 6u:
              v28 = 4;
              v29 = (dword & 0x3FFFFFFF) + v22;
              v30 = ((unsigned int)v29 >> 2) | dword & 0xC0000000;
              break;
            case 7u:
              v28 = 4;
              v29 = (dword & 0x3FFFFF) + v22;
              v30 = ((unsigned int)v29 >> 2) & 0x3FFFFF | dword & 0xFFC00000;
              break;
            case 8u:
              v28 = word_6172;
              v29 = (dword << 10) + v22;
              v30 = ((unsigned int)v29 >> 10) | dword & 0xFFC00000;
              if ( word_6172 == (__int16)0x8000 )
              {
                v30 = (unsigned int)v30;
                word_6172 = find_custom_fixup("HI22");
                v28 = word_6172;
              }
              break;
            case 0xBu:
              v28 = word_6170;
              v29 = (dword & 0x3FF) + v22;
              v30 = v29 & 0x3FF | dword & 0xFFFFFC00;
              if ( word_6170 == (__int16)0x8000 )
              {
                v30 = (unsigned int)v30;
                word_6170 = find_custom_fixup("LO10");
                v28 = word_6170;
              }
              break;
          }
          v40 = v28;
          put_dword(v23, v30);
          v31 = *(_BYTE *)(v21 + 7) & 1;
          if ( v31 )
          {
            v32 = *(unsigned int *)(v21 + 8);
            v33 = *(_DWORD *)(v21 + 8);
          }
          else
          {
            v32 = 0;
            v33 = 0;
          }
          LOWORD(v43) = v40;
          v44 = 0;
          v46 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_44B0);
          if ( v31 )
          {
            v44 = 2;
            v29 = (unsigned int)(v29 - v33);
          }
          v47 = v32;
          v34 = getseg(v29);
          if ( v34 )
          {
            si128.m128i_i64[1] = *(_QWORD *)(v34 + 48);
            v29 -= get_segm_base(v34);
          }
          v46 = v29;
          set_fixup(v23, &v43);
        }
        goto LABEL_17;
      }
      sub_1600((__int64)"%08X: relocation to extern symbol idx %08X out of bounds, ignored\n", v22, v26);
LABEL_17:
      v21 += 12LL;
      if ( v21 >= v15 )
        return qfree(v39);
    }
    v35 = v25 & 0xF8;
    if ( (v25 & 0xF8) == 0x40 || v35 == 88 || v35 == 16 && v41 )
      v22 = *(_DWORD *)(v21 + 8);
    goto LABEL_14;
  }
  return qfree(v39);
}
