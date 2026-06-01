__int64 __fastcall sub_18B80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v5; // al
  int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned int i; // ebp
  __int16 v12; // r12
  __int16 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // r12
  __int64 v16; // rax
  int *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  size_t v20; // rax
  size_t v21; // r12
  unsigned int j; // ebp
  __int64 v23; // rax
  char *v24; // r12
  signed int v25; // r15d
  __int128 *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  char *v29; // rax
  char *v30; // r8
  bool v31; // zf
  __int64 v32; // rdx
  int v33; // edx
  unsigned int v35; // eax
  void *v36; // rdi
  size_t v37; // rdx
  __int64 v38; // rax
  unsigned int v40; // [rsp+20h] [rbp-D08h]
  unsigned __int64 v41; // [rsp+28h] [rbp-D00h]
  unsigned int v42; // [rsp+30h] [rbp-CF8h]
  size_t v43; // [rsp+38h] [rbp-CF0h]
  int v44; // [rsp+5Ch] [rbp-CCCh] BYREF
  int *v45; // [rsp+60h] [rbp-CC8h] BYREF
  __int128 v46; // [rsp+68h] [rbp-CC0h]
  _BYTE v47[12]; // [rsp+80h] [rbp-CA8h] BYREF
  unsigned int v48; // [rsp+8Ch] [rbp-C9Ch]
  int v49; // [rsp+90h] [rbp-C98h]
  unsigned int v50; // [rsp+94h] [rbp-C94h] BYREF
  unsigned int v51[6]; // [rsp+98h] [rbp-C90h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+B0h] [rbp-C78h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-C70h] BYREF
  __int128 *v54; // [rsp+C8h] [rbp-C60h]
  __int128 *v55; // [rsp+D0h] [rbp-C58h]
  __int64 v56; // [rsp+D8h] [rbp-C50h]
  char v57[1024]; // [rsp+E0h] [rbp-C48h] BYREF
  unsigned __int64 v58; // [rsp+CE8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 192) )
  {
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v31 = *(_DWORD *)(a1 + 72) == 23126;
      v32 = *(_QWORD *)(a1 + 592);
      v52 = off_35498;
      if ( v31 )
        v33 = v32 + 40;
      else
        v33 = *(unsigned __int16 *)(a1 + 92) + (_DWORD)v32 + 24;
      sub_DD10(a1, a2, v33, *(unsigned __int16 *)(a1 + 78), (__int64)&v52);
    }
    v5 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, a2);
    v6 = v5;
    if ( v5 )
    {
      if ( qlread() == 40 )
      {
        (**(void (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, v48);
        v57[0] = 0;
        v7 = qlread();
        if ( v7 > 0x3FF )
          v6 = 0;
        else
          v57[v7] = 0;
        v53 = 0;
        v52 = nullptr;
        if ( (unsigned __int8)idb_utf8() )
          qstrncpy();
        if ( v52 )
        {
          *(_QWORD *)&v53 = 0;
          qfree();
        }
        v8 = (**(__int64 (__fastcall ***)(__int64, _BYTE *, char *))a3)(a3, v47, v57);
        if ( !v8 )
        {
          v9 = qlsize() + 4096;
          v10 = *(unsigned int *)(a1 + 196);
          v41 = v9;
          if ( v10 < v9 )
          {
            if ( !(_DWORD)v10 )
              v10 = v9;
            v41 = v10;
          }
          sub_12A30(
            0,
            v51,
            6u,
            "Number of exported names",
            *(unsigned int *)(a1 + 192),
            *(unsigned int *)(a1 + 192) + v41);
          v8 = v6 - 1;
          sub_12A30(
            0,
            &v50,
            4u,
            "Number of exported addresses",
            *(unsigned int *)(a1 + 192),
            *(unsigned int *)(a1 + 192) + v41);
          LODWORD(v53) = 0;
          *((_QWORD *)&v53 + 1) = 0;
          v54 = &v53;
          v55 = &v53;
          v56 = 0;
          if ( v51[0] )
          {
            for ( i = 0; i < v51[0]; ++i )
            {
              while ( 1 )
              {
                LOWORD(v45) = 0;
                if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, v51[3] + 2 * i) )
                {
                  if ( qlread() == 2 )
                  {
                    v12 = (__int16)v45;
                    LODWORD(v45) = 0;
                    v13 = v49;
                    if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, v51[2] + 4 * i) )
                    {
                      if ( qlread() == 4 )
                      {
                        (**(void (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, (unsigned int)v45);
                        v57[0] = 0;
                        v14 = qlread();
                        if ( v14 <= 0x3FF )
                          break;
                      }
                    }
                  }
                }
                v8 = -1;
LABEL_19:
                if ( ++i >= v51[0] )
                  goto LABEL_36;
              }
              v57[v14] = 0;
              if ( !(unsigned __int8)is_valid_utf8() )
              {
                v46 = 0;
                v45 = nullptr;
                if ( (unsigned __int8)idb_utf8() )
                  qstrncpy();
                if ( v45 )
                {
                  *(_QWORD *)&v46 = 0;
                  qfree();
                }
              }
              v15 = v13 + v12;
              v16 = *((_QWORD *)&v53 + 1);
              v17 = (int *)&v53;
              v44 = v15;
              if ( !*((_QWORD *)&v53 + 1) )
                goto LABEL_33;
              do
              {
                while ( 1 )
                {
                  v18 = *(_QWORD *)(v16 + 16);
                  v19 = *(_QWORD *)(v16 + 24);
                  if ( v15 > *(int *)(v16 + 32) )
                    break;
                  v17 = (int *)v16;
                  v16 = *(_QWORD *)(v16 + 16);
                  if ( !v18 )
                    goto LABEL_31;
                }
                v16 = *(_QWORD *)(v16 + 24);
              }
              while ( v19 );
LABEL_31:
              if ( v17 == (int *)&v53 || v15 < v17[8] )
              {
LABEL_33:
                v45 = &v44;
                v17 = (int *)sub_18A00(&v52, (__int64)v17, (__int64)&unk_2EFE6, &v45);
              }
              v20 = strlen(v57);
              v21 = v20;
              if ( v20 )
              {
                v36 = *((void **)v17 + 5);
                v37 = v20 + 1;
                if ( *((_QWORD *)v17 + 7) < v20 + 1 )
                {
                  v43 = v20 + 1;
                  v38 = qvector_reserve();
                  *((_QWORD *)v17 + 5) = v38;
                  v37 = v43;
                  v36 = (void *)v38;
                }
                *((_QWORD *)v17 + 6) = v37;
                memmove(v36, v57, v21);
                *(_BYTE *)(*((_QWORD *)v17 + 5) + v21) = 0;
                goto LABEL_19;
              }
              *((_QWORD *)v17 + 6) = 0;
            }
          }
LABEL_36:
          v42 = *(_DWORD *)(a1 + 192);
          if ( v50 )
          {
            for ( j = 0; j < v50; ++j )
            {
              while ( 1 )
              {
                LODWORD(v45) = 0;
                if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, v51[1] + 4 * j) )
                {
                  if ( qlread() == 4 )
                    break;
                }
LABEL_38:
                v8 = -1;
LABEL_39:
                if ( ++j >= v50 )
                  goto LABEL_78;
              }
              v40 = (unsigned int)v45;
              if ( !(_DWORD)v45 )
                goto LABEL_39;
              v23 = *((_QWORD *)&v53 + 1);
              v24 = "";
              v25 = j + v49;
              if ( *((_QWORD *)&v53 + 1) )
              {
                v26 = &v53;
                do
                {
                  while ( 1 )
                  {
                    v27 = *(_QWORD *)(v23 + 16);
                    v28 = *(_QWORD *)(v23 + 24);
                    if ( v25 > *(_DWORD *)(v23 + 32) )
                      break;
                    v26 = (__int128 *)v23;
                    v23 = *(_QWORD *)(v23 + 16);
                    if ( !v27 )
                      goto LABEL_48;
                  }
                  v23 = *(_QWORD *)(v23 + 24);
                }
                while ( v28 );
LABEL_48:
                v24 = "";
                if ( v26 != &v53 && v25 >= *((_DWORD *)v26 + 8) )
                {
                  v24 = (char *)s1;
                  if ( *((_QWORD *)v26 + 6) )
                    v24 = *((char **)v26 + 5);
                }
              }
              if ( (unsigned int)v45 < v42 || (unsigned int)v45 >= v42 + (unsigned int)v41 )
              {
                v30 = nullptr;
                goto LABEL_74;
              }
              (**(void (__fastcall ***)(__int64, __int64))a1)(a1, a2);
              v57[0] = 0;
              qlgetz();
              if ( !v57[0] )
              {
                if ( v8 )
                  goto LABEL_39;
                goto LABEL_38;
              }
              v29 = strrchr(v57, 46);
              if ( v29 )
              {
                *v29 = 0;
                qstrncpy();
                qstrncpy();
                v46 = 0;
                v45 = nullptr;
                if ( (unsigned __int8)idb_utf8() )
                  qstrncpy();
                if ( v45 )
                {
                  *(_QWORD *)&v46 = 0;
                  qfree();
                }
                if ( !(unsigned __int8)is_valid_utf8() )
                {
                  v46 = 0;
                  v45 = nullptr;
                  if ( (unsigned __int8)idb_utf8() )
                    qstrncpy();
                  if ( v45 )
                  {
                    *(_QWORD *)&v46 = 0;
                    qfree();
                  }
                }
                qsnprintf();
              }
              else
              {
                v46 = 0;
                v45 = nullptr;
                if ( (unsigned __int8)idb_utf8() )
                  qstrncpy();
                if ( v45 )
                {
                  *(_QWORD *)&v46 = 0;
                  qfree();
                }
              }
              v30 = v57;
LABEL_74:
              v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, char *))(*(_QWORD *)a3 + 8LL))(
                      a3,
                      v40,
                      (unsigned int)v25,
                      v24,
                      v30);
              if ( v8 )
                goto LABEL_39;
              if ( v35 )
                v8 = v35;
            }
          }
LABEL_78:
          sub_8D50(*((_QWORD **)&v53 + 1));
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
  return v8;
}

