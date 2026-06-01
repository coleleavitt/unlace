__int64 __fastcall sub_599A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 *a5, int a6)
{
  __int64 v9; // rax
  unsigned int v11; // r8d
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rsi
  const char *v16; // rdx
  __m128i v17; // xmm0
  const char *v18; // r9
  size_t v19; // r15
  char *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r10
  _QWORD *v24; // r15
  int v25; // eax
  int v26; // r15d
  _QWORD *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r12
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // esi
  int v34; // r9d
  int v35; // r8d
  const char *v36; // rdx
  int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 *v46; // rdx
  char v47; // al
  char **v48; // rax
  __int64 v49; // rbp
  __int64 v50; // rax
  __int64 v51; // r13
  int v52; // eax
  int v53; // [rsp+8h] [rbp-A0h]
  char *v54; // [rsp+10h] [rbp-98h]
  unsigned int v55; // [rsp+10h] [rbp-98h]
  int v56; // [rsp+10h] [rbp-98h]
  int v57; // [rsp+10h] [rbp-98h]
  __int64 v58; // [rsp+10h] [rbp-98h]
  int v59; // [rsp+10h] [rbp-98h]
  int v60; // [rsp+10h] [rbp-98h]
  const char *src; // [rsp+18h] [rbp-90h]
  unsigned int srcb; // [rsp+18h] [rbp-90h]
  unsigned int v64; // [rsp+20h] [rbp-88h]
  __int64 v65; // [rsp+20h] [rbp-88h]
  int v67; // [rsp+28h] [rbp-80h]
  char v68; // [rsp+37h] [rbp-71h]
  __int64 v69; // [rsp+38h] [rbp-70h]
  __int64 v70; // [rsp+48h] [rbp-60h] BYREF
  char *v71; // [rsp+50h] [rbp-58h] BYREF
  __m128i v72; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v73; // [rsp+68h] [rbp-40h]

  v9 = *(_QWORD *)(a4 + 56);
  v73 = __readfsqword(0x28u);
  v11 = *(_DWORD *)(a4 + 72);
  if ( !v9 )
  {
    v14 = *(_QWORD *)(a4 + 32);
    v15 = *a2;
    v16 = "%a[%d]: 2WAY block has no tail";
    goto LABEL_12;
  }
  if ( *(_DWORD *)v9 == 42 && *(_BYTE *)(v9 + 32) == 4 && *(_DWORD *)(a4 + 76) == 4 )
  {
    v13 = *(_QWORD *)(v9 + 40);
    v68 = 0;
    if ( *(_DWORD *)v13 == 6 )
    {
      if ( *(_BYTE *)(v13 + 32) != 4 )
        goto LABEL_3;
      v68 = 1;
      v13 = *(_QWORD *)(v13 + 40);
    }
    if ( *(_BYTE *)(v13 + 32) == 11 )
    {
      if ( *(_BYTE *)(v13 + 64) != 8 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        v15 = *a2;
        v16 = "%a[%d]: unfinalized call";
LABEL_12:
        sub_64B50((unsigned int)&v71, v15, (_DWORD)v16, v14, v11, a6);
LABEL_13:
        *(_QWORD *)a1 = v71;
        v17 = _mm_loadu_si128(&v72);
        *(_BYTE *)(a1 + 24) = 1;
        *(__m128i *)(a1 + 8) = v17;
        return a1;
      }
      v18 = *(const char **)(v13 + 40);
      v71 = nullptr;
      v72 = 0;
      if ( v18 )
      {
        v64 = v11;
        src = v18;
        v19 = strlen(v18);
        v71 = (char *)qvector_reserve(&v71, 0, v19 + 1, 1);
        v72.m128i_i64[0] = v19 + 1;
        memmove(v71, src, v19);
        v20 = (char *)qword_8D540;
        v71[v19] = 0;
        v54 = v71;
        v21 = sub_58340(qword_8D540, (const char **)&v71);
        v22 = v64;
        v23 = a3;
        v24 = v21;
        if ( v54 )
        {
          v20 = v54;
          v72.m128i_i64[0] = 0;
          qfree(v54);
          v23 = a3;
          v22 = v64;
        }
      }
      else
      {
        v20 = (char *)qword_8D540;
        v55 = v11;
        v27 = sub_58340(qword_8D540, (const char **)&v71);
        v22 = v55;
        v23 = a3;
        v24 = v27;
      }
      if ( v24 )
      {
        v25 = *((_DWORD *)v24 + 8);
        v26 = v25 & 3;
        if ( v26 == 2 )
          goto LABEL_23;
        if ( v26 != 3 )
        {
          if ( v26 != 1 )
          {
            sub_64B50(
              (unsigned int)&v71,
              *a2,
              (unsigned int)"%a[%d]: can't happen: unknown kind[1] %d",
              *(_QWORD *)(a4 + 32),
              v22,
              0);
            goto LABEL_13;
          }
          v28 = *(_QWORD *)(v13 + 72);
          if ( *(_QWORD *)(v28 + 32) != 2 )
            goto LABEL_24;
          v20 = (char *)&qword_50;
          v37 = -1;
          goto LABEL_28;
        }
        if ( (v25 & 8) != 0 )
        {
LABEL_23:
          v28 = *(_QWORD *)(v13 + 72);
          if ( *(_QWORD *)(v28 + 32) == 1 )
          {
            v20 = nullptr;
            v37 = -1;
LABEL_28:
            v38 = (__int64)&v20[*(_QWORD *)(v28 + 24)];
            if ( (*(_QWORD *)v38 & 0xFFFFFFFF000000FFLL) != 0x400000002LL || *(_BYTE *)(v38 + 24) != 20 )
            {
              v39 = *a2;
              v57 = v22;
              sub_57680(v38, 0x400000002LL);
              v33 = v39;
              v34 = sub_576A0(v13, 0x400000002LL);
              v32 = *(_QWORD *)(a4 + 32);
              v35 = v57;
              v36 = "%a[%d]: call %s arg %d[%s] not 32-bit int numeric";
              goto LABEL_25;
            }
            v40 = *(_QWORD *)(v38 + 8);
            v41 = *(_QWORD *)(v40 + 16);
            v42 = (int)v41;
            if ( (int)v41 >= (unsigned __int64)a5[1] )
            {
              v38 = (__int64)a5;
              v69 = v23;
              v67 = v37;
              v65 = (int)v41;
              srcb = v22;
              v59 = *(_QWORD *)(v40 + 16);
              sub_59650(a5, (int)v41 + 1);
              v23 = v69;
              v37 = v67;
              v42 = v65;
              v22 = srcb;
              LODWORD(v41) = v59;
            }
            if ( v26 == 2 )
            {
              v49 = v42 << 7;
              v50 = (v42 << 7) + *a5;
              if ( v68 )
                sub_57650(v50 + 40, (unsigned int)v22);
              else
                sub_57650(v50 + 56, (unsigned int)v22);
              ++*(_DWORD *)(v49 + *a5 + 32);
            }
            else if ( v26 == 3 )
            {
              v46 = (unsigned __int64 *)&v70;
              v70 = -1;
              if ( v37 != -1 )
              {
                v58 = v42;
                v47 = sub_57F00(v13, 1, &v70);
                v42 = v58;
                if ( !v47 )
                {
                  v51 = *a2;
                  v60 = v22;
                  sub_57680(*(_QWORD *)(*(_QWORD *)(v13 + 72) + 24LL) + 80LL, 1);
                  v52 = sub_576A0(v13, 1);
                  v32 = *(_QWORD *)(a4 + 32);
                  v33 = v51;
                  v34 = v52;
                  v36 = "%a[%d]: call %s arg %d[%s] not RTTI ea";
                  v35 = v60;
                  goto LABEL_25;
                }
              }
              v53 = v22;
              v48 = sub_58750((char **)((v42 << 7) + *a5 + 72), v46);
              *(_DWORD *)v48 = v53;
              *((_BYTE *)v48 + 4) = v68;
            }
            else
            {
              v43 = v42 << 7;
              v44 = v43 + *a5;
              if ( *(_BYTE *)(v44 + 12) )
              {
                v45 = *a2;
                if ( *(_DWORD *)(v44 + 8) >= *(_DWORD *)(v23 + 64) )
                  sub_56CE0(v38, v45, v40, v43, v22);
                sub_64B50(
                  (unsigned int)&v71,
                  v45,
                  (unsigned int)"%a[%d]: state %d entered already at %a[%d]",
                  *(_QWORD *)(a4 + 32),
                  v22,
                  v41);
                goto LABEL_13;
              }
              *(_DWORD *)(v44 + 8) = v22;
              *(_BYTE *)(v44 + 12) = 1;
              *(_BYTE *)(*a5 + v43 + 16) = v68;
            }
            goto LABEL_3;
          }
        }
        else
        {
          v28 = *(_QWORD *)(v13 + 72);
          v20 = nullptr;
          v37 = 1;
          if ( *(_QWORD *)(v28 + 32) == 3 )
            goto LABEL_28;
        }
LABEL_24:
        v29 = *a2;
        v56 = v22;
        hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v20, v28);
        v31 = hexdsp(338, v13);
        v32 = *(_QWORD *)(a4 + 32);
        v33 = v29;
        v34 = v31;
        v35 = v56;
        v36 = "%a[%d]: call %s args %zu != expected %d";
LABEL_25:
        sub_64B50((unsigned int)&v71, v33, (_DWORD)v36, v32, v35, v34);
        goto LABEL_13;
      }
    }
  }
LABEL_3:
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

