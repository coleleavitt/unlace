__int64 __fastcall sub_119AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rdi
  __m128i *v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r12
  unsigned int v16; // ecx
  char v17; // cl
  __int64 v18; // rdi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rdi
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // r13d
  __int64 v26; // r14
  unsigned int v27; // r15d
  int v28; // ebx
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned int v32; // eax
  unsigned int v33; // r14d
  unsigned int v34; // ebx
  __int64 v35; // r12
  unsigned int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // r14
  unsigned int v43; // eax
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdi
  unsigned int v47; // eax
  int v48; // eax
  bool v49; // r12
  int v50; // [rsp+8h] [rbp-80h]
  unsigned int v51; // [rsp+8h] [rbp-80h]
  unsigned int v52; // [rsp+8h] [rbp-80h]
  __int64 v53; // [rsp+10h] [rbp-78h]
  signed int v54; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v55; // [rsp+20h] [rbp-68h]
  unsigned int v56; // [rsp+28h] [rbp-60h]
  int v57; // [rsp+2Ch] [rbp-5Ch]
  bool v58; // [rsp+30h] [rbp-58h]
  __int64 v59; // [rsp+38h] [rbp-50h]
  __int64 v60[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a1;
  v60[1] = __readfsqword(0x28u);
  v50 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
  if ( v4 )
    xmmword_241500(v4);
  v5 = *(_QWORD *)(v3 + 40);
  if ( !*(_BYTE *)(v5 + 17) )
  {
    v6 = *(__m128i **)v3;
    if ( *(_QWORD *)v3 )
      goto LABEL_5;
LABEL_40:
    v8 = *(_DWORD *)(v3 + 48);
    if ( v8 - 5 > 1 && v8 )
      goto LABEL_27;
    v9 = *(_QWORD *)(v3 + 40);
    v10 = *(_QWORD *)(v3 + 8);
    a2 = *(_QWORD *)(v9 + 8);
    v11 = *(_QWORD *)(v10 + 8);
    v12 = *(_QWORD *)a2;
    v13 = *(_QWORD *)v11;
    goto LABEL_10;
  }
  sub_CC740(v5);
  v6 = *(__m128i **)v3;
  if ( !*(_QWORD *)v3 )
    goto LABEL_40;
LABEL_5:
  v7 = v6[1].m128i_i64[1];
  if ( !v7 )
  {
    v8 = *(_DWORD *)(v3 + 48);
    if ( v8 - 5 > 1 && v8 )
      goto LABEL_27;
    v9 = *(_QWORD *)(v3 + 40);
    v10 = *(_QWORD *)(v3 + 8);
    a2 = *(_QWORD *)(v9 + 8);
    v11 = *(_QWORD *)(v10 + 8);
    v12 = *(_QWORD *)a2;
    v13 = *(_QWORD *)v11;
LABEL_9:
    if ( *(_BYTE *)(a2 + 36) == 2 )
    {
      v59 = v13;
      v56 = 0;
      v8 = 5;
      goto LABEL_46;
    }
LABEL_10:
    if ( v9 && *(_BYTE *)(v9 + 16) )
    {
      v56 = *(_DWORD *)(v3 + 20);
      if ( v56 )
      {
        v14 = v13;
        v56 = 0;
LABEL_14:
        a3 = *(unsigned __int8 *)(v14 + 9);
        v15 = *(int *)(a2 + 64);
        v54 = *(_DWORD *)(a2 + 52);
        v16 = v54;
        v57 = *(_DWORD *)(v11 + 52);
        v58 = (_BYTE)a3 == 5;
        if ( (_BYTE)a3 == 5 )
        {
          if ( *(_DWORD *)(v11 + 52) != *(_DWORD *)(a2 + 52) )
          {
            a3 = v56;
            v8 = 8;
            if ( v56 )
            {
LABEL_17:
              v17 = *(_BYTE *)(v9 + 16);
              if ( v17 == 2 )
              {
                a2 = 0;
                sub_119750(v9, nullptr);
                v9 = *(_QWORD *)(v3 + 40);
                v17 = *(_BYTE *)(v9 + 16);
              }
              if ( v17 )
              {
                a2 = 0;
                sub_10FAC0(v9, 0, a3);
              }
              goto LABEL_21;
            }
LABEL_23:
            *(_DWORD *)(v3 + 48) = v8;
            goto LABEL_24;
          }
          a3 = *(unsigned int *)(v3 + 24);
          v25 = *(_DWORD *)(v3 + 24);
          if ( !v50 || (unsigned int)v15 < (unsigned int)a3 )
          {
            v59 = v13;
            v58 = 1;
LABEL_64:
            *(_DWORD *)(v3 + 56) = v15;
            *(_DWORD *)(v3 + 52) = v15 + 1 - a3;
            if ( (unsigned int)v15 >= (unsigned int)a3 )
            {
              if ( !*(_DWORD *)(v3 + 60) )
              {
                v30 = **(_QWORD **)(*(_QWORD *)(v3 + 40) + 8LL);
                a3 = *(_QWORD *)(v30 + 112);
                *(_QWORD *)(v3 + 64) = a3;
                *(_QWORD *)(v30 + 112) = v3;
                *(_DWORD *)(v3 + 60) = 1;
              }
              v8 = 0;
              if ( !v56 )
                goto LABEL_23;
              goto LABEL_68;
            }
LABEL_71:
            v31 = *(_QWORD *)(v3 + 8);
            if ( !(_DWORD)v15 )
            {
              if ( *(_BYTE *)(v31 + 17) )
                sub_CC740(*(_QWORD *)(v3 + 8));
              *(_DWORD *)(*(_QWORD *)(v31 + 8) + 64LL) = 0;
              v45 = *(_QWORD *)(v31 + 8);
              if ( *(_DWORD *)(v45 + 64) )
              {
                if ( *(_BYTE *)(v31 + 17) )
                {
                  v20 = (*(_DWORD *)(v31 + 20))-- == 1;
                  if ( v20 )
                    sub_CC7D0(v31, a2, a3);
                }
              }
              else
              {
                v47 = sub_1104B0(v45, a2);
                v8 = v47;
                if ( *(_BYTE *)(v31 + 17) )
                {
                  v48 = *(_DWORD *)(v31 + 20) - 1;
                  *(_DWORD *)(v31 + 20) = v48;
                  v49 = v8 == 101 || v8 == 0;
                  if ( !v48 )
                    sub_CC7D0(v31, a2, a3);
                }
                else
                {
                  v49 = v47 == 101 || v47 == 0;
                }
                if ( !v49 )
                  goto LABEL_84;
              }
              v31 = *(_QWORD *)(v3 + 8);
              v15 = 1;
            }
            a2 = 1;
            v8 = sub_110EB0(v31, 1, *(_DWORD *)(v3 + 16) + 1);
            if ( v8 )
              goto LABEL_84;
            if ( *(_QWORD *)v3 )
              sub_D8BB0(*(__m128i **)v3, 1);
            if ( v58 )
            {
              a2 = 2;
              v8 = sub_110F40(*(_QWORD *)(v3 + 8), 2);
              if ( v8 )
                goto LABEL_84;
            }
            if ( v54 >= v57 )
            {
              a2 = 0;
              *(_DWORD *)(v59 + 32) = v54 / v57 * v15;
              v8 = sub_119290(v59, nullptr, 0);
            }
            else
            {
              v32 = (unsigned int)dword_241470 / *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL) + 52LL);
              if ( v32 + 1 != ((int)v15 + v57 / v54 - 1) / (v57 / v54) )
                v32 = ((int)v15 + v57 / v54 - 1) / (v57 / v54);
              v33 = v32;
              v34 = *(_DWORD *)(v59 + 32);
              v53 = v54 * v15;
              v35 = *(_QWORD *)(v59 + 72);
              while ( v34 >= v33 )
              {
                v36 = (unsigned int)dword_241470 / *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL) + 52LL);
                v37 = v36 + 1;
                v38 = v36 + 2;
                if ( v37 == v33 )
                {
                  do
                  {
                    if ( v34 < v38 )
                      goto LABEL_89;
                  }
                  while ( v33 == v38 );
                  v33 = v38;
                }
                a2 = v33;
                v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(v59 + 272))(v59, v33, v60, 0);
                if ( !v39 )
                {
                  v39 = sub_10D290(v60[0], v33);
                  if ( v60[0] )
                  {
                    v52 = v39;
                    sub_C36A0(v60[0]);
                    v39 = v52;
                  }
                  ++v33;
                  if ( !v39 )
                    continue;
                }
                v8 = v39;
                goto LABEL_84;
              }
LABEL_89:
              a2 = 0;
              v8 = sub_119290(v59, nullptr, 1);
              a3 = dword_241470 + v57;
              v40 = a3;
              if ( a3 > v53 )
                v40 = v53;
              v41 = v54 + dword_241470;
              if ( v40 > v41 && !v8 )
              {
                v42 = v40;
                while ( 1 )
                {
                  v60[0] = 0;
                  a2 = (unsigned int)(v41 / v54) + 1;
                  v43 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(v12 + 272))(v12, a2, v60, 0);
                  if ( v43 )
                  {
                    v44 = v60[0];
                    if ( !v60[0] )
                    {
                      v8 = v43;
                      goto LABEL_84;
                    }
                  }
                  else
                  {
                    a2 = *(_QWORD *)(v60[0] + 8);
                    v43 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v35 + 24LL))(
                            v35,
                            a2,
                            (unsigned int)v54,
                            v41);
                    v44 = v60[0];
                    if ( !v60[0] )
                      goto LABEL_96;
                  }
                  v51 = v43;
                  sub_C36A0(v44);
                  v43 = v51;
LABEL_96:
                  v41 += v54;
                  if ( v43 || v42 <= v41 )
                  {
                    v8 = v43;
                    break;
                  }
                }
              }
              if ( v8 )
                goto LABEL_84;
              a2 = (__int64)v60;
              v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 48LL))(v35, v60);
              if ( v8 )
                goto LABEL_84;
              a2 = v53;
              if ( v53 < v60[0] )
              {
                v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
                if ( v8 )
                  goto LABEL_84;
              }
              a2 = 0;
              v8 = sub_CC330(v59, 0);
            }
            if ( !v8 )
            {
              v46 = *(_QWORD *)(v3 + 8);
              if ( !*(_BYTE *)(v46 + 16) || (a2 = 0, (v8 = sub_10FAC0(v46, 0, a3)) == 0) )
              {
                a2 = v56;
                v8 = 101;
                if ( !v56 )
                  goto LABEL_23;
LABEL_68:
                v9 = *(_QWORD *)(v3 + 40);
                goto LABEL_17;
              }
            }
LABEL_84:
            if ( !v56 )
            {
LABEL_21:
              if ( v8 == 3082 )
                v8 = 7;
              goto LABEL_23;
            }
            goto LABEL_68;
          }
          v59 = v13;
          v58 = 1;
          goto LABEL_50;
        }
        v59 = v13;
        v8 = 0;
LABEL_47:
        if ( !v50 )
          goto LABEL_62;
        v25 = *(_DWORD *)(v3 + 24);
        if ( (unsigned int)v15 < v25 )
          goto LABEL_62;
        if ( v8 )
          goto LABEL_70;
LABEL_50:
        a2 = (__int64)v60;
        v26 = v3;
        v27 = v25;
        v28 = 0;
        while ( 1 )
        {
          if ( dword_241470 / v16 + 1 == v27 )
          {
            v29 = 0;
          }
          else
          {
            a2 = v27;
            v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(v12 + 272))(v12, v27, v60, 2);
            if ( !v29 )
            {
              a2 = v26 + 40;
              v29 = sub_10D2F0(v26 + 8, v26 + 40, v27, *(_QWORD *)(v60[0] + 8), 0);
              if ( v60[0] )
              {
                v55 = v29;
                sub_C36A0(v60[0]);
                v29 = v55;
              }
            }
          }
          a3 = *(unsigned int *)(v26 + 24);
          ++v28;
          v27 = a3 + 1;
          *(_DWORD *)(v26 + 24) = a3 + 1;
          if ( v50 <= v28 && v50 >= 0 )
            break;
          if ( v27 > (unsigned int)v15 )
            break;
          if ( v29 )
          {
            v3 = v26;
            v8 = v29;
            goto LABEL_70;
          }
          v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 40) + 8LL) + 52LL);
        }
        v3 = v26;
        v8 = v29;
LABEL_62:
        if ( !v8 )
        {
          a3 = *(unsigned int *)(v3 + 24);
          goto LABEL_64;
        }
LABEL_70:
        if ( v8 != 101 )
          goto LABEL_84;
        goto LABEL_71;
      }
    }
    else
    {
      v8 = sub_110580(v9, 0, 0);
      v23 = *(_DWORD *)(v3 + 20);
      v10 = *(_QWORD *)(v3 + 8);
      if ( v8 | v23 )
      {
        if ( v8 )
        {
          v11 = *(_QWORD *)(v10 + 8);
          v59 = v13;
          v56 = 1;
          a2 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL);
          v13 = *(_QWORD *)v11;
LABEL_46:
          v16 = *(_DWORD *)(a2 + 52);
          v15 = *(int *)(a2 + 64);
          v54 = v16;
          v57 = *(_DWORD *)(v11 + 52);
          v58 = *(_BYTE *)(v13 + 9) == 5;
          goto LABEL_47;
        }
        v56 = 1;
        goto LABEL_36;
      }
      v56 = 1;
      a2 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL);
    }
    v8 = sub_D3060(v10, *(unsigned int *)(a2 + 52), 0, 0);
    if ( v8 == 7 )
    {
LABEL_60:
      a2 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL);
      v11 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL);
      v59 = v13;
      v13 = *(_QWORD *)v11;
      goto LABEL_46;
    }
    v23 = *(_DWORD *)(v3 + 20);
    v10 = *(_QWORD *)(v3 + 8);
LABEL_36:
    if ( v23 )
    {
      v9 = *(_QWORD *)(v3 + 40);
      v11 = *(_QWORD *)(v10 + 8);
      a2 = *(_QWORD *)(v9 + 8);
      v14 = *(_QWORD *)v11;
      goto LABEL_14;
    }
    v8 = sub_110580(v10, 2, v3 + 16);
    if ( !v8 )
    {
      v24 = *(_QWORD *)(v3 + 8);
      *(_DWORD *)(v3 + 20) = 1;
      v9 = *(_QWORD *)(v3 + 40);
      v11 = *(_QWORD *)(v24 + 8);
      a2 = *(_QWORD *)(v9 + 8);
      v14 = *(_QWORD *)v11;
      goto LABEL_14;
    }
    goto LABEL_60;
  }
  xmmword_241500(v7);
  v8 = *(_DWORD *)(v3 + 48);
  if ( v8 - 5 <= 1 || !v8 )
  {
    v9 = *(_QWORD *)(v3 + 40);
    v10 = *(_QWORD *)(v3 + 8);
    a2 = *(_QWORD *)(v9 + 8);
    v11 = *(_QWORD *)(v10 + 8);
    v12 = *(_QWORD *)a2;
    v13 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v3 )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_24:
  if ( *(_QWORD *)v3 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)v3 + 24LL);
    if ( v18 )
      xmmword_241510(v18, a2, a3);
  }
LABEL_27:
  v19 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)(v19 + 17) )
  {
    v20 = (*(_DWORD *)(v19 + 20))-- == 1;
    if ( v20 )
      sub_CC7D0(v19, a2, a3);
  }
  v21 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 24LL);
  if ( v21 )
    xmmword_241510(v21, a2, a3);
  return v8;
}
