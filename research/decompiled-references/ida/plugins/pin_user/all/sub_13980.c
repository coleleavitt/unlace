__int64 __fastcall sub_13980(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rbx
  int v8; // ebx
  size_t v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  size_t v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r12
  const char *v16; // r8
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r12
  size_t v25; // r12
  size_t v26; // r9
  __int64 v27; // r8
  size_t v28; // r10
  __int64 v29; // rsi
  int v30; // ebp
  const char *v31; // rbp
  size_t v32; // r12
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // r8
  unsigned __int64 v40; // rbx
  size_t v41; // r8
  __int64 v42; // r12
  size_t v43; // r9
  __int64 v44; // rsi
  void *v45; // rdi
  size_t v46; // rdx
  int v47; // [rsp+0h] [rbp-5518h]
  __int64 v48; // [rsp+0h] [rbp-5518h]
  size_t v49; // [rsp+0h] [rbp-5518h]
  __int64 v50; // [rsp+0h] [rbp-5518h]
  size_t v51; // [rsp+0h] [rbp-5518h]
  size_t v52; // [rsp+0h] [rbp-5518h]
  __int64 v53; // [rsp+8h] [rbp-5510h]
  const char *v54; // [rsp+8h] [rbp-5510h]
  size_t v55; // [rsp+8h] [rbp-5510h]
  size_t v56; // [rsp+8h] [rbp-5510h]
  __pid_t v57; // [rsp+18h] [rbp-5500h]
  int v58; // [rsp+1Ch] [rbp-54FCh]
  __int64 v59; // [rsp+20h] [rbp-54F8h]
  __int64 v60; // [rsp+20h] [rbp-54F8h]
  size_t v61; // [rsp+28h] [rbp-54F0h]
  void *src; // [rsp+30h] [rbp-54E8h]
  size_t v63; // [rsp+38h] [rbp-54E0h]
  unsigned int v64; // [rsp+50h] [rbp-54C8h] BYREF
  void *dest; // [rsp+58h] [rbp-54C0h]
  __int128 v66; // [rsp+60h] [rbp-54B8h]
  int v67; // [rsp+70h] [rbp-54A8h]
  __int64 v68; // [rsp+78h] [rbp-54A0h]
  __int128 v69; // [rsp+80h] [rbp-5498h]
  char nptr[8228]; // [rsp+94h] [rbp-5484h] BYREF
  __int64 v71; // [rsp+20B8h] [rbp-3460h]
  int v72; // [rsp+20C4h] [rbp-3454h]
  char s[5128]; // [rsp+40D0h] [rbp-1448h] BYREF
  unsigned __int64 v74; // [rsp+54D8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v57 = getpid();
  v4 = *a2;
  if ( *a2 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + (i << 6));
        if ( v7[5] )
        {
          v7[6] = 0;
          qfree();
        }
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        v4 = *a2;
      }
    }
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  v71 = 0;
  v72 = 0;
  v8 = qfindfirst();
  if ( !v8 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(nptr[0] - 48) > 9u )
        goto LABEL_44;
      dest = nullptr;
      v66 = 0;
      v68 = 0;
      v69 = 0;
      v64 = strtol(nptr, nullptr, 10);
      if ( v57 == v64
        || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *, __int64))(*(_QWORD *)a1 + 624LL))(
              a1,
              v64,
              s,
              1024) )
      {
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree();
        }
        if ( dest )
        {
          *(_QWORD *)&v66 = 0;
          qfree();
        }
        goto LABEL_44;
      }
      v9 = strlen(s);
      v12 = v9;
      if ( v9 )
      {
        v45 = dest;
        v46 = v9 + 1;
        if ( *((_QWORD *)&v66 + 1) < v9 + 1 )
        {
          v55 = v9;
          v51 = v9 + 1;
          dest = (void *)qvector_reserve();
          v12 = v55;
          v45 = dest;
          v46 = v51;
        }
        *(_QWORD *)&v66 = v46;
        v49 = v12;
        memmove(v45, s, v12);
        v12 = v49;
        *((_BYTE *)dest + v49) = 0;
      }
      else
      {
        *(_QWORD *)&v66 = 0;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, size_t))(*(_QWORD *)a1 + 632LL))(
              a1,
              v64,
              v10,
              v11,
              v12);
      v67 = v13;
      if ( v13 == 4 )
        break;
      if ( v13 == 8 )
      {
        v14 = 5;
        v15 = 4;
        v16 = "[64]";
        goto LABEL_19;
      }
      v17 = v68;
      v14 = 4;
      v15 = 3;
      v16 = "[x]";
      if ( *((_QWORD *)&v69 + 1) < 4u )
      {
LABEL_48:
        v54 = v16;
        v48 = v14;
        v68 = qvector_reserve();
        v16 = v54;
        v17 = v68;
        v14 = v48;
      }
LABEL_20:
      *(_QWORD *)&v69 = v14;
      v18 = 0;
      do
      {
        v19 = v18++;
        *(_BYTE *)(v17 + v19) = v16[v19];
      }
      while ( v18 < (unsigned int)v15 );
      *(_BYTE *)(v68 + v15) = 0;
      qsnprintf();
      if ( !qfopen() || (v20 = qfread(), (v58 = v20) == 0) )
      {
        v36 = v69;
        if ( (_QWORD)v69 )
        {
          v38 = v69 + 1;
          v39 = v69;
          v37 = v68;
          v36 = v69 - 1;
          if ( *((_QWORD *)&v69 + 1) >= (unsigned __int64)(v69 + 1) )
            goto LABEL_51;
        }
        else
        {
          v37 = v68;
          v38 = 2;
          v39 = 1;
          if ( *((_QWORD *)&v69 + 1) >= 2u )
          {
LABEL_51:
            *(_QWORD *)&v69 = v38;
            *(_BYTE *)(v37 + v39) = 0;
            *(_BYTE *)(v68 + v36) = 32;
            v40 = v66;
            if ( (_QWORD)v66 )
            {
              v41 = v66 - 1;
              if ( (_QWORD)v66 != 1 )
              {
                v42 = v69;
                v43 = v66 - 1;
                if ( (_QWORD)v69 )
                {
                  v42 = v69 - 1;
                  v43 = v41 + v69 - 1;
                  v40 = v66 + v69 - 1;
                }
                v44 = v68;
                if ( *((_QWORD *)&v69 + 1) < v40 )
                {
                  v52 = v66 - 1;
                  v56 = v43;
                  v68 = qvector_reserve();
                  v43 = v56;
                  v44 = v68;
                  v41 = v52;
                }
                *(_QWORD *)&v69 = v40;
                *(_BYTE *)(v44 + v43) = 0;
                memcpy((void *)(v42 + v68), dest, v41);
              }
            }
            goto LABEL_58;
          }
        }
        v50 = v39;
        v68 = qvector_reserve();
        v39 = v50;
        v37 = v68;
        goto LABEL_51;
      }
      v47 = v20;
      s[v20 + 1024] = 0;
      qfclose();
      if ( v47 > 0 )
      {
        do
        {
          v31 = &s[v8 + 1024];
          v32 = strlen(v31);
          src = (void *)qvector_reserve();
          v63 = v32 + 1;
          memmove(src, v31, v32);
          *((_BYTE *)src + v32) = 0;
          quote_cmdline_arg();
          v24 = v69;
          if ( (_QWORD)v69 )
          {
            v21 = v69 + 1;
            v22 = v69;
            v23 = v68;
            v24 = v69 - 1;
            if ( *((_QWORD *)&v69 + 1) >= (unsigned __int64)(v69 + 1) )
              goto LABEL_27;
          }
          else
          {
            v23 = v68;
            v21 = 2;
            v22 = 1;
            if ( *((_QWORD *)&v69 + 1) >= 2u )
              goto LABEL_27;
          }
          v59 = v22;
          v53 = v21;
          v68 = qvector_reserve();
          v22 = v59;
          v23 = v68;
          v21 = v53;
LABEL_27:
          *(_QWORD *)&v69 = v21;
          *(_BYTE *)(v23 + v22) = 0;
          *(_BYTE *)(v68 + v24) = 32;
          v25 = v63;
          if ( v63 )
          {
            v26 = v63 - 1;
            if ( v63 != 1 )
            {
              v27 = v69;
              v28 = v63 - 1;
              if ( (_QWORD)v69 )
              {
                v27 = v69 - 1;
                v28 = v26 + v69 - 1;
                v25 = v63 + v69 - 1;
              }
              v29 = v68;
              if ( *((_QWORD *)&v69 + 1) < v25 )
              {
                v61 = v28;
                v60 = v27;
                v68 = qvector_reserve();
                v28 = v61;
                v29 = v68;
                v27 = v60;
                v26 = v63 - 1;
              }
              *(_QWORD *)&v69 = v25;
              *(_BYTE *)(v29 + v28) = 0;
              memcpy((void *)(v27 + v68), src, v26);
            }
          }
          v30 = v8 + strlen(v31) + 1;
          v8 = v30;
          if ( src )
            qfree();
        }
        while ( v58 > v30 );
      }
LABEL_58:
      sub_136C0((__int64)a2, (__int64)&v64);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      if ( dest )
      {
        *(_QWORD *)&v66 = 0;
        qfree();
        v33 = qfindnext();
        goto LABEL_45;
      }
LABEL_44:
      v33 = qfindnext();
LABEL_45:
      v8 = v33;
      if ( v33 )
        goto LABEL_46;
    }
    v14 = 5;
    v15 = 4;
    v16 = "[32]";
LABEL_19:
    v17 = v68;
    if ( *((_QWORD *)&v69 + 1) < 5u )
      goto LABEL_48;
    goto LABEL_20;
  }
LABEL_46:
  v34 = *((_DWORD *)a2 + 2);
  qfindclose();
  return v34;
}

