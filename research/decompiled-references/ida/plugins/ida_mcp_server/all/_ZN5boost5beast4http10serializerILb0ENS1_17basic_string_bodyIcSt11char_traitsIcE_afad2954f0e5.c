__int64 __fastcall boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::next<boost::beast::http::detail::write_some_lambda<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>> &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  char *v6; // rbp
  __int64 *v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  _BYTE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned __int8 *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // rbp
  unsigned __int8 *v42; // rsi
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r12
  __int64 v46; // rbx
  _QWORD *v47; // r9
  __int64 v48; // r10
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  const __m128i *v54; // rbx
  boost::beast::http *v55; // rdi
  unsigned __int32 v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rax
  __m128i v59; // xmm0
  _OWORD *v60; // rax
  unsigned __int64 *v61; // rax
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // rbx
  __int64 v64; // rax
  __m128i v65; // xmm7
  __int64 v66; // rbp
  __int64 v67; // rdi
  _QWORD *v68; // r12
  __m128i si128; // xmm0
  __int64 v70; // rax
  __m128i v71; // xmm0
  __m128i v72; // xmm1
  __int64 v73; // rax
  __int64 v74; // rdi
  unsigned __int8 *v75; // rdx
  __int64 v76; // rbp
  _QWORD *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // r14
  char *v82; // rcx
  char *mon_name; // rcx
  __int64 v84; // rbp
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // r12
  unsigned __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // r8
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rbp
  __int64 v101; // r12
  __int64 v102; // rbx
  __int64 *v103; // rax
  unsigned __int64 v104; // r14
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rbp
  __int64 v108; // rdi
  __int64 v109; // rax
  char *v110; // r8
  __int64 v111; // r9
  __int64 v112; // rsi
  _BYTE *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rsi
  __m128i v116; // xmm0
  __m128i v117; // xmm0
  unsigned __int64 v118; // rcx
  __m128i v119; // xmm0
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rdi
  unsigned __int8 *v123; // rdx
  unsigned __int8 *v124; // rbp
  __m128i v125; // xmm0
  __m128i v126; // xmm7
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rbp
  char *v130; // rbp
  __int64 v131; // rsi
  __int64 v132; // rdi
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __m128i v138; // xmm2
  unsigned __int64 v139; // r15
  __int64 v140; // rbp
  __int64 v141; // rax
  unsigned __int64 v142; // rdx
  __m128i v143; // xmm5
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // r13
  __int64 v149; // rdx
  __int64 v150; // r9
  __int64 v151; // rsi
  int v152; // edi
  __int64 v153; // r14
  __int64 v154; // r9
  __int64 v155; // rax
  __int64 v156; // rbp
  __int64 v157; // rax
  __int64 v158; // rdi
  __int64 v159; // rbx
  __int64 v160; // r8
  __int64 v161; // rax
  __int64 v162; // rbp
  __int64 v163; // rax
  unsigned __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rbx
  unsigned __int8 *v168; // rdx
  __int64 v169; // rdx
  __int64 v170; // r9
  __int64 v171; // rcx
  __int64 v172; // rbx
  __int64 v173; // rax
  unsigned __int64 v174; // rcx
  __int64 *v175; // rdx
  int v176; // r10d
  __int64 v177; // rsi
  __int64 *v178; // rax
  __int64 *v179; // r12
  __int64 v180; // r11
  __m128i *v181; // r9
  __int64 v182; // rdi
  unsigned __int64 v183; // r8
  __int64 v184; // rbp
  unsigned __int64 v185; // rdx
  unsigned __int64 v186; // r14
  unsigned __int64 v187; // rbp
  unsigned __int64 v188; // rdx
  __int64 v189; // rax
  __int64 v190; // rdx
  __guard *v191; // r12
  __guard *v192; // r8
  __guard *v193; // r14
  char *v194; // rbp
  __int64 *v195; // rbx
  __int64 v196; // rax
  char *v197; // rcx
  char *v198; // rcx
  __int64 v199; // rbp
  __int64 v200; // rax
  __int64 v201; // rdi
  __int64 v202; // rax
  __int64 v203; // rbx
  __int64 v204; // r12
  __int64 v205; // rax
  __int64 v206; // rax
  unsigned __int64 v207; // rdx
  unsigned __int64 v208; // r8
  __int64 v209; // rax
  unsigned __int64 v210; // rdx
  __int64 v211; // rbx
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rbp
  __int64 v215; // r12
  __int64 v216; // rdi
  __int64 v217; // rdi
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rbp
  __m128i v223; // xmm2
  unsigned __int64 v224; // r15
  __int64 v225; // rbp
  __int64 v226; // rax
  unsigned __int64 v227; // rdx
  __m128i v228; // xmm3
  __int64 v229; // rsi
  __int64 v230; // rax
  __int64 v231; // rcx
  __int64 v232; // rdx
  __int64 v233; // r13
  __int64 v234; // r9
  __int64 v235; // rcx
  __int64 v236; // rdi
  __int64 v237; // rax
  __int64 v238; // rbp
  __int64 v239; // rax
  __int64 v240; // rax
  __m128i v241; // xmm2
  __int64 v242; // rbp
  __int64 v243; // rax
  unsigned __int64 v244; // rdx
  __m128i v245; // xmm4
  __int64 v246; // rsi
  __int64 v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rdx
  __int64 v250; // rbp
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 *v253; // r12
  __int64 *v254; // rax
  __int64 v255; // r11
  __m128i *v256; // r9
  unsigned __int64 v257; // r8
  __int64 v258; // rbp
  unsigned __int64 v259; // rdx
  unsigned __int64 v260; // rbp
  unsigned __int64 v261; // r14
  __int64 v262; // rax
  __int64 v263; // rax
  __int64 v264; // rdx
  char *v265; // r8
  __int64 v266; // rdx
  __int64 v267; // rax
  __int64 v268; // rdx
  char *v269; // r8
  __guard *v270; // r12
  __guard *i; // rbx
  __int64 v272; // rbx
  __int64 v273; // rdx
  __int64 v274; // rax
  __int64 v275; // rdx
  __int64 v276; // rax
  __int64 v277; // rdx
  __int64 v278; // rdx
  __guard *v279; // r12
  __guard *v280; // r8
  __guard *v281; // r14
  __int64 v282; // rax
  __int64 v283; // rax
  __guard *v284; // r14
  _BYTE *v285; // r8
  _BYTE *v286; // rbp
  __int64 v287; // rax
  __int64 v288; // rcx
  __int64 v289; // rax
  __int64 v290; // rax
  __int64 v291; // rcx
  char *v292; // r8
  __int64 v293; // rdx
  __guard *v294; // r12
  __guard *v295; // r8
  __guard *v296; // r14
  status v297; // [rsp+0h] [rbp-648h] BYREF
  __m128i v298; // [rsp+20h] [rbp-628h] BYREF
  unsigned __int8 *v299; // [rsp+30h] [rbp-618h] BYREF
  char *v300; // [rsp+38h] [rbp-610h]
  __m128 v301; // [rsp+40h] [rbp-608h] BYREF
  __m128 v302; // [rsp+50h] [rbp-5F8h] BYREF
  __m128 v303; // [rsp+60h] [rbp-5E8h] BYREF
  __int64 v304; // [rsp+70h] [rbp-5D8h]
  __int64 v305; // [rsp+78h] [rbp-5D0h]
  __int64 v306; // [rsp+80h] [rbp-5C8h]
  __int64 v307; // [rsp+88h] [rbp-5C0h]
  __m128i v308; // [rsp+90h] [rbp-5B8h] BYREF
  __int64 v309; // [rsp+A0h] [rbp-5A8h]
  char v310; // [rsp+A8h] [rbp-5A0h] BYREF
  unsigned __int8 v311; // [rsp+C0h] [rbp-588h]
  __int64 v312; // [rsp+C8h] [rbp-580h]
  __int64 v313; // [rsp+D0h] [rbp-578h]
  char v314; // [rsp+D8h] [rbp-570h] BYREF
  unsigned __int8 v315; // [rsp+F0h] [rbp-558h]
  __int64 v316; // [rsp+F8h] [rbp-550h]
  __int64 v317; // [rsp+100h] [rbp-548h] BYREF
  char v318[8]; // [rsp+108h] [rbp-540h] BYREF
  __int8 v319; // [rsp+110h] [rbp-538h]
  __int64 v320; // [rsp+118h] [rbp-530h]
  unsigned __int8 v321; // [rsp+120h] [rbp-528h]
  __int64 v322; // [rsp+128h] [rbp-520h]
  __m128i v323; // [rsp+130h] [rbp-518h]
  __int64 v324; // [rsp+140h] [rbp-508h]
  unsigned __int8 v325[8]; // [rsp+148h] [rbp-500h] BYREF
  unsigned __int8 v326; // [rsp+150h] [rbp-4F8h]
  __int64 v327; // [rsp+158h] [rbp-4F0h]
  unsigned __int8 v328; // [rsp+160h] [rbp-4E8h]
  __int64 v329; // [rsp+168h] [rbp-4E0h]
  char *v330; // [rsp+170h] [rbp-4D8h]
  __int64 v331; // [rsp+178h] [rbp-4D0h]
  __int64 v332; // [rsp+180h] [rbp-4C8h]
  char v333[8]; // [rsp+188h] [rbp-4C0h] BYREF
  __int8 v334; // [rsp+190h] [rbp-4B8h]
  __int64 v335; // [rsp+198h] [rbp-4B0h]
  unsigned __int8 v336; // [rsp+1A0h] [rbp-4A8h]
  __int64 v337; // [rsp+1A8h] [rbp-4A0h]
  __m128i v338; // [rsp+1B0h] [rbp-498h] BYREF
  __int64 v339; // [rsp+1C0h] [rbp-488h] BYREF
  char v340[8]; // [rsp+1C8h] [rbp-480h] BYREF
  unsigned __int8 v341; // [rsp+1D0h] [rbp-478h]
  __int64 v342; // [rsp+1D8h] [rbp-470h]
  unsigned __int8 v343; // [rsp+1E0h] [rbp-468h]
  __int64 v344; // [rsp+1E8h] [rbp-460h]
  __m128i v345; // [rsp+1F0h] [rbp-458h] BYREF
  unsigned __int64 v346; // [rsp+200h] [rbp-448h]
  char v347; // [rsp+208h] [rbp-440h]
  __int128 v348; // [rsp+5F0h] [rbp-58h]
  unsigned __int64 v349; // [rsp+608h] [rbp-40h]

  *(_QWORD *)&v297.priv[12] = a2;
  v349 = __readfsqword(0x28u);
  switch ( *(_DWORD *)(a1 + 384) )
  {
    case 0:
      v54 = *(const __m128i **)a1;
      v55 = (boost::beast::http *)*(unsigned int *)(*(_QWORD *)a1 + 84LL);
      v56 = v54[5].m128i_u32[0];
      if ( *(_BYTE *)(a1 + 16) )
        *(_BYTE *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 116) = 47;
      *(_DWORD *)(a1 + 112) = 1347703880;
      *(_BYTE *)(a1 + 118) = 46;
      *(_BYTE *)(a1 + 120) = 32;
      *(_BYTE *)(a1 + 124) = 32;
      *(_QWORD *)(a1 + 24) = v54;
      *(_BYTE *)(a1 + 117) = v56 / 0xA + 48;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 119) = v56 % 0xA + 48;
      *(_BYTE *)(a1 + 121) = (unsigned int)v55 / 0x64 + 48;
      *(_BYTE *)(a1 + 122) = (unsigned int)v55 / 0xA % 0xA + 48;
      *(_BYTE *)(a1 + 123) = (unsigned int)v55 % 0xA + 48;
      v57 = v54[4].m128i_i64[1];
      if ( v57 )
        v58 = v54[4].m128i_i64[0];
      else
        v58 = boost::beast::http::obsolete_reason(v55, v297);
      v59 = _mm_loadl_epi64(v54 + 2);
      *(_QWORD *)(a1 + 56) = v58;
      *(_QWORD *)(a1 + 40) = a1 + 112;
      *(_QWORD *)(a1 + 48) = 13;
      *(_QWORD *)(a1 + 64) = v57;
      *(_QWORD *)(a1 + 72) = "\r\n";
      *(_QWORD *)(a1 + 80) = 2;
      *(_BYTE *)(a1 + 32) = 1;
      *(_BYTE *)(a1 + 16) = 1;
      *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v59, (__m128i)(unsigned __int64)&v54[2]);
      if ( !(unsigned __int8)boost::beast::http::basic_fields<std::allocator<char>>::get_chunked_impl() )
      {
        *(_DWORD *)(a1 + 384) = 10;
        goto LABEL_36;
      }
      *(_DWORD *)(a1 + 384) = 50;
      goto LABEL_70;
    case 0xA:
LABEL_36:
      v60 = *(_OWORD **)&v297.priv[12];
      *(_QWORD *)(*(_QWORD *)&v297.priv[12] + 16LL) = 0;
      *v60 = 0;
      if ( *(_BYTE *)(a1 + 388) )
      {
        v302.m128_u64[0] = (unsigned __int64)&v345;
      }
      else
      {
        v61 = *(unsigned __int64 **)(a1 + 8);
        v302.m128_u64[0] = (unsigned __int64)&v345;
        v62 = *v61;
        v63 = v61[1];
        boost::beast::http::make_error_code();
        if ( !(unsigned __int8)boost::system::operator==() )
        {
          v64 = *(_QWORD *)(*(_QWORD *)&v297.priv[12] + 16LL);
          if ( (v64 & 1) != 0 && (v64 != 1 || **(_DWORD **)&v297.priv[12]) )
            return v349 - __readfsqword(0x28u);
          *(_BYTE *)(a1 + 390) = 0;
          v65 = (__m128i)v62;
          v66 = a1 + 128;
          v67 = *(unsigned __int8 *)(a1 + 288);
          v68 = (_QWORD *)(a1 + 160);
          *(__m128i *)&v297.mon_name = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 40), v65);
          boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
            v67,
            (unsigned __int8 *)(a1 + 128));
          si128 = _mm_load_si128((const __m128i *)&v297);
          v70 = v302.m128_u64[0];
          *(_BYTE *)(a1 + 288) = 0;
          *(__m128i *)(a1 + 128) = si128;
          *(_OWORD *)(a1 + 160) = 0;
          *(_OWORD *)(a1 + 176) = 0;
          v71 = (__m128i)(unsigned __int64)(a1 + 40);
          *(_QWORD *)(a1 + 144) = v63;
          v72 = _mm_unpacklo_epi64(v71, v71);
          v308.m128i_i64[0] = v70;
          v345 = v72;
          v73 = v72.m128i_i64[1];
          *(_DWORD *)((char *)&v346 + 1) = 0;
          *(_QWORD *)(a1 + 152) = a1 + 128;
          HIDWORD(v346) = 0;
          LOBYTE(v346) = 1;
          if ( v72.m128i_i64[1] == a1 + 56 )
          {
LABEL_259:
            boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            v345.m128i_i64[1] = v275;
            LOBYTE(v346) = 2;
            boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment::next<2ul>((__int64)&v308);
            v71.m128i_i64[0] = v345.m128i_i64[0];
          }
          else
          {
            while ( !*(_QWORD *)(v73 + 8) )
            {
              v73 += 16;
              v345.m128i_i64[1] = v73;
              if ( v73 == a1 + 56 )
                goto LABEL_259;
            }
          }
          boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*(unsigned __int8 *)(a1 + 184));
          *(_BYTE *)(a1 + 184) = 0;
          v74 = (unsigned __int8)v346;
          *(_BYTE *)(a1 + 176) = 0;
          *(_QWORD *)(a1 + 160) = v71.m128i_i64[0];
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
            v74,
            a1 + 168,
            v75);
          *(_BYTE *)(a1 + 184) = 1;
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          while ( **(_QWORD **)(a1 + 152) != *v68 || *(_BYTE *)(a1 + 176) != 6 )
          {
            switch ( *(_BYTE *)(a1 + 176) )
            {
              case 0:
              case 6:
                goto LABEL_167;
              case 1:
              case 2:
              case 3:
              case 5:
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL) )
                  goto LABEL_170;
LABEL_167:
                v308.m128i_i64[0] = a1 + 160;
                boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
                break;
              case 4:
                goto LABEL_170;
            }
          }
          boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*(unsigned __int8 *)(a1 + 184));
          *(_QWORD *)(a1 + 160) = v252;
          *(_BYTE *)(a1 + 184) = 2;
          if ( v251 == v252 )
          {
            v216 = 2;
          }
          else
          {
            do
            {
              if ( *(_QWORD *)(v252 + 8) )
                goto LABEL_170;
              v252 += 16;
              *v68 = v252;
            }
            while ( v252 != v251 );
            v216 = *(unsigned __int8 *)(a1 + 184);
          }
          boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v216);
          *(_BYTE *)(a1 + 160) = 0;
          *(_BYTE *)(a1 + 184) = 3;
LABEL_170:
          *(_QWORD *)(a1 + 192) = 0;
          *(_BYTE *)(a1 + 288) = 2;
          *(_DWORD *)(a1 + 384) = 30;
LABEL_171:
          v217 = *(unsigned __int8 *)(a1 + 368);
          v297.mon_name = v340;
          v298 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v310, (__m128i)(unsigned __int64)v340);
          v299 = v325;
          v303 = _mm_loadh_ps((const double *)&v299);
          boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
            v217,
            a1 + 296);
          *(_QWORD *)(a1 + 296) = v66;
          *(_BYTE *)(a1 + 368) = 0;
          *(_OWORD *)(a1 + 320) = 0;
          *(_OWORD *)(a1 + 336) = 0;
          *(_OWORD *)(a1 + 352) = 0;
          *(_OWORD *)(a1 + 304) = 0;
          boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::setup();
          *(_BYTE *)(a1 + 368) = 2;
          v218 = *(_QWORD *)a3;
          *(_BYTE *)(a3 + 8) = 1;
          v301.m128_u64[0] = v218;
          v219 = *(_QWORD *)(a1 + 312);
          v348 = 0;
          v331 = v219;
          v220 = *(_QWORD *)(a1 + 320);
          v330 = (char *)(a1 + 296);
          v332 = v220;
          v300 = v333;
          v308.m128i_i64[0] = (__int64)v333;
          v308.m128i_i64[1] = a1 + 328;
          v336 = 0;
          boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
          v221 = *(_QWORD *)(a1 + 360);
          v222 = *(_QWORD *)(a1 + 304);
          v323.m128i_i64[0] = a1 + 296;
          v337 = v221;
          v323.m128i_i64[1] = v222;
          boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::begin();
          v223 = _mm_load_si128((const __m128i *)&v303);
          v338.m128i_i64[0] = a1 + 296;
          v339 = v324;
          v338.m128i_i64[1] = v222;
          v343 = 0;
          v308 = v223;
          boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
          v303.m128_u64[0] = a3;
          v224 = v348;
          v344 = v329;
          while ( ((char *)v338.m128i_i64[0] != v330
                || v344 != v337
                || !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==())
               && v224 <= 0x3F )
          {
            v225 = *((_QWORD *)&v348 + 1);
            v226 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*();
            v228 = _mm_load_si128(&v298);
            v311 = 0;
            v229 = v226;
            v230 = v338.m128i_i64[1];
            v308 = v228;
            if ( v338.m128i_i64[1] > v227 )
              v230 = v227;
            v231 = 2 * v224;
            v345.m128i_i64[v231] = v229;
            v345.m128i_i64[v231 + 1] = v230;
            *((_QWORD *)&v348 + 1) = v230 + v225;
            v309 = v339;
            boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
            v308.m128i_i64[0] = (__int64)&v339;
            v312 = v344;
            boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::increment>();
            boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*();
            boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v311);
            v338.m128i_i64[1] -= v232;
            v224 = v348 + 1;
            *(_QWORD *)&v348 = v348 + 1;
          }
          v233 = v303.m128_u64[0];
          boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v343);
          boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v328);
          boost::mp11::detail::mp_with_index_impl_<4ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v336);
          LOBYTE(v234) = *((_QWORD *)&v348 + 1) == 0;
          *(_QWORD *)(v233 + 16) = boost::asio::detail::socket_ops::sync_send(
                                     *(_DWORD *)(v301.m128_u64[0] + 8),
                                     *(unsigned __int8 *)(v301.m128_u64[0] + 12),
                                     v302.m128_i64[0],
                                     v235,
                                     0,
                                     v234,
                                     *(__int64 *)&v297.priv[12]);
          return v349 - __readfsqword(0x28u);
        }
      }
      v76 = a1 + 128;
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
        *(unsigned __int8 *)(a1 + 288),
        (unsigned __int8 *)(a1 + 128));
      *(_OWORD *)(a1 + 144) = 0;
      v77 = (_QWORD *)(a1 + 144);
      v308.m128i_i64[0] = a1 + 136;
      v78 = a1 + 40;
      *(_BYTE *)(a1 + 288) = 0;
      *(_QWORD *)(a1 + 128) = a1 + 40;
      *(_QWORD *)(a1 + 136) = a1 + 40;
      *(_QWORD *)(a1 + 144) = a1 + 40;
      *(_BYTE *)(a1 + 152) = 1;
      if ( a1 + 40 == a1 + 56 )
        goto LABEL_50;
      while ( !*(_QWORD *)(v78 + 8) )
      {
        v78 += 16;
        *v77 = v78;
        if ( v78 == a1 + 56 )
        {
LABEL_50:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          v80 = v79;
          *(_QWORD *)(a1 + 144) = v79;
          *(_BYTE *)(a1 + 152) = 2;
          if ( a1 + 72 == v79 )
          {
LABEL_254:
            boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            v274 = v273;
            *(_QWORD *)(a1 + 144) = v273;
            *(_BYTE *)(a1 + 152) = 3;
            if ( a1 + 88 == v273 )
            {
LABEL_277:
              boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
              *(_QWORD *)(a1 + 144) = v282;
              *(_BYTE *)(a1 + 152) = 4;
              boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(v308.m128i_i64);
            }
            else
            {
              while ( !*(_QWORD *)(v274 + 8) )
              {
                v274 += 16;
                *v77 = v274;
                if ( v274 == a1 + 88 )
                  goto LABEL_277;
              }
            }
          }
          else
          {
            while ( !*(_QWORD *)(v80 + 8) )
            {
              v80 += 16;
              *v77 = v80;
              if ( v80 == a1 + 72 )
                goto LABEL_254;
            }
          }
          break;
        }
      }
      *(_QWORD *)(a1 + 160) = 0;
      *(_BYTE *)(a1 + 288) = 1;
      *(_DWORD *)(a1 + 384) = 20;
LABEL_55:
      v81 = 0;
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
        *(unsigned __int8 *)(a1 + 368),
        a1 + 296);
      *(_QWORD *)(a1 + 296) = v76;
      *(_BYTE *)(a1 + 368) = 0;
      *(_OWORD *)(a1 + 304) = 0;
      *(_OWORD *)(a1 + 320) = 0;
      *(_OWORD *)(a1 + 336) = 0;
      v297.mon_name = v82;
      boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::setup();
      mon_name = v297.mon_name;
      *(_BYTE *)(a1 + 368) = 1;
      *(_BYTE *)(a3 + 8) = 1;
      v84 = *(_QWORD *)a3;
      v85 = *((_QWORD *)mon_name + 2);
      v86 = (unsigned __int8)mon_name[40];
      v330 = mon_name;
      v348 = 0;
      v331 = v85;
      v87 = *((_QWORD *)mon_name + 3);
      v334 = 0;
      v332 = v87;
      v300 = v333;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v86,
        (__int64)v333,
        (unsigned __int8 *)(a1 + 328));
      LOBYTE(v304) = v334;
      v88 = *((_QWORD *)v297.mon_name + 1);
      v303.m128_u64[0] = *((_QWORD *)v297.mon_name + 6);
      v335 = v303.m128_u64[0];
      boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::begin();
      v89 = v326;
      v338.m128i_i64[1] = v88;
      v90 = 0;
      v339 = v324;
      v338.m128i_i64[0] = (__int64)v297.mon_name;
      v298.m128i_i64[0] = (__int64)v297.mon_name;
      v297.mon_name = v340;
      v341 = 0;
      v299 = v325;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v326,
        (__int64)v340,
        v325);
      v305 = v84;
      v307 = a3;
      v301.m128_u64[0] = v298.m128i_i64[0];
      v342 = v327;
      v91 = v298.m128i_i64[0];
      v306 = v89;
      while ( 1 )
      {
        if ( v301.m128_u64[0] == v91 && v303.m128_u64[0] == v342 )
        {
          v334 = v304;
          if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
            break;
        }
        if ( v90 > 0x3F )
          break;
        v100 = v342;
        v101 = v341;
        if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
        {
          v92 = boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                  v101,
                  (__int64)&v339);
          if ( v94 > v93 )
            v94 = v93;
          v95 = v94 + v92;
          v96 = v93 - v94;
        }
        else
        {
          v95 = boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                  v101,
                  (__int64)&v339);
        }
        v319 = 0;
        if ( v96 > v338.m128i_i64[1] )
          v96 = v338.m128i_u64[1];
        v97 = 2 * v90;
        v345.m128i_i64[v97] = v95;
        v98 = v339;
        v345.m128i_i64[v97 + 1] = v96;
        *((_QWORD *)&v348 + 1) = v81 + v96;
        v317 = v98;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          v101,
          (__int64)v318,
          (unsigned __int8 *)v297.mon_name);
        v320 = v100;
        v308.m128i_i64[0] = (__int64)&v339;
        v298.m128i_i8[0] = v319;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==();
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
          v298.m128i_u8[0],
          (__int64)&v317);
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        v338.m128i_i64[1] -= v99;
        v81 = *((_QWORD *)&v348 + 1);
        v90 = v348 + 1;
        v91 = v338.m128i_i64[0];
        *(_QWORD *)&v348 = v348 + 1;
      }
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      LOBYTE(v170) = v81 == 0;
      *(_QWORD *)(v307 + 16) = boost::asio::detail::socket_ops::sync_send(
                                 *(_DWORD *)(v305 + 8),
                                 *(unsigned __int8 *)(v305 + 12),
                                 v302.m128_i64[0],
                                 v171,
                                 0,
                                 v170,
                                 *(__int64 *)&v297.priv[12]);
      return v349 - __readfsqword(0x28u);
    case 0x14:
      v76 = a1 + 128;
      v302.m128_u64[0] = (unsigned __int64)&v345;
      goto LABEL_55;
    case 0x1E:
      v66 = a1 + 128;
      v302.m128_u64[0] = (unsigned __int64)&v345;
      goto LABEL_171;
    case 0x28:
      *(_DWORD *)(a1 + 384) = 41;
      goto LABEL_24;
    case 0x29:
LABEL_24:
      v40 = *(_QWORD *)&v297.priv[12];
      v41 = a1 + 128;
      v42 = (unsigned __int8 *)(a1 + 128);
      **(_OWORD **)&v297.priv[12] = 0;
      *(_QWORD *)(v40 + 16) = 0;
      v43 = *(__int64 **)(a1 + 8);
      v44 = *(unsigned __int8 *)(a1 + 288);
      v45 = *v43;
      v46 = v43[1];
      *(_BYTE *)(a1 + 390) = 0;
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
        v44,
        v42);
      *(_QWORD *)(a1 + 128) = v45;
      *(_QWORD *)(a1 + 136) = v46;
      *(_QWORD *)(a1 + 144) = v41;
      *(_QWORD *)(a1 + 152) = 0;
      *(_BYTE *)(a1 + 288) = 3;
      *(_DWORD *)(a1 + 384) = 42;
      goto LABEL_25;
    case 0x2A:
      v41 = a1 + 128;
LABEL_25:
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
        *(unsigned __int8 *)(a1 + 368),
        a1 + 296);
      *(_BYTE *)(a1 + 368) = 0;
      v49 = *(_QWORD *)(v41 + 16);
      *(_OWORD *)(a1 + 304) = 0;
      v50 = *(_QWORD *)(a1 + 376);
      *(_QWORD *)(a1 + 296) = v41;
      v51 = v49;
      *(__m128i *)(a1 + 320) = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v41);
      if ( v49 == v48 )
        goto LABEL_115;
      while ( 2 )
      {
        v51 += 16LL;
        v52 = *(_QWORD *)(v51 - 8);
        if ( v49 == v51 - 16 )
        {
          v188 = *(_QWORD *)(v41 + 24);
          if ( v52 <= v188 )
            v188 = *(_QWORD *)(v51 - 8);
          v52 -= v188;
        }
        v53 = *(_QWORD *)(a1 + 304);
        if ( v52 >= v50 )
        {
          *(_QWORD *)(a1 + 320) = v51;
          *(_QWORD *)(a1 + 304) = v50 + v53;
          *(_QWORD *)(a1 + 312) = v50 - v52;
        }
        else
        {
          *(_QWORD *)(a1 + 304) = v53 + v52;
          if ( v48 != v51 )
          {
            v50 -= v52;
            continue;
          }
          *(_QWORD *)(a1 + 320) = v48;
        }
        break;
      }
LABEL_115:
      *(_BYTE *)(a1 + 368) = 3;
      v172 = *(_QWORD *)(a1 + 296);
      v173 = *(_QWORD *)a3;
      v174 = v47[1];
      *(_BYTE *)(a3 + 8) = 1;
      v175 = *(__int64 **)(v172 + 16);
      v176 = *(_DWORD *)(v173 + 8);
      v177 = *(unsigned __int8 *)(v173 + 12);
      v348 = 0;
      if ( v172 != v47[4] )
      {
        v178 = v175;
        v179 = v175 + 128;
        v180 = 0;
        v302.m128_u64[0] = (unsigned __int64)&v345;
        v181 = &v345;
        v182 = 0;
        while ( 1 )
        {
          v183 = v178[1];
          if ( v175 != v178 )
            break;
          while ( 1 )
          {
            v186 = *(_QWORD *)(v172 + 24);
            if ( v183 <= v186 )
              v186 = v183;
            v184 = v186 + *v178;
            v185 = v183 - v186;
LABEL_119:
            v181->m128i_i64[0] = v184;
            if ( v174 <= v185 )
              v185 = v174;
            v181->m128i_i64[1] = v185;
            v182 += v185;
            v175 = *(__int64 **)(v172 + 16);
            *((_QWORD *)&v348 + 1) = v182;
            if ( v178 == v175 )
              break;
            ++v180;
            v178 += 2;
            *(_QWORD *)&v348 = v180;
            if ( v178 == v179 )
              goto LABEL_230;
            v174 -= v183;
            ++v181;
            v183 = v178[1];
            if ( v175 != v178 )
              goto LABEL_118;
          }
          ++v180;
          v178 += 2;
          v187 = *(_QWORD *)(v172 + 24);
          *(_QWORD *)&v348 = v180;
          if ( v178 == v179 )
          {
LABEL_230:
            v255 = 64;
            goto LABEL_214;
          }
          if ( v187 > v183 )
            v187 = v183;
          ++v181;
          v174 += v187 - v183;
        }
LABEL_118:
        v184 = *v178;
        v185 = v183;
        goto LABEL_119;
      }
      v253 = (__int64 *)v47[3];
      v254 = v175;
      v255 = 0;
      v302.m128_u64[0] = (unsigned __int64)&v345;
      v256 = &v345;
      v182 = 0;
      while ( v253 != v254 && v255 != 64 )
      {
        v257 = v254[1];
        if ( v175 == v254 )
        {
          v261 = *(_QWORD *)(v172 + 24);
          if ( v257 <= v261 )
            v261 = v254[1];
          v258 = v261 + *v254;
          v259 = v257 - v261;
        }
        else
        {
          v258 = *v254;
          v259 = v254[1];
        }
        v256->m128i_i64[0] = v258;
        if ( v259 > v174 )
          v259 = v174;
        v256->m128i_i64[1] = v259;
        v182 += v259;
        v175 = *(__int64 **)(v172 + 16);
        *((_QWORD *)&v348 + 1) = v182;
        if ( v175 == v254 )
        {
          v260 = *(_QWORD *)(v172 + 24);
          if ( v257 <= v260 )
            v260 = v257;
          v257 -= v260;
        }
        ++v255;
        v174 -= v257;
        v254 += 2;
        ++v256;
        *(_QWORD *)&v348 = v255;
      }
LABEL_214:
      *(_QWORD *)(a3 + 16) = boost::asio::detail::socket_ops::sync_send(
                               v176,
                               v177,
                               v302.m128_i64[0],
                               v255,
                               0,
                               v182 == 0,
                               *(__int64 *)&v297.priv[12]);
      return v349 - __readfsqword(0x28u);
    case 0x32:
LABEL_70:
      v102 = *(_QWORD *)&v297.priv[12];
      *(_QWORD *)(*(_QWORD *)&v297.priv[12] + 16LL) = 0;
      *(_OWORD *)v102 = 0;
      if ( *(_BYTE *)(a1 + 388)
        || (v103 = *(__int64 **)(a1 + 8),
            v104 = v103[1],
            v105 = *v103,
            v347 = 0,
            v345.m128i_i8[0] = 1,
            v345.m128i_i64[1] = v105,
            v346 = v104,
            boost::beast::http::make_error_code(),
            (unsigned __int8)boost::system::operator==()) )
      {
        v194 = (char *)(a1 + 128);
        v195 = (__int64 *)(a1 + 144);
        boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
          *(unsigned __int8 *)(a1 + 288),
          (unsigned __int8 *)(a1 + 128));
        v196 = a1 + 40;
        *(_OWORD *)(a1 + 144) = 0;
        *(_BYTE *)(a1 + 288) = 0;
        *(_QWORD *)(a1 + 128) = a1 + 40;
        *(_QWORD *)(a1 + 136) = a1 + 40;
        *(_QWORD *)(a1 + 144) = a1 + 40;
        for ( *(_BYTE *)(a1 + 152) = 1; v196 != a1 + 56; *v195 = v196 )
        {
          if ( *(_QWORD *)(v196 + 8) )
            goto LABEL_152;
          v196 += 16;
        }
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        *(_QWORD *)(a1 + 144) = v264;
        *(_BYTE *)(a1 + 152) = 2;
        if ( a1 + 72 == v263 )
        {
LABEL_260:
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_QWORD *)(a1 + 144) = v277;
          *(_BYTE *)(a1 + 152) = 3;
          if ( v276 == a1 + 88 )
          {
LABEL_278:
            boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            *(_QWORD *)(a1 + 144) = v283;
            *(_BYTE *)(a1 + 152) = 4;
            if ( *(_QWORD *)(a1 + 96) != v283 )
              goto LABEL_152;
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            {
              v297.mon_name = (char *)&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
              boost::beast::http::chunk_crlf::begin();
            }
            boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            v284 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
            v297.mon_name = (char *)(a1 + 128);
            v286 = v285;
            *(_BYTE *)(a1 + 152) = 5;
            *(_QWORD *)(a1 + 144) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
            while ( 1 )
            {
              if ( !*v286 )
                boost::beast::http::chunk_crlf::begin();
              if ( v284 == `guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                break;
              v287 = *v195;
              if ( *(_QWORD *)(*v195 + 8) )
              {
                v194 = v297.mon_name;
                goto LABEL_152;
              }
              v284 = (__guard *)(v287 + 16);
              *v195 = v287 + 16;
            }
            v194 = v297.mon_name;
            boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            *(_BYTE *)(a1 + 144) = 0;
            *(_BYTE *)(a1 + 152) = 6;
          }
          else
          {
            while ( !*(_QWORD *)(v276 + 8) )
            {
              v276 += 16;
              *v195 = v276;
              if ( v276 == a1 + 88 )
                goto LABEL_278;
            }
          }
        }
        else
        {
          while ( !*(_QWORD *)(v263 + 8) )
          {
            v263 += 16;
            *v195 = v263;
            if ( v263 == a1 + 72 )
              goto LABEL_260;
          }
        }
LABEL_152:
        *(_QWORD *)(a1 + 160) = 0;
        *(_BYTE *)(a1 + 288) = 1;
        *(_DWORD *)(a1 + 384) = 60;
LABEL_153:
        boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
          *(unsigned __int8 *)(a1 + 368),
          a1 + 296);
        *(_QWORD *)(a1 + 296) = v194;
        *(_BYTE *)(a1 + 368) = 0;
        *(_OWORD *)(a1 + 304) = 0;
        *(_OWORD *)(a1 + 320) = 0;
        *(_OWORD *)(a1 + 336) = 0;
        v297.mon_name = v197;
        boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::setup();
        v198 = v297.mon_name;
        *(_BYTE *)(a1 + 368) = 1;
        *(_BYTE *)(a3 + 8) = 1;
        v199 = *(_QWORD *)a3;
        v200 = *((_QWORD *)v198 + 2);
        v201 = (unsigned __int8)v198[40];
        v330 = v198;
        v348 = 0;
        v331 = v200;
        v202 = *((_QWORD *)v198 + 3);
        v334 = 0;
        v332 = v202;
        v300 = v333;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          v201,
          (__int64)v333,
          (unsigned __int8 *)(a1 + 328));
        v25 = 0;
        v303.m128_i8[0] = v334;
        v203 = *((_QWORD *)v297.mon_name + 1);
        v302.m128_u64[0] = *((_QWORD *)v297.mon_name + 6);
        v335 = v302.m128_u64[0];
        boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::begin();
        v204 = v326;
        v338.m128i_i64[1] = v203;
        v26 = 0;
        v339 = v324;
        v338.m128i_i64[0] = (__int64)v297.mon_name;
        v298.m128i_i64[0] = (__int64)v297.mon_name;
        v297.mon_name = v340;
        v341 = 0;
        v299 = v325;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          v326,
          (__int64)v340,
          v325);
        v304 = v199;
        v306 = a3;
        v301.m128_u64[0] = v298.m128i_i64[0];
        v342 = v327;
        v205 = v298.m128i_i64[0];
        v305 = v204;
        while ( 1 )
        {
          if ( v301.m128_u64[0] == v205 && v302.m128_u64[0] == v342 )
          {
            v334 = v303.m128_i8[0];
            if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
              break;
          }
          if ( v26 > 0x3F )
            break;
          v214 = v342;
          v215 = v341;
          if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
          {
            v206 = boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                     v215,
                     (__int64)&v339);
            if ( v208 > v207 )
              v208 = v207;
            v209 = v208 + v206;
            v210 = v207 - v208;
          }
          else
          {
            v209 = boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
                     v215,
                     (__int64)&v339);
          }
          v319 = 0;
          if ( v210 > v338.m128i_i64[1] )
            v210 = v338.m128i_u64[1];
          v211 = 2 * v26;
          v345.m128i_i64[v211] = v209;
          v212 = v339;
          v345.m128i_i64[v211 + 1] = v210;
          *((_QWORD *)&v348 + 1) = v25 + v210;
          v317 = v212;
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
            v215,
            (__int64)v318,
            (unsigned __int8 *)v297.mon_name);
          v320 = v214;
          v308.m128i_i64[0] = (__int64)&v339;
          v298.m128i_i8[0] = v319;
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment>();
          boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==();
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::dereference>(
            v298.m128i_u8[0],
            (__int64)&v317);
          boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          v338.m128i_i64[1] -= v213;
          v25 = *((_QWORD *)&v348 + 1);
          v26 = v348 + 1;
          v205 = v338.m128i_i64[0];
          *(_QWORD *)&v348 = v348 + 1;
        }
        v37 = v304;
        v38 = v306;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        goto LABEL_21;
      }
      v106 = *(_QWORD *)(v102 + 16);
      if ( (v106 & 1) != 0 && (v106 != 1 || *(_DWORD *)v102) )
        return v349 - __readfsqword(0x28u);
      *(_BYTE *)(a1 + 390) = 0;
      v107 = a1 + 128;
      if ( !LOBYTE(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb[0])
        && __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb) )
      {
        boost::beast::http::detail::chunk_last(void)::cb.m128i_i64[1] = 3;
        boost::beast::http::detail::chunk_last(void)::cb.m128i_i64[0] = (__int64)"0\r\n";
        __cxa_guard_release(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb);
      }
      v108 = *(unsigned __int8 *)(a1 + 288);
      v297.mon_name = (char *)(a1 + 40);
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
        v108,
        (unsigned __int8 *)(a1 + 128));
      *(_BYTE *)(a1 + 288) = 0;
      v109 = operator new(0x38u);
      v110 = v297.mon_name;
      v111 = v109;
      *(_QWORD *)(v109 + 8) = 0x100000001LL;
      *(_QWORD *)v109 = off_444E08;
      if ( v104 )
      {
        v112 = v109 + 49;
        v113 = (_BYTE *)(v109 + 49);
        do
        {
          --v113;
          v114 = v104 & 0xF;
          v104 >>= 4;
          *v113 = a0123456789abcd_0[v114];
        }
        while ( v104 );
        v115 = v112 - (_QWORD)v113;
      }
      else
      {
        *(_BYTE *)(v109 + 48) = 48;
        v113 = (_BYTE *)(v109 + 48);
        v115 = 1;
      }
      *(_QWORD *)(v111 + 16) = v113;
      *(_QWORD *)(v111 + 24) = v115;
      *(_QWORD *)(a1 + 128) = v110;
      *(_QWORD *)(a1 + 136) = v111 + 16;
      v308.m128i_i64[0] = v111 + 16;
      v308.m128i_i64[1] = v111;
      v297.mon_name = (char *)v111;
      std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count();
      v116 = _mm_loadu_si128((const __m128i *)&v345.m128i_u64[1]);
      *(_QWORD *)(a1 + 152) = 0;
      *(_QWORD *)(a1 + 160) = 0;
      *(__m128i *)(a1 + 176) = v116;
      v117 = _mm_loadu_si128(&boost::beast::http::detail::chunk_last(void)::cb);
      *(_QWORD *)(a1 + 216) = 0;
      *(_QWORD *)(a1 + 224) = 0;
      *(__m128i *)(a1 + 200) = v117;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
      v118 = *(_QWORD *)(a1 + 128);
      *(_DWORD *)((char *)&v339 + 1) = 0;
      *(_OWORD *)(a1 + 248) = 0;
      *(_OWORD *)(a1 + 264) = 0;
      v119 = _mm_unpacklo_epi64((__m128i)v118, (__m128i)v118);
      v308.m128i_i64[0] = (__int64)&v338;
      v338 = v119;
      v120 = v119.m128i_i64[1];
      *(_QWORD *)(a1 + 240) = v107;
      HIDWORD(v339) = 0;
      LOBYTE(v339) = 1;
      if ( v118 + 16 == v119.m128i_i64[1] )
      {
LABEL_265:
        v297.mon_name = (char *)(a1 + 248);
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        v338.m128i_i64[1] = v278;
        LOBYTE(v339) = 2;
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment::next<2ul>((__int64)&v308);
      }
      else
      {
        while ( !*(_QWORD *)(v120 + 8) )
        {
          v120 += 16;
          v338.m128i_i64[1] = v120;
          if ( v120 == v118 + 16 )
            goto LABEL_265;
        }
      }
      boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(*(unsigned __int8 *)(a1 + 272));
      *(_QWORD *)(a1 + 248) = v121;
      v122 = (unsigned __int8)v339;
      *(_BYTE *)(a1 + 272) = 0;
      *(_BYTE *)(a1 + 264) = 0;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v122,
        a1 + 256,
        v123);
      *(_BYTE *)(a1 + 272) = 1;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      v308.m128i_i64[0] = a1 + 240;
      boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<1ul>(v308.m128i_i64);
      *(_BYTE *)(a1 + 288) = 7;
      *(_QWORD *)(a1 + 280) = 0;
      *(_DWORD *)(a1 + 384) = 110;
LABEL_184:
      v236 = *(unsigned __int8 *)(a1 + 368);
      v297.mon_name = v340;
      v298 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v318, (__m128i)(unsigned __int64)v340);
      v299 = v325;
      v301 = _mm_loadh_ps((const double *)&v299);
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
        v236,
        a1 + 296);
      *(_QWORD *)(a1 + 296) = v107;
      *(_BYTE *)(a1 + 368) = 0;
      *(_OWORD *)(a1 + 320) = 0;
      *(_OWORD *)(a1 + 336) = 0;
      *(_OWORD *)(a1 + 352) = 0;
      *(_OWORD *)(a1 + 304) = 0;
      boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup();
      v237 = *(_QWORD *)(a1 + 312);
      *(_BYTE *)(a1 + 368) = 7;
      v238 = *(_QWORD *)a3;
      v331 = v237;
      v239 = *(_QWORD *)(a1 + 320);
      *(_BYTE *)(a3 + 8) = 1;
      v332 = v239;
      v300 = v333;
      v308.m128i_i64[0] = (__int64)v333;
      v348 = 0;
      v330 = (char *)(a1 + 296);
      v308.m128i_i64[1] = a1 + 328;
      v336 = 0;
      boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
      v240 = *(_QWORD *)(a1 + 360);
      v323.m128i_i64[0] = a1 + 296;
      v337 = v240;
      v323.m128i_i64[1] = *(_QWORD *)(a1 + 304);
      boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
      v241 = _mm_load_si128((const __m128i *)&v301);
      v343 = 0;
      v338 = v323;
      v308 = v241;
      v339 = v324;
      boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
      v302.m128_u64[0] = a3;
      v301.m128_u64[0] = v238;
      v139 = v348;
      v344 = v329;
      while ( ((char *)v338.m128i_i64[0] != v330
            || v344 != v337
            || !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==())
           && v139 <= 0x3F )
      {
        v242 = *((_QWORD *)&v348 + 1);
        v243 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        v245 = _mm_load_si128(&v298);
        v321 = 0;
        v246 = v243;
        v247 = v338.m128i_i64[1];
        v308 = v245;
        if ( v338.m128i_i64[1] > v244 )
          v247 = v244;
        v248 = 2 * v139;
        v345.m128i_i64[v248] = v246;
        v345.m128i_i64[v248 + 1] = v247;
        *((_QWORD *)&v348 + 1) = v247 + v242;
        v317 = v339;
        boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
        v308.m128i_i64[0] = (__int64)&v339;
        v322 = v344;
        boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v321);
        v338.m128i_i64[1] -= v249;
        v139 = v348 + 1;
        *(_QWORD *)&v348 = v348 + 1;
      }
      v250 = v301.m128_u64[0];
      v148 = v302.m128_u64[0];
      boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v343);
      boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v328);
      boost::mp11::detail::mp_with_index_impl_<11ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v336);
      v151 = *(unsigned __int8 *)(v250 + 12);
      v152 = *(_DWORD *)(v250 + 8);
      LOBYTE(v150) = *((_QWORD *)&v348 + 1) == 0;
LABEL_101:
      *(_QWORD *)(v148 + 16) = boost::asio::detail::socket_ops::sync_send(
                                 v152,
                                 v151,
                                 v149,
                                 v139,
                                 0,
                                 v150,
                                 *(__int64 *)&v297.priv[12]);
      return v349 - __readfsqword(0x28u);
    case 0x3C:
      v194 = (char *)(a1 + 128);
      goto LABEL_153;
    case 0x46:
      v297.mon_name = v340;
      v130 = (char *)(a1 + 296);
      v299 = v325;
      v131 = a1 + 296;
      v132 = *(unsigned __int8 *)(a1 + 368);
      v298 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v314, (__m128i)(unsigned __int64)v340);
      v302 = _mm_loadh_ps((const double *)&v299);
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
        v132,
        v131);
      *(_QWORD *)(a1 + 296) = v133;
      *(_BYTE *)(a1 + 368) = 0;
      *(_OWORD *)(a1 + 320) = 0;
      *(_OWORD *)(a1 + 336) = 0;
      *(_OWORD *)(a1 + 352) = 0;
      *(_OWORD *)(a1 + 304) = 0;
      boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup();
      *(_BYTE *)(a1 + 368) = 4;
      v134 = *(_QWORD *)a3;
      *(_BYTE *)(a3 + 8) = 1;
      v301.m128_u64[0] = v134;
      v135 = *(_QWORD *)(a1 + 312);
      v348 = 0;
      v331 = v135;
      v136 = *(_QWORD *)(a1 + 320);
      v330 = v130;
      v332 = v136;
      v300 = v333;
      v308.m128i_i64[0] = (__int64)v333;
      v308.m128i_i64[1] = a1 + 328;
      v336 = 0;
      boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
      v137 = *(_QWORD *)(a1 + 360);
      v323.m128i_i64[0] = (__int64)v130;
      v337 = v137;
      v323.m128i_i64[1] = *(_QWORD *)(a1 + 304);
      boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
      v138 = _mm_load_si128((const __m128i *)&v302);
      v343 = 0;
      v338 = v323;
      v308 = v138;
      v339 = v324;
      boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
      v302.m128_u64[0] = a3;
      v139 = v348;
      v344 = v329;
      while ( ((char *)v338.m128i_i64[0] != v330
            || v344 != v337
            || !(unsigned __int8)boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==())
           && v139 <= 0x3F )
      {
        v140 = *((_QWORD *)&v348 + 1);
        v141 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        v143 = _mm_load_si128(&v298);
        v315 = 0;
        v144 = v141;
        v145 = v338.m128i_i64[1];
        v308 = v143;
        if ( v338.m128i_i64[1] > v142 )
          v145 = v142;
        v146 = 2 * v139;
        v345.m128i_i64[v146] = v144;
        v345.m128i_i64[v146 + 1] = v145;
        *((_QWORD *)&v348 + 1) = v145 + v140;
        v313 = v339;
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>();
        v308.m128i_i64[0] = (__int64)&v339;
        v316 = v344;
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v315);
        v338.m128i_i64[1] -= v147;
        v139 = v348 + 1;
        *(_QWORD *)&v348 = v348 + 1;
      }
      v148 = v302.m128_u64[0];
      boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v343);
      boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v328);
      boost::mp11::detail::mp_with_index_impl_<8ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(v336);
      LOBYTE(v150) = *((_QWORD *)&v348 + 1) == 0;
      v151 = *(unsigned __int8 *)(v301.m128_u64[0] + 12);
      v152 = *(_DWORD *)(v301.m128_u64[0] + 8);
      goto LABEL_101;
    case 0x50:
      *(_DWORD *)(a1 + 384) = 81;
      goto LABEL_3;
    case 0x51:
LABEL_3:
      v5 = *(_QWORD *)&v297.priv[12];
      v6 = (char *)(a1 + 128);
      **(_OWORD **)&v297.priv[12] = 0;
      *(_QWORD *)(v5 + 16) = 0;
      v7 = *(__int64 **)(a1 + 8);
      v8 = v7[1];
      v9 = *v7;
      v347 = 0;
      v345.m128i_i8[0] = 1;
      v345.m128i_i64[1] = v9;
      v346 = v8;
      *(_BYTE *)(a1 + 390) = 0;
      if ( !LOBYTE(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb[0])
        && __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb) )
      {
        boost::beast::http::detail::chunk_last(void)::cb.m128i_i64[1] = 3;
        boost::beast::http::detail::chunk_last(void)::cb.m128i_i64[0] = (__int64)"0\r\n";
        __cxa_guard_release(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb);
      }
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
        *(unsigned __int8 *)(a1 + 288),
        (unsigned __int8 *)(a1 + 128));
      *(_BYTE *)(a1 + 288) = 0;
      v10 = operator new(0x38u);
      *(_QWORD *)(v10 + 8) = 0x100000001LL;
      *(_QWORD *)v10 = off_444E08;
      if ( v8 )
      {
        v11 = (_BYTE *)(v10 + 49);
        do
        {
          --v11;
          v12 = v8 & 0xF;
          v8 >>= 4;
          *v11 = a0123456789abcd_0[v12];
        }
        while ( v8 );
        v13 = v10 + 49 - (_QWORD)v11;
      }
      else
      {
        *(_BYTE *)(v10 + 48) = 48;
        v11 = (_BYTE *)(v10 + 48);
        v13 = 1;
      }
      *(_QWORD *)(v10 + 16) = v11;
      *(_QWORD *)(v10 + 24) = v13;
      *(_QWORD *)(a1 + 128) = v10 + 16;
      v308.m128i_i64[0] = v10 + 16;
      v308.m128i_i64[1] = v10;
      std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count();
      v14 = _mm_loadu_si128((const __m128i *)&v345.m128i_u64[1]);
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(__m128i *)(a1 + 168) = v14;
      v15 = _mm_loadu_si128(&boost::beast::http::detail::chunk_last(void)::cb);
      v16 = a1 + 240;
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 216) = 0;
      *(__m128i *)(a1 + 192) = v15;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
      v17 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 232) = v6;
      *(_OWORD *)(a1 + 240) = 0;
      v18 = v17 + 16;
      *(_QWORD *)(a1 + 240) = v17;
      *(_BYTE *)(a1 + 248) = 1;
      while ( !*(_QWORD *)(v17 + 8) )
      {
        v17 += 16;
        *(_QWORD *)v16 = v17;
        if ( v17 == v18 )
        {
          boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
          *(_QWORD *)(a1 + 240) = v189;
          *(_BYTE *)(a1 + 248) = 2;
          if ( v190 == v189 )
          {
LABEL_135:
            if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
            {
              v297.mon_name = (char *)&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
              boost::beast::http::chunk_crlf::begin();
            }
            boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            v297.mon_name = (char *)(a1 + 128);
            *(_BYTE *)(a1 + 248) = 3;
            *(_QWORD *)(a1 + 240) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
            v191 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
            v193 = v192;
            while ( 1 )
            {
              if ( !*(_BYTE *)v193 && __cxa_guard_acquire(v193) )
              {
                unk_448FA8 = 2;
                boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
                __cxa_guard_release(v193);
              }
              if ( v191 == `guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                break;
              if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) )
              {
LABEL_238:
                v6 = v297.mon_name;
                goto LABEL_11;
              }
              v191 = (__guard *)(*(_QWORD *)v16 + 16LL);
              *(_QWORD *)v16 = v191;
            }
            v6 = v297.mon_name;
            boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
            v267 = v266 + 40;
            v268 = v266 + 56;
            *(_BYTE *)(a1 + 248) = 4;
            *(_QWORD *)(a1 + 240) = v267;
            if ( v267 == v268 )
            {
LABEL_266:
              if ( !*v265 )
              {
                v297.mon_name = v265;
                boost::beast::http::chunk_crlf::begin();
              }
              v279 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
              boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
              *(_QWORD *)(a1 + 240) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
              v297.mon_name = v6;
              v281 = v280;
              *(_BYTE *)(a1 + 248) = 5;
              while ( 1 )
              {
                if ( !*(_BYTE *)v281 && __cxa_guard_acquire(v281) )
                {
                  unk_448FA8 = 2;
                  boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
                  __cxa_guard_release(v281);
                }
                if ( v279 == `guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                  break;
                if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) )
                  goto LABEL_238;
                v279 = (__guard *)(*(_QWORD *)v16 + 16LL);
                *(_QWORD *)v16 = v279;
              }
              v6 = v297.mon_name;
              boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
              v289 = v288 + 64;
              *(_BYTE *)(a1 + 248) = 6;
              *(_QWORD *)(a1 + 240) = v288 + 64;
              if ( v288 + 80 == v288 + 64 )
              {
LABEL_295:
                boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
                *(_QWORD *)(a1 + 240) = v293;
                *(_BYTE *)(a1 + 248) = 7;
                if ( v290 == v291 + 96 )
                {
LABEL_300:
                  if ( !*v292 )
                  {
                    v297.mon_name = v292;
                    boost::beast::http::chunk_crlf::begin();
                  }
                  v294 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
                  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
                  *(_QWORD *)(a1 + 240) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
                  v297.mon_name = v6;
                  v296 = v295;
                  *(_BYTE *)(a1 + 248) = 8;
                  while ( 1 )
                  {
                    if ( !*(_BYTE *)v296 && __cxa_guard_acquire(v296) )
                    {
                      unk_448FA8 = 2;
                      boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
                      __cxa_guard_release(v296);
                    }
                    if ( v294 == `guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                      break;
                    if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) )
                      goto LABEL_238;
                    v294 = (__guard *)(*(_QWORD *)v16 + 16LL);
                    *(_QWORD *)v16 = v294;
                  }
                  v6 = v297.mon_name;
                  boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
                  *(_BYTE *)(a1 + 240) = 0;
                  *(_BYTE *)(a1 + 248) = 9;
                }
                else
                {
                  while ( !*(_QWORD *)(v290 + 8) )
                  {
                    v290 += 16;
                    *(_QWORD *)v16 = v290;
                    if ( v290 == v291 + 96 )
                      goto LABEL_300;
                  }
                }
              }
              else
              {
                while ( !*(_QWORD *)(v289 + 8) )
                {
                  v289 += 16;
                  *(_QWORD *)v16 = v289;
                  if ( v289 == v288 + 80 )
                    goto LABEL_295;
                }
              }
            }
            else
            {
              while ( !*(_QWORD *)(v267 + 8) )
              {
                v267 += 16;
                *(_QWORD *)v16 = v267;
                if ( v267 == v268 )
                  goto LABEL_266;
              }
            }
          }
          else
          {
            while ( !*(_QWORD *)(v189 + 8) )
            {
              v189 += 16;
              *(_QWORD *)v16 = v189;
              if ( v189 == v190 )
                goto LABEL_135;
            }
          }
          break;
        }
      }
LABEL_11:
      *(_QWORD *)(a1 + 256) = 0;
      *(_BYTE *)(a1 + 288) = 6;
      *(_DWORD *)(a1 + 384) = 100;
LABEL_12:
      v19 = a1 + 296;
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
        *(unsigned __int8 *)(a1 + 368),
        a1 + 296);
      *(_QWORD *)(a1 + 296) = v6;
      *(_BYTE *)(a1 + 368) = 0;
      *(_OWORD *)(a1 + 304) = 0;
      *(_OWORD *)(a1 + 320) = 0;
      *(_OWORD *)(a1 + 336) = 0;
      boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup();
      *(_BYTE *)(a1 + 368) = 6;
      v20 = *(_QWORD *)(a1 + 312);
      *(_BYTE *)(a3 + 8) = 1;
      v21 = *(_QWORD *)a3;
      v331 = v20;
      v22 = *(_QWORD *)(a1 + 320);
      v23 = *(unsigned __int8 *)(a1 + 336);
      v348 = 0;
      v332 = v22;
      v300 = v333;
      v330 = (char *)(a1 + 296);
      v334 = 0;
      boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v23,
        (__int64)v333,
        (unsigned __int8 *)(a1 + 328));
      v24 = *(_QWORD *)(a1 + 304);
      v25 = 0;
      v301.m128_i8[0] = v334;
      v298.m128i_i64[0] = *(_QWORD *)(v19 + 48);
      v335 = v298.m128i_i64[0];
      boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
      v338.m128i_i64[1] = v24;
      v26 = 0;
      v339 = v324;
      v297.mon_name = v340;
      v338.m128i_i64[0] = v19;
      v341 = 0;
      v299 = v325;
      boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v326,
        (__int64)v340,
        v325);
      v302.m128_u64[0] = v21;
      v303.m128_u64[0] = v27;
      v342 = v327;
      v28 = v19;
      v304 = a3;
      while ( 1 )
      {
        if ( v28 == v19 && v298.m128i_i64[0] == v342 )
        {
          v334 = v301.m128_i8[0];
          if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
            break;
        }
        if ( v26 > 0x3F )
          break;
        v29 = v341;
        v30 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        v319 = 0;
        v32 = v30;
        v33 = v338.m128i_i64[1];
        if ( v338.m128i_i64[1] > v31 )
          v33 = v31;
        v34 = 2 * v26;
        v35 = (unsigned __int8 *)v297.mon_name;
        v345.m128i_i64[v34] = v32;
        v345.m128i_i64[v34 + 1] = v33;
        *((_QWORD *)&v348 + 1) = v25 + v33;
        v317 = v339;
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          v29,
          (__int64)v318,
          v35);
        v308.m128i_i64[0] = (__int64)&v339;
        v320 = v342;
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        v338.m128i_i64[1] -= v36;
        v25 = *((_QWORD *)&v348 + 1);
        v26 = v348 + 1;
        v28 = v338.m128i_i64[0];
        *(_QWORD *)&v348 = v348 + 1;
      }
      v37 = v302.m128_u64[0];
      v38 = v304;
      boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      boost::mp11::detail::mp_with_index_impl_<10ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
LABEL_21:
      *(_QWORD *)(v38 + 16) = boost::asio::detail::socket_ops::sync_send(
                                *(_DWORD *)(v37 + 8),
                                *(unsigned __int8 *)(v37 + 12),
                                (__int64)&v345,
                                v26,
                                0,
                                v25 == 0,
                                *(__int64 *)&v297.priv[12]);
      return v349 - __readfsqword(0x28u);
    case 0x52:
      v153 = a1 + 296;
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
        *(unsigned __int8 *)(a1 + 368),
        a1 + 296);
      *(_QWORD *)(a1 + 296) = v154;
      *(_BYTE *)(a1 + 368) = 0;
      *(_OWORD *)(a1 + 304) = 0;
      *(_OWORD *)(a1 + 320) = 0;
      *(_OWORD *)(a1 + 336) = 0;
      boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup();
      *(_BYTE *)(a1 + 368) = 5;
      v155 = *(_QWORD *)(a1 + 312);
      *(_BYTE *)(a3 + 8) = 1;
      v156 = *(_QWORD *)a3;
      v331 = v155;
      v157 = *(_QWORD *)(a1 + 320);
      v158 = *(unsigned __int8 *)(a1 + 336);
      v348 = 0;
      v332 = v157;
      v300 = v333;
      v330 = (char *)v153;
      v334 = 0;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v158,
        (__int64)v333,
        (unsigned __int8 *)(a1 + 328));
      v159 = *(_QWORD *)(v153 + 8);
      v25 = 0;
      v301.m128_i8[0] = v334;
      v298.m128i_i64[0] = *(_QWORD *)(v153 + 48);
      v335 = v298.m128i_i64[0];
      boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
      v338.m128i_i64[1] = v159;
      v26 = 0;
      v339 = v324;
      v297.mon_name = v340;
      v338.m128i_i64[0] = v153;
      v341 = 0;
      v299 = v325;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v326,
        (__int64)v340,
        v325);
      v302.m128_u64[0] = v156;
      v303.m128_u64[0] = v160;
      v342 = v327;
      v161 = v153;
      v304 = a3;
      while ( 1 )
      {
        if ( v161 == v153 && v298.m128i_i64[0] == v342 )
        {
          v334 = v301.m128_i8[0];
          if ( (unsigned __int8)boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==() )
            break;
        }
        if ( v26 > 0x3F )
          break;
        v162 = v341;
        v163 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        v319 = 0;
        v165 = v163;
        v166 = v338.m128i_i64[1];
        if ( v338.m128i_i64[1] > v164 )
          v166 = v164;
        v167 = 2 * v26;
        v168 = (unsigned __int8 *)v297.mon_name;
        v345.m128i_i64[v167] = v165;
        v345.m128i_i64[v167 + 1] = v166;
        *((_QWORD *)&v348 + 1) = v25 + v166;
        v317 = v339;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          v162,
          (__int64)v318,
          v168);
        v308.m128i_i64[0] = (__int64)&v339;
        v320 = v342;
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment>();
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*();
        boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
        v338.m128i_i64[1] -= v169;
        v25 = *((_QWORD *)&v348 + 1);
        v26 = v348 + 1;
        v161 = v338.m128i_i64[0];
        *(_QWORD *)&v348 = v348 + 1;
      }
      v37 = v302.m128_u64[0];
      v38 = v304;
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      boost::mp11::detail::mp_with_index_impl_<7ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>();
      goto LABEL_21;
    case 0x5A:
      v124 = (unsigned __int8 *)(a1 + 128);
      *(__m128i *)&v297.mon_name = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)(a1 + 128),
                                     (__m128i)(unsigned __int64)(a1 + 128));
      if ( !LOBYTE(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb[0])
        && __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb) )
      {
        boost::beast::http::detail::chunk_last(void)::cb.m128i_i64[1] = 3;
        boost::beast::http::detail::chunk_last(void)::cb.m128i_i64[0] = (__int64)"0\r\n";
        __cxa_guard_release(`guard variable for'boost::beast::http::detail::chunk_last(void)::cb);
      }
      boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
        *(unsigned __int8 *)(a1 + 288),
        v124);
      v125 = _mm_loadu_si128(&boost::beast::http::detail::chunk_last(void)::cb);
      v126 = _mm_load_si128((const __m128i *)&v297);
      v127 = a1 + 144;
      *(_BYTE *)(a1 + 288) = 0;
      *(__m128i *)(a1 + 128) = v125;
      *(_OWORD *)(a1 + 176) = 0;
      *(__m128i *)(a1 + 168) = v126;
      v128 = *(_QWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
      *(_BYTE *)(a1 + 184) = 1;
      if ( a1 + 144 == v128 )
        goto LABEL_225;
      break;
    case 0x5B:
      v124 = (unsigned __int8 *)(a1 + 128);
      goto LABEL_91;
    case 0x64:
      v6 = (char *)(a1 + 128);
      goto LABEL_12;
    case 0x6E:
      v107 = a1 + 128;
      goto LABEL_184;
    default:
      return v349 - __readfsqword(0x28u);
  }
  do
  {
    if ( *(_QWORD *)(v128 + 8) )
      goto LABEL_90;
    v128 += 16;
    *(_QWORD *)(a1 + 176) = v128;
  }
  while ( v128 != v127 );
  if ( *(_BYTE *)(a1 + 184) > 4u )
    return boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method_string();
LABEL_225:
  *(_QWORD *)(a1 + 176) = v127;
  v262 = a1 + 144;
  *(_BYTE *)(a1 + 184) = 2;
  if ( a1 + 160 != a1 + 144 )
  {
    while ( !*(_QWORD *)(v262 + 8) )
    {
      v262 += 16;
      *(_QWORD *)(a1 + 176) = v262;
      if ( v262 == a1 + 160 )
        goto LABEL_244;
    }
    goto LABEL_90;
  }
LABEL_244:
  v269 = (char *)&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
  if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
  {
    v297.mon_name = (char *)&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb;
    boost::beast::http::chunk_crlf::begin();
    v269 = v297.mon_name;
  }
  if ( *(_BYTE *)(a1 + 184) > 4u )
    return boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method_string();
  *(_BYTE *)(a1 + 184) = 3;
  v270 = (__guard *)v269;
  *(_QWORD *)(a1 + 176) = &boost::beast::http::chunk_crlf::begin(void)const::cb;
  for ( i = &boost::beast::http::chunk_crlf::begin(void)const::cb; ; *(_QWORD *)(a1 + 176) = i )
  {
    if ( !*(_BYTE *)v270 && __cxa_guard_acquire(v270) )
    {
      unk_448FA8 = 2;
      boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
      __cxa_guard_release(v270);
    }
    if ( i == `guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
      break;
    v272 = *(_QWORD *)(a1 + 176);
    if ( *(_QWORD *)(v272 + 8) )
      goto LABEL_90;
    i = (__guard *)(v272 + 16);
  }
  if ( *(_BYTE *)(a1 + 184) > 4u )
    return boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method_string();
  *(_BYTE *)(a1 + 176) = 0;
  *(_BYTE *)(a1 + 184) = 4;
LABEL_90:
  *(_QWORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 288) = 8;
  *(_DWORD *)(a1 + 384) = 91;
LABEL_91:
  boost::mp11::detail::mp_with_index_impl_<9ul>::call<0ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
    *(unsigned __int8 *)(a1 + 368),
    a1 + 296);
  *(_QWORD *)(a1 + 296) = v124;
  *(_BYTE *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup();
  *(_BYTE *)(a1 + 368) = 8;
  *(_BYTE *)(a3 + 8) = 1;
  v129 = *(_QWORD *)a3;
  v308.m128i_i64[0] = a1 + 296;
  boost::asio::detail::buffer_sequence_adapter<boost::asio::const_buffer,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffer_sequence_adapter();
  *(_QWORD *)(a3 + 16) = boost::asio::detail::socket_ops::sync_send(
                           *(_DWORD *)(v129 + 8),
                           *(unsigned __int8 *)(v129 + 12),
                           (__int64)&v345,
                           v348,
                           0,
                           *((_QWORD *)&v348 + 1) == 0,
                           *(__int64 *)&v297.priv[12]);
  return v349 - __readfsqword(0x28u);
}

