__int64 __fastcall sub_195D70(__m128i *a1, _DWORD *a2)
{
  _DWORD *v3; // rax
  __int32 v4; // r15d
  int v5; // r14d
  __int32 v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // ebp
  int v10; // esi
  int v11; // edi
  int v12; // edx
  int v13; // r13d
  int v14; // ecx
  int v15; // r12d
  int v16; // esi
  int v17; // edi
  int v18; // ebx
  int v19; // edx
  int v20; // ecx
  int v21; // esi
  int v22; // r9d
  int v23; // edi
  int v24; // edx
  int v25; // r10d
  int v26; // ecx
  int v27; // esi
  int v28; // edx
  int v29; // ecx
  int v30; // esi
  int v31; // edx
  int v32; // ecx
  int v33; // esi
  int v34; // edx
  int v35; // ecx
  int v36; // edi
  int v37; // edx
  int v38; // esi
  int v39; // edi
  int v40; // ecx
  int v41; // edx
  int v42; // esi
  int v43; // ecx
  int v44; // edi
  int v45; // edx
  int v46; // esi
  int v47; // ecx
  int v48; // edi
  int v49; // esi
  int v50; // edx
  int v51; // ecx
  int v52; // edi
  int v53; // edx
  int v54; // ecx
  int v55; // esi
  int v56; // edx
  int v57; // ecx
  int v58; // esi
  int v59; // edx
  int v60; // ecx
  int v61; // esi
  int v62; // edi
  int v63; // edx
  __m128i v64; // xmm1
  int v65; // ecx
  __int64 result; // rax
  int v67; // [rsp+0h] [rbp-5Ch]
  int v68; // [rsp+4h] [rbp-58h]
  int v69; // [rsp+8h] [rbp-54h]
  int v70; // [rsp+Ch] [rbp-50h]
  int v71; // [rsp+10h] [rbp-4Ch]
  int v72; // [rsp+14h] [rbp-48h]
  int v73; // [rsp+18h] [rbp-44h]
  int v74; // [rsp+1Ch] [rbp-40h]
  int v75; // [rsp+20h] [rbp-3Ch]

  v3 = a2;
  v4 = a1->m128i_i32[1];
  v5 = *a2;
  v67 = a2[1];
  v6 = v4
     + __ROL4__(*a2 + a1->m128i_i32[0] - 680876936 + (a1->m128i_i32[3] ^ v4 & (a1->m128i_i32[3] ^ a1->m128i_i32[2])), 7);
  v74 = a2[3];
  v68 = a2[2];
  v7 = v6 + __ROL4__(v67 + a1->m128i_i32[3] - 389564586 + (a1->m128i_i32[2] ^ v6 & (v4 ^ a1->m128i_i32[2])), 12);
  v8 = v7 + __ROR4__(v68 + a1->m128i_i32[2] + 606105819 + (v4 ^ v7 & (v6 ^ v4)), 15);
  v69 = a2[4];
  v9 = a2[5];
  v10 = v8 + __ROR4__(v74 + v4 - 1044525330 + (v6 ^ v8 & (v7 ^ v6)), 10);
  v11 = v10 + __ROL4__(v69 + v6 - 176418897 + (v7 ^ v10 & (v8 ^ v7)), 7);
  v70 = v3[6];
  v12 = v11 + __ROL4__(v9 + v7 + 1200080426 + (v8 ^ v11 & (v10 ^ v8)), 12);
  v13 = v3[7];
  v72 = v3[9];
  v14 = v12 + __ROR4__(v70 + v8 - 1473231341 + (v10 ^ v12 & (v11 ^ v10)), 15);
  v71 = v3[8];
  v15 = v3[14];
  v16 = v14 + __ROR4__(v13 + v10 - 45705983 + (v11 ^ v14 & (v12 ^ v11)), 10);
  v17 = v16 + __ROL4__(v71 + v11 + 1770035416 + (v12 ^ v16 & (v14 ^ v12)), 7);
  v73 = v3[10];
  v18 = v3[12];
  v19 = v17 + __ROL4__(v72 + v12 - 1958414417 + (v14 ^ v17 & (v16 ^ v14)), 12);
  v20 = v19 + __ROR4__(v73 + v14 - 42063 + (v16 ^ v19 & (v17 ^ v16)), 15);
  v75 = v3[11];
  v21 = v20 + __ROR4__(v75 + v16 - 1990404162 + (v17 ^ v20 & (v19 ^ v17)), 10);
  v22 = v3[13];
  v23 = v21 + __ROL4__(v18 + v17 + 1804603682 + (v19 ^ v21 & (v20 ^ v19)), 7);
  v24 = v23 + __ROL4__(v22 + v19 - 40341101 + (v20 ^ v23 & (v21 ^ v20)), 12);
  v25 = v3[15];
  v26 = v24 + __ROR4__(v15 + v20 - 1502002290 + (v21 ^ v24 & (v23 ^ v21)), 15);
  v27 = v26 + __ROR4__(v25 + v21 + 1236535329 + (v23 ^ v26 & (v24 ^ v23)), 10);
  LODWORD(v3) = v27 + __ROL4__(v67 + v23 - 165796510 + (v26 ^ v24 & (v27 ^ v26)), 5);
  v28 = (_DWORD)v3 + __ROL4__(v70 + v24 - 1069501632 + (v27 ^ v26 & ((unsigned int)v3 ^ v27)), 9);
  v29 = v28 + __ROL4__(v75 + v26 + 643717713 + ((unsigned int)v3 ^ v27 & (v28 ^ (unsigned int)v3)), 14);
  v30 = v29 + __ROR4__(v5 + v27 - 373897302 + (v28 ^ (unsigned int)v3 & (v29 ^ v28)), 12);
  LODWORD(v3) = v30 + __ROL4__(v9 + (_DWORD)v3 - 701558691 + (v29 ^ v28 & (v30 ^ v29)), 5);
  v31 = (_DWORD)v3 + __ROL4__(v73 + v28 + 38016083 + (v30 ^ v29 & ((unsigned int)v3 ^ v30)), 9);
  v32 = v31 + __ROL4__(v25 + v29 - 660478335 + ((unsigned int)v3 ^ v30 & (v31 ^ (unsigned int)v3)), 14);
  v33 = v32 + __ROR4__(v69 + v30 - 405537848 + (v31 ^ (unsigned int)v3 & (v32 ^ v31)), 12);
  LODWORD(v3) = v33 + __ROL4__(v72 + (_DWORD)v3 + 568446438 + (v32 ^ v31 & (v33 ^ v32)), 5);
  v34 = (_DWORD)v3 + __ROL4__(v15 + v31 - 1019803690 + (v33 ^ v32 & ((unsigned int)v3 ^ v33)), 9);
  v35 = v34 + __ROL4__(v74 + v32 - 187363961 + ((unsigned int)v3 ^ v33 & (v34 ^ (unsigned int)v3)), 14);
  v36 = v35 + __ROR4__(v71 + v33 + 1163531501 + (v34 ^ (unsigned int)v3 & (v35 ^ v34)), 12);
  LODWORD(v3) = v36 + __ROL4__(v22 + (_DWORD)v3 - 1444681467 + (v35 ^ v34 & (v36 ^ v35)), 5);
  v37 = (_DWORD)v3 + __ROL4__(v68 + v34 - 51403784 + (v36 ^ v35 & ((unsigned int)v3 ^ v36)), 9);
  v38 = v37 + __ROL4__(v13 + v35 + 1735328473 + ((unsigned int)v3 ^ v36 & (v37 ^ (unsigned int)v3)), 14);
  v39 = v38 + __ROR4__(v18 + v36 - 1926607734 + (v37 ^ (unsigned int)v3 & (v38 ^ v37)), 12);
  v40 = v39 + __ROL4__(v9 + (_DWORD)v3 - 378558 + (v39 ^ v38 ^ v37), 4);
  v41 = v40 + __ROL4__(v71 + v37 - 2022574463 + (v40 ^ v39 ^ v38), 11);
  v42 = v41 + __ROL4__(v75 + v38 + 1839030562 + (v41 ^ v40 ^ v39), 16);
  LODWORD(v3) = v42 + __ROR4__(v15 + v39 - 35309556 + (v42 ^ v41 ^ v40), 9);
  v43 = (_DWORD)v3 + __ROL4__(v67 + v40 - 1530992060 + ((unsigned int)v3 ^ v42 ^ v41), 4);
  v44 = v43 + __ROL4__(v69 + v41 + 1272893353 + (v43 ^ (unsigned int)v3 ^ v42), 11);
  v45 = v44 + __ROL4__(v13 + v42 - 155497632 + (v44 ^ v43 ^ (unsigned int)v3), 16);
  v46 = v45 + __ROR4__(v73 + (_DWORD)v3 - 1094730640 + (v45 ^ v44 ^ v43), 9);
  v47 = v46 + __ROL4__(v22 + v43 + 681279174 + (v46 ^ v45 ^ v44), 4);
  LODWORD(v3) = v47 + __ROL4__(v5 + v44 - 358537222 + (v47 ^ v46 ^ v45), 11);
  v48 = (_DWORD)v3 + __ROL4__(v74 + v45 - 722521979 + ((unsigned int)v3 ^ v47 ^ v46), 16);
  v49 = v48 + __ROR4__(v70 + v46 + 76029189 + (v48 ^ (unsigned int)v3 ^ v47), 9);
  v50 = v49 + __ROL4__(v72 + v47 - 640364487 + (v49 ^ v48 ^ (unsigned int)v3), 4);
  v51 = v50 + __ROL4__(v18 + (_DWORD)v3 - 421815835 + (v50 ^ v49 ^ v48), 11);
  v52 = v51 + __ROL4__(v25 + v48 + 530742520 + (v51 ^ v50 ^ v49), 16);
  LODWORD(v3) = v52 + __ROR4__(v68 + v49 - 995338651 + (v52 ^ v51 ^ v50), 9);
  v53 = (_DWORD)v3 + __ROL4__(v5 + v50 - 198630844 + (v52 ^ ((unsigned int)v3 | ~v51)), 6);
  v54 = v53 + __ROL4__(v13 + v51 + 1126891415 + ((unsigned int)v3 ^ (v53 | ~v52)), 10);
  v55 = v54 + __ROL4__(v15 + v52 - 1416354905 + (v53 ^ (v54 | ~(_DWORD)v3)), 15);
  LODWORD(v3) = v55 + __ROR4__(v9 + (_DWORD)v3 - 57434055 + (v54 ^ (v55 | ~v53)), 11);
  v56 = (_DWORD)v3 + __ROL4__(v18 + v53 + 1700485571 + (v55 ^ ((unsigned int)v3 | ~v54)), 6);
  v57 = v56 + __ROL4__(v74 + v54 - 1894986606 + ((unsigned int)v3 ^ (v56 | ~v55)), 10);
  v58 = v57 + __ROL4__(v73 + v55 - 1051523 + (v56 ^ (v57 | ~(_DWORD)v3)), 15);
  LODWORD(v3) = v58 + __ROR4__(v67 + (_DWORD)v3 - 2054922799 + (v57 ^ (v58 | ~v56)), 11);
  v59 = (_DWORD)v3 + __ROL4__(v71 + v56 + 1873313359 + (v58 ^ ((unsigned int)v3 | ~v57)), 6);
  v60 = v59 + __ROL4__(v25 + v57 - 30611744 + ((unsigned int)v3 ^ (v59 | ~v58)), 10);
  v61 = v60 + __ROL4__(v70 + v58 - 1560198380 + (v59 ^ (v60 | ~(_DWORD)v3)), 15);
  v62 = v61 + __ROR4__(v22 + (_DWORD)v3 + 1309151649 + (v60 ^ (v61 | ~v59)), 11);
  LODWORD(v3) = v62 + __ROL4__(v69 + v59 - 145523070 + (v61 ^ (v62 | ~v60)), 6);
  v63 = (_DWORD)v3 + __ROL4__(v75 + v60 - 1120210379 + (v62 ^ ((unsigned int)v3 | ~v61)), 10);
  v64 = _mm_cvtsi32_si128(a1->m128i_i32[0] + (int)v3);
  v65 = v63 + __ROL4__(v68 + v61 + 718787259 + ((unsigned int)v3 ^ (v63 | ~v62)), 15);
  result = (unsigned int)(v4 + v65 + __ROR4__(v72 + v62 - 343485551 + (v63 ^ (v65 | ~(_DWORD)v3)), 11));
  *a1 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(v64, _mm_cvtsi32_si128(result)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1->m128i_i32[2] + v65), _mm_cvtsi32_si128(a1->m128i_i32[3] + v63)));
  return result;
}
