__int64 __fastcall sub_D84C0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  int v9; // ebp
  _DWORD *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // kr00_8
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // ebp
  __int64 v18; // rdi
  _BOOL4 v20; // eax
  int v21; // ecx
  __int64 *v22; // rax
  __int64 v23; // r14
  int v24; // r15d
  int v25; // r15d
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  int v29; // ecx
  int v30; // ebp
  __int64 v31; // r14
  __int64 v32; // rdi
  int v33; // edx
  int v34; // eax
  int v35; // edx
  __int64 v36; // rdi
  int v37; // eax
  int v38; // edx
  __int64 v39; // rdi
  int v40; // eax
  int v41; // edx
  __int64 v42; // rdi
  int v43; // eax
  _QWORD *i; // r15
  _QWORD *j; // r14
  int v46; // eax
  _QWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbp
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // [rsp+8h] [rbp-50h]
  int v54; // [rsp+Ch] [rbp-4Ch]
  int v55; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v56; // [rsp+18h] [rbp-40h]

  v6 = a5;
  v9 = a2;
  v10 = (_DWORD *)a3;
  v11 = *(_QWORD *)(a1 + 24);
  v56 = __readfsqword(0x28u);
  if ( v11 )
  {
    xmmword_241500(v11);
    v13 = v12;
    a3 = (unsigned int)a2;
    switch ( (int)a2 )
    {
      case 0:
        goto LABEL_53;
      case 1:
      case 11:
        goto LABEL_17;
      case 2:
        goto LABEL_28;
      case 3:
        goto LABEL_60;
      case 4:
      case 5:
      case 6:
        goto LABEL_64;
      case 7:
      case 8:
      case 9:
        goto LABEL_4;
      case 10:
        goto LABEL_14;
      case 12:
        goto LABEL_3;
      default:
        a3 = v13;
        v17 = 1;
        break;
    }
  }
  else
  {
    switch ( (int)a2 )
    {
      case 0:
LABEL_53:
        a2 = (__int64)a4;
        *v10 = sub_C2020(a1, a4);
        if ( !v6 )
          goto LABEL_56;
        v47 = *(_QWORD **)(a1 + 448);
        if ( v47 )
        {
          while ( *v47 )
            v47 = (_QWORD *)*v47;
          *v47 = *(_QWORD *)(a1 + 440);
          v48 = *(_QWORD *)(a1 + 448);
          *(_QWORD *)(a1 + 448) = 0;
          *(_QWORD *)(a1 + 440) = v48;
        }
        a3 = *(_QWORD *)(a1 + 464);
        if ( !a3 )
          goto LABEL_56;
        while ( *(_QWORD *)a3 )
          a3 = *(_QWORD *)a3;
        v17 = 0;
        *(_QWORD *)a3 = *(_QWORD *)(a1 + 456);
        v52 = *(_QWORD *)(a1 + 464);
        *(_QWORD *)(a1 + 464) = 0;
        *(_QWORD *)(a1 + 456) = v52;
        goto LABEL_11;
      case 1:
      case 11:
LABEL_17:
        if ( *(_BYTE *)(a1 + 111) )
        {
          if ( *(int *)(a1 + 40) <= 0 )
          {
            v54 = 0;
            goto LABEL_27;
          }
        }
        else
        {
          sub_CC760(a1);
          a2 = *(unsigned int *)(a1 + 40);
          if ( (int)a2 <= 0 )
          {
            v54 = 0;
            goto LABEL_25;
          }
        }
        v21 = 0;
        v54 = 0;
        do
        {
          a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL * v21 + 8);
          if ( a2 )
          {
            v22 = *(__int64 **)(a2 + 8);
            v53 = v21;
            v23 = *v22;
            v24 = *(_DWORD *)(*v22 + 200) + *(unsigned __int16 *)(*v22 + 176);
            v25 = xmmword_241558(*(_QWORD *)(*(_QWORD *)(*v22 + 288) + 64LL)) * (v24 + 112);
            v26 = ((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v23);
            v21 = v53;
            v27 = v25 + *(_DWORD *)(v23 + 200) + v26;
            if ( v9 == 11 )
            {
              a2 = *(_QWORD *)(a2 + 8);
              a3 = (unsigned int)(v27 >> 31);
              LODWORD(a3) = v27 % *(_DWORD *)(a2 + 104);
              v27 /= *(int *)(a2 + 104);
            }
            v54 += v27;
          }
          ++v21;
        }
        while ( *(_DWORD *)(a1 + 40) > v21 );
LABEL_25:
        if ( !*(_BYTE *)(a1 + 111) )
          sub_CC7E0(a1, a2, a3);
LABEL_27:
        v17 = 0;
        *v10 = v54;
        *a4 = 0;
        goto LABEL_11;
      case 2:
LABEL_28:
        v28 = *(_BYTE *)(a1 + 111) == 0;
        v55 = 0;
        if ( v28 )
          sub_CC760(a1);
        v29 = *(_DWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 760) = &v55;
        if ( v29 <= 0 )
          goto LABEL_50;
        v30 = 0;
        break;
      case 3:
LABEL_60:
        v49 = *(_QWORD *)(a1 + 8);
        v55 = 0;
        *(_QWORD *)(a1 + 760) = &v55;
        if ( v49 )
        {
          do
          {
            sub_D0280(v49, a2, a3, (__int64)a4, a5, a6);
            v49 = *(_QWORD *)(v49 + 16);
          }
          while ( v49 );
          v50 = v55;
        }
        else
        {
          v50 = 0;
        }
        *(_QWORD *)(a1 + 760) = 0;
        v17 = 0;
        *a4 = 0;
        *v10 = v50;
        goto LABEL_11;
      case 4:
      case 5:
      case 6:
LABEL_64:
        *v10 = 0;
        v51 = a1 + 4LL * ((int)a2 - 4);
        a3 = *(unsigned int *)(v51 + 424);
        *a4 = a3;
        if ( v6 )
        {
          *(_DWORD *)(v51 + 424) = 0;
          v17 = 0;
        }
        else
        {
LABEL_56:
          v17 = 0;
        }
        goto LABEL_11;
      case 7:
      case 8:
      case 9:
        goto LABEL_4;
      case 10:
LABEL_14:
        *a4 = 0;
        v20 = 1;
        if ( *(__int64 *)(a1 + 752) <= 0 )
          v20 = *(_QWORD *)(a1 + 744) > 0LL;
        *v10 = v20;
        v17 = 0;
        goto LABEL_11;
      case 12:
LABEL_3:
        v9 = 10;
LABEL_4:
        a3 = *(unsigned int *)(a1 + 40);
        v14 = 0;
        if ( (int)a3 > 0 )
        {
          LODWORD(a3) = 0;
          a2 = 4LL * (v9 - 7);
          do
          {
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL * (int)a3 + 8);
            if ( v15 )
            {
              v16 = a2 + **(_QWORD **)(v15 + 8);
              v14 += *(_DWORD *)(v16 + 248);
              if ( v6 )
                *(_DWORD *)(v16 + 248) = 0;
            }
            a3 = (unsigned int)(a3 + 1);
          }
          while ( *(_DWORD *)(a1 + 40) > (int)a3 );
        }
        *a4 = 0;
        v17 = 0;
        *v10 = v14;
        goto LABEL_11;
      default:
        return 1;
    }
    do
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL * v30 + 24);
      if ( v31 )
      {
        v55 += (*(_DWORD *)(v31 + 84) + *(_DWORD *)(v31 + 36) + *(_DWORD *)(v31 + 12) + *(_DWORD *)(v31 + 60))
             * xmmword_2414C0(32);
        v32 = *(_QWORD *)(v31 + 24);
        v33 = v55;
        if ( v32 )
        {
          v34 = ((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v32);
          v33 = v55;
        }
        else
        {
          v34 = 0;
        }
        v35 = v34 + v33;
        v55 = v35;
        v36 = *(_QWORD *)(v31 + 72);
        if ( v36 )
        {
          v37 = ((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v36);
          v35 = v55;
        }
        else
        {
          v37 = 0;
        }
        v38 = v37 + v35;
        v55 = v38;
        v39 = *(_QWORD *)(v31 + 48);
        if ( v39 )
        {
          v40 = ((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v39);
          v38 = v55;
        }
        else
        {
          v40 = 0;
        }
        v41 = v40 + v38;
        v55 = v41;
        v42 = *(_QWORD *)(v31 + 96);
        if ( v42 )
        {
          v43 = ((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v42);
          v41 = v55;
        }
        else
        {
          v43 = 0;
        }
        a3 = (unsigned int)(v43 + v41);
        v55 = a3;
        for ( i = *(_QWORD **)(v31 + 64); i; i = (_QWORD *)*i )
        {
          while ( 1 )
          {
            a2 = i[2];
            if ( a2 )
            {
              if ( !*(_BYTE *)(a2 + 18) )
                break;
            }
            i = (_QWORD *)*i;
            if ( !i )
              goto LABEL_47;
          }
          sub_D8450(a1, (_QWORD *)a2);
        }
LABEL_47:
        for ( j = *(_QWORD **)(v31 + 16); j; j = (_QWORD *)*j )
        {
          a2 = j[2];
          sub_D8230(a1, (_QWORD *)a2);
        }
      }
      ++v30;
    }
    while ( *(_DWORD *)(a1 + 40) > v30 );
LABEL_50:
    v28 = *(_BYTE *)(a1 + 111) == 0;
    *(_QWORD *)(a1 + 760) = 0;
    if ( v28 )
      sub_CC7E0(a1, a2, a3);
    v46 = v55;
    *a4 = 0;
    v17 = 0;
    *v10 = v46;
  }
LABEL_11:
  v18 = *(_QWORD *)(a1 + 24);
  if ( v18 )
    xmmword_241510(v18, a2, a3);
  return v17;
}
