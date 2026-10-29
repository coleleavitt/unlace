__int64 sub_33C6A0()
{
  __int64 v0; // rbx
  __m128i si128; // xmm0
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  const char *v5; // rsi
  __int64 v6; // rbp
  char *v7; // r12
  __int64 v8; // r13
  time_t v9; // rax
  __int64 v10; // rdx
  time_t v11; // r15
  time_t v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  __int64 result; // rax
  char v19; // dl
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 (__fastcall *v26)(__int64, __int64); // rax
  __int64 v27; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  const char *v29; // [rsp+10h] [rbp-58h] BYREF
  __int128 v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v0 = qalloc_or_throw();
  *(_QWORD *)(v0 + 8) = get_ph();
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_OWORD *)(v0 + 32) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
  *(_QWORD *)v0 = off_4C4398;
  *(__m128i *)(v0 + 96) = si128;
  *(_QWORD *)(v0 + 112) = sub_3F2A70(v0);
  *(_WORD *)(v0 + 136) = 0;
  *(_QWORD *)(v0 + 120) = 0;
  *(_QWORD *)(v0 + 128) = 0;
  *(_QWORD *)(v0 + 140) = 0;
  *(_BYTE *)(v0 + 148) = 0;
  *(_DWORD *)(v0 + 152) = 0;
  *(_QWORD *)(v0 + 160) = 0;
  *(_DWORD *)(v0 + 184) = 0;
  *(_QWORD *)(v0 + 192) = 0;
  *(_QWORD *)(v0 + 200) = 0;
  *(_QWORD *)(v0 + 368) = 0;
  *(_OWORD *)(v0 + 168) = 0;
  memset(
    (void *)((v0 + 208) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 208) & 0xFFFFFFF8) + 376) >> 3));
  *(_QWORD *)(v0 + 424) = 0;
  *(_QWORD *)(v0 + 448) = 0;
  *(_QWORD *)(v0 + 464) = 0;
  *(_QWORD *)(v0 + 456) = &off_4C7818;
  *(_QWORD *)(v0 + 480) = &off_4C42C0;
  *(_QWORD *)(v0 + 504) = off_4C42E8;
  *(_QWORD *)(v0 + 472) = v0;
  *(_QWORD *)(v0 + 488) = 0;
  *(_QWORD *)(v0 + 496) = v0;
  *(_QWORD *)(v0 + 512) = 0;
  *(_QWORD *)(v0 + 520) = v0;
  *(_QWORD *)(v0 + 536) = 0;
  *(_OWORD *)(v0 + 376) = 0;
  *(_OWORD *)(v0 + 392) = 0;
  *(_OWORD *)(v0 + 408) = -1;
  *(_OWORD *)(v0 + 432) = 0;
  *(_QWORD *)(v0 + 528) = &off_4C7270;
  *(_QWORD *)(v0 + 544) = v0;
  *(_QWORD *)(v0 + 552) = off_4C4310;
  *(_QWORD *)(v0 + 560) = v0;
  sub_3258B0(v0 + 568);
  *(_QWORD *)(v0 + 768) = sub_B7450(0.0, NAN);
  *(_QWORD *)(v0 + 776) = sub_CC1D0();
  *(_QWORD *)(v0 + 784) = sub_3F7970(v0);
  *(_QWORD *)(v0 + 792) = sub_1333F0(v0);
  *(_QWORD *)(v0 + 800) = sub_359BC0(v0);
  *(_QWORD *)(v0 + 808) = sub_274BB0();
  *(_QWORD *)(v0 + 816) = sub_25BB80();
  *(_QWORD *)(v0 + 824) = sub_23B1E0();
  *(_QWORD *)(v0 + 832) = sub_1D17E0();
  v2 = operator new(0x120u);
  *(_QWORD *)v2 = 0;
  *(_OWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 286) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 278) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  memset(
    (void *)((v2 + 64) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v2 - (((_DWORD)v2 + 64) & 0xFFFFFFF8) + 286) >> 3));
  *(_QWORD *)(v0 + 840) = v2;
  *(_QWORD *)(v0 + 848) = 0;
  *(_QWORD *)(v0 + 872) = 0;
  *(_OWORD *)(v0 + 856) = 0;
  *(_QWORD *)(v0 + 880) = sub_3B9970(v0);
  *(_QWORD *)(v0 + 888) = 0;
  *(_DWORD *)(v0 + 896) = 0;
  *(_QWORD *)(v0 + 904) = 0;
  *(_QWORD *)(v0 + 912) = 0;
  *(_QWORD *)(v0 + 920) = -1;
  *(_QWORD *)(v0 + 928) = 0;
  *(_QWORD *)(v0 + 952) = 0;
  *(_QWORD *)(v0 + 976) = 0;
  *(_QWORD *)(v0 + 1000) = 0;
  *(_OWORD *)(v0 + 936) = 0;
  *(_OWORD *)(v0 + 960) = 0;
  *(_OWORD *)(v0 + 984) = 0;
  *(_QWORD *)(v0 + 1008) = sub_3849A0(v0);
  *(_QWORD *)(v0 + 1016) = sub_3D3750(v0);
  *(_QWORD *)(v0 + 1024) = sub_1A9F20();
  *(_QWORD *)(v0 + 1032) = sub_3F2D80();
  *(_QWORD *)(v0 + 1040) = sub_280470(v0);
  *(_QWORD *)(v0 + 1048) = sub_2804F0(v0);
  *(_QWORD *)(v0 + 1056) = sub_30D290();
  *(_QWORD *)(v0 + 1064) = 0;
  *(_QWORD *)(v0 + 1088) = 0;
  *(_OWORD *)(v0 + 1072) = 0;
  *(_OWORD *)(v0 + 1096) = 0;
  *(_OWORD *)(v0 + 1112) = -1;
  *(_QWORD *)(v0 + 1128) = sub_36F0F0(v0);
  *(_QWORD *)(v0 + 1136) = 0;
  *(_QWORD *)(v0 + 1144) = 0;
  *(_QWORD *)(v0 + 1152) = sub_1DAB70(v0);
  v3 = *(_QWORD *)(v0 + 112);
  *(_QWORD *)(v0 + 1160) = 0;
  *(_QWORD *)(v0 + 1184) = 0;
  *(_QWORD *)(v0 + 1208) = 0;
  *(_QWORD *)(v0 + 1232) = 0;
  *(_QWORD *)(v0 + 1256) = 0;
  *(_QWORD *)(v0 + 1280) = 0;
  *(_QWORD *)(v0 + 1304) = 0;
  *(_QWORD *)(v0 + 1312) = 0;
  *(_QWORD *)(v0 + 1336) = 0;
  *(_OWORD *)(v0 + 1168) = 0;
  *(_OWORD *)(v0 + 1192) = 0;
  *(_OWORD *)(v0 + 1216) = 0;
  *(_OWORD *)(v0 + 1240) = 0;
  *(_OWORD *)(v0 + 1264) = 0;
  *(_OWORD *)(v0 + 1288) = 0;
  *(_OWORD *)(v0 + 1320) = 0;
  *(_OWORD *)(v0 + 1344) = 0;
  *(_QWORD *)(v0 + 1360) = sub_3A0B50(v3);
  *(_QWORD *)(v0 + 1368) = 0;
  *(_OWORD *)(v0 + 1376) = 0;
  *(_QWORD *)(v0 + 1392) = sub_3A8600(v0);
  *(_QWORD *)(v0 + 1400) = sub_3A8650();
  v4 = *(_QWORD *)(v0 + 112);
  *(_WORD *)(v0 + 1424) = 0;
  *(_QWORD *)(v0 + 1408) = 0x100000;
  *(_QWORD *)(v0 + 1416) = 32;
  *(_QWORD *)(v0 + 1432) = 0;
  *(_QWORD *)(v0 + 1440) = 0;
  *(_OWORD *)(v0 + 128) = 0;
  v5 = *(const char **)(v4 + 24);
  qstrncpy();
  v6 = *(_QWORD *)(v0 + 112);
  v7 = *(char **)(v0 + 8);
  if ( *((_DWORD *)v7 + 1) == *(_DWORD *)(v6 + 16) )
  {
    v8 = *(_QWORD *)(v0 + 840);
    sub_33A5E0(v8);
    v9 = time(nullptr);
    v10 = *(int *)(v8 + 80);
    v11 = v9;
    if ( *(_DWORD *)(v8 + 80) )
      goto LABEL_14;
    while ( 1 )
    {
      v12 = *(int *)(v8 + 76);
      if ( (_DWORD)v12 )
      {
LABEL_15:
        if ( v11 >= v12 )
        {
          v5 = "OK";
          if ( (int)sub_338360(
                      (__int64)"https://www.hex-rays.com",
                      (__int64)"OK",
                      (__int64)&unk_3FC793,
                      1u,
                      (__int64)"AUTOHIDE REGISTRY\n"
                               "HIDECANCEL\n"
                               "Sorry, your Hex-Rays license has been expired.\n"
                               "For more information please visit %s",
                      "https://www.hex-rays.com") > 0 )
          {
            v5 = "https://www.hex-rays.com";
            callui(48, "https://www.hex-rays.com", &callui, v14, v15, v16, v27, v28, v29, v30);
          }
          break;
        }
      }
LABEL_4:
      v29 = nullptr;
      v30 = 0;
      v13 = *((_DWORD *)v7 + 1);
      if ( v13 == *(_DWORD *)(v6 + 16) )
      {
        if ( (*(_WORD *)(v6 + 48) & 0x180) == 0 )
        {
          if ( !under_debugger )
            sub_37E160(51195);
          BUG();
        }
        v19 = getinf_flag();
        v20 = 256;
        if ( !v19 )
          v20 = (unsigned __int8)getinf_flag() == 0 ? 64 : 128;
        if ( (*(_DWORD *)(v6 + 48) & v20) != 0 )
        {
          set_module_data();
          if ( (unsigned __int8)sub_33C300(v0) )
          {
            set_hexdsp();
            result = v0;
            if ( v29 )
            {
              *(_QWORD *)&v30 = 0;
              qfree();
              return v0;
            }
            return result;
          }
          if ( v0 )
          {
            v26 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL);
            if ( v26 == sub_339D30 )
            {
              sub_3393A0(v0, v0);
              qfree();
            }
            else
            {
              v26(v0, v0);
            }
          }
          clr_module_data();
          sub_68EA0((__int64)"Hex-Rays: could not initialize processor subsystem\n", v0);
          if ( v29 )
          {
            *(_QWORD *)&v30 = 0;
            qfree();
          }
          return 0;
        }
        v8 = *(_QWORD *)(v6 + 24);
        v7 = (_BYTE *)word_10;
        v25 = getinf() & 6;
        if ( v25 )
        {
          v7 = (char *)&dword_40;
          if ( v25 == 2 )
            v7 = (char *)&qword_20;
        }
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 24);
        v7 = (char *)"ARM64";
        if ( v13 != 13 )
        {
          if ( v13 > 13 )
          {
            v7 = (char *)"PPC64";
            if ( v13 != 15 )
            {
              v7 = "?";
              if ( v13 == 63 )
                v7 = (char *)"ARC";
            }
          }
          else
          {
            v7 = "x64";
            if ( v13 )
            {
              v7 = "?";
              if ( v13 == 12 )
                v7 = (char *)"MIPS64";
            }
          }
        }
      }
      get_path();
      qbasename();
      sub_67670((__int64 *)&v29);
      v5 = nullptr;
      if ( !sub_336500(v6, 0) )
      {
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree();
        }
        break;
      }
      if ( (unsigned __int64)v30 > 1 )
        sub_68EA0((__int64)"%s\n", v29);
      set_database_flag();
      qexit();
LABEL_14:
      v12 = *(int *)(v8 + 76);
      if ( (_DWORD)v12 )
        goto LABEL_15;
      v21 = v10 - v11;
      if ( v21 <= 0 )
      {
        if ( sub_335050((__int64)"SupportExpiredDisplayed", 0) )
        {
          LODWORD(v28) = sub_338360(
                           (__int64)"https://www.hex-rays.com",
                           (__int64)"OK",
                           (__int64)&unk_3FC793,
                           1u,
                           (__int64)"AUTOHIDE REGISTRY\n"
                                    "HIDECANCEL\n"
                                    "The technical support period of the Hex-Rays decompiler\n"
                                    "has expired. You have 3 month grace period to update your license.\n"
                                    "The grace period is counted from the expiration date.\n"
                                    "For more information please visit %s",
                           "https://www.hex-rays.com");
          sub_335050((__int64)"SupportExpiredDisplayed", 1);
          goto LABEL_34;
        }
      }
      else
      {
        if ( v21 > 2591999 )
          goto LABEL_4;
        if ( sub_335050((__int64)"SupportExpiringDisplayed", 0) )
        {
          LODWORD(v28) = sub_338360(
                           (__int64)"https://www.hex-rays.com",
                           (__int64)"OK",
                           (__int64)&unk_3FC793,
                           1u,
                           (__int64)"AUTOHIDE REGISTRY\n"
                                    "HIDECANCEL\n"
                                    "The technical support period of the Hex-Rays decompiler\n"
                                    "will expire soon. Please update your license for\n"
                                    "uninterrupted technical support and updates.\n"
                                    "For more information please visit %s",
                           "https://www.hex-rays.com");
          sub_335050((__int64)"SupportExpiringDisplayed", 1);
LABEL_34:
          if ( (int)v28 > 0 )
            callui(48, "https://www.hex-rays.com", &callui, v22, v23, v24, v27, v28, v29, v30);
        }
      }
    }
  }
  if ( v0 )
  {
    v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL);
    if ( v17 == sub_339D30 )
    {
      sub_3393A0(v0, (__int64)v5);
      qfree();
    }
    else
    {
      v17(v0, (__int64)v5);
    }
  }
  return 0;
}

