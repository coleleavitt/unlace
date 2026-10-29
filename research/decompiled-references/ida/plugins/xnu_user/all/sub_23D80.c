__int64 __fastcall sub_23D80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v5; // al
  int v6; // ebp
  unsigned __int64 v7; // rax
  __int64 (*v8)(); // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned int i; // ebp
  __int16 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r12d
  __int128 *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  size_t v20; // rax
  __int128 *v21; // r9
  size_t v22; // r12
  unsigned int j; // ebp
  __int64 v24; // rax
  const char *v25; // r12
  signed int v26; // r13d
  __int128 *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  char *v30; // rax
  char *v31; // r8
  bool v32; // zf
  __int64 v33; // rdx
  int v34; // edx
  __int64 (__fastcall *v36)(__int64, unsigned int, __int64, __int64); // rax
  unsigned int v37; // eax
  void *v38; // rdi
  size_t v39; // rdx
  __int64 v40; // rax
  unsigned int v42; // [rsp+20h] [rbp-CE8h]
  __int16 v43; // [rsp+28h] [rbp-CE0h]
  __int128 *v44; // [rsp+28h] [rbp-CE0h]
  __int128 *v45; // [rsp+28h] [rbp-CE0h]
  size_t v46; // [rsp+28h] [rbp-CE0h]
  unsigned int v47; // [rsp+30h] [rbp-CD8h]
  unsigned int v48; // [rsp+38h] [rbp-CD0h]
  __int128 *v49; // [rsp+38h] [rbp-CD0h]
  int v50; // [rsp+54h] [rbp-CB4h] BYREF
  int *v51; // [rsp+58h] [rbp-CB0h] BYREF
  char v52[12]; // [rsp+60h] [rbp-CA8h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-C9Ch]
  int v54; // [rsp+70h] [rbp-C98h]
  unsigned int v55; // [rsp+74h] [rbp-C94h] BYREF
  unsigned int v56[6]; // [rsp+78h] [rbp-C90h] BYREF
  __int64 (__fastcall **v57)(); // [rsp+90h] [rbp-C78h] BYREF
  __int128 v58; // [rsp+98h] [rbp-C70h] BYREF
  __int128 *v59; // [rsp+A8h] [rbp-C60h]
  __int128 *v60; // [rsp+B0h] [rbp-C58h]
  __int64 v61; // [rsp+B8h] [rbp-C50h]
  char v62[1024]; // [rsp+C0h] [rbp-C48h] BYREF
  char v63[1024]; // [rsp+4C0h] [rbp-848h] BYREF
  char v64[1032]; // [rsp+8C0h] [rbp-448h] BYREF
  unsigned __int64 v65; // [rsp+CC8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 192) )
  {
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v32 = *(_DWORD *)(a1 + 72) == 23126;
      v33 = *(_QWORD *)(a1 + 592);
      v57 = off_97208;
      if ( v32 )
        v34 = v33 + 40;
      else
        v34 = *(unsigned __int16 *)(a1 + 92) + (_DWORD)v33 + 24;
      sub_1C060(a1, a2, v34, *(unsigned __int16 *)(a1 + 78), (__int64)&v57);
    }
    v5 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, a2);
    v6 = v5;
    if ( v5 )
    {
      if ( qlread() == 40 )
      {
        (**(void (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, v53);
        v62[0] = 0;
        v7 = qlread();
        if ( v7 > 0x3FF )
          v6 = 0;
        else
          v62[v7] = 0;
        v58 = 0;
        v57 = nullptr;
        if ( (unsigned __int8)idb_utf8() )
          qstrncpy();
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree();
        }
        v8 = **(__int64 (***)())a3;
        if ( v8 == sub_18C50 || (v11 = ((__int64 (__fastcall *)(__int64, char *, char *))v8)(a3, v52, v62)) == 0 )
        {
          v9 = qlsize() + 4096;
          v10 = *(unsigned int *)(a1 + 196);
          if ( v10 < v9 && (_DWORD)v10 )
            v9 = *(unsigned int *)(a1 + 196);
          v11 = v6 - 1;
          sub_206F0(
            0,
            v56,
            6u,
            "Number of exported names",
            *(unsigned int *)(a1 + 192),
            *(unsigned int *)(a1 + 192) + v9);
          sub_206F0(
            0,
            &v55,
            4u,
            "Number of exported addresses",
            *(unsigned int *)(a1 + 192),
            *(unsigned int *)(a1 + 192) + v9);
          LODWORD(v58) = 0;
          *((_QWORD *)&v58 + 1) = 0;
          v59 = &v58;
          v60 = &v58;
          v61 = 0;
          if ( v56[0] )
          {
            for ( i = 0; i < v56[0]; ++i )
            {
              while ( 1 )
              {
                LOWORD(v51) = 0;
                if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, v56[3] + 2 * i) )
                {
                  if ( qlread() == 2 )
                  {
                    v13 = (__int16)v51;
                    LODWORD(v51) = 0;
                    v43 = v54;
                    if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, v56[2] + 4 * i) )
                    {
                      if ( qlread() == 4 )
                      {
                        (**(void (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, (unsigned int)v51);
                        v62[0] = 0;
                        v14 = qlread();
                        if ( v14 <= 0x3FF )
                          break;
                      }
                    }
                  }
                }
                v11 = -1;
LABEL_18:
                if ( ++i >= v56[0] )
                  goto LABEL_34;
              }
              v62[v14] = 0;
              sub_1C670((__int64)v62, 1024, 0);
              v15 = *((_QWORD *)&v58 + 1);
              v16 = (unsigned __int16)(v43 + v13);
              v17 = &v58;
              v50 = v16;
              if ( !*((_QWORD *)&v58 + 1) )
                goto LABEL_31;
              do
              {
                while ( 1 )
                {
                  v18 = *(_QWORD *)(v15 + 16);
                  v19 = *(_QWORD *)(v15 + 24);
                  if ( v16 > *(_DWORD *)(v15 + 32) )
                    break;
                  v17 = (__int128 *)v15;
                  v15 = *(_QWORD *)(v15 + 16);
                  if ( !v18 )
                    goto LABEL_29;
                }
                v15 = *(_QWORD *)(v15 + 24);
              }
              while ( v19 );
LABEL_29:
              if ( v17 == &v58 || v16 < *((_DWORD *)v17 + 8) )
              {
LABEL_31:
                v51 = &v50;
                v17 = (__int128 *)sub_23BF0(&v57, (__int64)v17, (__int64)&unk_822F0, &v51);
              }
              v44 = v17;
              v20 = strlen(v62);
              v21 = v44;
              v22 = v20;
              if ( v20 )
              {
                v38 = *((void **)v44 + 5);
                v39 = v20 + 1;
                if ( *((_QWORD *)v44 + 7) < v20 + 1 )
                {
                  v49 = v44;
                  v46 = v20 + 1;
                  v40 = qvector_reserve();
                  v21 = v49;
                  v39 = v46;
                  v38 = (void *)v40;
                  *((_QWORD *)v49 + 5) = v40;
                }
                *((_QWORD *)v21 + 6) = v39;
                v45 = v21;
                memmove(v38, v62, v22);
                *(_BYTE *)(*((_QWORD *)v45 + 5) + v22) = 0;
                goto LABEL_18;
              }
              *((_QWORD *)v44 + 6) = 0;
            }
          }
LABEL_34:
          v47 = *(_DWORD *)(a1 + 192);
          v48 = v9 + v47;
          if ( v55 )
          {
            for ( j = 0; j < v55; ++j )
            {
              while ( 1 )
              {
                LODWORD(v51) = 0;
                if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, v56[1] + 4 * j) )
                {
                  if ( qlread() == 4 )
                    break;
                }
LABEL_36:
                v11 = -1;
LABEL_37:
                if ( ++j >= v55 )
                  goto LABEL_69;
              }
              v42 = (unsigned int)v51;
              if ( !(_DWORD)v51 )
                goto LABEL_37;
              v24 = *((_QWORD *)&v58 + 1);
              v25 = (const char *)&unk_7D386;
              v26 = j + v54;
              if ( *((_QWORD *)&v58 + 1) )
              {
                v27 = &v58;
                do
                {
                  while ( 1 )
                  {
                    v28 = *(_QWORD *)(v24 + 16);
                    v29 = *(_QWORD *)(v24 + 24);
                    if ( v26 > *(_DWORD *)(v24 + 32) )
                      break;
                    v27 = (__int128 *)v24;
                    v24 = *(_QWORD *)(v24 + 16);
                    if ( !v28 )
                      goto LABEL_46;
                  }
                  v24 = *(_QWORD *)(v24 + 24);
                }
                while ( v29 );
LABEL_46:
                v25 = (const char *)&unk_7D386;
                if ( v27 != &v58 && v26 >= *((_DWORD *)v27 + 8) )
                {
                  v25 = src;
                  if ( *((_QWORD *)v27 + 6) )
                    v25 = *((const char **)v27 + 5);
                }
              }
              if ( (unsigned int)v51 < v47 || (unsigned int)v51 >= v48 )
              {
                v31 = nullptr;
                goto LABEL_63;
              }
              (**(void (__fastcall ***)(__int64, __int64))a1)(a1, a2);
              v62[0] = 0;
              qlgetz();
              if ( !v62[0] )
              {
                if ( v11 )
                  goto LABEL_37;
                goto LABEL_36;
              }
              v30 = strrchr(v62, 46);
              if ( v30 )
              {
                *v30 = 0;
                qstrncpy();
                qstrncpy();
                sub_1C670((__int64)v63, 1024, 1);
                sub_1C670((__int64)v64, 1024, 0);
                qsnprintf();
              }
              else
              {
                sub_1C670((__int64)v62, 1024, 1);
              }
              v31 = v62;
LABEL_63:
              v36 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64, __int64))(*(_QWORD *)a3 + 8LL);
              if ( v36 == sub_18C70 )
                v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char *))(**(_QWORD **)(a3 + 8) + 8LL))(
                        *(_QWORD *)(a3 + 8),
                        *(_QWORD *)(a3 + 16) + v42,
                        v25);
              else
                v37 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, const char *, char *))v36)(
                        a3,
                        v42,
                        (unsigned int)v26,
                        v25,
                        v31);
              if ( v11 )
                goto LABEL_37;
              if ( v37 )
                v11 = v37;
            }
          }
LABEL_69:
          sub_1AF50(*((_QWORD **)&v58 + 1));
        }
      }
      else
      {
        return (unsigned int)-1;
      }
    }
    else
    {
      return (unsigned int)-2;
    }
  }
  else
  {
    return 0;
  }
  return v11;
}

