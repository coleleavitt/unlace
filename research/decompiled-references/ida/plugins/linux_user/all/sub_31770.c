__int64 __fastcall sub_31770(
        __int64 a1,
        const char *a2,
        int a3,
        __int64 *a4,
        _BYTE *a5,
        char a6,
        char *s,
        unsigned int a8,
        __int64 *a9)
{
  const char *v12; // r15
  int v13; // ecx
  size_t v14; // rax
  size_t v15; // r8
  bool (__fastcall *v16)(__int64, int); // rax
  unsigned int v17; // r15d
  int v18; // r15d
  bool v19; // al
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 v22; // r14
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rdx
  size_t v25; // r8
  size_t v26; // r9
  __int64 v27; // rdx
  void *v28; // rdi
  size_t v29; // rdx
  __int64 v30; // rax
  char v32; // al
  __int64 v33; // rax
  const char *v34; // rax
  __int64 v35; // [rsp+0h] [rbp-1288h]
  unsigned __int64 v36; // [rsp+0h] [rbp-1288h]
  size_t v37; // [rsp+10h] [rbp-1278h]
  int v38; // [rsp+10h] [rbp-1278h]
  size_t v39; // [rsp+10h] [rbp-1278h]
  size_t v40; // [rsp+10h] [rbp-1278h]
  size_t v41; // [rsp+18h] [rbp-1270h]
  size_t v42; // [rsp+18h] [rbp-1270h]
  __int64 v43; // [rsp+20h] [rbp-1268h]
  unsigned __int64 v44; // [rsp+28h] [rbp-1260h]
  struct utsname name; // [rsp+B0h] [rbp-11D8h] BYREF
  _BYTE v46[4104]; // [rsp+240h] [rbp-1048h] BYREF
  unsigned __int64 v47; // [rsp+1248h] [rbp-40h]

  v12 = s;
  v47 = __readfsqword(0x28u);
  v13 = a6 & 1;
  if ( !*a5 || (v38 = a6 & 1, v32 = qisabspath(), v13 = v38, v32) )
  {
    if ( !v13 && *s && !(unsigned __int8)qfileexist() )
      goto LABEL_58;
    if ( !s )
      goto LABEL_6;
  }
  else
  {
    qmake_full_path();
    if ( !v38 && v46[0] && !(unsigned __int8)qfileexist() )
    {
      v12 = v46;
LABEL_58:
      sub_14490(a1, (__int64)"AUTOHIDE NONE\nInput file is missing: %s", v12);
      return (unsigned int)-3;
    }
    v12 = v46;
  }
  v14 = strlen(v12);
  v15 = v14;
  if ( !v14 )
  {
LABEL_6:
    *(_QWORD *)(a1 + 592) = 0;
    goto LABEL_7;
  }
  v28 = *(void **)(a1 + 584);
  v29 = v14 + 1;
  if ( *(_QWORD *)(a1 + 600) < v14 + 1 )
  {
    v42 = v14;
    v40 = v14 + 1;
    v33 = qvector_reserve();
    v15 = v42;
    v29 = v40;
    *(_QWORD *)(a1 + 584) = v33;
    v28 = (void *)v33;
  }
  *(_QWORD *)(a1 + 592) = v29;
  v37 = v15;
  memmove(v28, v12, v15);
  *(_BYTE *)(*(_QWORD *)(a1 + 584) + v37) = 0;
LABEL_7:
  *(_BYTE *)(a1 + 861) = a6;
  *(_BYTE *)(a1 + 861) &= 1u;
  if ( !(unsigned __int8)qfileexist() )
  {
    __errno_location();
    v17 = -2;
    v34 = (const char *)winerr();
    sub_143D0(a1, (__int64)"%s: %s\n", a2, v34);
    return v17;
  }
  v16 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 48LL);
  if ( v16 == sub_2FA90 )
  {
    v17 = 1;
    if ( !a8 )
      goto LABEL_13;
    v17 = 2;
    if ( !open_linput() )
      goto LABEL_13;
    v18 = calc_file_crc32();
    close_linput();
    v19 = a8 == v18;
  }
  else
  {
    v19 = v16(a1, a8);
  }
  v17 = 2 - v19;
LABEL_13:
  if ( !uname(&name) )
    strcasecmp(name.sysname, "VMkernel");
  if ( (a6 & 8) == 0 && (a6 & 4) == 0 )
    sub_143D0(a1, (__int64)"Launching as %sbit process\n", "64");
  v43 = 0;
  if ( a4 )
  {
    v20 = *a4;
    v21 = *a4 + 24 * a4[1];
    if ( v20 != v21 )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        if ( strchr(*(const char **)v20, 61) )
        {
          v24 = *(_QWORD *)(v20 + 8);
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v24 != 1 )
            {
              v26 = v24 - 1;
              if ( v23 )
              {
                --v23;
                v26 = v25 + v23;
                v24 += v23;
              }
              if ( v24 )
              {
                v41 = v26;
                v39 = v25;
                v36 = v24;
                v43 = qvector_reserve();
                v26 = v41;
                v22 = v43;
                v25 = v39;
                v24 = v36;
              }
              v44 = v24;
              *(_BYTE *)(v22 + v26) = 0;
              memcpy((void *)(v23 + v43), *(const void **)v20, v25);
              v23 = v44;
              v22 = v43;
            }
          }
          v27 = 2;
          if ( v23 )
            v27 = v23-- + 1;
          if ( v27 )
          {
            v35 = v27;
            v43 = qvector_reserve();
            v27 = v35;
            v22 = v43;
          }
          *(_BYTE *)(v22 + v23) = 0;
          *(_BYTE *)(v43 + v23 + 1) = 0;
          v23 = v27;
          v22 = v43;
        }
        v20 += 24;
      }
      while ( v21 != v20 );
      if ( v23 > 1 )
      {
        if ( v23 != -1 )
        {
          v43 = qvector_reserve();
          v22 = v43;
        }
        *(_BYTE *)(v22 + v23 - 1) = 0;
        *(_BYTE *)(v43 + v23) = 0;
      }
    }
  }
  v30 = launch_process();
  *a9 = v30;
  if ( !v30 )
  {
    sub_143D0(a1, (__int64)"launch_process: %s", ::s);
    v17 = -2;
  }
  if ( v43 )
    qfree();
  return v17;
}

