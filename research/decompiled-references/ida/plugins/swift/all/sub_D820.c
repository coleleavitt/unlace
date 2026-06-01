__int64 __fastcall sub_D820(__int64 a1)
{
  bool v1; // zf
  int v3; // edx
  __int16 v4; // ax
  const char *v5; // rsi
  __int64 v6; // rax
  const char *v7; // rdi
  __int64 v8; // rax
  char *v9; // r14
  const char *v10; // rsi
  size_t v11; // rax
  size_t v12; // r13
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ebx
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // r14
  size_t v40; // r9
  __int64 v41; // r8
  size_t v42; // r10
  __int64 v43; // rsi
  __int64 v44; // r14
  __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // rdx
  char v48; // al
  void *v49; // rdi
  size_t v50; // r14
  __int64 v51; // rax
  __int64 v52; // [rsp+0h] [rbp-10B8h]
  size_t v53; // [rsp+0h] [rbp-10B8h]
  __int64 *v54; // [rsp+8h] [rbp-10B0h]
  __int64 v55; // [rsp+10h] [rbp-10A8h]
  size_t v56; // [rsp+10h] [rbp-10A8h]
  __int64 v57; // [rsp+18h] [rbp-10A0h]
  __int16 v58; // [rsp+2Eh] [rbp-108Ah] BYREF
  __int64 v59; // [rsp+30h] [rbp-1088h] BYREF
  __int128 v60; // [rsp+38h] [rbp-1080h]
  const char *v61; // [rsp+50h] [rbp-1068h] BYREF
  __int128 v62; // [rsp+58h] [rbp-1060h]
  char s2[4104]; // [rsp+70h] [rbp-1048h] BYREF
  unsigned __int64 v64; // [rsp+1078h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 244) == 0;
  v64 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v3 = *(_DWORD *)(a1 + 240);
LABEL_3:
    v4 = (v3 & 1) != 0;
    goto LABEL_4;
  }
  *(_BYTE *)(a1 + 244) = 1;
  v48 = sub_CBD0(a1);
  v3 = *(_DWORD *)(a1 + 240);
  if ( (v3 & 2) == 0 )
    goto LABEL_3;
  if ( v48 )
  {
    v3 |= 1u;
    v4 = 1;
  }
  else
  {
    v3 &= ~1u;
    v4 = 0;
  }
  *(_DWORD *)(a1 + 240) = v3;
LABEL_4:
  v5 = s1;
  if ( (v3 & 4) != 0 )
    v4 |= 2u;
  if ( (v3 & 8) != 0 )
    v4 |= 4u;
  if ( (v3 & 0x10) != 0 )
    v4 |= 8u;
  if ( (v3 & 0x20) != 0 )
    v4 |= 0x10u;
  if ( (v3 & 0x40) != 0 )
    v4 |= 0x20u;
  if ( (v3 & 0x80) != 0 )
    v4 |= 0x40u;
  v1 = *(_QWORD *)(a1 + 120) == 0;
  v58 = v4;
  if ( !v1 )
    v5 = *(const char **)(a1 + 112);
  qstrncpy(s2, v5, 4096);
  v59 = 0;
  v54 = (__int64 *)(a1 + 536);
  v6 = *(_QWORD *)(a1 + 544);
  v60 = 0;
  if ( v6 )
  {
    v34 = *(_QWORD *)(a1 + 536);
    v35 = v6 - 1;
    v36 = v34 + 24 * v6;
    if ( v34 == v36 )
    {
      if ( v6 == 1 )
        goto LABEL_19;
    }
    else
    {
      v37 = *(_QWORD *)(a1 + 536);
      do
      {
        v38 = *(_QWORD *)(v37 + 8);
        if ( v38 )
          v35 = v38 + v35 - 1;
        v37 += 24;
      }
      while ( v36 != v37 );
      if ( !v35 )
      {
        do
        {
LABEL_69:
          v44 = v60;
          if ( (unsigned __int64)v60 > 1 )
          {
            v45 = v59;
            v46 = v60 - 1;
            v47 = v60 + 1;
            if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
            {
              v55 = v60 - 1;
              v52 = v60 + 1;
              v59 = qvector_reserve(&v59, v59, v47, 1);
              v46 = v55;
              v45 = v59;
              v47 = v52;
            }
            *(_QWORD *)&v60 = v47;
            *(_BYTE *)(v45 + v44) = 0;
            *(_BYTE *)(v59 + v46) = 59;
          }
          v39 = *(_QWORD *)(v34 + 8);
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v39 != 1 )
            {
              v41 = v60;
              v42 = v39 - 1;
              if ( (_QWORD)v60 )
              {
                v41 = v60 - 1;
                v42 = v40 + v60 - 1;
                v39 += v60 - 1;
              }
              v43 = v59;
              if ( *((_QWORD *)&v60 + 1) < v39 )
              {
                v57 = v41;
                v56 = v40;
                v53 = v42;
                v59 = qvector_reserve(&v59, v59, v39, 1);
                v41 = v57;
                v43 = v59;
                v40 = v56;
                v42 = v53;
              }
              *(_QWORD *)&v60 = v39;
              *(_BYTE *)(v43 + v42) = 0;
              memcpy((void *)(v41 + v59), *(const void **)v34, v40);
            }
          }
          v34 += 24;
        }
        while ( v36 != v34 );
        goto LABEL_19;
      }
    }
    v59 = qvector_reserve(&v59, 0, v35, 1);
    v34 = *(_QWORD *)(a1 + 536);
    v36 = v34 + 24LL * *(_QWORD *)(a1 + 544);
    if ( v36 == v34 )
      goto LABEL_19;
    goto LABEL_69;
  }
  while ( 1 )
  {
LABEL_19:
    if ( !(unsigned int)sub_90A0(
                          (__int64)"Swift Options\n"
                                   "%/<#Use libSwiftDemangle to demangle swift names#~D~emangling enabled:C1>\n"
                                   "<#Show runtime metadata in a nice way#~M~etadata markup:C>\n"
                                   "<#Import enumeration types#Import ~e~nums:C>\n"
                                   "<#Import structure types#Import ~s~tructs:C>\n"
                                   "<#Set variable types based on mangled names#Apply ~v~ariable types:C>\n"
                                   "<#Set function prototypes based on mangled names#Apply ~f~unction types:C>\n"
                                   "<#Group Swift functions into folders corresponding to modules#~G~roup functions:C>>\n"
                                   "<#Path to libSwiftDemangle (defaults to the library that is shipped with IDA)#libSwif"
                                   "tDemangle:f2:0:50::>\n"
                                   "<#List of modules to map types to the C-types#Modules m~a~pping:q::50::>\n",
                          sub_7180,
                          &v58,
                          s2,
                          &v59) )
    {
      v32 = 0;
      goto LABEL_49;
    }
    v7 = s1;
    if ( *(_QWORD *)(a1 + 120) )
      v7 = *(const char **)(a1 + 112);
    if ( !strcmp(v7, s2) )
      break;
    if ( s2[0] )
    {
      v9 = s2;
    }
    else
    {
      v8 = idadir(0);
      qmakepath(src, 4096, v8, "libSwiftDemangle.so", 0);
      v9 = src;
    }
    sub_1BF90(a1 + 136);
    v61 = nullptr;
    v62 = 0;
    if ( (unsigned __int8)sub_1C050(a1 + 136, v9, &v61) )
    {
      v11 = strlen(s2);
      v12 = v11;
      if ( v11 )
      {
        v49 = *(void **)(a1 + 112);
        v50 = v11 + 1;
        if ( *(_QWORD *)(a1 + 128) < v11 + 1 )
        {
          v51 = qvector_reserve(a1 + 112, *(_QWORD *)(a1 + 112), v50, 1);
          *(_QWORD *)(a1 + 112) = v51;
          v49 = (void *)v51;
        }
        *(_QWORD *)(a1 + 120) = v50;
        memmove(v49, s2, v12);
        *(_BYTE *)(*(_QWORD *)(a1 + 112) + v12) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 120) = 0;
      }
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v61);
      }
      break;
    }
    v10 = s1;
    if ( (_QWORD)v62 )
      v10 = v61;
    sub_8FD0((__int64)"WARNING: %s\n", v10);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree(v61);
    }
  }
  v13 = *(_DWORD *)(a1 + 240);
  v14 = v13 & 0xFFFFFFFE;
  v15 = v13 | 1;
  if ( (v58 & 1) != 0 )
    v14 = v15;
  v16 = v14;
  v17 = v14 & 0xFFFFFFF9;
  v18 = v16 & 0xFFFFFFF9 | 4;
  if ( (v58 & 2) != 0 )
    v17 = v18;
  v19 = v17;
  v20 = v17 & 0xFFFFFFF7;
  v21 = v19 | 8;
  if ( (v58 & 4) != 0 )
    v20 = v21;
  v22 = v20;
  v23 = v20 & 0xFFFFFFEF;
  v24 = v22 | 0x10;
  if ( (v58 & 8) != 0 )
    v23 = v24;
  v25 = v23;
  v26 = v23 & 0xFFFFFFDF;
  v27 = v25 | 0x20;
  if ( (v58 & 0x10) != 0 )
    v26 = v27;
  v28 = v26;
  v29 = v26 & 0xFFFFFFBF;
  v30 = v28 | 0x40;
  if ( (v58 & 0x20) != 0 )
    v29 = v30;
  v31 = v29;
  LOBYTE(v29) = v29 & 0x7F;
  LOBYTE(v31) = v31 | 0x80;
  if ( (v58 & 0x40) != 0 )
    v29 = v31;
  *(_DWORD *)(a1 + 240) = v29;
  sub_8D50(&v59, v54, ";", 1);
  sub_B660((_QWORD *)a1);
  v32 = 1;
LABEL_49:
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  return v32;
}

