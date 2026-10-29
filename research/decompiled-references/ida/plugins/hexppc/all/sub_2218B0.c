unsigned __int64 __fastcall sub_2218B0(__int64 a1, int a2, int a3, __int64 a4, unsigned __int64 a5, unsigned int a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  int j; // r14d
  unsigned int v17; // eax
  int v18; // ebx
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbp
  _QWORD *v22; // rbx
  __int64 v24; // r15
  __int64 v25; // rbx
  bool v26; // bl
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 *v31; // rbp
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 v35; // r14
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  unsigned int v38; // ebx
  int v39; // eax
  __int64 v40; // r14
  int i; // ebx
  unsigned int v42; // eax
  int v43; // edx
  int v44; // r15d
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rsi
  unsigned int v48; // eax
  char v49; // r14
  __int64 v50; // rdi
  __int64 v51; // r12
  _QWORD *v52; // rbp
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // ebp
  unsigned __int64 tinfo_property; // rax
  __int64 v57; // [rsp+0h] [rbp-E0h]
  int v58; // [rsp+10h] [rbp-D0h]
  __int64 v60; // [rsp+18h] [rbp-C8h]
  int v61; // [rsp+18h] [rbp-C8h]
  __int64 v62; // [rsp+20h] [rbp-C0h]
  __int64 v64; // [rsp+30h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-90h] BYREF
  __int64 v68[2]; // [rsp+58h] [rbp-88h] BYREF
  __int64 v69; // [rsp+68h] [rbp-78h]
  __int128 v70; // [rsp+70h] [rbp-70h]
  __int128 v71; // [rsp+80h] [rbp-60h]
  __int64 v72; // [rsp+90h] [rbp-50h]
  int v73; // [rsp+98h] [rbp-48h]
  unsigned __int64 v74; // [rsp+A0h] [rbp-40h]

  v66 = a4;
  v65 = a5;
  v74 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 16);
  v70 = 0;
  v69 = 0;
  v72 = 0;
  v73 = 1;
  v71 = 0;
  v9 = *(_QWORD *)(v8 + 432);
  v62 = v9 + 104LL * a2;
  v10 = v9 + 104LL * a3;
  if ( (get_tinfo_property() & 0x3F) == 0xD && (unsigned __int8)get_tinfo_details() )
  {
    v11 = v65;
    v26 = 0;
    if ( !v65 )
      v26 = a6 >= (unsigned __int64)v71;
    v27 = sub_1ED1E0(v10, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1496LL), v65, a6);
    v28 = sub_3294D0(0, v10 + 80, v27, 0);
    v29 = a6;
    v58 = v28;
    v12 = a6;
    if ( v28 == -1 )
    {
      if ( a6 != (_QWORD)v71 )
      {
        if ( v65 >= get_tinfo_property() )
          goto LABEL_12;
        v12 = a6;
        v13 = *(_QWORD *)(a1 + 16);
        goto LABEL_6;
      }
      if ( v65 >= get_tinfo_property() )
        goto LABEL_12;
      goto LABEL_24;
    }
    v30 = v28;
    v31 = (__int64 *)(v69 + 144LL * v28);
    if ( !v31 )
    {
      if ( (_QWORD)v71 != a6 )
        goto LABEL_5;
      goto LABEL_24;
    }
    v32 = 8LL * a6;
    v33 = 8 * v65;
    if ( *v31 == 8 * v65 )
    {
      v53 = v31[1];
      if ( v32 < v53 )
      {
        if ( (v53 & 7) != 0 || 8LL * *(int *)(v62 + 88) < v53 )
        {
          if ( v26 )
          {
            if ( (_QWORD)v71 != a6 )
              goto LABEL_68;
            goto LABEL_24;
          }
          goto LABEL_66;
        }
        v64 = v30;
        tinfo_property = get_tinfo_property();
        v33 = 8 * v65;
        v32 = 8LL * a6;
        v30 = v64;
        if ( a6 >= tinfo_property )
        {
          v32 = v31[1];
          a6 = (v32 + 7) >> 3;
        }
      }
    }
    if ( v26 )
    {
      v29 = a6;
      if ( a6 == (_QWORD)v71 )
        goto LABEL_24;
      if ( v31[1] != v32 )
        goto LABEL_68;
      goto LABEL_84;
    }
    if ( v31[1] < v32 || (v29 = a6, v33 != *v31) )
    {
      v34 = v66;
      v68[0] = v65;
      v67 = v66;
      if ( a6 )
      {
        while ( *(int *)(v62 + 88) - v34 > 0 )
        {
          v60 = v30;
          v35 = *v31;
          if ( (get_tinfo_property() & 0xF) == 0xE )
          {
            v54 = v60;
            v55 = v58 + 1;
            if ( v58 + 1 < (unsigned __int64)v70 )
            {
              while ( 1 )
              {
                if ( (get_tinfo_property() & 0xF) != 0xE )
                {
                  v58 = v55 - 1;
                  v54 = v55 - 1;
                  goto LABEL_75;
                }
                if ( v55 + 1 >= (unsigned __int64)v70 )
                  break;
                ++v55;
              }
              v54 = v55;
              v58 = v55;
            }
LABEL_75:
            v31 = (__int64 *)(v69 + 144 * v54);
          }
          v36 = (unsigned __int64)(*v31 + 7 - v35 + v31[1]) >> 3;
          v37 = *(int *)(v62 + 88) - v34;
          v38 = a6;
          if ( v37 <= a6 )
            v38 = v37;
          v39 = v36;
          if ( v38 <= (unsigned int)v36 )
            v39 = v38;
          v61 = v39;
          if ( (get_tinfo_property() & 0xF) == 0xE
            || v38 < (unsigned int)v36
            || (get_tinfo_property() & 0xF) == 0xB
            || !(unsigned __int8)sub_221590(*(_QWORD *)(a1 + 16), &v67, v68, a2, a3, v61) )
          {
            v40 = *(_QWORD *)(a1 + 16);
            for ( i = v61; i; i -= v44 )
            {
              v42 = round_down_power2();
              v43 = 16;
              if ( v42 <= 0x10 )
                v43 = v42;
              v44 = v43;
              sub_221590(v40, &v67, v68, a2, a3, v43);
            }
          }
          ++v58;
          v19 = v69;
          v30 = v58;
          v45 = (unsigned __int64)(*v31 + v31[1] + 7) >> 3;
          if ( v58 != (_QWORD)v70 )
          {
            v31 = (__int64 *)(v69 + 144LL * v58);
            v46 = (unsigned __int64)*v31 >> 3;
            v47 = (int)v46 - (int)v45;
            v68[0] += v47;
            v34 = v47 + v67;
            v67 += v47;
            v48 = v45 + a6 - v61 - v46;
            a6 = v48;
            if ( v58 != -1 )
            {
              if ( v48 )
                continue;
            }
          }
          goto LABEL_13;
        }
      }
      goto LABEL_12;
    }
LABEL_66:
    if ( v29 == (_QWORD)v71 )
      goto LABEL_24;
    if ( v32 != v31[1] )
    {
LABEL_68:
      v12 = v29;
      v13 = *(_QWORD *)(a1 + 16);
      goto LABEL_6;
    }
LABEL_84:
    v57 = v29;
    if ( !sub_119040(a6) && (get_tinfo_property() & 0x2F) != 0xD )
    {
      v29 = v57;
      goto LABEL_68;
    }
LABEL_24:
    v24 = *(_QWORD *)(a1 + 16);
    v25 = get_tinfo_property();
    if ( v25 )
    {
      v11 = v65;
      v12 = a6;
      v13 = *(_QWORD *)(a1 + 16);
    }
    else
    {
      sub_1C3D00(v68, v24, v10, *(_DWORD *)(v10 + 88));
      v49 = sub_326380(0, 0, 48, v68, 0);
      cleanup_argloc();
      v13 = *(_QWORD *)(a1 + 16);
      if ( !v49 )
      {
        sub_221590(*(_QWORD *)(a1 + 16), &v66, (__int64 *)&v65, a2, a3, a6);
        v50 = v69;
        if ( v69 )
        {
          v51 = v70;
          if ( (_QWORD)v70 )
          {
            do
            {
              v52 = (_QWORD *)(v50 + 144 * v25);
              clear_tinfo_t();
              if ( v52[5] )
              {
                v52[6] = 0;
                qfree();
              }
              if ( v52[2] )
              {
                v52[3] = 0;
                qfree();
              }
              ++v25;
              v50 = v69;
            }
            while ( v51 != v25 );
          }
          *(_QWORD *)&v70 = 0;
          qfree();
        }
        return v74 - __readfsqword(0x28u);
      }
      v11 = v65;
      v12 = a6;
    }
    goto LABEL_6;
  }
  if ( sub_119040(a6) )
    goto LABEL_24;
  v11 = v65;
  v12 = a6;
LABEL_5:
  v13 = *(_QWORD *)(a1 + 16);
LABEL_6:
  v68[0] = v11;
  v14 = *(int *)(v62 + 88);
  v67 = v66;
  v15 = v14 - v66;
  if ( v15 > v12 )
    LODWORD(v15) = v12;
  for ( j = v15; j; j -= v18 )
  {
    v17 = round_down_power2();
    v18 = 16;
    if ( v17 <= 0x10 )
      v18 = v17;
    sub_221590(v13, &v67, v68, a2, a3, v18);
  }
LABEL_12:
  v19 = v69;
LABEL_13:
  if ( v19 )
  {
    v20 = v70;
    if ( (_QWORD)v70 )
    {
      v21 = 0;
      do
      {
        v22 = (_QWORD *)(v19 + 144 * v21);
        clear_tinfo_t();
        if ( v22[5] )
        {
          v22[6] = 0;
          qfree();
        }
        if ( v22[2] )
        {
          v22[3] = 0;
          qfree();
        }
        ++v21;
        v19 = v69;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v70 = 0;
    qfree();
  }
  return v74 - __readfsqword(0x28u);
}

