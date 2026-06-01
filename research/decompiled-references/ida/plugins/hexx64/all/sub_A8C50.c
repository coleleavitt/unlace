__int64 __fastcall sub_A8C50(const __m128i *a1, int *a2, __int64 a3, double a4)
{
  unsigned int v4; // ebx
  int v6; // r14d
  __int64 v8; // r11
  int *v9; // r10
  __int64 v10; // r15
  int v11; // eax
  char v13; // al
  __int64 v14; // r11
  int *v15; // r10
  char v16; // al
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // r11
  __int64 v22; // r10
  int v23; // eax
  char *v24; // rdi
  char v25; // al
  bool v26; // zf
  int v27; // eax
  char v28; // al
  __int64 v29; // r11
  __int64 v30; // r10
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  int *v35; // [rsp+8h] [rbp-C8h]
  __int64 v36; // [rsp+8h] [rbp-C8h]
  __int64 v37; // [rsp+8h] [rbp-C8h]
  __int64 v38; // [rsp+10h] [rbp-C0h]
  __int64 v39; // [rsp+10h] [rbp-C0h]
  __int64 v40; // [rsp+10h] [rbp-C0h]
  char v41; // [rsp+18h] [rbp-B8h]
  int *v42; // [rsp+20h] [rbp-B0h]
  int *v43; // [rsp+20h] [rbp-B0h]
  __int64 v44; // [rsp+20h] [rbp-B0h]
  int *v45; // [rsp+20h] [rbp-B0h]
  __int64 v46; // [rsp+28h] [rbp-A8h]
  unsigned __int8 *v47; // [rsp+28h] [rbp-A8h]
  int *v48; // [rsp+28h] [rbp-A8h]
  __int64 v49; // [rsp+28h] [rbp-A8h]
  int *v50; // [rsp+38h] [rbp-98h]
  char tinfo_property; // [rsp+38h] [rbp-98h]
  __int64 v52; // [rsp+40h] [rbp-90h]
  __int64 v53; // [rsp+50h] [rbp-80h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-78h] BYREF
  _QWORD v55[2]; // [rsp+60h] [rbp-70h] BYREF
  char v56[16]; // [rsp+70h] [rbp-60h] BYREF
  char v57[8]; // [rsp+80h] [rbp-50h] BYREF
  char v58[16]; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  LOBYTE(v4) = a3 == 0 || a2 == nullptr;
  if ( (_BYTE)v4 )
    return 0;
  if ( (a2[1] & 0x10) == 0 && (*(_BYTE *)(a3 + 4) & 0x10) == 0 )
  {
    v6 = *a2;
    if ( *a2 == *(_DWORD *)a3 )
    {
      if ( v6 == 2 )
      {
        v8 = a3 + 64;
        v9 = a2 + 16;
        v52 = *(_QWORD *)(a3 + 8);
        v50 = *((int **)a2 + 1);
      }
      else
      {
        v52 = a3;
        v8 = a3 + 32;
        v50 = a2;
        v9 = a2 + 8;
      }
      v10 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
      v11 = *(_DWORD *)(v10 + 88);
      if ( v9[1] < v11 && *(_DWORD *)(v8 + 4) < v11 )
      {
        v55[1] = 0;
        v55[0] = 0xFFFFFFFF00000000LL;
        v42 = v9;
        v46 = v8;
        v13 = sub_130BC0(a1, v52, v8, (__int64)v50, (__int64)v9, 0);
        v41 = 0;
        v14 = v46;
        v15 = v42;
        if ( !v13 )
        {
          v24 = (char *)v42;
          v44 = v46;
          v48 = v15;
          v25 = sub_11FD80(v24, v56, 0);
          v14 = v44;
          v41 = v25;
          v26 = v25 == 0;
          v15 = v48;
          v27 = *(_DWORD *)(v44 + 4);
          if ( v26 || *(_QWORD *)v56 )
          {
            if ( v27 != 4
              || !(unsigned __int8)sub_11FD80((char *)v44, v57, 0)
              || !(unsigned __int8)sub_11FD80((char *)v48, v58, 0)
              || !(unsigned __int8)sub_11D360((__int64)v55, v10, v57, -8) )
            {
              goto LABEL_22;
            }
            v41 = 0;
            v14 = v44;
            v15 = v48;
          }
          else if ( v48[1] != v27 )
          {
            goto LABEL_22;
          }
        }
        if ( v6 == 2 )
        {
          v45 = v15;
          v49 = v14;
          v28 = sub_125B60((unsigned __int8 *)a2 + 32, a3 + 32, 0);
          v17 = v49;
          v18 = (__int64)v45;
          if ( !v28 )
            goto LABEL_22;
          v43 = a2 + 12;
          v47 = (unsigned __int8 *)(a3 + 48);
        }
        else
        {
          v35 = v15;
          v38 = v14;
          v16 = sub_125B60((unsigned __int8 *)a2 + 48, a3 + 48, 0);
          v17 = v38;
          v18 = (__int64)v35;
          v43 = a2 + 16;
          v47 = (unsigned __int8 *)(a3 + 64);
          if ( !v16 )
            goto LABEL_22;
        }
        if ( *(_BYTE *)(a1[30].m128i_i64[0] + 145) )
          v19 = *(unsigned int *)(v18 + 4);
        else
          v19 = *(unsigned int *)(v17 + 4);
        v36 = v18;
        v39 = v17;
        v20 = sub_12CAB0((unsigned __int64 *)v10, v47, (unsigned __int8 *)v43, v19);
        v21 = v39;
        v22 = v36;
        if ( !v20 )
        {
          if ( !(unsigned __int8)sub_12FCD0(v10, v56, a1, a3, (__int64)v47, (__int64)a2, (char *)v43) )
            goto LABEL_22;
          v21 = v39;
          v22 = v36;
          v23 = *(_BYTE *)(a1[30].m128i_i64[0] + 145) ? -*(_DWORD *)(v36 + 4) : *(_DWORD *)(v39 + 4);
          if ( *(_QWORD *)v56 != v23 )
            goto LABEL_22;
        }
        v37 = v22;
        v40 = v21;
        if ( (*(_DWORD *)(a3 + 4) & 0x40010) != 0 || (*(_BYTE *)(a3 + 65) & 2) != 0 || sub_A2650(a1[4].m128i_i64[0], a3) )
          goto LABEL_22;
        v29 = v40;
        v30 = v37;
        if ( v41 )
        {
          sub_1207E0((char *)v40, v10, 9, *(_QWORD *)(a3 + 24), 2 * *(_DWORD *)(v40 + 4));
          goto LABEL_43;
        }
        if ( LOBYTE(v55[0]) )
        {
          v34 = a1[4].m128i_i64[0];
          v53 = 0;
          v54 = 0;
          if ( (unsigned __int8)sub_A8840(v34, (char *)v47, &v53, &v54, 0, a4) )
          {
            *(_QWORD *)v56 = 0;
            *(_QWORD *)v56 = get_tinfo_property();
            tinfo_property = get_tinfo_property();
            clear_tinfo_t();
            if ( (tinfo_property & 0x3F) == 0x19 )
            {
              sub_11CA10((char *)v40, (char *)v55);
              *(_DWORD *)(a3 + 4) |= 0x10u;
              clear_tinfo_t();
              goto LABEL_43;
            }
          }
          clear_tinfo_t();
        }
        else if ( v6 == 2 || (v31 = sub_157240((__int64)a1, v40, v37), v29 = v40, v30 = v37, v31) )
        {
          sub_1571F0((__int64)a1, v52, v29, (__int64)v50, v30, 0);
LABEL_43:
          if ( *(_BYTE *)(a1[30].m128i_i64[0] + 145) )
          {
            sub_123A40((__int64)v56, (unsigned __int8 *)v43, v32, v33);
            sub_11CA10((char *)v47, v56);
            sub_11CDA0((__int64)v56);
          }
          sub_A1280(v10, a3, a2[1]);
          sub_11D5A0((__int64)a2);
          v4 = 1;
        }
LABEL_22:
        sub_11CDA0((__int64)v55);
      }
    }
  }
  return v4;
}

