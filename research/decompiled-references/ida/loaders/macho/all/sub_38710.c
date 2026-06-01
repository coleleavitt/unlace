unsigned __int64 __fastcall sub_38710(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v4)(); // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rcx
  __int64 (*v10)(); // rcx
  void *v11; // rax
  __int64 (*v12)(); // rcx
  void *v13; // r8
  __int128 v14; // kr00_16
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // [rsp+0h] [rbp-328h]
  __int64 v24; // [rsp+8h] [rbp-320h]
  size_t n; // [rsp+10h] [rbp-318h] BYREF
  __int64 v26; // [rsp+18h] [rbp-310h]
  size_t v27; // [rsp+20h] [rbp-308h]
  void *src; // [rsp+28h] [rbp-300h]
  __m128 v29; // [rsp+30h] [rbp-2F8h] BYREF
  __int128 v30; // [rsp+40h] [rbp-2E8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-2D8h]
  void *v32; // [rsp+60h] [rbp-2C8h]
  __int128 v33; // [rsp+68h] [rbp-2C0h]
  unsigned int *v34; // [rsp+80h] [rbp-2A8h] BYREF
  __int128 v35; // [rsp+88h] [rbp-2A0h]
  __int64 v36; // [rsp+98h] [rbp-290h]
  char v37; // [rsp+A0h] [rbp-288h]
  __int64 (__fastcall **v38)(); // [rsp+B0h] [rbp-278h] BYREF
  void *v39; // [rsp+B8h] [rbp-270h]
  __int128 v40; // [rsp+C0h] [rbp-268h]
  __int64 v41; // [rsp+D0h] [rbp-258h]
  int v42; // [rsp+D8h] [rbp-250h]
  _OWORD v43[2]; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v44; // [rsp+100h] [rbp-228h]
  int v45; // [rsp+108h] [rbp-220h]
  char v46; // [rsp+10Ch] [rbp-21Ch]
  __int64 v47; // [rsp+110h] [rbp-218h]
  char v48; // [rsp+118h] [rbp-210h]
  __int64 v49; // [rsp+128h] [rbp-200h]
  __int128 v50; // [rsp+130h] [rbp-1F8h]
  __m128i si128; // [rsp+140h] [rbp-1E8h]
  char v52; // [rsp+150h] [rbp-1D8h]
  __m128i v53; // [rsp+158h] [rbp-1D0h]
  __int64 v54; // [rsp+168h] [rbp-1C0h]
  __int128 v55; // [rsp+170h] [rbp-1B8h]
  __int16 v56; // [rsp+180h] [rbp-1A8h]
  __int64 v57; // [rsp+1A8h] [rbp-180h]
  __int128 v58; // [rsp+1B0h] [rbp-178h]
  __int64 v59; // [rsp+1C0h] [rbp-168h]
  __int128 v60; // [rsp+1C8h] [rbp-160h]
  __int64 v61; // [rsp+1D8h] [rbp-150h]
  __int128 v62; // [rsp+1E0h] [rbp-148h]
  __int64 v63; // [rsp+1F0h] [rbp-138h]
  __int128 v64; // [rsp+1F8h] [rbp-130h]
  __int64 v65; // [rsp+208h] [rbp-120h]
  __int128 v66; // [rsp+210h] [rbp-118h]
  __int64 v67; // [rsp+220h] [rbp-108h]
  __int128 v68; // [rsp+228h] [rbp-100h]
  __int64 v69; // [rsp+238h] [rbp-F0h]
  __int128 v70; // [rsp+240h] [rbp-E8h]
  __int64 v71; // [rsp+250h] [rbp-D8h]
  __int128 v72; // [rsp+258h] [rbp-D0h]
  __int64 v73; // [rsp+268h] [rbp-C0h]
  __int128 v74; // [rsp+270h] [rbp-B8h]
  __int64 v75; // [rsp+280h] [rbp-A8h]
  __int128 v76; // [rsp+288h] [rbp-A0h]
  __int16 v77; // [rsp+298h] [rbp-90h]
  char v78; // [rsp+29Ah] [rbp-8Eh]
  int v79; // [rsp+29Ch] [rbp-8Ch]
  __int128 v80; // [rsp+2A0h] [rbp-88h]
  __int64 v81; // [rsp+2B0h] [rbp-78h]
  __int64 v82; // [rsp+2B8h] [rbp-70h]
  int v83; // [rsp+2C0h] [rbp-68h]
  __int64 v84; // [rsp+2C8h] [rbp-60h]
  __int128 v85; // [rsp+2D0h] [rbp-58h]
  __int64 v86; // [rsp+2E0h] [rbp-48h]
  unsigned __int64 v87; // [rsp+2E8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  sub_19440((__int64)"Collecting dyld symbol data");
  v26 = a1 + 13592;
  if ( (unsigned __int8)netnode_check() )
  {
    memset(v43, 0, sizeof(v43));
    v4 = (__int64 (__fastcall ***)())v43;
    LOBYTE(v44) = 0;
    if ( (unsigned __int8)sub_33480(a2, (__int64 *)v43) )
    {
      v4 = (__int64 (__fastcall ***)())v43;
      sub_24880(a1, (unsigned int **)v43, -1);
    }
    if ( (_BYTE)v44 && *((_QWORD *)&v43[1] + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43[1] + 1) + 8LL))(*((_QWORD *)&v43[1] + 1));
    if ( *(_QWORD *)&v43[0] )
      qfree();
    v6 = *(_QWORD *)(a2 + 560);
    v34 = nullptr;
    v36 = 0;
    v37 = 0;
    v35 = 0;
    if ( (int)v6 > 0 )
    {
      v7 = 0;
      v24 = (unsigned int)(v6 - 1);
      while ( 1 )
      {
        if ( (unsigned __int8)callui(27, v4, v5) )
          sub_1A260(0, (__int64)v4, v16, v17, v18, v19, v23);
        v4 = (__int64 (__fastcall ***)())v7;
        v20 = sub_1C580(a2, v7);
        if ( !v20 )
          goto LABEL_25;
        v21 = *(_QWORD *)(a2 + 696);
        v22 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&v43[0] = &off_62AA0;
        v4 = nullptr;
        *((_QWORD *)&v43[0] + 1) = v22;
        v44 = -1;
        v45 = 8;
        v46 = 1;
        v47 = v20;
        v48 = 0;
        v49 = 0;
        v52 = 0;
        v54 = 0;
        v56 = 0;
        v57 = 0;
        v59 = 0;
        v61 = 0;
        v63 = 0;
        v65 = 0;
        v67 = 0;
        v43[1] = _mm_load_si128((const __m128i *)&xmmword_574B0);
        v50 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
        v53 = _mm_load_si128((const __m128i *)&xmmword_574C0);
        v55 = 0;
        v58 = 0;
        v60 = 0;
        v62 = 0;
        v64 = 0;
        v66 = 0;
        v68 = 0;
        v69 = 0;
        v71 = 0;
        v73 = 0;
        v75 = 0;
        v77 = 0;
        v78 = 0;
        v79 = 0;
        v81 = 0;
        v82 = v21;
        v83 = 2;
        v84 = 0;
        v86 = a2;
        v70 = 0;
        v72 = 0;
        v74 = 0;
        v76 = 0;
        v80 = -1;
        v85 = 0;
        if ( sub_25BB0((__int64)v43) )
        {
          v4 = nullptr;
          if ( sub_25EF0((__int64)v43, 0, 0, 0) )
          {
            if ( !(_BYTE)v77 )
              sub_28840((__int64)v43);
            v4 = (__int64 (__fastcall ***)())&v29;
            n = (size_t)&v30;
            v30 = 0;
            v31 = 0;
            v29 = _mm_loadh_ps((const double *)&n);
            if ( (unsigned __int8)sub_27280((__int64)v43, (__m128i *)&v29, v8, v9) )
              break;
          }
        }
        sub_162E0((__int64)v43);
        close_linput();
        v15 = v7 + 1;
        if ( v24 == v7 )
        {
LABEL_31:
          if ( v37 && v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
          if ( v34 )
          {
            *(_QWORD *)&v35 = 0;
            qfree();
          }
          return v87 - __readfsqword(0x28u);
        }
LABEL_26:
        v7 = v15;
      }
      if ( v36 )
      {
        if ( v34 )
        {
          *(_QWORD *)&v35 = 0;
          qfree();
          v34 = nullptr;
          *((_QWORD *)&v35 + 1) = 0;
        }
        sub_33590((__int64)v43, n, (__int64 *)&v34);
      }
      else
      {
        sub_33800(v43, (__int64)&v34, (__int64 (*)())((char *)&dword_0 + 1), v10);
      }
      LODWORD(n) = v7;
      sub_24880(a1, &v34, v7);
      v11 = (void *)qbasename();
      v32 = nullptr;
      v13 = v11;
      v33 = 0;
      if ( v11 )
      {
        src = v11;
        n = strlen((const char *)v11);
        v27 = n + 1;
        v32 = (void *)qvector_reserve();
        *(_QWORD *)&v33 = v27;
        memmove(v32, src, n);
        *((_BYTE *)v32 + n) = 0;
        v13 = v32;
        v14 = v33;
      }
      else
      {
        v14 = 0u;
      }
      v4 = &v38;
      v38 = off_64720;
      v39 = v13;
      v40 = v14;
      v41 = v26;
      v42 = v7;
      sub_38280((__int64)v43, (__int64)&v38, v14, v12);
      v38 = off_62A78;
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree();
      }
      sub_162E0((__int64)v43);
      close_linput();
LABEL_25:
      v15 = v7 + 1;
      if ( v24 == v7 )
        goto LABEL_31;
      goto LABEL_26;
    }
  }
  return v87 - __readfsqword(0x28u);
}

