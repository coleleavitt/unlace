bool __fastcall sub_19C970(__int64 a1, _QWORD *a2, double a3)
{
  _QWORD *v4; // rax
  int v5; // ebx
  __int64 v6; // r15
  __int64 v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r12
  bool v14; // zf
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  bool v24; // al
  __int64 v25; // r15
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 *v34; // rax
  __int64 v35; // rax
  unsigned __int64 *v36; // rax
  __int64 *v37; // [rsp-10h] [rbp-130h]
  bool v38; // [rsp+6h] [rbp-11Ah]
  bool v39; // [rsp+7h] [rbp-119h]
  __int64 v40; // [rsp+10h] [rbp-110h]
  unsigned __int64 v41; // [rsp+10h] [rbp-110h]
  __int64 v42; // [rsp+10h] [rbp-110h]
  __int64 tinfo_size; // [rsp+18h] [rbp-108h]
  int v44; // [rsp+20h] [rbp-100h]
  __int64 v45; // [rsp+20h] [rbp-100h]
  __int64 v47[2]; // [rsp+30h] [rbp-F0h] BYREF
  unsigned __int64 *v48; // [rsp+40h] [rbp-E0h] BYREF
  __int128 v49; // [rsp+48h] [rbp-D8h]
  __int64 v50; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-B8h]
  _BYTE v52[24]; // [rsp+70h] [rbp-B0h] BYREF
  int v53; // [rsp+88h] [rbp-98h]
  __int64 (__fastcall **v54)(); // [rsp+90h] [rbp-90h]
  __int64 v55; // [rsp+98h] [rbp-88h]
  int v56; // [rsp+A0h] [rbp-80h]
  __int128 v57; // [rsp+A8h] [rbp-78h]
  __int64 v58; // [rsp+B8h] [rbp-68h]
  __int64 v59; // [rsp+C0h] [rbp-60h] BYREF
  __int128 v60; // [rsp+C8h] [rbp-58h]
  __int64 v61; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v62; // [rsp+E8h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 128) )
    return 0;
  v4 = *(_QWORD **)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 184);
  v6 = v4[3];
  if ( v5 != (_DWORD)v6 && *(_DWORD *)(a1 + 208) != (unsigned int)v4[6] )
    return 0;
  v8 = v4[35];
  v40 = v4[6];
  v44 = *(_DWORD *)(a1 + 208);
  v9 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 248LL);
  tinfo_size = get_tinfo_size();
  if ( tinfo_size == -1 )
    return 0;
  v11 = (__int64 *)a2[11];
  v12 = v40;
  v13 = &v11[2 * a2[12]];
  if ( v13 != v11 )
  {
    v14 = v5 == (_DWORD)v6;
    v15 = (__int64 *)a2[11];
    v39 = v14;
    v38 = v44 == (_DWORD)v40;
    do
    {
      v16 = v15[1];
      if ( *(_BYTE *)(v16 + 64) == 5 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 72) + 8LL);
        v12 = v17
            - *(__int16 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
                            *(_QWORD *)(a1 + 16),
                            v9,
                            v10,
                            v12);
        v45 = v12;
        if ( v12 >= 0 )
        {
          v19 = *(_QWORD *)(v8 + 1440);
          v47[0] = 0;
          v47[1] = 0;
          v48 = nullptr;
          v49 = 0;
          if ( v19 + v12 + tinfo_size - 1 >= (unsigned __int64)(v19 + v12) )
          {
            v41 = v19 + v12;
            v48 = (unsigned __int64 *)qvector_reserve((__int64)&v48, 0, 1, 16);
            v34 = &v48[2 * v49];
            *v34 = v41;
            v34[1] = tinfo_size;
            v19 = *(_QWORD *)(v8 + 1440);
            *(_QWORD *)&v49 = v49 + 1;
          }
          v20 = a1;
          v21 = v19 + v17;
          v22 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
          v23 = *(int *)(v22 + 80);
          v50 = 0;
          v51 = 0;
          memset(v52, 0, sizeof(v52));
          if ( v23 + v21 - 1 >= v21 )
          {
            v42 = v23;
            v35 = qvector_reserve((__int64)v52, 0, 1, 16);
            v23 = v42;
            *(_QWORD *)v52 = v35;
            v22 = 16LL * *(_QWORD *)&v52[8];
            v36 = (unsigned __int64 *)(16LL * *(_QWORD *)&v52[8] + v35);
            *v36 = v21;
            v36[1] = v42;
            ++*(_QWORD *)&v52[8];
          }
          sub_64640(v47, &v50, v22, v20, v23, v18);
          sub_317C60((__int64 *)&v48, (__int64)v52);
          if ( *(_QWORD *)v52 )
          {
            *(_QWORD *)&v52[8] = 0;
            qfree(*(__int64 *)v52);
          }
          qfree(v50);
          v9 = (__int64 *)(v8 + 232);
          if ( (unsigned __int8)sub_318470(&v48, v8 + 232)
            || (v24 = sub_17C4E0(*(__int64 **)(v8 + 784), (__int64)v47, 0, 0xFFFFFFFF, 0, 0, a3, 2u, 0), v9 = v37, v24)
            || (v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15[1] + 40) + 8LL) + 8LL), v25 < sub_194CC0(v8))
            || (v26 = (_QWORD *)a2[6], v27 = (_QWORD *)v26[35], v28 = v27[18], v25 < v28)
            || (v9 = (__int64 *)v27[187], v25 >= v28 + *(_DWORD *)(v27[188] + 80LL) * *((_DWORD *)v9 + 164))
            || v25 % *(char *)((*(__int64 (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26) + 12)
            || !*(_BYTE *)(v8 + 320)
            && *(_BYTE *)(a1 + 468)
            && v39
            && v38
            && (*(_QWORD *)(v8 + 144) < (unsigned __int64)(tinfo_size + v45)
             || (v9 = v47, sub_17C4E0(*(__int64 **)(v8 + 784), (__int64)v47, 0, 0xFFFFFFFF, 0, 0, a3, 1u, 0))) )
          {
            if ( v48 )
            {
              *(_QWORD *)&v49 = 0;
              qfree((__int64)v48);
            }
          }
          else
          {
            v50 = 0;
            LODWORD(v51) = 0;
            *(_QWORD *)&v52[16] = -1;
            v53 = -1;
            v56 = -1;
            *(__m128i *)v52 = _mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)off_4DBD90,
                                (__m128i)(unsigned __int64)off_4DBD70);
            v57 = -1;
            a3 = 0.0;
            v55 = -1;
            v54 = off_4DBD70;
            v58 = -1;
            v59 = 0;
            v61 = 0;
            v60 = 0;
            v29 = *v15;
            LODWORD(v51) = 16;
            v50 = v29;
            *(_QWORD *)&v52[16] = *(_QWORD *)(a1 + 176);
            v53 = *(_DWORD *)(a1 + 184);
            v55 = *(_QWORD *)(a1 + 200);
            v56 = *(_DWORD *)(a1 + 208);
            *(_QWORD *)&v57 = v45;
            *((_QWORD *)&v57 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15[1] + 40) + 8LL) + 8LL);
            v30 = v15[1];
            v31 = qvector_reserve((__int64)&v59, 0, 1, 8);
            v32 = v60;
            v59 = v31;
            v9 = &v50;
            *(_QWORD *)(v31 + 8 * v60) = v30;
            *(_QWORD *)&v60 = v60 + 1;
            v61 = v15[1];
            sub_19C5A0((_QWORD *)a1, (__int64)&v50, v32, v33);
            if ( v59 )
            {
              *(_QWORD *)&v60 = 0;
              qfree(v59);
            }
            if ( v48 )
            {
              *(_QWORD *)&v49 = 0;
              qfree((__int64)v48);
            }
          }
          qfree(v47[0]);
        }
      }
      v15 += 2;
    }
    while ( v13 != v15 );
  }
  return *(_QWORD *)(a1 + 128) != 0;
}

