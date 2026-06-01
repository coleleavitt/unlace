__int64 __fastcall ida_mcp::tools::segments::`anonymous namespace'::enumerate_macho_sections(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        int a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        int a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
        int a36,
        int a37,
        __int64 a38,
        __int64 a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        char a56,
        int a57,
        int a58,
        int a59,
        char a60,
        int a61,
        int a62,
        char a63,
        int a64,
        int a65,
        char a66,
        int a67,
        int a68,
        char a69,
        int a70,
        int a71,
        char a72,
        int a73,
        int a74,
        char a75,
        int a76,
        int a77,
        char a78,
        int a79,
        int a80,
        char a81,
        int a82,
        int a83,
        char a84,
        int a85,
        int a86,
        char a87,
        char a88,
        int a89,
        char a90,
        int a91,
        int a92,
        int a93,
        int a94,
        int a95,
        int a96,
        int a97,
        int a98,
        int a99,
        int a100,
        int a101,
        int a102,
        int a103,
        int a104,
        char a105,
        int a106,
        int a107,
        int a108,
        int a109,
        int a110,
        int a111,
        int a112,
        int a113,
        int a114,
        int a115,
        int a116,
        int a117,
        int a118,
        int a119,
        int a120,
        int a121,
        int a122,
        int a123,
        int a124,
        int a125,
        int a126,
        int a127,
        int a128,
        int a129,
        int a130,
        int a131,
        int a132,
        int a133,
        int a134,
        int a135,
        int a136,
        int a137,
        int a138,
        int a139,
        int a140,
        int a141,
        int a142,
        int a143,
        int a144,
        int a145,
        int a146,
        int a147,
        int a148,
        int a149,
        int a150,
        int a151,
        int a152,
        int a153,
        int a154,
        int a155,
        int a156,
        int a157,
        int a158,
        int a159,
        int a160,
        int a161,
        int a162,
        int a163,
        int a164,
        int a165,
        int a166,
        int a167,
        int a168,
        int a169,
        int a170,
        int a171,
        int a172,
        int a173,
        int a174,
        int a175,
        int a176,
        int a177,
        int a178,
        int a179,
        int a180,
        __int64 a181)
{
  const char *v181; // rbp
  const char **v182; // rbx
  size_t v183; // r12
  size_t v184; // rax
  size_t v185; // r12
  __int64 v186; // rax
  size_t v187; // r13
  char *v188; // rsi
  __int64 v189; // r12
  __int64 v190; // r14
  unsigned __int64 v191; // r15
  const char *v192; // r13
  size_t v193; // rax
  __int64 v194; // r14
  size_t v195; // r12
  void *v196; // rax
  size_t v197; // r14
  char *v198; // rsi
  __int64 v199; // r12
  size_t v200; // rdx
  _QWORD *segm_by_name; // r12
  __int64 v203; // rax
  __int64 *v204; // rax
  void *v205; // r15
  __int64 *v206; // r14
  size_t v207; // rax
  size_t v208; // rcx
  __int64 v209; // rax
  const char *v210; // r14
  __int64 *v211; // rax
  void *v212; // r15
  __int64 *v213; // r13
  size_t v214; // rax
  size_t v215; // rcx
  __int64 v216; // rax
  size_t v217; // rax
  unsigned int v218; // r15d
  _QWORD *v219; // rdx
  __int64 v220; // rax
  _QWORD *v221; // rdx
  __int64 v222; // rcx
  size_t v223; // rsi
  __int64 v224; // rax
  size_t v225; // rax
  unsigned int v226; // ecx
  _QWORD *v227; // rdx
  __int64 v228; // rax
  _QWORD *v229; // rdx
  __int64 v230; // rcx
  size_t v231; // rsi
  __int64 v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rdi
  __int8 v238; // si
  __int64 v239; // rax
  int *v240; // rbp
  size_t v241; // r13
  __int64 v242; // rax
  __int64 v243; // rax
  _DWORD *v244; // rax
  unsigned __int64 v245; // rcx
  char *v246; // rax
  char *v247; // r14
  unsigned int v248; // r15d
  unsigned int v249; // r15d
  unsigned int v250; // eax
  __int64 v251; // rdx
  _DWORD *v252; // rax
  unsigned __int64 v253; // rsi
  char *v254; // rax
  char *v255; // r15
  unsigned int v256; // ecx
  unsigned int v257; // ecx
  unsigned int v258; // eax
  __int64 v259; // rdx
  unsigned int v260; // edi
  unsigned __int64 v261; // r8
  unsigned __int64 v262; // rcx
  char *v263; // r9
  unsigned int v264; // edx
  unsigned int v265; // ecx
  __int64 v266; // rdi
  unsigned int v267; // edi
  unsigned __int64 v268; // r8
  unsigned __int64 v269; // rcx
  char *v270; // r9
  unsigned int v271; // edx
  unsigned int v272; // ecx
  __int64 v273; // rdi
  __int64 v274; // rdi
  __int64 v275; // rax
  __int64 v276; // rax
  void **v277; // [rsp+10h] [rbp-5A8h]
  int v279[2]; // [rsp+20h] [rbp-598h]
  int v280[2]; // [rsp+30h] [rbp-588h]
  unsigned int v281; // [rsp+48h] [rbp-570h]
  char *v282; // [rsp+E0h] [rbp-4D8h]
  __int128 v283; // [rsp+E8h] [rbp-4D0h]
  __m128i src[2]; // [rsp+100h] [rbp-4B8h] BYREF
  __m128i v285; // [rsp+120h] [rbp-498h] BYREF
  void *s1; // [rsp+130h] [rbp-488h] BYREF
  size_t n; // [rsp+138h] [rbp-480h]
  _QWORD v288[2]; // [rsp+140h] [rbp-478h] BYREF
  void *v289; // [rsp+150h] [rbp-468h]
  size_t v290; // [rsp+158h] [rbp-460h]
  _QWORD v291[2]; // [rsp+160h] [rbp-458h] BYREF
  void *v292; // [rsp+170h] [rbp-448h]
  size_t v293; // [rsp+178h] [rbp-440h]
  _QWORD v294[6]; // [rsp+180h] [rbp-438h] BYREF
  char v295; // [rsp+1B0h] [rbp-408h] BYREF
  int v296[4]; // [rsp+1B8h] [rbp-400h]
  char v297; // [rsp+1C8h] [rbp-3F0h]
  char v298[16]; // [rsp+1D0h] [rbp-3E8h]
  char v299; // [rsp+1E0h] [rbp-3D8h] BYREF
  __int128 v300; // [rsp+1E8h] [rbp-3D0h]
  char v301; // [rsp+1F8h] [rbp-3C0h]
  __int128 v302; // [rsp+200h] [rbp-3B8h]
  char v303; // [rsp+210h] [rbp-3A8h] BYREF
  int v304[4]; // [rsp+218h] [rbp-3A0h]
  char v305; // [rsp+228h] [rbp-390h]
  int v306[4]; // [rsp+230h] [rbp-388h]
  char v307; // [rsp+240h] [rbp-378h] BYREF
  int v308[4]; // [rsp+248h] [rbp-370h]
  char v309; // [rsp+258h] [rbp-360h]
  __int128 v310; // [rsp+260h] [rbp-358h]
  char v311; // [rsp+270h] [rbp-348h] BYREF
  int v312[4]; // [rsp+278h] [rbp-340h]
  char v313; // [rsp+288h] [rbp-330h]
  __int64 v314; // [rsp+290h] [rbp-328h]
  __int64 v315; // [rsp+298h] [rbp-320h]
  int v316[4]; // [rsp+2A0h] [rbp-318h] BYREF
  __int64 v317; // [rsp+2B0h] [rbp-308h]
  _QWORD v318[3]; // [rsp+2B8h] [rbp-300h] BYREF
  _QWORD v319[3]; // [rsp+2D0h] [rbp-2E8h] BYREF
  _QWORD v320[3]; // [rsp+2E8h] [rbp-2D0h] BYREF
  _QWORD v321[3]; // [rsp+300h] [rbp-2B8h] BYREF
  char v322; // [rsp+318h] [rbp-2A0h] BYREF
  _OWORD v323[12]; // [rsp+320h] [rbp-298h] BYREF
  char v324[336]; // [rsp+3E0h] [rbp-1D8h] BYREF
  char s[24]; // [rsp+530h] [rbp-88h] BYREF
  _BYTE v326[8]; // [rsp+548h] [rbp-70h]
  char v327[40]; // [rsp+550h] [rbp-68h] BYREF
  unsigned __int64 v328; // [rsp+578h] [rbp-40h]

  v328 = __readfsqword(0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  get_segm_name();
  s1 = v288;
  n = 0;
  LOBYTE(v288[0]) = 0;
  qmemcpy(v324, off_4489C0, sizeof(v324));
  v323[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"__TEXT", (__m128i)(unsigned __int64)"__swift5_typeref");
  v323[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_443340), (__m128i)(unsigned __int64)"__TEXT");
  v323[2] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_443348),
              (__m128i)(unsigned __int64)"Swift reflection strings");
  v323[3] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"__TEXT", (__m128i)(unsigned __int64)"__swift5_fieldmd");
  v323[4] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_443350), (__m128i)(unsigned __int64)"__TEXT");
  v323[5] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_443358),
              (__m128i)(unsigned __int64)"Swift associated types");
  v323[6] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"__TEXT", (__m128i)(unsigned __int64)"__swift5_proto");
  v323[7] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_443360), (__m128i)(unsigned __int64)"__TEXT");
  v323[8] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_443368),
              (__m128i)(unsigned __int64)"Swift type metadata");
  v323[9] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)&off_443370),
              (__m128i)(unsigned __int64)"__swift5_capture");
  v323[10] = (unsigned __int64)"Swift capture descriptors";
  v323[11] = 0;
  v277 = (void **)&v285;
  v285 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v324, (__m128i)(unsigned __int64)v323);
  do
  {
    v181 = *(const char **)*v277;
    v182 = (const char **)((char *)*v277 + 24);
    if ( v181 )
    {
      while ( 1 )
      {
        v183 = n;
        if ( v183 != strlen(v181) || v183 && memcmp(s1, v181, v183) )
          goto LABEL_4;
        v282 = nullptr;
        v283 = 0;
        v184 = strlen(v181);
        v185 = v184;
        if ( v184 )
        {
          v241 = v184 + 1;
          v282 = (char *)qvector_reserve();
          *(_QWORD *)&v283 = v241;
          memmove(v282, v181, v185);
          v282[v185] = 0;
        }
        memset(src, 0, 24);
        src[0].m128i_i64[0] = qvector_reserve();
        src[0].m128i_i64[1] = 2;
        *(_BYTE *)src[0].m128i_i64[0] = 44;
        *(_BYTE *)(src[0].m128i_i64[0] + 1) = 0;
        v186 = (src[0].m128i_i64[1] == 0) + src[0].m128i_i64[1] - 1;
        v187 = v186;
        if ( (src[0].m128i_i64[1] == 0) + src[0].m128i_i64[1] != 1 )
        {
          v188 = v282;
          v189 = ((_QWORD)v283 == 0) + (_QWORD)v283 - 1LL;
          v190 = v186 + v189;
          v191 = v186 + ((_QWORD)v283 == 0) + (_QWORD)v283;
          if ( *((_QWORD *)&v283 + 1) < v191 )
          {
            v282 = (char *)qvector_reserve();
            v188 = v282;
          }
          *(_QWORD *)&v283 = v191;
          v188[v190] = 0;
          memcpy(&v282[v189], (const void *)src[0].m128i_i64[0], v187);
        }
        if ( src[0].m128i_i64[0] )
        {
          src[0].m128i_i64[1] = 0;
          qfree();
        }
        v192 = *(v182 - 2);
        memset(src, 0, 24);
        if ( v192 )
        {
          v193 = strlen(v192);
          v194 = v193 + 1;
          v195 = v193;
          v196 = (void *)qvector_reserve();
          src[0].m128i_i64[1] = v194;
          src[0].m128i_i64[0] = (__int64)v196;
          memmove(v196, v192, v195);
          *(_BYTE *)(src[0].m128i_i64[0] + v195) = 0;
          v197 = (src[0].m128i_i64[1] == 0) + src[0].m128i_i64[1] - 1;
          if ( (src[0].m128i_i64[1] == 0) + src[0].m128i_i64[1] != 1 )
          {
            v198 = v282;
            v199 = ((_QWORD)v283 == 0) + (_QWORD)v283 - 1LL;
            v200 = v197 + ((_QWORD)v283 == 0) + (_QWORD)v283;
            if ( *((_QWORD *)&v283 + 1) < v200 )
            {
              v282 = (char *)qvector_reserve();
              v198 = v282;
            }
            v198[v197 + v199] = 0;
            memcpy(&v282[v199], (const void *)src[0].m128i_i64[0], v197);
          }
          if ( src[0].m128i_i64[0] )
          {
            src[0].m128i_i64[1] = 0;
            qfree();
          }
        }
        segm_by_name = (_QWORD *)get_segm_by_name();
        if ( segm_by_name )
          break;
LABEL_24:
        if ( v282 )
        {
          v182 += 3;
          qfree();
          v181 = *(v182 - 3);
          if ( !v181 )
            goto LABEL_26;
        }
        else
        {
LABEL_4:
          v181 = *v182;
          v182 += 3;
          if ( !v181 )
            goto LABEL_26;
        }
      }
      v295 = 0;
      *(_QWORD *)v296 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v295 = 3;
      v203 = operator new(0x20u);
      *(_QWORD *)v203 = v203 + 16;
      strcpy((char *)(v203 + 16), "section_name");
      *(_QWORD *)(v203 + 8) = 12;
      v297 = 0;
      *(_QWORD *)v298 = 0;
      *(_OWORD *)v296 = (unsigned __int64)v203;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v297 = 3;
      v204 = (__int64 *)operator new(0x20u);
      v205 = v204 + 2;
      v206 = v204;
      *v204 = (__int64)(v204 + 2);
      if ( !v192 )
        JUMPOUT(0x5C09E);
      v207 = strlen(v192);
      src[0].m128i_i64[0] = v207;
      v208 = v207;
      if ( v207 > 0xF )
      {
        *(_QWORD *)v279 = v207;
        v242 = std::string::_M_create();
        *v206 = v242;
        v205 = (void *)v242;
        v208 = *(_QWORD *)v279;
        v206[2] = src[0].m128i_i64[0];
      }
      else
      {
        if ( v207 == 1 )
        {
          *((_BYTE *)v206 + 16) = *v192;
          goto LABEL_34;
        }
        if ( !v207 )
          goto LABEL_34;
      }
      memcpy(v205, v192, v208);
      v207 = src[0].m128i_i64[0];
      v205 = (void *)*v206;
LABEL_34:
      v206[1] = v207;
      *((_BYTE *)v205 + v207) = 0;
      *(_OWORD *)v298 = (unsigned __int64)v206;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v316,
        (const __m128i *)&v295);
      v317 = 0;
      v299 = 0;
      *(_QWORD *)&v300 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v299 = 3;
      v209 = operator new(0x20u);
      *(_QWORD *)v209 = v209 + 16;
      strcpy((char *)(v209 + 16), "description");
      *(_QWORD *)(v209 + 8) = 11;
      v301 = 0;
      *(_QWORD *)&v302 = 0;
      v300 = (unsigned __int64)v209;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v301 = 3;
      v210 = *(v182 - 1);
      v211 = (__int64 *)operator new(0x20u);
      v212 = v211 + 2;
      v213 = v211;
      *v211 = (__int64)(v211 + 2);
      if ( !v210 )
        JUMPOUT(0x5C120);
      v214 = strlen(v210);
      src[0].m128i_i64[0] = v214;
      v215 = v214;
      if ( v214 > 0xF )
      {
        *(_QWORD *)v280 = v214;
        v243 = std::string::_M_create();
        *v213 = v243;
        v212 = (void *)v243;
        v215 = *(_QWORD *)v280;
        v213[2] = src[0].m128i_i64[0];
      }
      else
      {
        if ( v214 == 1 )
        {
          *((_BYTE *)v213 + 16) = *v210;
          goto LABEL_38;
        }
        if ( !v214 )
          goto LABEL_38;
      }
      memcpy(v212, v210, v215);
      v214 = src[0].m128i_i64[0];
      v212 = (void *)*v213;
LABEL_38:
      v213[1] = v214;
      *((_BYTE *)v212 + v214) = 0;
      v302 = (unsigned __int64)v213;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v318,
        (const __m128i *)&v299);
      v318[2] = 0;
      v303 = 0;
      *(_QWORD *)v304 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v303 = 3;
      v216 = operator new(0x20u);
      *(_DWORD *)(v216 + 16) = 1918989427;
      *(_QWORD *)v216 = v216 + 16;
      *(_BYTE *)(v216 + 20) = 116;
      *(_BYTE *)(v216 + 21) = 0;
      *(_QWORD *)(v216 + 8) = 5;
      *(_OWORD *)v304 = (unsigned __int64)v216;
      qsnprintf();
      v289 = v291;
      v217 = strlen(s);
      src[0].m128i_i64[0] = v217;
      v218 = v217;
      if ( v217 > 0xF )
      {
        v244 = (_DWORD *)std::string::_M_create();
        v289 = v244;
        v291[0] = src[0].m128i_i64[0];
      }
      else
      {
        if ( v217 == 1 )
        {
          LOBYTE(v291[0]) = s[0];
          goto LABEL_41;
        }
        if ( !v217 )
        {
LABEL_41:
          v219 = v291;
          goto LABEL_42;
        }
        v244 = v291;
      }
      if ( v218 < 8 )
      {
        if ( (v218 & 4) != 0 )
        {
          *v244 = *(_DWORD *)s;
          *(_DWORD *)((char *)v244 + v218 - 4) = *(_DWORD *)&v324[v218 + 332];
        }
        else if ( v218 )
        {
          *(_BYTE *)v244 = s[0];
          if ( (v218 & 2) != 0 )
            *(_WORD *)((char *)v244 + v218 - 2) = *(_WORD *)&v324[v218 + 334];
        }
      }
      else
      {
        *(_QWORD *)v244 = *(_QWORD *)s;
        *(_QWORD *)((char *)v244 + v218 - 8) = *(_QWORD *)&v324[v218 + 328];
        v245 = (unsigned __int64)(v244 + 2) & 0xFFFFFFFFFFFFFFF8LL;
        v246 = (char *)v244 - v245;
        v247 = (char *)(s - v246);
        v248 = ((_DWORD)v246 + v218) & 0xFFFFFFF8;
        if ( v248 >= 8 )
        {
          v249 = v248 & 0xFFFFFFF8;
          v250 = 0;
          do
          {
            v251 = v250;
            v250 += 8;
            *(_QWORD *)(v245 + v251) = *(_QWORD *)&v247[v251];
          }
          while ( v250 < v249 );
        }
      }
      v217 = src[0].m128i_i64[0];
      v219 = v289;
LABEL_42:
      v290 = v217;
      *((_BYTE *)v219 + v217) = 0;
      v305 = 0;
      *(_QWORD *)v306 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v305 = 3;
      v220 = operator new(0x20u);
      v221 = v289;
      v222 = v220 + 16;
      v223 = v290;
      *(_QWORD *)v220 = v220 + 16;
      if ( v221 == v291 )
      {
        v267 = v223 + 1;
        if ( (unsigned int)(v223 + 1) < 8 )
        {
          if ( (v267 & 4) != 0 )
          {
            *(_DWORD *)(v220 + 16) = v291[0];
            *(_DWORD *)(v222 + v267 - 4) = *(_DWORD *)((char *)&v290 + v267 + 4);
          }
          else if ( (_DWORD)v223 != -1 )
          {
            *(_BYTE *)(v220 + 16) = v291[0];
            if ( (v267 & 2) != 0 )
              *(_WORD *)(v222 + v267 - 2) = *(_WORD *)((char *)&v290 + v267 + 6);
          }
        }
        else
        {
          *(_QWORD *)(v220 + 16) = v291[0];
          *(_QWORD *)(v222 + v267 - 8) = *(_QWORD *)((char *)&v291[-1] + v267);
          v268 = (v220 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          v269 = v222 - v268;
          v270 = (char *)v291 - v269;
          if ( (((_DWORD)v269 + v267) & 0xFFFFFFF8) >= 8 )
          {
            v271 = (v269 + v267) & 0xFFFFFFF8;
            v272 = 0;
            do
            {
              v273 = v272;
              v272 += 8;
              *(_QWORD *)(v268 + v273) = *(_QWORD *)&v270[v273];
            }
            while ( v272 < v271 );
          }
        }
      }
      else
      {
        *(_QWORD *)v220 = v221;
        *(_QWORD *)(v220 + 16) = v291[0];
      }
      *(_QWORD *)(v220 + 8) = v223;
      v289 = v291;
      v290 = 0;
      LOBYTE(v291[0]) = 0;
      *(_OWORD *)v306 = (unsigned __int64)v220;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v319,
        (const __m128i *)&v303);
      v319[2] = 0;
      v307 = 0;
      *(_QWORD *)v308 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v307 = 3;
      v224 = operator new(0x20u);
      *(_BYTE *)(v224 + 18) = 100;
      *(_QWORD *)v224 = v224 + 16;
      *(_WORD *)(v224 + 16) = 28261;
      *(_BYTE *)(v224 + 19) = 0;
      *(_QWORD *)(v224 + 8) = 3;
      *(_OWORD *)v308 = (unsigned __int64)v224;
      qsnprintf();
      v292 = v294;
      v225 = strlen(v327);
      src[0].m128i_i64[0] = v225;
      v226 = v225;
      if ( v225 > 0xF )
      {
        v281 = v225;
        v252 = (_DWORD *)std::string::_M_create();
        v292 = v252;
        v226 = v281;
        v294[0] = src[0].m128i_i64[0];
      }
      else
      {
        if ( v225 == 1 )
        {
          LOBYTE(v294[0]) = v327[0];
          goto LABEL_47;
        }
        if ( !v225 )
        {
LABEL_47:
          v227 = v294;
          goto LABEL_48;
        }
        v252 = v294;
      }
      if ( v226 < 8 )
      {
        if ( (v226 & 4) != 0 )
        {
          *v252 = *(_DWORD *)v327;
          *(_DWORD *)((char *)v252 + v226 - 4) = *(_DWORD *)&v326[v226 + 4];
        }
        else if ( v226 )
        {
          *(_BYTE *)v252 = v327[0];
          if ( (v226 & 2) != 0 )
            *(_WORD *)((char *)v252 + v226 - 2) = *(_WORD *)&v326[v226 + 6];
        }
      }
      else
      {
        *(_QWORD *)v252 = *(_QWORD *)v327;
        *(_QWORD *)((char *)v252 + v226 - 8) = *(_QWORD *)&v326[v226];
        v253 = (unsigned __int64)(v252 + 2) & 0xFFFFFFFFFFFFFFF8LL;
        v254 = (char *)v252 - v253;
        v255 = (char *)(v327 - v254);
        v256 = ((_DWORD)v254 + v226) & 0xFFFFFFF8;
        if ( v256 >= 8 )
        {
          v257 = v256 & 0xFFFFFFF8;
          v258 = 0;
          do
          {
            v259 = v258;
            v258 += 8;
            *(_QWORD *)(v253 + v259) = *(_QWORD *)&v255[v259];
          }
          while ( v258 < v257 );
        }
      }
      v225 = src[0].m128i_i64[0];
      v227 = v292;
LABEL_48:
      v293 = v225;
      *((_BYTE *)v227 + v225) = 0;
      v309 = 0;
      *(_QWORD *)&v310 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v309 = 3;
      v228 = operator new(0x20u);
      v229 = v292;
      v230 = v228 + 16;
      v231 = v293;
      *(_QWORD *)v228 = v228 + 16;
      if ( v229 == v294 )
      {
        v260 = v231 + 1;
        if ( (unsigned int)(v231 + 1) < 8 )
        {
          if ( (v260 & 4) != 0 )
          {
            *(_DWORD *)(v228 + 16) = v294[0];
            *(_DWORD *)(v230 + v260 - 4) = *(_DWORD *)((char *)&v293 + v260 + 4);
          }
          else if ( (_DWORD)v231 != -1 )
          {
            *(_BYTE *)(v228 + 16) = v294[0];
            if ( (v260 & 2) != 0 )
              *(_WORD *)(v230 + v260 - 2) = *(_WORD *)((char *)&v293 + v260 + 6);
          }
        }
        else
        {
          *(_QWORD *)(v228 + 16) = v294[0];
          *(_QWORD *)(v230 + v260 - 8) = *(_QWORD *)((char *)&v294[-1] + v260);
          v261 = (v228 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          v262 = v230 - v261;
          v263 = (char *)v294 - v262;
          if ( (((_DWORD)v262 + v260) & 0xFFFFFFF8) >= 8 )
          {
            v264 = (v262 + v260) & 0xFFFFFFF8;
            v265 = 0;
            do
            {
              v266 = v265;
              v265 += 8;
              *(_QWORD *)(v261 + v266) = *(_QWORD *)&v263[v266];
            }
            while ( v265 < v264 );
          }
        }
      }
      else
      {
        *(_QWORD *)v228 = v229;
        *(_QWORD *)(v228 + 16) = v294[0];
      }
      *(_QWORD *)(v228 + 8) = v231;
      v292 = v294;
      v293 = 0;
      LOBYTE(v294[0]) = 0;
      v310 = (unsigned __int64)v228;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v320,
        (const __m128i *)&v307);
      v320[2] = 0;
      v311 = 0;
      *(_QWORD *)v312 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v311 = 3;
      v232 = operator new(0x20u);
      strcpy((char *)(v232 + 16), "size");
      *(_QWORD *)v232 = v232 + 16;
      *(_QWORD *)(v232 + 8) = 4;
      *(_OWORD *)v312 = (unsigned __int64)v232;
      v314 = segm_by_name[1] - *segm_by_name;
      v313 = 6;
      v315 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v321,
        (const __m128i *)&v311);
      src[0].m128i_i8[0] = 0;
      v321[2] = 0;
      src[0].m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      if ( *(_BYTE *)a1 )
      {
        if ( *(_BYTE *)a1 != 2 )
          ida_mcp::tools::segments::`anonymous namespace'::enumerate_macho_sections(
            (__int64)src,
            (__int64)v316,
            v233,
            v234,
            v235,
            v236,
            a7,
            a8,
            a9,
            a10,
            a11,
            a12,
            a13,
            a14,
            a15,
            a16,
            a17,
            a18,
            a19,
            a20,
            a21,
            a22,
            a23,
            a24,
            a25,
            a26,
            a27,
            a28,
            a29,
            a30,
            a31,
            a32,
            a33,
            a34,
            a35,
            a36,
            a37,
            a38,
            a39,
            a40,
            a41,
            a42,
            a43,
            a44,
            a45,
            a46,
            a47,
            a48,
            a49,
            a50,
            a51,
            a52,
            a53,
            a54,
            a55,
            a56,
            a57,
            a58,
            a59,
            a60,
            a61,
            a62,
            a63,
            a64,
            a65,
            a66,
            a67,
            a68,
            a69,
            a70,
            a71,
            a72,
            a73,
            a74,
            a75,
            a76,
            a77,
            a78,
            a79,
            a80,
            a81,
            a82,
            a83,
            a84,
            a85,
            a86,
            a87,
            a88,
            a89,
            a90,
            a91,
            a92,
            a93,
            a94,
            a95,
            a96,
            a97,
            a98,
            a99,
            a100,
            a101,
            a102,
            a103,
            a104,
            a105,
            a106,
            a107,
            a108,
            a109,
            a110,
            a111,
            a112,
            a113,
            a114,
            a115,
            a116,
            a117,
            a118,
            a119,
            a120,
            a121,
            a122,
            a123,
            a124,
            a125,
            a126,
            a127,
            a128,
            a129,
            a130,
            a131,
            a132,
            a133,
            a134,
            a135,
            a136,
            a137,
            a138,
            a139,
            a140,
            a141,
            a142,
            a143,
            a144,
            a145,
            a146,
            a147,
            a148,
            a149,
            a150,
            a151,
            a152,
            a153,
            a154,
            a155,
            a156,
            a157,
            a158,
            a159,
            a160,
            a161,
            a162,
            a163,
            a164,
            a165,
            a166,
            a167,
            a168,
            a169,
            a170,
            a171,
            a172,
            a173,
            a174,
            a175,
            a176,
            a177,
            a178,
            a179,
            a180,
            a181);
        v274 = *(_QWORD *)(a1 + 8);
        v275 = *(_QWORD *)(v274 + 8);
        if ( *(_QWORD *)(v274 + 16) != v275 )
        {
          v276 = v275 + 16;
          v238 = 0;
          *(__m128i *)(v276 - 16) = _mm_load_si128(src);
          *(_QWORD *)(v274 + 8) = v276;
          v239 = 0;
LABEL_53:
          src[0].m128i_i8[0] = v238;
          v240 = (int *)&v322;
          src[0].m128i_i64[1] = v239;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          do
          {
            v240 -= 6;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          while ( v240 != v316 );
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v292 != v294 )
            operator delete(v292, v294[0] + 1LL);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v289 != v291 )
            operator delete(v289, v291[0] + 1LL);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_24;
        }
      }
      else
      {
        *(_BYTE *)a1 = 2;
        v237 = operator new(0x18u);
        *(_QWORD *)(v237 + 16) = 0;
        *(_OWORD *)v237 = 0;
        *(_QWORD *)(a1 + 8) = v237;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v238 = src[0].m128i_i8[0];
      v239 = src[0].m128i_i64[1];
      goto LABEL_53;
    }
LABEL_26:
    ++v277;
  }
  while ( &s1 != v277 );
  if ( s1 != v288 )
    operator delete(s1, v288[0] + 1LL);
  return a1;
}

