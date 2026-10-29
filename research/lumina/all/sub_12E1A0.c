__int64 __fastcall sub_12E1A0(__int64 a1, __int64 *a2, __int64 a3, int a4, _BOOL4 a5, unsigned int a6, double a7)
{
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r12
  signed int v12; // r13d
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  signed int v16; // ecx
  __int64 v17; // rsi
  int v18; // ebp
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  bool v21; // dl
  bool v22; // zf
  int v23; // eax
  int v24; // ebp
  __int64 v25; // rbp
  __int64 *v26; // rax
  __int64 *v27; // r9
  __int64 v28; // rsi
  unsigned int v29; // ecx
  unsigned int v30; // r13d
  int v32; // eax
  __m128i *v33; // r10
  signed int v34; // esi
  _QWORD *v35; // r11
  __int64 v36; // r10
  signed int v37; // ebx
  _QWORD *v38; // r13
  __int64 v39; // rax
  __int64 v40; // rbp
  _QWORD *v41; // r14
  __int64 v42; // rdx
  __int64 *v43; // rax
  _QWORD *v44; // rbp
  __int64 *v45; // rax
  signed int v46; // ecx
  char *v47; // r9
  bool v48; // cf
  signed int v49; // ebp
  char *v50; // r14
  __int64 v51; // r15
  unsigned int v52; // r12d
  unsigned int v53; // ecx
  _QWORD *v54; // rsi
  int *v55; // rdx
  _DWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // rsi
  __int64 v61; // [rsp+10h] [rbp-98h]
  _BOOL4 v63; // [rsp+1Ch] [rbp-8Ch]
  int v64; // [rsp+1Ch] [rbp-8Ch]
  int v65; // [rsp+20h] [rbp-88h]
  __int64 *v66; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+20h] [rbp-88h]
  __m128i *v68; // [rsp+20h] [rbp-88h]
  __int64 *v69; // [rsp+28h] [rbp-80h]
  int *v70; // [rsp+28h] [rbp-80h]
  __int64 v71; // [rsp+30h] [rbp-78h]
  __int64 v72; // [rsp+30h] [rbp-78h]
  int v73; // [rsp+38h] [rbp-70h]
  _QWORD *v74; // [rsp+38h] [rbp-70h]
  __int64 v75; // [rsp+38h] [rbp-70h]
  __m128i *v76; // [rsp+38h] [rbp-70h]
  __m128i *v77; // [rsp+38h] [rbp-70h]
  char *v78; // [rsp+40h] [rbp-68h]
  __int64 v79; // [rsp+40h] [rbp-68h]
  __int64 v80; // [rsp+40h] [rbp-68h]
  __m128i *v81; // [rsp+40h] [rbp-68h]
  __m128i *v82; // [rsp+48h] [rbp-60h]
  __int64 v83; // [rsp+50h] [rbp-58h]
  int v84; // [rsp+58h] [rbp-50h]
  char v85; // [rsp+58h] [rbp-50h]
  signed int v86; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v87; // [rsp+64h] [rbp-44h] BYREF
  unsigned __int64 v88; // [rsp+68h] [rbp-40h]

  v7 = a3;
  v8 = (__int64)a2;
  v9 = *a2;
  v88 = __readfsqword(0x28u);
  v63 = a5;
  if ( ((*(_BYTE *)v9 - 45) & 0xF7) == 0 )
  {
    v30 = sub_1257D0(a1, *(unsigned __int8 **)(v9 + 24), a6, a7);
LABEL_35:
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 96) + 50LL) & 0x20) == 0 || (*(_BYTE *)(v8 + 21) & 8) == 0 )
      sub_D0820((_DWORD *)v7, (_QWORD *)(v7 + 104), v8);
    return v30;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v61 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)v9 == 50 )
  {
    v30 = a6;
    sub_E1710(v10, 75, 0, a6, 0);
    goto LABEL_35;
  }
  v11 = *(_QWORD *)(a3 + 96);
  v12 = a4;
  if ( (*(_BYTE *)(v11 + 49) & 4) == 0 )
  {
    v13 = *(_QWORD *)(v11 + 32);
    if ( v13 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 56) + a4) )
        v63 = !a5;
    }
  }
  if ( a4 <= 0 )
  {
LABEL_12:
    v16 = *(unsigned __int16 *)(v11 + 52);
    if ( v12 >= v16 )
    {
      v18 = 0;
    }
    else
    {
      v17 = *(_QWORD *)(v11 + 64);
      v18 = 0;
      v19 = (_QWORD **)(v17 + 8LL * v12);
      v20 = v17 + 8 * (v12 + (unsigned __int64)(unsigned int)(v16 + ~v12)) + 8;
      do
      {
        v21 = **v19++ == v9;
        v18 += v21;
      }
      while ( (_QWORD **)v20 != v19 );
    }
    v22 = (*(_BYTE *)(v9 + 5) & 8) == 0;
    v87 = 0;
    if ( v22 || **(_DWORD **)(*(_QWORD *)(v9 + 32) + 32LL) == 1 )
    {
      v69 = nullptr;
      v65 = sub_123DB0(a1, v9, 4, nullptr, nullptr, &v87, a7);
    }
    else
    {
      v72 = *(_QWORD *)a1;
      if ( v9 )
        v33 = sub_DD6E0(*(_QWORD *)a1, v9, 0, nullptr);
      else
        v33 = nullptr;
      if ( *(_BYTE *)(v72 + 103) )
        goto LABEL_74;
      v34 = *(unsigned __int16 *)(v11 + 52);
      v35 = *(_QWORD **)(v33[2].m128i_i64[0] + 32);
      v74 = *(_QWORD **)(v33[1].m128i_i64[0] + 32);
      if ( v12 >= v34 )
      {
        v66 = nullptr;
        v70 = nullptr;
      }
      else
      {
        v82 = v33;
        v86 = v12;
        v36 = v9;
        v66 = nullptr;
        v37 = v12;
        v70 = nullptr;
        v84 = v18;
        v83 = v8;
        v38 = v35;
        do
        {
          v39 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 8LL * v37);
          if ( v36 == *(_QWORD *)v39 )
          {
            v40 = 3LL * (*(_DWORD *)(v39 + 36) - 1);
            v41 = &v38[v40];
            v42 = v38[v40 + 1];
            if ( v42 )
            {
              v79 = v36;
              v43 = sub_E0F20((__int64 *)a1, v70, v42);
              v44 = &v74[v40];
              v41[1] = 0;
              v70 = (int *)v43;
              v45 = sub_E0F20((__int64 *)a1, (int *)v66, v44[1]);
              v44[1] = 0;
              v66 = v45;
              v34 = *(unsigned __int16 *)(v11 + 52);
              v36 = v79;
            }
          }
          ++v37;
        }
        while ( v37 < v34 );
        v35 = v38;
        v18 = v84;
        v33 = v82;
        v8 = v83;
        v12 = v86;
      }
      if ( v35 )
      {
        v81 = v33;
        sub_D7810(v72, v35);
        v33 = v81;
      }
      v54 = v74;
      if ( v74 )
      {
        v76 = v33;
        sub_D7810(v72, v54);
        v33 = v76;
      }
      *(_QWORD *)(v33[1].m128i_i64[0] + 32) = v66;
      *(_QWORD *)(v33[2].m128i_i64[0] + 32) = v70;
      if ( v66 && *(_DWORD *)v66 == 1 )
      {
        v58 = v66[1];
        v66[1] = 0;
        v59 = v33[1].m128i_i64[0];
        if ( v59 )
        {
          v68 = v33;
          sub_D7720(v72, v59);
          v33 = v68;
        }
        v33[1].m128i_i64[0] = v58;
      }
      v55 = *(int **)(v33[2].m128i_i64[0] + 72);
      if ( v55 && *v55 > 0 )
      {
        v56 = v55 + 7;
        v57 = (__int64)&v55[6 * (*v55 - 1) + 13];
        do
        {
          v56 += 6;
          *((_WORD *)v56 - 12) = 0;
        }
        while ( (_DWORD *)v57 != v56 );
      }
      if ( *(_BYTE *)(v72 + 103) )
      {
LABEL_74:
        v69 = nullptr;
        v65 = 5;
      }
      else
      {
        v67 = (__int64)v33;
        v69 = sub_DC1C0(*(_QWORD *)a1, 4LL * v18);
        v77 = (__m128i *)v67;
        v65 = sub_123DB0(a1, v67, 4, nullptr, v69, &v87, a7);
        v33 = v77;
        *(_DWORD *)(*(_QWORD *)v8 + 44LL) = v87;
      }
      if ( v33 )
        sub_D7720(v72, (__int64)v33);
      v9 = *(_QWORD *)v8;
    }
    if ( v65 == 4 )
      v63 = !v63;
    sub_E1710(v61, !v63 ? 35 : 31, v87, 0, 0);
    *(_DWORD *)(v11 + 48) |= 0x800u;
    if ( !*(_DWORD *)(v7 + 80) )
    {
      v32 = *(_DWORD *)(a1 + 68) - 1;
      *(_DWORD *)(a1 + 68) = v32;
      *(_DWORD *)(v7 + 16) = v32;
    }
    if ( v12 > 0 )
    {
      v23 = *(_DWORD *)(v11 + 48);
      if ( (v23 & 0x100000) == 0 )
        *(_DWORD *)(v11 + 48) = v23 | 0x40000;
    }
    v24 = *(_DWORD *)(v7 + 80) + v18;
    v73 = *(_DWORD *)(v7 + 80);
    v78 = *(char **)(v7 + 88);
    *(_DWORD *)(v7 + 80) = v24;
    v25 = 20LL * v24;
    v71 = **(_QWORD **)(v8 + 8);
    v26 = sub_DBF10(**(_QWORD **)v71, v25 + 16);
    if ( v26 )
    {
      v27 = v26 + 2;
      v28 = *(_QWORD *)(v71 + 104);
      *((_BYTE *)v26 + 8) = v25;
      *v26 = v28;
      *(_QWORD *)(v71 + 104) = v26;
      if ( v26 != (__int64 *)-16LL && v78 )
      {
        v29 = (unsigned __int8)*(v78 - 8);
        if ( v29 >= 8 )
        {
          v26[2] = *(_QWORD *)v78;
          *(__int64 *)((char *)v27 + v29 - 8) = *(_QWORD *)&v78[v29 - 8];
          qmemcpy(
            (void *)((unsigned __int64)(v26 + 3) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)(v78 - ((char *)v27 - ((unsigned __int64)(v26 + 3) & 0xFFFFFFFFFFFFFFF8LL))),
            8LL * (((_DWORD)v27 - (((_DWORD)v26 + 24) & 0xFFFFFFF8) + v29) >> 3));
        }
        else if ( (v29 & 4) != 0 )
        {
          *((_DWORD *)v26 + 4) = *(_DWORD *)v78;
          *(_DWORD *)((char *)v27 + v29 - 4) = *(_DWORD *)&v78[v29 - 4];
        }
        else if ( *(v78 - 8) )
        {
          *((_BYTE *)v26 + 16) = *v78;
          if ( (v29 & 2) != 0 )
            *(_WORD *)((char *)v27 + v29 - 2) = *(_WORD *)&v78[v29 - 2];
        }
        *(_QWORD *)(v7 + 88) = v27;
        goto LABEL_50;
      }
      *(_QWORD *)(v7 + 88) = v27;
      if ( v26 != (__int64 *)-16LL )
      {
LABEL_50:
        v46 = *(unsigned __int16 *)(v11 + 52);
        v47 = (char *)v27 + 20 * v73;
        if ( v12 < v46 )
        {
          v48 = !v63;
          v75 = v8;
          v49 = v12;
          v80 = v7;
          v64 = 0;
          v50 = v47;
          v51 = v11;
          v85 = v48 - 1 + 38;
          do
          {
            while ( **(_QWORD **)(*(_QWORD *)(v51 + 64) + 8LL * v49) != v9 )
            {
              if ( v46 <= ++v49 )
                goto LABEL_61;
            }
            v52 = a6 - v12 + v49;
            if ( v65 == 1 )
            {
              *((_DWORD *)v50 + 1) = sub_E1710(v61, 135, v87, v52, 0);
            }
            else
            {
              v53 = 0;
              if ( v69 )
                v53 = *((_DWORD *)v69 + v64++);
              *((_DWORD *)v50 + 1) = sub_E1710(v61, 94, v87, v53, v52);
            }
            sub_E1710(v61, 50, v52, 0, 0);
            if ( v12 == v49 )
            {
              *(_DWORD *)v50 = v87;
              v50[16] = v85;
              if ( v12 <= 0 )
              {
                *((_DWORD *)v50 + 3) = 0;
              }
              else
              {
                *((_DWORD *)v50 + 3) = v12;
                *((_DWORD *)v50 + 2) = a6 - v12;
              }
            }
            else
            {
              v50[16] = -73;
            }
            v46 = *(unsigned __int16 *)(v51 + 52);
            ++v49;
            v50 += 20;
          }
          while ( v46 > v49 );
LABEL_61:
          v11 = v51;
          v8 = v75;
          v7 = v80;
        }
        if ( v12 > 0 && (*(_DWORD *)(v11 + 48) & 0x100400) == 0 )
          sub_E1710(v61, 125, *(_DWORD *)(v7 + 8), 0, v12);
        goto LABEL_65;
      }
    }
    else
    {
      *(_QWORD *)(v7 + 88) = 0;
    }
    *(_DWORD *)(v7 + 80) = 0;
LABEL_65:
    if ( v69 )
      sub_C9250(*(_QWORD *)a1, v69);
    v30 = a6;
    goto LABEL_35;
  }
  v14 = *(_QWORD **)(v11 + 64);
  v15 = (__int64)&v14[(unsigned int)(a4 - 1) + 1];
  while ( !*v14 || *(_QWORD *)*v14 != v9 )
  {
    if ( (_QWORD *)v15 == ++v14 )
      goto LABEL_12;
  }
  sub_D0820((_DWORD *)v7, (_QWORD *)(v7 + 104), (__int64)a2);
  return a6;
}
