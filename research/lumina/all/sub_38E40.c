__int64 __fastcall sub_38E40(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r10
  _QWORD *v4; // rbx
  bool v5; // cc
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  size_t v10; // r12
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // r10
  bool v16; // zf
  const char *v17; // r8
  const char *v18; // rcx
  const char *v19; // rdx
  unsigned int v20; // ebx
  __int64 v22; // rdi
  __int64 v23; // r10
  bool v24; // al
  const void *v25; // r13
  void *v26; // rax
  int v27; // eax
  _WORD *v28; // rax
  __int64 v29; // rdi
  char *v30; // rdx
  __int64 v31; // r12
  __int64 v32; // r13
  char *v33; // rax
  void *v34; // rdi
  __int64 v35; // r10
  __m128i v36; // xmm1
  void *v37; // rdi
  void *v38; // r13
  __m128i v39; // xmm1
  void *v40; // rdi
  _DWORD *v41; // rdx
  __int64 v42; // rdi
  const char *v43; // rsi
  char *v44; // rdi
  __int64 v45; // r13
  __int64 v46; // r12
  char *v47; // rbx
  void *v48; // rdi
  char *v49; // rsi
  __int64 v50; // r15
  __int64 i; // r14
  char *v52; // rax
  void *v53; // rdi
  void *v54; // rdi
  void *v55; // rdi
  char *v56; // rdx
  __int64 v57; // r12
  __int64 v58; // r14
  __int64 v59; // r13
  char *v60; // rax
  void *v61; // rdi
  __int64 v62; // rsi
  void *v63; // rdi
  __int64 v64; // [rsp+10h] [rbp-1F0h]
  _QWORD *v65; // [rsp+18h] [rbp-1E8h]
  __int64 v66; // [rsp+20h] [rbp-1E0h]
  __int64 v67; // [rsp+28h] [rbp-1D8h]
  __int64 v68; // [rsp+28h] [rbp-1D8h]
  __int64 v69; // [rsp+28h] [rbp-1D8h]
  __int64 v70; // [rsp+28h] [rbp-1D8h]
  __int64 v71; // [rsp+28h] [rbp-1D8h]
  __m128i v72; // [rsp+30h] [rbp-1D0h] BYREF
  __int64 v73; // [rsp+40h] [rbp-1C0h]
  __int64 v74; // [rsp+48h] [rbp-1B8h]
  void *v75; // [rsp+50h] [rbp-1B0h] BYREF
  __int128 v76; // [rsp+58h] [rbp-1A8h]
  void *v77; // [rsp+70h] [rbp-190h] BYREF
  __int128 v78; // [rsp+78h] [rbp-188h]
  void *v79; // [rsp+90h] [rbp-170h] BYREF
  __int128 v80; // [rsp+98h] [rbp-168h]
  void *v81; // [rsp+B0h] [rbp-150h] BYREF
  __m128i v82; // [rsp+B8h] [rbp-148h] BYREF
  void *ptr; // [rsp+C8h] [rbp-138h]
  __int128 v84; // [rsp+D0h] [rbp-130h]
  char v85; // [rsp+E0h] [rbp-120h] BYREF
  _BYTE v86[105]; // [rsp+15Fh] [rbp-A1h] BYREF
  unsigned __int64 v87; // [rsp+1C8h] [rbp-38h]

  v3 = a1;
  v4 = a2;
  v5 = *(_DWORD *)(a3 + 12) <= 2;
  v87 = __readfsqword(0x28u);
  v6 = a3;
  v76 = 0;
  v75 = nullptr;
  if ( v5 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 304) + 260LL) != 1 )
    {
      v74 = a1;
      sub_2DC20(a2 + 2, "Lumina protocol version not compatible with server");
LABEL_14:
      v15 = v74;
      goto LABEL_15;
    }
    v7 = a1 + 448;
    if ( v7 == a3 + 48 )
      goto LABEL_39;
  }
  else
  {
    v7 = a1 + 448;
    if ( v7 == a3 + 48 )
      goto LABEL_7;
  }
  v8 = *(_QWORD *)(a3 + 56);
  v9 = v8;
  if ( v8 && (v10 = v8 - 1, v8 != 1) )
  {
    v25 = *(const void **)(a3 + 48);
    v26 = *(void **)(v3 + 448);
    if ( *(_QWORD *)(v3 + 464) < v9 )
    {
      v62 = *(_QWORD *)(v3 + 448);
      v74 = v3;
      v26 = (void *)sub_1987B0(v7, v62, v9, 1);
      v3 = v74;
      *(_QWORD *)(v74 + 448) = v26;
    }
    *(_QWORD *)(v3 + 456) = v9;
    v74 = v3;
    memmove(v26, v25, v10);
    v3 = v74;
    *(_BYTE *)(*(_QWORD *)(v74 + 448) + v9 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(v3 + 456) = 0;
  }
LABEL_7:
  v11 = *(_DWORD *)(*(_QWORD *)(v3 + 304) + 260LL);
  if ( v11 != 1 )
    goto LABEL_8;
LABEL_39:
  v74 = v3;
  v77 = nullptr;
  v72.m128i_i64[0] = (__int64)(v4 + 2);
  v73 = v6 + 16;
  v78 = 0;
  v27 = sub_5D0A0(
          (int)v6 + 16,
          (unsigned int)&v77,
          (unsigned int)&v75,
          (unsigned int)&v85,
          0,
          (int)v4 + 16,
          (__int64)&unk_1B7C00,
          (__int64)&unk_1B7B60,
          1);
  v15 = v74;
  if ( !v27 )
  {
    if ( !(_QWORD)v78 )
    {
LABEL_106:
      v74 = v15;
      sub_2DC20((__int64 *)v72.m128i_i64[0], "Invalid license ID");
      goto LABEL_107;
    }
    v28 = v77;
    v29 = 0;
    while ( *(_DWORD *)v28 != *(_DWORD *)(v6 + 40) || v28[2] != *(_WORD *)(v6 + 44) )
    {
      v28 += 32;
      if ( ++v29 == (_QWORD)v78 )
        goto LABEL_106;
    }
    v74 = v29;
LABEL_46:
    if ( v74 != -1 )
    {
      v30 = (char *)v77;
      if ( v77 )
      {
        v31 = v78;
        if ( (_QWORD)v78 )
        {
          v32 = v15;
          v74 = 0;
          do
          {
            v33 = &v30[64 * v74];
            v34 = *((void **)v33 + 5);
            if ( v34 )
            {
              *((_QWORD *)v33 + 6) = 0;
              j__free(v34);
              v30 = (char *)v77;
            }
            ++v74;
          }
          while ( v31 != v74 );
          v15 = v32;
        }
        v74 = v15;
        *(_QWORD *)&v78 = 0;
        j__free(v30);
        v15 = v74;
      }
      v74 = v15;
      v81 = nullptr;
      v82 = 0;
      sub_299F0((char **)&v81);
      v35 = v74;
      v36 = _mm_loadu_si128(&v82);
      v82 = 0;
      v37 = *(void **)(v74 + 376);
      v38 = v81;
      v81 = nullptr;
      if ( v37 )
      {
        *(_QWORD *)(v74 + 384) = 0;
        v74 = v35;
        v72 = v36;
        j__free(v37);
        v35 = v74;
        v39 = _mm_load_si128(&v72);
        v40 = v81;
        *(_QWORD *)(v74 + 376) = v38;
        *(__m128i *)(v35 + 384) = v39;
        if ( v40 )
        {
          v82.m128i_i64[0] = 0;
          j__free(v40);
          v35 = v74;
        }
      }
      else
      {
        *(_QWORD *)(v74 + 376) = v38;
        *(__m128i *)(v35 + 384) = v36;
      }
      v74 = v35;
      sub_2DCF0(v35 + 400, (__int64)&v75);
      sub_2DC20((__int64 *)(v74 + 424), v86);
      v3 = v74;
      v11 = *(_DWORD *)(*(_QWORD *)(v74 + 304) + 260LL);
LABEL_8:
      if ( v11 != 4 )
      {
        v74 = v3;
        sub_31930((__int64)&v81, "users");
        v12 = sub_33A40(v74 + 368);
        v3 = v74;
        if ( !v12 )
        {
          if ( v81 )
          {
            v82.m128i_i64[0] = 0;
            j__free(v81);
            v3 = v74;
          }
          v13 = *(_QWORD *)(v3 + 312);
          *(_DWORD *)(v3 + 488) |= 3u;
          v74 = v3;
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v13 + 16LL))(
                  v13,
                  v4,
                  v3 + 376,
                  v6 + 72);
          goto LABEL_30;
        }
        if ( v81 )
        {
          v82.m128i_i64[0] = 0;
          j__free(v81);
          v3 = v74;
        }
      }
      v22 = *(_QWORD *)(v3 + 312);
      v74 = v3;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v22 + 48LL))(
              v22,
              v4,
              v3 + 376,
              v6);
LABEL_30:
      v23 = v74;
      *(_DWORD *)(v74 + 496) = v14;
      v74 = v23;
      v24 = sub_38BA0(v4, v23);
      v15 = v74;
      if ( !v24 )
        goto LABEL_15;
      if ( v4[3] > 1u )
      {
LABEL_32:
        *(_BYTE *)(v15 + 261) = 0;
        v20 = 0;
        goto LABEL_24;
      }
      sub_2DC20(v4 + 2, "Operation failed");
      goto LABEL_14;
    }
    goto LABEL_106;
  }
  v79 = nullptr;
  v81 = nullptr;
  ptr = nullptr;
  v80 = 0;
  v82 = 0;
  v84 = 0;
  LODWORD(v73) = sub_4AF00((char)&v79);
  v15 = v74;
  if ( (_DWORD)v73 )
  {
    v74 = -1;
  }
  else
  {
    if ( v4[3] > 1u )
    {
      sub_2F0E0(v74, (__int64)"Warning: %s\n", (const char *)v4[2]);
      v63 = (void *)v4[2];
      v15 = v74;
      if ( v63 )
      {
        v4[3] = 0;
        j__free(v63);
        v4[2] = 0;
        v15 = v74;
        v4[4] = 0;
      }
    }
    if ( (_QWORD)v80 )
    {
      v41 = v79;
      v42 = 0;
      while ( (unsigned int)(v41[3] - 1) > 1
           || *v41 != *(_DWORD *)(v6 + 40)
           || *((_WORD *)v41 + 2) != *(_WORD *)(v6 + 44) )
      {
        v41 += 38;
        if ( ++v42 == (_QWORD)v80 )
          goto LABEL_108;
      }
      v74 = v42;
    }
    else
    {
LABEL_108:
      v74 = -1;
    }
    v67 = v15;
    sub_2DCF0((__int64)&v75, (__int64)&v81);
    v43 = s1;
    if ( (_QWORD)v84 )
      v43 = (const char *)ptr;
    sub_1998A0(v86, v43, 64);
    v15 = v67;
  }
  if ( ptr )
  {
    v68 = v15;
    *(_QWORD *)&v84 = 0;
    j__free(ptr);
    v15 = v68;
  }
  if ( v81 )
  {
    v69 = v15;
    v82.m128i_i64[0] = 0;
    j__free(v81);
    v15 = v69;
  }
  v44 = (char *)v79;
  if ( v79 )
  {
    if ( (_QWORD)v80 )
    {
      v66 = v15;
      v45 = 0;
      v46 = 0;
      v65 = v4;
      v70 = v74;
      v74 = v80;
      v64 = v6;
      do
      {
        v47 = &v44[v45];
        v48 = *(void **)&v44[v45 + 128];
        if ( v48 )
        {
          *((_QWORD *)v47 + 17) = 0;
          j__free(v48);
        }
        v49 = *((char **)v47 + 10);
        if ( v49 )
        {
          v50 = *((_QWORD *)v47 + 11);
          if ( v50 )
          {
            for ( i = 0; i != v50; ++i )
            {
              v52 = &v49[24 * i];
              v53 = *(void **)v52;
              if ( *(_QWORD *)v52 )
              {
                *((_QWORD *)v52 + 1) = 0;
                j__free(v53);
                v49 = *((char **)v47 + 10);
              }
            }
          }
          *((_QWORD *)v47 + 11) = 0;
          j__free(v49);
        }
        v54 = *((void **)v47 + 7);
        if ( v54 )
        {
          *((_QWORD *)v47 + 8) = 0;
          j__free(v54);
        }
        v55 = *((void **)v47 + 4);
        if ( v55 )
        {
          *((_QWORD *)v47 + 5) = 0;
          j__free(v55);
        }
        v44 = (char *)v79;
        ++v46;
        v45 += 152;
      }
      while ( v74 != v46 );
      v15 = v66;
      v4 = v65;
      v6 = v64;
      v74 = v70;
    }
    v71 = v15;
    *(_QWORD *)&v80 = 0;
    j__free(v44);
    v15 = v71;
  }
  if ( !(_DWORD)v73 )
    goto LABEL_46;
  if ( v4[3] > 1u )
    goto LABEL_96;
  v74 = v15;
  sub_2DC20((__int64 *)v72.m128i_i64[0], "Invalid license");
LABEL_107:
  v15 = v74;
LABEL_96:
  v56 = (char *)v77;
  if ( v77 )
  {
    v57 = v78;
    if ( (_QWORD)v78 )
    {
      v58 = 0;
      v59 = v15;
      do
      {
        v60 = &v56[64 * v58];
        v61 = *((void **)v60 + 5);
        if ( v61 )
        {
          *((_QWORD *)v60 + 6) = 0;
          j__free(v61);
          v56 = (char *)v77;
        }
        ++v58;
      }
      while ( v57 != v58 );
      v15 = v59;
    }
    v74 = v15;
    *(_QWORD *)&v78 = 0;
    j__free(v56);
    v15 = v74;
  }
LABEL_15:
  if ( !*(_DWORD *)(v15 + 496) || v4[3] > 1u )
    goto LABEL_32;
  v16 = *(_QWORD *)(v15 + 432) == 0;
  *(_BYTE *)(v15 + 261) = 1;
  v17 = s1;
  if ( !v16 )
    v17 = *(const char **)(v15 + 424);
  v18 = s1;
  if ( *(_QWORD *)(v15 + 384) )
    v18 = *(const char **)(v15 + 376);
  v19 = s1;
  if ( *(_QWORD *)(v15 + 456) )
    v19 = *(const char **)(v15 + 448);
  v74 = v15;
  sub_2F0E0(v15, (__int64)"User \"%s\" logged in, with license ID \"%s\" (license e-mail: %s)\n", v19, v18, v17);
  v20 = *(unsigned __int8 *)(v74 + 261);
LABEL_24:
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    j__free(v75);
  }
  return v20;
}
