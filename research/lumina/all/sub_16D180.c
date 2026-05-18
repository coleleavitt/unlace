__int64 __fastcall sub_16D180(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // al
  char *v5; // rdi
  char *v6; // rbx
  const char *v7; // rdx
  char *v8; // rbp
  const char *v9; // r14
  char *v10; // rax
  size_t v11; // r14
  __int64 v12; // r9
  void *v13; // r11
  unsigned __int64 v14; // r10
  char *v15; // rsi
  __int64 v16; // rax
  const char *v17; // rdx
  const char *v18; // rsi
  const char *v19; // rsi
  char *v20; // rbp
  __int64 v21; // r15
  __int64 v22; // r14
  char *v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // rbx
  char *v28; // rdx
  char *v29; // rax
  void *v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r15
  char *v33; // rax
  void *v34; // rdi
  char *v35; // [rsp+0h] [rbp-178h]
  __int64 v36; // [rsp+10h] [rbp-168h]
  unsigned __int64 v40; // [rsp+30h] [rbp-148h]
  void *srca; // [rsp+48h] [rbp-130h]
  void *src; // [rsp+48h] [rbp-130h]
  __int64 v43; // [rsp+50h] [rbp-128h]
  void *v44; // [rsp+50h] [rbp-128h]
  __int64 v45; // [rsp+58h] [rbp-120h]
  void *v46; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v47; // [rsp+88h] [rbp-F0h]
  void *v48; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-D0h]
  void *v50; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v51; // [rsp+C8h] [rbp-B0h]
  void *v52; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v53; // [rsp+E8h] [rbp-90h]
  void *ptr; // [rsp+100h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+108h] [rbp-70h]
  void *v56; // [rsp+120h] [rbp-58h] BYREF
  __int128 v57; // [rsp+128h] [rbp-50h]
  unsigned __int64 v58; // [rsp+138h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  result = sub_16C970(a1, a2, a3, (__int64)"hexvault");
  if ( !(_BYTE)result )
  {
    sub_19F910();
    sub_19F810("hvui");
    v36 = sub_171DE0();
    v46 = nullptr;
    v48 = nullptr;
    v50 = nullptr;
    v47 = 0;
    v49 = 0;
    v51 = 0;
    v4 = sub_1A2230((int)&v50);
    v5 = (char *)v50;
    if ( v4 )
    {
      v35 = (char *)v50 + 24 * v51;
      if ( v35 != v50 )
      {
        v6 = (char *)v50;
        while ( 1 )
        {
          v52 = nullptr;
          v53 = 0;
          sub_299F0((char **)&v52);
          v7 = s1;
          ptr = nullptr;
          *(_OWORD *)n = 0;
          if ( (_QWORD)v53 )
            v7 = (const char *)v52;
          if ( (unsigned __int8)sub_1A1EF0(&ptr, "Password", v7) )
          {
            v57 = 0;
            v56 = nullptr;
            sub_449A0(v6, (__int64 *)&v56, "@", 0);
            v8 = (char *)v56;
            if ( (_QWORD)v57 == 2 )
            {
              if ( *((_QWORD *)v56 + 4) )
              {
                v9 = *((const char **)v56 + 3);
                v10 = strrchr(v9, 95);
                if ( v10 )
                {
                  if ( v10 - v9 != -1 )
                    *v10 = 58;
                }
              }
              if ( v48 )
              {
                *(_QWORD *)&v49 = 0;
                j__free(v48);
                v48 = nullptr;
                *((_QWORD *)&v49 + 1) = 0;
              }
              v11 = n[0];
              if ( n[0] )
              {
                v12 = v49;
                v13 = ptr;
                v14 = v49 + n[0];
                if ( !__CFADD__((_QWORD)v49, n[0]) )
                  goto LABEL_17;
                if ( (unsigned __int64)v49 <= 0x7FFFFFFFFFFFFFFELL )
                {
                  v14 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_17:
                  v15 = (char *)v48;
                  v16 = v49;
                  if ( *((_QWORD *)&v49 + 1) < v14 )
                  {
                    v45 = v49;
                    v44 = ptr;
                    src = (void *)v14;
                    v48 = (void *)sub_1987B0(&v48, v48, v14, 1);
                    v15 = (char *)v48;
                    v12 = v45;
                    v16 = v49;
                    v13 = v44;
                    v14 = (unsigned __int64)src;
                  }
                  v43 = v12;
                  srca = v13;
                  v40 = v14;
                  memset(&v15[v16], 0, v14 - v16);
                  v13 = srca;
                  v12 = v43;
                  *(_QWORD *)&v49 = v40;
                }
                else if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
                {
                  *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
                }
                memcpy((char *)v48 + v12, v13, v11);
              }
              v17 = s1;
              if ( *((_QWORD *)v8 + 4) )
                v17 = *((const char **)v8 + 3);
              v18 = s1;
              if ( *((_QWORD *)v8 + 1) )
                v18 = *(const char **)v8;
              if ( (*(unsigned __int8 (__fastcall **)(__int64, const char *, const char *, const char *, void **, void **))(*(_QWORD *)v36 + 24LL))(
                     v36,
                     v18,
                     v17,
                     "hexvault",
                     &v48,
                     &v46) )
              {
                v19 = s1;
                if ( (_QWORD)v53 )
                  v19 = (const char *)v52;
                sub_1A2170("Password", v19);
              }
              v20 = (char *)v56;
              if ( v56 )
              {
                v21 = v57;
                if ( (_QWORD)v57 )
                {
                  v22 = 0;
                  do
                  {
                    v23 = &v20[24 * v22];
                    v24 = *(void **)v23;
                    if ( *(_QWORD *)v23 )
                    {
                      *((_QWORD *)v23 + 1) = 0;
                      j__free(v24);
                      v20 = (char *)v56;
                    }
                    ++v22;
                  }
                  while ( v21 != v22 );
                }
                *(_QWORD *)&v57 = 0;
                j__free(v20);
              }
              if ( ptr )
              {
                n[0] = 0;
                j__free(ptr);
              }
              v25 = v52;
              if ( !v52 )
                goto LABEL_40;
              goto LABEL_39;
            }
            if ( v56 )
            {
              if ( (_QWORD)v57 )
              {
                v31 = 0;
                v32 = v57;
                do
                {
                  v33 = &v8[24 * v31];
                  v34 = *(void **)v33;
                  if ( *(_QWORD *)v33 )
                  {
                    *((_QWORD *)v33 + 1) = 0;
                    j__free(v34);
                    v8 = (char *)v56;
                  }
                  ++v31;
                }
                while ( v32 != v31 );
              }
              *(_QWORD *)&v57 = 0;
              j__free(v8);
            }
          }
          if ( ptr )
          {
            n[0] = 0;
            j__free(ptr);
          }
          v25 = v52;
          if ( !v52 )
            goto LABEL_40;
LABEL_39:
          *(_QWORD *)&v53 = 0;
          j__free(v25);
LABEL_40:
          v6 += 24;
          if ( v35 == v6 )
          {
            v5 = (char *)v50;
            break;
          }
        }
      }
    }
    if ( v5 )
    {
      v26 = v51;
      if ( (_QWORD)v51 )
      {
        v27 = 0;
        v28 = v5;
        do
        {
          v29 = &v28[24 * v27];
          v30 = *(void **)v29;
          if ( *(_QWORD *)v29 )
          {
            *((_QWORD *)v29 + 1) = 0;
            j__free(v30);
            v28 = (char *)v50;
          }
          ++v27;
        }
        while ( v26 != v27 );
        v5 = v28;
      }
      *(_QWORD *)&v51 = 0;
      j__free(v5);
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      j__free(v48);
    }
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      j__free(v46);
    }
    return sub_16C970(a1, a2, a3, (__int64)"hexvault");
  }
  return result;
}
