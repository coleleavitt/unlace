__int64 __fastcall sub_5B6C0(__int64 a1, __int64 a2, __int64 **a3, int a4)
{
  __int64 v5; // rbx
  __int64 *v6; // r13
  __int64 v7; // rax
  unsigned __int8 (__fastcall *v8)(__int64 *, __int64); // r14
  __int64 v9; // rax
  char v10; // al
  void *v11; // rdi
  char v12; // al
  const char *v13; // r14
  unsigned int v14; // r15d
  __int64 v15; // rax
  size_t v16; // rax
  size_t v17; // r13
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // r15
  unsigned __int64 *v21; // r8
  void *v22; // rax
  bool v23; // zf
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  _QWORD *v26; // r13
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  char v30; // al
  int v31; // eax
  void (*v33)(void); // rax
  __int64 *v34; // rax
  int v35; // eax
  int v36; // [rsp+Ch] [rbp-ACh]
  unsigned __int64 *v37; // [rsp+20h] [rbp-98h]
  int v38; // [rsp+28h] [rbp-90h]
  int v39; // [rsp+30h] [rbp-88h]
  char v41; // [rsp+43h] [rbp-75h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v43; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v44; // [rsp+4Ch] [rbp-6Ch] BYREF
  void *v45; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v46[8]; // [rsp+58h] [rbp-60h] BYREF
  const char *v47; // [rsp+60h] [rbp-58h] BYREF
  __int128 v48; // [rsp+68h] [rbp-50h]
  unsigned __int64 v49; // [rsp+78h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v38 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _BYTE *, __int64))(**a3 + 48))(*a3, v46, 8)
    && (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned int *, __int64))(**a3 + 48))(*a3, &v42, 4)
    && (LODWORD(v5) = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3),
        (*(void (__fastcall **)(void **, __int64 *, _QWORD, _QWORD))(**a3 + 16))(&v45, *a3, (unsigned int)v5, 0),
        v45) )
  {
    v6 = *a3;
    v7 = **a3;
    v8 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v7 + 40);
    v9 = (*(__int64 (__fastcall **)(__int64 *))(v7 + 32))(*a3);
    if ( !v8(v6, v9 + v42)
      || !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned int *, __int64))(**a3 + 48))(*a3, &v43, 4) )
    {
      goto LABEL_37;
    }
    v39 = v5;
    v36 = 0;
    if ( v43 )
    {
      while ( 1 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *, __int64))(**a3 + 48))(*a3, &v44, 4);
        v11 = v45;
        if ( !v10 )
          goto LABEL_38;
        v12 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v45 + 40LL))(v45, v44 + v39);
        v11 = v45;
        if ( !v12 )
          goto LABEL_38;
        v47 = nullptr;
        v48 = 0;
        if ( !(*(unsigned __int8 (__fastcall **)(void *, const char **))(*(_QWORD *)v45 + 56LL))(v45, &v47) )
        {
          if ( !v47 )
            goto LABEL_37;
          *(_QWORD *)&v48 = 0;
          qfree(v47);
          v11 = v45;
          goto LABEL_38;
        }
        v13 = src;
        if ( (_QWORD)v48 )
          v13 = v47;
        v14 = v44;
        v15 = operator new(0x18u);
        *(_QWORD *)v15 = 0;
        v5 = v15;
        *(_DWORD *)(v15 + 8) = v14;
        if ( !v13 )
          std::__throw_logic_error("basic_string::_S_construct null not valid");
        v16 = strlen(v13);
        v17 = v16;
        if ( v16 )
        {
          v18 = std::string::_Rep::_S_create(v16, 0, &v41);
          v19 = (void *)(v18 + 24);
          v20 = v18;
          v21 = (unsigned __int64 *)(v18 + 24);
          if ( v17 == 1 )
          {
            *(_BYTE *)(v18 + 24) = *v13;
          }
          else
          {
            v37 = (unsigned __int64 *)(v18 + 24);
            v22 = memcpy(v19, v13, v17);
            v21 = v37;
            v19 = v22;
          }
          if ( (unsigned __int64 *)v20 == std::string::_Rep::_S_empty_rep_storage )
          {
            v14 = *(_DWORD *)(v5 + 8);
            v21 = (unsigned __int64 *)v19;
          }
          else
          {
            *(_DWORD *)(v20 + 16) = 0;
            *(_QWORD *)v20 = v17;
            *(_BYTE *)(v20 + v17 + 24) = 0;
            v14 = *(_DWORD *)(v5 + 8);
          }
        }
        else
        {
          v21 = &std::string::_Rep::_S_empty_rep_storage[3];
        }
        v23 = *(_QWORD *)(a2 + 24) == 0;
        *(_QWORD *)(v5 + 16) = v21;
        if ( v23 )
        {
          v34 = *(__int64 **)(a2 + 16);
          if ( v34 )
          {
            while ( *((_DWORD *)v34 + 2) != v14 )
            {
              v34 = (__int64 *)*v34;
              if ( !v34 )
                goto LABEL_45;
            }
LABEL_26:
            if ( v5 )
            {
              if ( v21 - 3 != std::string::_Rep::_S_empty_rep_storage )
              {
                if ( &_pthread_key_create )
                {
                  v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v21 - 2, 0xFFFFFFFF);
                }
                else
                {
                  v35 = *((_DWORD *)v21 - 2);
                  *((_DWORD *)v21 - 2) = v35 - 1;
                }
                if ( v35 <= 0 )
                  std::string::_Rep::_M_destroy(v21 - 3, &v41);
              }
              operator delete((void *)v5, 0x18u);
            }
            goto LABEL_29;
          }
LABEL_45:
          v25 = v14;
          v27 = (unsigned __int64)v14 % *(_QWORD *)(a2 + 8);
        }
        else
        {
          v24 = *(_QWORD *)(a2 + 8);
          v25 = v14;
          v26 = *(_QWORD **)(*(_QWORD *)a2 + 8 * (v14 % v24));
          v27 = v14 % v24;
          if ( v26 )
          {
            v28 = (_QWORD *)*v26;
            if ( *(_DWORD *)(*v26 + 8LL) == v14 )
            {
LABEL_24:
              if ( v26 && *v26 )
                goto LABEL_26;
            }
            else
            {
              while ( 1 )
              {
                v29 = (_QWORD *)*v28;
                if ( !*v28 )
                  break;
                v26 = v28;
                if ( *((unsigned int *)v29 + 2) % v24 != v14 % v24 )
                  break;
                v28 = (_QWORD *)*v28;
                if ( *((_DWORD *)v29 + 2) == v14 )
                  goto LABEL_24;
              }
            }
          }
        }
        sub_5B500((char **)a2, v27, v25, (char *)v5, 1u);
LABEL_29:
        if ( v47 )
        {
          *(_QWORD *)&v48 = 0;
          qfree(v47);
        }
        if ( ++v36 >= v43 )
        {
          v30 = (*(__int64 (__fastcall **)(__int64 *, const char **, __int64))(**a3 + 48))(*a3, &v47, 4);
          goto LABEL_33;
        }
      }
    }
    v30 = (*(__int64 (__fastcall **)(__int64 *, const char **, __int64))(**a3 + 48))(*a3, &v47, 4);
LABEL_33:
    if ( v30 )
    {
      v31 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
      v11 = v45;
      LOBYTE(v5) = v31 - v38 == a4;
    }
    else
    {
LABEL_37:
      v11 = v45;
LABEL_38:
      LODWORD(v5) = 0;
    }
    if ( v11 )
    {
      v33 = *(void (**)(void))(*(_QWORD *)v11 + 8LL);
      if ( (char *)v33 == (char *)sub_54910 )
        operator delete(v11, 0x40u);
      else
        v33();
    }
  }
  else
  {
    LODWORD(v5) = 0;
  }
  return (unsigned int)v5;
}

