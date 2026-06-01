__int64 __fastcall sub_17210(__int64 a1, const char *a2, __int64 a3, const char *a4, __int64 *a5)
{
  const char *v6; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  size_t v10; // rbp
  const char *v11; // rbp
  __int64 plugin_instance; // rax
  __int64 v13; // rbp
  char v14; // r15
  __int64 v15; // rax
  __int64 v16; // r12
  int v17; // ebx
  unsigned int v18; // ebx
  size_t v20; // rax
  size_t v21; // r15
  size_t v22; // rbp
  char *v23; // rdi
  size_t v24; // r12
  char *v25; // rsi
  const char *i; // rax
  size_t v27; // rax
  size_t v28; // r15
  size_t v29; // r12
  _BYTE *v30; // rax
  _BYTE *v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // rbp
  _BYTE *v34; // rdi
  const char *v35; // rbp
  __int64 v36; // rdx
  char *v37; // rsi
  char *v38; // r12
  __int64 v39; // r8
  __int64 v40; // rsi
  double v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  size_t v46; // rax
  size_t v47; // r8
  size_t v48; // r9
  size_t v49; // r10
  __int64 v50; // rsi
  double v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r15
  const void **v54; // r12
  double v55; // rdx
  size_t v56; // r10
  size_t v57; // r9
  size_t v58; // r11
  __int64 v59; // rsi
  __int64 v60; // r12
  double v61; // rdx
  char *v62; // rdx
  __int64 v63; // r12
  __int64 v64; // rbp
  char *v65; // rax
  const char *v66; // rbp
  __int64 v67; // rax
  char *v68; // rbp
  unsigned int v69; // edi
  unsigned int v70; // [rsp+4h] [rbp-174h]
  double v72[2]; // [rsp+18h] [rbp-160h] BYREF
  __int64 v73; // [rsp+28h] [rbp-150h]
  size_t v74; // [rsp+30h] [rbp-148h]
  size_t v75; // [rsp+38h] [rbp-140h]
  void *v76; // [rsp+50h] [rbp-128h] BYREF
  __int128 v77; // [rsp+58h] [rbp-120h]
  char *v78; // [rsp+70h] [rbp-108h] BYREF
  __int128 v79; // [rsp+78h] [rbp-100h]
  void *v80; // [rsp+90h] [rbp-E8h]
  size_t n[3]; // [rsp+98h] [rbp-E0h]
  void *src; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v83; // [rsp+B8h] [rbp-C0h]
  char *v84; // [rsp+D0h] [rbp-A8h]
  __int128 v85; // [rsp+D8h] [rbp-A0h]
  _BYTE *v86; // [rsp+F0h] [rbp-88h]
  __int128 v87; // [rsp+F8h] [rbp-80h]
  __int64 *v88; // [rsp+110h] [rbp-68h] BYREF
  __int128 v89; // [rsp+118h] [rbp-60h]
  __int64 v90; // [rsp+128h] [rbp-50h]
  unsigned __int64 v91; // [rsp+138h] [rbp-40h]

  v6 = a2;
  v91 = __readfsqword(0x28u);
  v70 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v8 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 560))("__main__");
  v9 = v8;
  if ( v8 )
    v9 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 696))(v8);
  v76 = nullptr;
  v77 = 0;
  if ( a4 )
  {
    v10 = strlen(a4);
    a2 = a4;
    v76 = (void *)qvector_reserve();
    *(_QWORD *)&v77 = v10 + 1;
    memmove(v76, a4, v10);
    *((_BYTE *)v76 + v10) = 0;
  }
  v11 = sub_6F90((__int64 *)&v76);
  plugin_instance = get_plugin_instance(&v76, a2);
  v13 = (*(__int64 (__fastcall **)(const char *, const char *, __int64, _QWORD, __int64))(plugin_instance + 976))(
          v11,
          "<string>",
          258,
          0,
          0xFFFFFFFFLL);
  v14 = 0;
  if ( !v13 )
  {
    sub_E310(a5, 1u);
    v78 = nullptr;
    v80 = nullptr;
    v79 = 0;
    *(_OWORD *)n = 0;
    if ( a4 )
    {
      v20 = strlen(a4);
      v21 = v20 + 1;
      v22 = v20;
      v80 = (void *)qvector_reserve();
      n[0] = v21;
      memmove(v80, a4, v22);
      *((_BYTE *)v80 + v22) = 0;
    }
    v83 = 0;
    *(_QWORD *)&v72[1] = &src;
    src = nullptr;
    src = (void *)qvector_reserve();
    v23 = (char *)src + 24 * v83;
    *(_QWORD *)v23 = 0;
    *(_OWORD *)(v23 + 8) = 0;
    *(_QWORD *)&v83 = v83 + 1;
    sub_14130((__int64 *)v23);
    v24 = n[0];
    v84 = nullptr;
    v85 = 0;
    if ( n[0] )
    {
      v84 = (char *)qalloc_or_throw();
      *((_QWORD *)&v85 + 1) = v24;
      memcpy(v84, v80, v24);
      *(_QWORD *)&v85 = v24;
      v68 = v84;
      if ( v24 != 1 )
      {
        do
        {
          v69 = v68[v24 - 2];
          if ( v69 > 0x7F || !isspace(v69) )
            break;
          if ( (__int64)(v24 - 1) > 1 )
          {
            if ( *((_QWORD *)&v85 + 1) < v24 - 1 )
            {
              v84 = (char *)qvector_reserve();
              v68 = v84;
            }
            *(_QWORD *)&v85 = v24 - 1;
            v68[v24 - 2] = 0;
            v68 = v84;
          }
          else
          {
            if ( v68 )
            {
              *(_QWORD *)&v85 = 0;
              qfree();
              v84 = nullptr;
              *((_QWORD *)&v85 + 1) = 0;
            }
            v68 = nullptr;
          }
          v24 = v85;
        }
        while ( (unsigned __int64)v85 > 1 );
      }
    }
    v25 = "\n";
    for ( i = (const char *)qstrtok(); ; i = (const char *)qstrtok() )
    {
      v35 = i;
      if ( !i )
      {
        v53 = 0;
        *(_QWORD *)&v79 = 0;
        if ( (_QWORD)v83 )
        {
          while ( 1 )
          {
            v54 = (const void **)((char *)src + v53);
            v55 = *(double *)((char *)src + v53 + 8);
            if ( v55 != 0.0 )
            {
              v56 = *(_QWORD *)&v55 - 1LL;
              if ( *(_QWORD *)&v55 != 1 )
              {
                v57 = v79;
                v58 = *(_QWORD *)&v55 - 1LL;
                if ( (_QWORD)v79 )
                {
                  v57 = v79 - 1;
                  v58 = v56 + v79 - 1;
                  *(_QWORD *)&v55 += v79 - 1;
                }
                v59 = (__int64)v78;
                if ( *((_QWORD *)&v79 + 1) < *(_QWORD *)&v55 )
                {
                  v75 = v57;
                  v74 = v56;
                  v73 = v58;
                  v72[0] = v55;
                  v78 = (char *)qvector_reserve();
                  v57 = v75;
                  v59 = (__int64)v78;
                  v56 = v74;
                  v58 = v73;
                  v55 = v72[0];
                }
                *(double *)&v79 = v55;
                *(_BYTE *)(v59 + v58) = 0;
                v25 = (char *)*v54;
                memcpy(&v78[v57], *v54, v56);
              }
            }
            if ( (unsigned __int64)++v35 >= (unsigned __int64)v83 )
              break;
            v60 = v79;
            *(_QWORD *)&v61 = 2;
            if ( (_QWORD)v79 )
            {
              *(_QWORD *)&v61 = v79 + 1;
              v60 = v79 - 1;
            }
            v25 = v78;
            if ( *((_QWORD *)&v79 + 1) < *(_QWORD *)&v61 )
            {
              v72[0] = v61;
              v78 = (char *)qvector_reserve();
              v61 = v72[0];
              v25 = v78;
            }
            *(double *)&v79 = v61;
            v53 += 24;
            v25[v60] = 10;
            v78[v60 + 1] = 0;
          }
        }
        if ( v84 )
        {
          *(_QWORD *)&v85 = 0;
          qfree();
        }
        v62 = (char *)src;
        if ( src )
        {
          v63 = v83;
          if ( (_QWORD)v83 )
          {
            v64 = 0;
            do
            {
              v65 = &v62[24 * v64];
              if ( *(_QWORD *)v65 )
              {
                *((_QWORD *)v65 + 1) = 0;
                qfree();
                v62 = (char *)src;
              }
              ++v64;
            }
            while ( v63 != v64 );
          }
          *(_QWORD *)&v83 = 0;
          qfree();
        }
        if ( v80 )
        {
          n[0] = 0;
          qfree();
        }
        sub_6F90((__int64 *)&v78);
        v66 = ::src;
        if ( (_QWORD)v79 )
          v66 = v78;
        v67 = get_plugin_instance(&v78, v25);
        v13 = (*(__int64 (__fastcall **)(const char *, const char *, __int64, _QWORD, __int64))(v67 + 976))(
                v66,
                "<string>",
                257,
                0,
                0xFFFFFFFFLL);
        if ( v13 )
        {
          if ( v78 )
          {
            *(_QWORD *)&v79 = 0;
            qfree();
          }
          v14 = 1;
          goto LABEL_6;
        }
        sub_E310(a5, 1u);
        if ( v78 )
        {
          *(_QWORD *)&v79 = 0;
          v18 = 0;
          qfree();
          goto LABEL_10;
        }
LABEL_14:
        v18 = 0;
        goto LABEL_10;
      }
      if ( strncmp(i, "from __future__ import", 0x16u) )
        break;
      v86 = nullptr;
      v87 = 0;
      v27 = strlen(v35);
      v28 = v27 + 1;
      v29 = v27;
      v30 = (_BYTE *)qvector_reserve();
      *(_QWORD *)&v87 = v28;
      v86 = v30;
      memmove(v30, v35, v29);
      v86[v29] = 0;
      v31 = v86;
      v86 = nullptr;
      v72[0] = *((double *)&v87 + 1);
      v32 = v83;
      v33 = src;
      v87 = 0;
      if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)(v83 + 1) )
      {
        src = (void *)qvector_reserve();
        v33 = src;
        v32 = v83;
      }
      memmove(v33 + 3, v33, 24 * v32);
      *v33 = v31;
      v34 = v86;
      *(__m128 *)(v33 + 1) = _mm_loadh_ps(v72);
      *(_QWORD *)&v83 = v83 + 1;
      if ( v34 )
      {
        *(_QWORD *)&v87 = 0;
        qfree();
      }
LABEL_23:
      v25 = "\n";
    }
    v36 = v83;
    v37 = (char *)src;
    if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)(v83 + 1) )
    {
      src = (void *)qvector_reserve();
      v36 = v83;
      v37 = (char *)src;
    }
    v38 = &v37[24 * v36];
    *(_QWORD *)v38 = 0;
    *(_OWORD *)(v38 + 8) = 0;
    *(_QWORD *)&v83 = v83 + 1;
    v39 = *((_QWORD *)v38 + 1);
    v40 = *(_QWORD *)v38;
    if ( v39 )
    {
      *(_QWORD *)&v41 = v39 + 4;
      if ( v39 == -4 )
      {
        v45 = -1;
        v44 = -5;
        goto LABEL_31;
      }
      v42 = v39 + 3;
      --v39;
    }
    else
    {
      *(_QWORD *)&v41 = 5;
      v42 = 4;
    }
    v74 = v42;
    v73 = v39;
    v72[0] = v41;
    v43 = qvector_reserve();
    *(_QWORD *)v38 = v43;
    v41 = v72[0];
    v40 = v43;
    v44 = v73;
    v45 = v74;
LABEL_31:
    *((double *)v38 + 1) = v41;
    *(_BYTE *)(v40 + v45) = 0;
    *(_DWORD *)(*(_QWORD *)v38 + v44) = 538976288;
    v46 = strlen(v35);
    v47 = *((_QWORD *)v38 + 1);
    v48 = v46;
    v49 = v46;
    if ( v47 )
    {
      --v47;
      v49 = v46 + v47;
    }
    v50 = *(_QWORD *)v38;
    *(_QWORD *)&v51 = v49 + 1;
    if ( *((_QWORD *)v38 + 2) < v49 + 1 )
    {
      v75 = v46;
      v74 = v47;
      v73 = v49;
      *(_QWORD *)&v72[0] = v49 + 1;
      v52 = qvector_reserve();
      *(_QWORD *)v38 = v52;
      v48 = v75;
      v50 = v52;
      v47 = v74;
      v49 = v73;
      v51 = v72[0];
    }
    *((double *)v38 + 1) = v51;
    *(_BYTE *)(v50 + v49) = 0;
    memmove((void *)(v47 + *(_QWORD *)v38), v35, v48);
    goto LABEL_23;
  }
LABEL_6:
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 528))(v13, v9);
  v16 = v15;
  if ( !v15
    || (v17 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(qword_24798 + 392))(v9, v6, v15),
        (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v16),
        v17) )
  {
    sub_E310(a5, 1u);
    (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v13);
    goto LABEL_14;
  }
  v18 = 1;
  if ( v14 )
  {
    LOBYTE(v88) = 2;
    v90 = 0;
    v89 = 0;
    v18 = sub_16D80(a1, &v88, v6, 0, 0, a5);
    free_idcv();
  }
LABEL_10:
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  (*(void (__fastcall **)(_QWORD))(qword_24798 + 552))(v70);
  return v18;
}

