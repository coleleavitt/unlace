__int64 __fastcall sub_206510(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __m128i *a5,
        unsigned __int64 a6,
        double a7,
        __m128 a8)
{
  __m128i *v13; // r15
  _QWORD *v14; // rax
  unsigned __int64 v15; // r10
  bool v16; // dl
  __int64 result; // rax
  char v18; // al
  unsigned __int64 v19; // rdi
  int v20; // r8d
  char v21; // dl
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // r15
  __int64 v30; // rdi
  _QWORD *v31; // rdi
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rax
  int v35; // r13d
  __int64 v36; // rsi
  char v37; // al
  __int64 v38; // rax
  __int64 v40; // [rsp+8h] [rbp-120h]
  unsigned __int64 v41; // [rsp+8h] [rbp-120h]
  unsigned __int64 v42; // [rsp+8h] [rbp-120h]
  bool v43; // [rsp+17h] [rbp-111h]
  unsigned __int64 v44; // [rsp+40h] [rbp-E8h] BYREF
  char v45; // [rsp+48h] [rbp-E0h]
  int v46; // [rsp+4Ch] [rbp-DCh]
  unsigned __int64 v47; // [rsp+50h] [rbp-D8h] BYREF
  char v48; // [rsp+58h] [rbp-D0h]
  int v49; // [rsp+5Ch] [rbp-CCh]
  __int64 v50[2]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 *v51[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v52[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v53[4]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v54[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+E8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( *(__int64 **)(a1 + 72) != a4 )
  {
    if ( !under_debugger )
      sub_383060(0xCDB5u, a7);
    goto LABEL_60;
  }
  v13 = (__m128i *)(*a4 + 24LL * *(int *)(a2 + 72));
  v14 = sub_104DF0((unsigned __int64 *)v13, a6);
  v15 = (unsigned __int64)v14;
  if ( !v14 )
    return 0;
  v16 = *((_DWORD *)v14 + 11) == -1 || *(_DWORD *)(a6 + 44) != *((_DWORD *)v14 + 11);
  result = 0;
  v43 = v16;
  if ( v16 && (*(_BYTE *)(v15 + 48) & 2) == 0 )
  {
    v18 = *(_BYTE *)(v15 + 32);
    if ( v18 == 1 )
    {
      v19 = *(int *)(v15 + 24);
    }
    else
    {
      if ( v18 != 5 )
        goto LABEL_57;
      v19 = *(_QWORD *)(v15 + 24);
    }
    v20 = *(_DWORD *)(v15 + 40);
    v21 = *(_BYTE *)(a6 + 32);
    v44 = v19;
    v45 = v18;
    v46 = v20;
    if ( v21 == 1 )
    {
      v22 = *(int *)(a6 + 24);
      goto LABEL_12;
    }
    if ( v21 == 5 )
    {
      v22 = *(_QWORD *)(a6 + 24);
LABEL_12:
      v23 = *(int *)(a6 + 40);
      v47 = v22;
      v48 = v21;
      v49 = v23;
      if ( v21 == v18 && v23 && v19 >= v22 && (v32 = v23 + v22 - 1, v33 = v20 + v19 - 1, v32 >= v33) )
      {
        if ( !v20 || v19 != v22 || v33 != v32 )
          return sub_205210(a1, a4, a3, v13, v15, (__int64)&v47, a7, 3);
        if ( *(_QWORD *)(v15 + 8) )
        {
          if ( (*(_BYTE *)(a6 + 48) & 4) != 0 )
          {
            v42 = v15;
            sub_106EE0(*(_QWORD *)(a1 + 56), v15, *(_QWORD **)(a1 + 72), *(_QWORD **)(a1 + 80));
            v15 = v42;
          }
          v34 = *(_QWORD *)(a1 + 24);
          v35 = *(_DWORD *)(a2 + 72);
          v36 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v34 + 1) )
          {
            v41 = v15;
            v38 = qvector_reserve(a1 + 16, v36, v34 + 1, 4);
            v15 = v41;
            *(_QWORD *)(a1 + 16) = v38;
            v36 = v38;
            v34 = *(_QWORD *)(a1 + 24);
          }
          *(_DWORD *)(v36 + 4 * v34) = v35;
          ++*(_QWORD *)(a1 + 24);
          v40 = v15;
          if ( *(_DWORD *)(a6 + 40) == (unsigned int)sub_202840(a1, *(_DWORD *)(a2 + 72), v15, 1, 1u, a7, a8)
            || (*(_BYTE *)(v40 + 48) & 4) != 0 )
          {
            return sub_205FE0(a1, *(_DWORD *)(a2 + 72), v13, v40, 1, a7, a8);
          }
          if ( !under_debugger )
            sub_383060(0xCDB7u, a7);
LABEL_60:
          BUG();
        }
      }
      else
      {
        if ( *(_QWORD *)(v15 + 8) )
          goto LABEL_27;
        v24 = *(_QWORD *)(a1 + 56);
        if ( (*(_BYTE *)(v24 + 2) & 4) == 0 )
        {
          sub_32F640((__int64)v50, (__int64)&v44, v24, v20);
          sub_32F640((__int64)v52, (__int64)&v47, *(_QWORD *)(a1 + 56), v46);
          sub_64640(v50, v52, v25, v26, v27, v28);
          sub_317C60((__int64 *)v51, (__int64)v53);
          v29 = *(_QWORD *)(a2 + 56);
          if ( v29 )
          {
            while ( 1 )
            {
              sub_124680((__int64)v54, a2, v29, 0, a7, a8);
              if ( (unsigned __int8)sub_64780(v50, v54) )
                break;
              v37 = sub_318470(v51, (__int64)&v55);
              v30 = v55;
              if ( v37 )
                goto LABEL_19;
              if ( v55 )
              {
                v56 = 0;
                qfree(v55);
              }
              qfree(v54[0]);
              v29 = *(_QWORD *)(v29 + 16);
              if ( !v29 )
                goto LABEL_53;
            }
            v30 = v55;
LABEL_19:
            if ( v30 )
            {
              v56 = 0;
              qfree(v30);
            }
            qfree(v54[0]);
          }
          else
          {
LABEL_53:
            v43 = 0;
          }
          if ( v53[0] )
          {
            v53[1] = 0;
            qfree(v53[0]);
          }
          qfree(v52[0]);
          if ( v51[0] )
          {
            v51[1] = nullptr;
            qfree((__int64)v51[0]);
          }
          qfree(v50[0]);
          if ( v43 )
          {
LABEL_27:
            if ( (**(_DWORD **)(a1 + 56) & 0x40000) == 0 )
            {
              if ( (unsigned int)sub_202CA0(a1, a3, a4, a5, a6, (__int64)&v44, a7, 1) )
                return 4294967260LL;
              v31 = *(_QWORD **)(a1 + 56);
              if ( (*(_BYTE *)(v31[187] + 604LL) & 0x10) == 0 )
                return 4294967276LL;
              sub_1F08B0(v31, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
              return 0;
            }
          }
        }
      }
      return 0;
    }
LABEL_57:
    sub_201340(a7);
  }
  return result;
}

