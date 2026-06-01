__int64 __fastcall sub_24200(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  const __m128i *v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rax
  const char *v14; // rsi
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 idati; // rax
  __m128 v18; // xmm0
  void (__fastcall **v19)(_QWORD); // rax
  char v20; // dl
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  _QWORD *v24; // r12
  __int64 v25; // rax
  const char *v26; // rdx
  __int64 v27; // rax
  const char *v28; // rsi
  __int64 v30; // rax
  const char *v31; // rdi
  __int64 v32; // rax
  const char *v33; // rdx
  __int16 v34; // ax
  const char *v35; // r8
  __int16 v36; // ax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int16 v39; // ax
  const char *v40; // rdi
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rax
  const char *v44; // rsi
  char v45; // al
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // [rsp+0h] [rbp-2B90h]
  void *v50; // [rsp+8h] [rbp-2B88h]
  int v51; // [rsp+8h] [rbp-2B88h]
  __int64 v52; // [rsp+10h] [rbp-2B80h]
  __int64 v55; // [rsp+28h] [rbp-2B68h]
  __int16 v56; // [rsp+34h] [rbp-2B5Ch]
  __int16 v57; // [rsp+36h] [rbp-2B5Ah]
  __int64 v58; // [rsp+38h] [rbp-2B58h] BYREF
  void (__fastcall **v59[2])(_QWORD); // [rsp+40h] [rbp-2B50h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+50h] [rbp-2B40h] BYREF
  __int128 v61; // [rsp+58h] [rbp-2B38h]
  _BYTE *v62; // [rsp+68h] [rbp-2B28h]
  _BYTE v63[24]; // [rsp+70h] [rbp-2B20h] BYREF
  int v64; // [rsp+88h] [rbp-2B08h] BYREF
  void *v65; // [rsp+90h] [rbp-2B00h]
  int *v66; // [rsp+98h] [rbp-2AF8h]
  int *v67; // [rsp+A0h] [rbp-2AF0h]
  __int64 v68; // [rsp+A8h] [rbp-2AE8h]
  const char *v69; // [rsp+B0h] [rbp-2AE0h] BYREF
  __int128 v70; // [rsp+B8h] [rbp-2AD8h]
  _QWORD v71[58]; // [rsp+180h] [rbp-2A10h] BYREF
  char s2[10248]; // [rsp+350h] [rbp-2840h] BYREF
  unsigned __int64 v73; // [rsp+2B58h] [rbp-38h]

  v6 = *a2;
  v73 = __readfsqword(0x28u);
  v55 = v6;
  if ( !v6 )
  {
    if ( !a6 )
      sub_1D740((__int64)"No input file provided.\n");
    return 0;
  }
  if ( *(_DWORD *)(a5 + 24) == -1 )
  {
    if ( !a6 )
    {
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v44 = src;
      if ( *(_QWORD *)(v43 + 8) )
        v44 = *(const char **)v43;
      sub_1D740((__int64)"Input file type not handled for file %s.\n", v44);
    }
    return 0;
  }
  v11 = (const __m128i *)sub_83020();
  *(__m128i *)(a2 + 1) = _mm_loadu_si128(v11);
  *(__m128i *)(a2 + 3) = _mm_loadu_si128(v11 + 1);
  *(__m128i *)(a2 + 5) = _mm_loadu_si128(v11 + 2);
  *(__m128i *)(a2 + 7) = _mm_loadu_si128(v11 + 3);
  *(__m128i *)(a2 + 9) = _mm_loadu_si128(v11 + 4);
  *(__m128i *)(a2 + 11) = _mm_loadu_si128(v11 + 5);
  v12 = sub_83240(a2, 0);
  if ( !(_BYTE)v12 )
  {
    if ( !a6 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      v28 = src;
      if ( *(_QWORD *)(v27 + 8) )
        v28 = *(const char **)v27;
      sub_1D740((__int64)"Input file %s does not contain DWARF debug information.\n", v28);
    }
    return 0;
  }
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  v14 = src;
  if ( *(_QWORD *)(v13 + 8) )
    v14 = *(const char **)v13;
  sub_1D740((__int64)"File \"%s\" contains DWARF information.\n", v14);
  if ( *(_DWORD *)(v55 + 8) == 2 )
  {
    a4 = *(_QWORD *)(v55 + 64);
    *(_DWORD *)(a5 + 24) = *(_DWORD *)(v55 + 72);
  }
  if ( a6 == 1 )
  {
    v15 = *(_WORD *)(a1 + 298);
    if ( (v15 & 2) != 0 )
    {
      v61 = 0;
      v60 = nullptr;
      memset(v63, 0, sizeof(v63));
      getinf_buf(97, s2, 10240);
      v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      v31 = src;
      if ( *(_QWORD *)(v30 + 8) )
        v31 = *(const char **)v30;
      if ( strcmp(v31, s2) )
      {
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        v33 = src;
        if ( *(_QWORD *)(v32 + 8) )
          v33 = *(const char **)v32;
        sub_20160((__int64 *)&v60, (__int64)"(%s)", v33);
      }
      if ( (unsigned __int64)a2[25] > 1 )
        sub_20160(
          (__int64 *)v63,
          (__int64)"\n<#Try and make use of the DWZ file DWARF data (experimental!)#Load ~D~WZ data at \"%s\":C4>",
          (const char *)a2[24]);
      v34 = *(_WORD *)(a1 + 298);
      v69 = nullptr;
      v35 = src;
      v70 = 0;
      v36 = v34 & 4;
      if ( *(_QWORD *)&v63[8] )
        v35 = *(const char **)v63;
      if ( v36 )
      {
        v37 = 32;
        v38 = 42;
      }
      else
      {
        v37 = 42;
        v38 = 32;
      }
      sub_20160(
        (__int64 *)&v69,
        (__int64)"BUTTON YES%c ~Y~es\n"
                 "BUTTON NO%c No\n"
                 "BUTTON CANCEL NONE\n"
                 "DWARF info found\n"
                 "\n"
                 "%%/Load DWARF debug information?\n"
                 "%%q\n"
                 "\n"
                 "<#Apply types & names for global variables#~G~lobal names:C6>10>\n"
                 "<#Apply functions information#Fu~n~ctions:C9>\n"
                 "<#Override IDA's algorithm for determining functions boundaries with information from DWARF#Use functio"
                 "n ~b~ounds:C7>11>\n"
                 "<#Import type information (slow)#~T~ypes (uncheck for speed):C8>\n"
                 "<#Guess and apply calling conventions from function parameters locations#~A~pply calling conventions:C1"
                 ">\n"
                 "<#Allow __usercall calling conventions, or fallback to platform's defaults#Allow __~u~sercall:C2>\n"
                 "<#Consider DWARF-extracted function prototypes as definitive. Depending on the quality of the DWARF inf"
                 "ormation, this may lead to better, or worse disassembly. If in doubt, leave unchecked.#~F~unction proto"
                 "types are definitive:C3>12>\n"
                 "<#Assign line numbers & file names to addresses & regions of the IDB#~I~mport file names/line numbers:C5>%s>\n",
        v38,
        v37,
        v35);
      v39 = *(_WORD *)(a1 + 296);
      v40 = src;
      v56 = v39 & 1;
      v57 = (v39 >> 1) & 3;
      LOWORD(v59[0]) = (v39 >> 7) & 0x1F;
      LOWORD(v58) = (v39 >> 3) & 0xF;
      if ( (_QWORD)v70 )
        v40 = v69;
      v41 = sub_171E0((__int64)v40);
      v42 = (__int64)v69;
      if ( v41 != 1 )
      {
        if ( v69 )
        {
          *(_QWORD *)&v70 = 0;
          qfree(v69);
        }
        if ( *(_QWORD *)v63 )
        {
          *(_QWORD *)&v63[8] = 0;
          qfree(*(_QWORD *)v63);
        }
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree(v60);
        }
        return 0;
      }
      *(_WORD *)(a1 + 296) = (LOWORD(v59[0]) << 7) | v56 | (8 * v58) | (2 * v57);
      if ( v42 )
      {
        *(_QWORD *)&v70 = 0;
        qfree(v42);
      }
      if ( *(_QWORD *)v63 )
      {
        *(_QWORD *)&v63[8] = 0;
        qfree(*(_QWORD *)v63);
      }
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree(v60);
      }
    }
    else if ( (v15 & 4) == 0 )
    {
      return 0;
    }
  }
  a2[36] = (__int64)a2;
  a2[37] = (__int64)(a2 + 1);
  v49 = sub_87270();
  if ( (unsigned int)sub_84060(v49, a2, sub_1E1F0, 0, &v58) )
  {
    sub_1D740((__int64)"Failed to initialize DWARF debugging.\n");
    return 0;
  }
  if ( (unsigned __int8)getinf_flag(3, 4) || (getinf(3) & 0x1006) == 0x1002 )
    v16 = 64;
  else
    v16 = 32;
  v50 = (void *)sub_8A1E0(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 4LL), a1 + 328, v16);
  if ( !v50 )
  {
    sub_1D740((__int64)"Unsupported DWARF architecture; functions variables and parameter locations will not be set.\n");
    v51 = operator new(0x978u);
    v45 = getinf_flag(3, 4);
    sub_887A0(v51, v45 == 0 ? 32 : 64, a1 + 328, v46, v47, v48, v49, v51);
  }
  idati = get_idati();
  sub_57E60(&v69, idati);
  sub_9EC40((unsigned int)v71, a1, v49, (_DWORD)a2, (unsigned int)&v69, v58, (__int64)v50, a3, a4, 0, 0);
  v64 = 0;
  v66 = &v64;
  v18 = _mm_loadh_ps((const double *)&v58);
  v67 = &v64;
  v65 = nullptr;
  *(__m128 *)v63 = v18;
  v59[0] = (void (__fastcall **)(_QWORD))&off_C9550;
  v68 = 0;
  v19 = (void (__fastcall **)(_QWORD))sub_84980(v59);
  v20 = *(_BYTE *)(a1 + 297);
  v59[1] = v19;
  sub_A29F0((unsigned int)v71, (unsigned int)v59, v20 & 1, v21, v22, v23, v49, (_DWORD)v50, (__int64)&v69);
  if ( (*(_BYTE *)(a1 + 296) & 8) != 0 )
  {
    v60 = off_C7638;
    LODWORD(v61) = 0;
    *((_QWORD *)&v61 + 1) = 0;
    v62 = v63;
    sub_98F80(v71, &v60, 8);
  }
  if ( a2[17] )
  {
    sub_1D740((__int64)"Some sections require relocation; this is currently unsupported.\n");
    v12 = 0;
  }
  else if ( !(unsigned int)sub_24190(a1, v71, (__int64)v63, v59) )
  {
    v24 = (_QWORD *)(a1 + 120);
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    v26 = src;
    if ( *(_QWORD *)(v25 + 8) )
      v26 = *(const char **)v25;
    sub_22960(v24, a5, (__int64)v26);
  }
  sub_14270(v65);
  sub_83B90(v71);
  sub_57F10(v52);
  return v12;
}
