__int64 __fastcall sub_365A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v7; // ecx
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD); // rdi
  bool v11; // zf
  void (__fastcall ***v12)(_QWORD); // rdi
  void (__fastcall ***v13)(_QWORD); // rdi
  void (__fastcall ***v14)(_QWORD); // rdi
  __int64 v16; // rax
  void *v17; // rdx
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  void *v20; // rdx
  __m128i v21; // xmm0
  void *v22; // rdx
  __m128i v23; // xmm0
  void *v24; // rdx
  void *v25; // rdx
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rdx
  unsigned int v29; // [rsp+44h] [rbp-53Ch] BYREF
  unsigned int v30; // [rsp+48h] [rbp-538h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-534h] BYREF
  __int64 v32; // [rsp+50h] [rbp-530h] BYREF
  __int64 v33; // [rsp+58h] [rbp-528h] BYREF
  __int64 v34; // [rsp+60h] [rbp-520h] BYREF
  __int64 v35; // [rsp+68h] [rbp-518h] BYREF
  __int64 v36; // [rsp+70h] [rbp-510h] BYREF
  __int64 v37; // [rsp+78h] [rbp-508h] BYREF
  __int64 v38; // [rsp+80h] [rbp-500h] BYREF
  __int64 v39; // [rsp+88h] [rbp-4F8h] BYREF
  void *v40; // [rsp+90h] [rbp-4F0h] BYREF
  __m128i v41; // [rsp+98h] [rbp-4E8h]
  __int64 v42; // [rsp+A8h] [rbp-4D8h] BYREF
  void *v43; // [rsp+B0h] [rbp-4D0h] BYREF
  __m128i v44; // [rsp+B8h] [rbp-4C8h]
  __int64 v45; // [rsp+C8h] [rbp-4B8h]
  void *v46; // [rsp+D0h] [rbp-4B0h] BYREF
  __m128i v47; // [rsp+D8h] [rbp-4A8h]
  __int64 v48; // [rsp+E8h] [rbp-498h] BYREF
  void *v49; // [rsp+F0h] [rbp-490h] BYREF
  __m128i v50; // [rsp+F8h] [rbp-488h]
  void *ptr; // [rsp+108h] [rbp-478h] BYREF
  __m128i v52; // [rsp+110h] [rbp-470h]
  __m128i v53; // [rsp+120h] [rbp-460h] BYREF
  __int64 v54; // [rsp+130h] [rbp-450h] BYREF
  char v55[1032]; // [rsp+140h] [rbp-440h] BYREF
  unsigned __int64 v56; // [rsp+548h] [rbp-38h]

  v7 = *(_DWORD *)(a4 + 12);
  v56 = __readfsqword(0x28u);
  if ( v7 > 0x64 )
    v7 = 100;
  sub_19D9D0(
    (unsigned int)v55,
    1024,
    (unsigned int)"SELECT funcs.id, funcs.name, funcs.size, funcs.metadata, calcrel_hash.hash, funcs.ea, func_freqs.count"
                  "er FROM funcs, calcrel_hash, func_freqs WHERE calcrel_hash.fk_func = funcs.id AND func_freqs.fk_func ="
                  " funcs.id ORDER BY func_freqs.counter DESC LIMIT %u",
    v7,
    a5,
    a6);
  v9 = a3 + 40;
  sub_318B0((__int64)&v32, a1, v55);
  if ( v32 )
  {
    unk_241E60(&v33, &v32, v9);
    if ( v33 )
    {
      while ( (unsigned __int8)unk_241E70(&v33, v9) )
      {
        v40 = nullptr;
        v42 = 0;
        v43 = nullptr;
        v45 = 0;
        v46 = nullptr;
        v48 = 0;
        v49 = nullptr;
        ptr = nullptr;
        v54 = -1;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v52 = 0;
        v53 = 0;
        if ( (unsigned __int8)sub_2F910(v9, (__int64)&v33, (__int64)"usiBBUi", &v29, &v40, &v42, &v43, &v46, &v54, &v48) )
        {
          sub_318B0(
            (__int64)&v34,
            a1,
            "SELECT idbs.fk_hostname, idbs.fk_input FROM idbs, history WHERE idbs.id = history.fk_idb AND history.fk_func = ?");
          if ( v34 )
          {
            if ( (unsigned __int8)sub_2F9D0(v9, (__int64)&v34, (__int64)"u", v29) )
            {
              unk_241E60(&v35, &v34, v9);
              if ( v35 )
              {
                if ( (unsigned __int8)unk_241E70(&v35, v9)
                  && (unsigned __int8)sub_2F910(v9, (__int64)&v35, (__int64)"uu", &v31, &v30) )
                {
                  sub_318B0((__int64)&v36, a1, "SELECT path FROM inputs WHERE id = ?");
                  if ( v36 && (unsigned __int8)sub_2F9D0(v9, (__int64)&v36, (__int64)"u", v30) )
                  {
                    unk_241E60(&v37, &v36, v9);
                    if ( v37
                      && (unsigned __int8)unk_241E70(&v37, v9)
                      && (unsigned __int8)sub_2F910(v9, (__int64)&v37, (__int64)"s", &ptr) )
                    {
                      sub_318B0((__int64)&v38, a1, "SELECT name FROM hostnames WHERE id = ?");
                      if ( v38 && (unsigned __int8)sub_2F9D0(v9, (__int64)&v38, (__int64)"u", v31) )
                      {
                        unk_241E60(&v39, &v38, v9);
                        if ( v39
                          && (unsigned __int8)unk_241E70(&v39, v9)
                          && (unsigned __int8)sub_2F910(v9, (__int64)&v39, (__int64)"s", &v49) )
                        {
                          v16 = sub_31EC0((__int64 *)(a2 + 16));
                          v17 = *(void **)v16;
                          v18 = _mm_loadu_si128((const __m128i *)(v16 + 8));
                          *(_QWORD *)v16 = v40;
                          v40 = v17;
                          LODWORD(v17) = *(_DWORD *)(v16 + 24);
                          *(__m128i *)(v16 + 8) = v41;
                          v41 = v18;
                          v19 = _mm_loadu_si128((const __m128i *)(v16 + 40));
                          *(_DWORD *)(v16 + 24) = v42;
                          LODWORD(v42) = (_DWORD)v17;
                          v20 = *(void **)(v16 + 32);
                          *(_QWORD *)(v16 + 32) = v43;
                          v43 = v20;
                          LODWORD(v20) = *(_DWORD *)(v16 + 56);
                          *(__m128i *)(v16 + 40) = v44;
                          v44 = v19;
                          v21 = _mm_loadu_si128((const __m128i *)(v16 + 72));
                          *(_DWORD *)(v16 + 56) = v45;
                          LODWORD(v45) = (_DWORD)v20;
                          v22 = *(void **)(v16 + 64);
                          *(_QWORD *)(v16 + 64) = v46;
                          v46 = v22;
                          LODWORD(v22) = *(_DWORD *)(v16 + 88);
                          *(__m128i *)(v16 + 72) = v47;
                          v47 = v21;
                          v23 = _mm_loadu_si128((const __m128i *)(v16 + 104));
                          *(_DWORD *)(v16 + 88) = v48;
                          LODWORD(v48) = (_DWORD)v22;
                          v24 = *(void **)(v16 + 96);
                          *(_QWORD *)(v16 + 96) = v49;
                          v49 = v24;
                          v25 = *(void **)(v16 + 120);
                          *(__m128i *)(v16 + 104) = v50;
                          v50 = v23;
                          v26 = _mm_loadu_si128((const __m128i *)(v16 + 128));
                          *(_QWORD *)(v16 + 120) = ptr;
                          ptr = v25;
                          *(__m128i *)(v16 + 128) = v52;
                          v52 = v26;
                          v27 = _mm_loadu_si128((const __m128i *)(v16 + 144));
                          if ( &v53 != (__m128i *)(v16 + 144) )
                            *(__m128i *)(v16 + 144) = _mm_load_si128(&v53);
                          v28 = *(_QWORD *)(v16 + 160);
                          v53 = v27;
                          *(_QWORD *)(v16 + 160) = v54;
                          v54 = v28;
                        }
                        sub_33A10(&v39);
                      }
                      sub_32C50(&v38);
                    }
                    sub_33A10(&v37);
                  }
                  sub_32C50(&v36);
                }
                v10 = (void (__fastcall ***)(_QWORD))v35;
                if ( v35 )
                {
                  v11 = (*(_DWORD *)(v35 + 8))-- == 1;
                  if ( v11 )
                    (**v10)(v10);
                }
              }
            }
            v12 = (void (__fastcall ***)(_QWORD))v34;
            if ( v34 )
            {
              v11 = (*(_DWORD *)(v34 + 8))-- == 1;
              if ( v11 )
                (**v12)(v12);
            }
          }
        }
        if ( ptr )
        {
          v52.m128i_i64[0] = 0;
          j__free(ptr);
        }
        if ( v49 )
        {
          v50.m128i_i64[0] = 0;
          j__free(v49);
        }
        if ( v46 )
        {
          v47.m128i_i64[0] = 0;
          j__free(v46);
        }
        if ( v43 )
        {
          v44.m128i_i64[0] = 0;
          j__free(v43);
        }
        if ( v40 )
        {
          v41.m128i_i64[0] = 0;
          j__free(v40);
        }
      }
      v13 = (void (__fastcall ***)(_QWORD))v33;
      if ( v33 )
      {
        v11 = (*(_DWORD *)(v33 + 8))-- == 1;
        if ( v11 )
          (**v13)(v13);
      }
    }
    v14 = (void (__fastcall ***)(_QWORD))v32;
    if ( v32 )
    {
      v11 = (*(_DWORD *)(v32 + 8))-- == 1;
      if ( v11 )
        (**v14)(v14);
    }
  }
  return 0;
}
