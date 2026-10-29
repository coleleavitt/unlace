__int64 __fastcall sub_3F5EE0(__int64 a1, _QWORD *a2, __m128i a3)
{
  const char *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v8; // rbp
  unsigned int v9; // r9d
  __int64 v10; // rax
  _DWORD *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rdi
  char *v14; // rdi
  __int64 v15; // r14
  unsigned __int8 *v16; // rax
  _DWORD *v17; // rdi
  char *v18; // rdi
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rax
  unsigned __int8 *v22; // rax
  _DWORD *v23; // rdi
  char *v24; // rdi
  unsigned int v25; // r14d
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // r15
  __m128i si128; // xmm0
  __int64 v33; // rbx
  __int64 v34; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v35; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int8 *v36; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int8 *v37; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int8 *v38; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v39[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v40[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = (const char *)a2[5];
  v40[3] = __readfsqword(0x28u);
  if ( strcmp(v4, "_mm_extract_si64") )
    return 0;
  v5 = *(_QWORD *)(a2[9] + 24LL);
  if ( *(_BYTE *)(v5 + 80) != 4 )
    return 0;
  v8 = *(_QWORD *)(v5 + 88);
  if ( *(_DWORD *)v8 != 56 )
    return 0;
  if ( !v8 )
    return 0;
  if ( !(unsigned __int8)sub_120560(*(_QWORD *)(v5 + 88), "_mm_cvtsi32_si128") )
    return 0;
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 72) + 24LL);
  if ( *(_BYTE *)v10 != 4 )
    return 0;
  v11 = *(_DWORD **)(v10 + 8);
  LOBYTE(v9) = v11 == nullptr || *v11 != 19;
  v6 = v9;
  if ( (_BYTE)v9 )
    return 0;
  v12 = sub_11C8E0((__int64)v11, &v35, 22);
  if ( !v12 || !(unsigned __int8)sub_11FD80((char *)(v12 + 48), v40, 1) || v40[0] != 8 )
  {
    v13 = sub_11C8E0((__int64)v11, &v35, 14);
    if ( v13 )
    {
      v14 = (char *)sub_11C8A0(v13, &v36);
      if ( v14 )
      {
        if ( (unsigned __int8)sub_11FD80(v14, v40, 1) && v40[0] == 256 )
          goto LABEL_17;
      }
    }
    return 0;
  }
  v36 = (unsigned __int8 *)(v12 + 32);
LABEL_17:
  v15 = a2[3];
  v39[1] = 0;
  v39[0] = 0xFFFFFFFF00000000LL;
  v38 = v35;
  v16 = sub_122200(v35, 0);
  v38 = v16;
  if ( *v16 == 4 )
  {
    v17 = *((_DWORD **)v16 + 1);
    if ( *v17 == 20 )
    {
      if ( v17 )
      {
        v18 = (char *)sub_11C8A0((__int64)v17, &v38);
        if ( v18 )
        {
          if ( (unsigned __int8)sub_11FD80(v18, v40, 1) && v40[0] == 63 )
          {
            sub_125180((unsigned __int8 *)v39, v38);
            v19 = *(_QWORD *)(a1 + 40);
            v20 = *(unsigned __int8 *)(v19 + 130);
            if ( v20 > SHIDWORD(v39[0]) )
              sub_1207E0((char *)v39, *(unsigned __int64 **)(v19 + 112), 8, v15, v20, a3);
            v40[1] = 0;
            v40[0] = 0xFFFFFFFF00000000LL;
            v21 = a2[3];
            v37 = v36;
            v34 = v21;
            v22 = sub_122200(v36, 0);
            v37 = v22;
            if ( *v22 == 4 )
            {
              v23 = *((_DWORD **)v22 + 1);
              if ( *v23 == 20 )
              {
                if ( v23 )
                {
                  v24 = (char *)sub_11C8A0((__int64)v23, &v37);
                  if ( v24 )
                  {
                    v25 = sub_11FD80(v24, (__int64 *)&v38, 1);
                    if ( (_BYTE)v25 )
                    {
                      if ( v38 == (_BYTE *)&word_3E + 1 )
                      {
                        sub_125180((unsigned __int8 *)v40, v37);
                        v26 = *(_QWORD *)(a1 + 40);
                        v27 = *(unsigned __int8 *)(v26 + 130);
                        if ( v27 > SHIDWORD(v40[0]) )
                          sub_1207E0((char *)v40, *(unsigned __int64 **)(v26 + 112), 8, v34, v27, a3);
                        qfree(a2[5]);
                        v28 = qstrdup();
                        v29 = a2[9];
                        a2[5] = v28;
                        v30 = *(_QWORD *)(v29 + 32);
                        if ( *(_QWORD *)(v29 + 40) < (unsigned __int64)(v30 + 1) )
                        {
                          *(_QWORD *)(v29 + 24) = qvector_reserve(v29 + 24, *(_QWORD *)(v29 + 24), v30 + 1, 80);
                          v30 = *(_QWORD *)(v29 + 32);
                        }
                        v31 = *(_QWORD *)(v29 + 24) + 80 * v30;
                        si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
                        *(_DWORD *)(v31 + 72) = 0;
                        *(_QWORD *)v31 = 0xFFFFFFFF00000000LL;
                        *(__m128i *)(v31 + 16) = si128;
                        *(_QWORD *)(v31 + 8) = 0;
                        *(_QWORD *)(v31 + 32) = 0;
                        *(_QWORD *)(v31 + 56) = 0;
                        *(_QWORD *)(v31 + 64) = 0;
                        *(_OWORD *)(v31 + 40) = 0;
                        ++*(_QWORD *)(v29 + 32);
                        sub_11CA10((char *)v31, (char *)v40);
                        v38 = (_BYTE *)(&qword_20 + 7);
                        copy_tinfo_t();
                        clear_tinfo_t();
                        *(_DWORD *)(v31 + 4) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 130LL);
                        v33 = *(_QWORD *)(v29 + 24);
                        sub_11CA10((char *)(v33 + 80), (char *)v39);
                        v38 = (_BYTE *)(&qword_20 + 7);
                        copy_tinfo_t();
                        clear_tinfo_t();
                        *(_DWORD *)(v33 + 84) = *(_DWORD *)(v31 + 4);
                        *(_DWORD *)(v29 + 8) = 3;
                        *(_DWORD *)(v29 + 280) |= 0x10u;
                        v6 = v25;
                      }
                    }
                  }
                }
              }
            }
            sub_11CDA0((__int64)v40);
          }
        }
      }
    }
  }
  sub_11CDA0((__int64)v39);
  return v6;
}

