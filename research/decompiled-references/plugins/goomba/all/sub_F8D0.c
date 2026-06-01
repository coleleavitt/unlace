__int64 __fastcall sub_F8D0(__int64 (__fastcall ***a1)(std::exception *this), __int64 (__fastcall ***a2)(), __int64 a3)
{
  _QWORD *exception; // rax
  _QWORD *v4; // r12
  size_t v5; // rbp
  __int64 v6; // rax
  void *v7; // rax
  void *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r12
  size_t v11; // rbp
  void *v12; // rax
  void *v13; // rsi
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64 (__fastcall ***)(), __int64 *, __int64 (__fastcall ***)(std::exception *), __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 v15; // rdx
  unsigned __int8 (__fastcall *v16)(__int64, __int64 (__fastcall ***)(), __int64 *, __int64 (__fastcall ***)(), __int64 (__fastcall ***)(std::exception *)); // rax
  int v17; // r12d
  __int64 (__fastcall ***v18)(std::exception *); // r13
  __int64 (__fastcall **v19)(std::exception *); // rdi
  __int64 (__fastcall ***v20)(std::exception *); // rbx
  __int64 v21; // rdx
  void (__fastcall *v22)(__int64, __int64 (__fastcall ***)(std::exception *)); // rax
  _QWORD **v23; // rbx
  void *v24; // rdi
  _QWORD **v25; // rbx
  void *v26; // rdi
  _QWORD **v27; // rbx
  void *v28; // rdi
  _QWORD **v29; // rbx
  void *v30; // rdi
  __int64 (__fastcall **v32)(std::exception *); // rdi
  __int64 (__fastcall ***v33)(std::exception *); // r12
  __int64 v34; // rdx
  void (__fastcall *v35)(__int64, __int64 (__fastcall ***)(std::exception *)); // rax
  __int64 (__fastcall ***v36)(std::exception *); // r12
  __int64 (__fastcall ***v37)(std::exception *); // r12
  __int64 (__fastcall ***v38)(std::exception *); // r12
  __int64 (__fastcall ***v39)(std::exception *); // r12
  __int64 (__fastcall ***v40)(std::exception *); // [rsp+8h] [rbp-1C0h]
  __int64 (__fastcall ***v41)(); // [rsp+10h] [rbp-1B8h]
  __int64 v42; // [rsp+38h] [rbp-190h]
  __int64 v43; // [rsp+40h] [rbp-188h]
  int v44; // [rsp+48h] [rbp-180h]
  int v45; // [rsp+4Ch] [rbp-17Ch]
  __int64 v46; // [rsp+50h] [rbp-178h] BYREF
  int v47; // [rsp+58h] [rbp-170h]
  __int64 (__fastcall **v48)(std::exception *); // [rsp+60h] [rbp-168h] BYREF
  __int64 v49; // [rsp+68h] [rbp-160h]
  __int64 v50; // [rsp+70h] [rbp-158h]
  void *src; // [rsp+78h] [rbp-150h]
  size_t n[2]; // [rsp+80h] [rbp-148h]
  __int64 (__fastcall **v53)(); // [rsp+90h] [rbp-138h] BYREF
  int v54; // [rsp+A0h] [rbp-128h] BYREF
  void *v55; // [rsp+A8h] [rbp-120h]
  int *v56; // [rsp+B0h] [rbp-118h]
  int *v57; // [rsp+B8h] [rbp-110h]
  __int64 v58; // [rsp+C0h] [rbp-108h]
  int v59; // [rsp+D0h] [rbp-F8h] BYREF
  void *v60; // [rsp+D8h] [rbp-F0h]
  int *v61; // [rsp+E0h] [rbp-E8h]
  int *v62; // [rsp+E8h] [rbp-E0h]
  __int64 v63; // [rsp+F0h] [rbp-D8h]
  int v64; // [rsp+100h] [rbp-C8h] BYREF
  void *v65; // [rsp+108h] [rbp-C0h]
  int *v66; // [rsp+110h] [rbp-B8h]
  int *v67; // [rsp+118h] [rbp-B0h]
  __int64 v68; // [rsp+120h] [rbp-A8h]
  int v69; // [rsp+130h] [rbp-98h] BYREF
  void *v70; // [rsp+138h] [rbp-90h]
  int *v71; // [rsp+140h] [rbp-88h]
  int *v72; // [rsp+148h] [rbp-80h]
  __int64 v73; // [rsp+150h] [rbp-78h]
  int v74; // [rsp+160h] [rbp-68h] BYREF
  void *v75; // [rsp+168h] [rbp-60h]
  int *v76; // [rsp+170h] [rbp-58h]
  int *v77; // [rsp+178h] [rbp-50h]
  __int64 v78; // [rsp+180h] [rbp-48h]
  unsigned __int64 v79; // [rsp+188h] [rbp-40h]

  v40 = a1;
  v41 = a2;
  v79 = __readfsqword(0x28u);
  v45 = 256;
  while ( 1 )
  {
    v53 = &off_4D7B0;
    v54 = 0;
    v61 = &v59;
    v62 = &v59;
    v55 = nullptr;
    v66 = &v64;
    v67 = &v64;
    v56 = &v54;
    v71 = &v69;
    v72 = &v69;
    v57 = &v54;
    v58 = 0;
    v59 = 0;
    v60 = nullptr;
    v63 = 0;
    v64 = 0;
    v65 = nullptr;
    v68 = 0;
    v69 = 0;
    v70 = nullptr;
    v73 = 0;
    v74 = 0;
    v75 = nullptr;
    v76 = &v74;
    v77 = &v74;
    v78 = 0;
    v46 = 0;
    v47 = 1;
    v48 = off_4D788;
    v49 = 0;
    v50 = -1;
    src = nullptr;
    *(_OWORD *)n = 0;
    hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64 (__fastcall ***)(), __int64 *, __int64 (__fastcall ***)(std::exception *), __int64 (__fastcall ***)(std::exception *)))get_hexdsp(a1, a2, a3);
    if ( !hexdsp(623, &v53, &v46, v40, &v48) )
    {
      exception = __cxa_allocate_exception(0x30u);
      *exception = off_4D788;
      v4 = exception;
      LODWORD(exception) = v49;
      v5 = n[0];
      v4[3] = 0;
      *((_DWORD *)v4 + 2) = (_DWORD)exception;
      v6 = v50;
      *((_OWORD *)v4 + 2) = 0;
      v4[2] = v6;
      if ( v5 )
      {
        v7 = (void *)qalloc_or_throw(v5);
        v4[3] = v7;
        v8 = src;
        v4[5] = v5;
        memcpy(v7, v8, v5);
        v4[4] = v5;
      }
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
    }
    v48 = off_4D788;
    v42 = v46;
    v44 = v47;
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    std::exception::~exception((std::exception *)&v48);
    v48 = off_4D788;
    v46 = 0;
    v47 = 1;
    v49 = 0;
    v50 = -1;
    src = nullptr;
    *(_OWORD *)n = 0;
    v16 = (unsigned __int8 (__fastcall *)(__int64, __int64 (__fastcall ***)(), __int64 *, __int64 (__fastcall ***)(), __int64 (__fastcall ***)(std::exception *)))get_hexdsp(&v48, &v53, v15);
    a2 = &v53;
    if ( !v16(623, &v53, &v46, v41, &v48) )
    {
      v9 = __cxa_allocate_exception(0x30u);
      *v9 = off_4D788;
      v10 = v9;
      LODWORD(v9) = v49;
      v11 = n[0];
      *((_OWORD *)v10 + 2) = 0;
      *((_DWORD *)v10 + 2) = (_DWORD)v9;
      v10[2] = v50;
      v10[3] = 0;
      if ( v11 )
      {
        v12 = (void *)qalloc_or_throw(v11);
        v10[3] = v12;
        v13 = src;
        v10[5] = v11;
        memcpy(v12, v13, v11);
        v10[4] = v11;
      }
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
    }
    v48 = off_4D788;
    v17 = v47;
    v43 = v46;
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    a1 = &v48;
    std::exception::~exception((std::exception *)&v48);
    v18 = (__int64 (__fastcall ***)(std::exception *))v75;
    if ( v44 != v17 || v42 != v43 )
      break;
    v53 = &off_4D7B0;
    if ( v75 )
    {
      do
      {
        v32 = v18[3];
        v33 = v18;
        sub_EBF0(v32, (__int64)a2, a3);
        v18 = (__int64 (__fastcall ***)(std::exception *))v18[2];
        v35 = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(v32, a2, v34);
        v35(276, v33 + 4);
        a2 = (__int64 (__fastcall ***)())&dword_40;
        a1 = v33;
        operator delete(v33, 0x40u);
      }
      while ( v18 );
    }
    v36 = (__int64 (__fastcall ***)(std::exception *))v70;
    if ( v70 )
    {
      do
      {
        sub_EEA0(v36[3]);
        a1 = v36;
        v36 = (__int64 (__fastcall ***)(std::exception *))v36[2];
        a2 = (__int64 (__fastcall ***)())&dword_30;
        operator delete(a1, 0x30u);
      }
      while ( v36 );
    }
    v37 = (__int64 (__fastcall ***)(std::exception *))v65;
    if ( v65 )
    {
      do
      {
        sub_EEA0(v37[3]);
        a1 = v37;
        v37 = (__int64 (__fastcall ***)(std::exception *))v37[2];
        a2 = (__int64 (__fastcall ***)())&dword_30;
        operator delete(a1, 0x30u);
      }
      while ( v37 );
    }
    v38 = (__int64 (__fastcall ***)(std::exception *))v60;
    if ( v60 )
    {
      do
      {
        sub_EEA0(v38[3]);
        a1 = v38;
        v38 = (__int64 (__fastcall ***)(std::exception *))v38[2];
        a2 = (__int64 (__fastcall ***)())&dword_30;
        operator delete(a1, 0x30u);
      }
      while ( v38 );
    }
    v39 = (__int64 (__fastcall ***)(std::exception *))v55;
    if ( v55 )
    {
      do
      {
        sub_EEA0(v39[3]);
        a1 = v39;
        v39 = (__int64 (__fastcall ***)(std::exception *))v39[2];
        a2 = (__int64 (__fastcall ***)())&dword_30;
        operator delete(a1, 0x30u);
      }
      while ( v39 );
    }
    if ( !--v45 )
      return 1;
  }
  v53 = &off_4D7B0;
  if ( v75 )
  {
    do
    {
      v19 = v18[3];
      v20 = v18;
      sub_EBF0(v19, (__int64)a2, a3);
      v18 = (__int64 (__fastcall ***)(std::exception *))v18[2];
      v22 = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(v19, a2, v21);
      v22(276, v20 + 4);
      a2 = (__int64 (__fastcall ***)())&dword_40;
      operator delete(v20, 0x40u);
    }
    while ( v18 );
  }
  v23 = (_QWORD **)v70;
  if ( v70 )
  {
    do
    {
      sub_EEA0(v23[3]);
      v24 = v23;
      v23 = (_QWORD **)v23[2];
      operator delete(v24, 0x30u);
    }
    while ( v23 );
  }
  v25 = (_QWORD **)v65;
  if ( v65 )
  {
    do
    {
      sub_EEA0(v25[3]);
      v26 = v25;
      v25 = (_QWORD **)v25[2];
      operator delete(v26, 0x30u);
    }
    while ( v25 );
  }
  v27 = (_QWORD **)v60;
  if ( v60 )
  {
    do
    {
      sub_EEA0(v27[3]);
      v28 = v27;
      v27 = (_QWORD **)v27[2];
      operator delete(v28, 0x30u);
    }
    while ( v27 );
  }
  v29 = (_QWORD **)v55;
  if ( v55 )
  {
    do
    {
      sub_EEA0(v29[3]);
      v30 = v29;
      v29 = (_QWORD **)v29[2];
      operator delete(v30, 0x30u);
    }
    while ( v29 );
  }
  return 0;
}
